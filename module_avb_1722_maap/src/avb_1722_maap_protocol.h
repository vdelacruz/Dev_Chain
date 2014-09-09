#ifndef __AVB_1722_MAAP_PROTOCOL_H__
#define __AVB_1722_MAAP_PROTOCOL_H__

// Note: Changing these will have unforseen consequences
// The implementation is now tailored to the size of the official MAAP pool of addresses
#define MAAP_ALLOCATION_POOL_BASE_ADDR  {0x91, 0xE0, 0xF0, 0x00, 0x00, 0x00}
#define MAAP_ALLOCATION_POOL_SIZE 0xFE00 // Note to self: upper address is FD:FF

#define MAAP_PROTOCOL_DEST_ADDR {0x91, 0xE0, 0xF0, 0x00, 0xFF, 0x00}

#define MAAP_PROBE_RETRANSMITS 3

#define MAAP_PROBE_INTERVAL_BASE_MS 500
#define MAAP_PROBE_INTERVAL_BASE_CS MAAP_PROBE_INTERVAL_BASE_MS/10
#define MAAP_PROBE_INTERVAL_VARIATION_MS 100

#define MAAP_ANNOUNCE_INTERVAL_BASE_MS 3000
#define MAAP_ANNOUNCE_INTERVAL_BASE_CS MAAP_ANNOUNCE_INTERVAL_BASE_MS/10
#define MAAP_ANNOUNCE_INTERVAL_MULTIPLIER 10
#define MAAP_ANNOUNCE_INTERVAL_VARIATION_MS 200
#define MAAP_ANNOUNCE_INTERVAL_VARIATION_CS MAAP_ANNOUNCE_INTERVAL_VARIATION_MS/10

#define MAAP_DATA_LENGTH 16

typedef struct maap_packet_t {
  unsigned char cd_subtype;
  unsigned char sv_avb_version_msg_type;
  unsigned char maap_version_data_length_hi;
  unsigned char data_length_lo;
  unsigned char streamID[8];
  unsigned char request_start_address[6];
  unsigned char requested_count[2];
  unsigned char conflict_start_address[6];
  unsigned char conflict_count[2];
} maap_packet_t;

enum maap_message_type_t {
  MAAP_PROBE=1,
  MAAP_DEFEND=2,
  MAAP_ANNOUNCE=3
};

#define DEFAULT_MAAP_CD_FLAG (1)
#define DEFAULT_MAAP_SUBTYPE (0x7e)
#define DEFAULT_MAAP_AVB_VERSION (0x0)
#define DEFAULT_MAAP_VERSION (0x1)

#define GET_MAAP_CD_FLAG(pkt) (pkt->cd_subtype >> 7)
#define GET_MAAP_SUBTYPE(pkt) (pkt->cd_subtype & 0x7f)
#define GET_MAAP_SV(pkt) (pkt->sv_avb_version_msg_type >> 7)
#define GET_MAAP_AVB_VERSION(pkt) ((pkt->sv_avb_version_msg_type & 0x70) >> 4)
#define GET_MAAP_MSG_TYPE(pkt) (pkt->sv_avb_version_msg_type & 0x0f)
#define GET_MAAP_VERSION(pkt) (pkt->maap_version_data_length_hi & 0xf8 >> 3)
#define GET_MAAP_DATALENGTH(pkt) \
   (((pkt->maap_version_data_length_hi & 0x7) << 8) + \
          (pkt->data_length_lo))

#define GET_MAAP_REQUESTED_COUNT(pkt) ((pkt->requested_count[1] + (pkt->requested_count[0]<<8)))
#define GET_MAAP_CONFLICT_COUNT(pkt) ((pkt->conflict_count[1] + (pkt->conflict_count[0]<<8)))

#define SET_BITS(p, lo, hi, val) \
  do { \
    *(p) = (*(p) & (~(((1<<(hi-lo+1))-1)<<lo))) | ((val) << lo);        \
  } while(0)

#define SET_MAAP_CD_FLAG(pkt, val) SET_BITS(&pkt->cd_subtype, 7, 7, val)
#define SET_MAAP_SUBTYPE(pkt, val) SET_BITS(&pkt->cd_subtype, 0, 6, val)
#define SET_MAAP_SV(pkt, val)                               \
    SET_BITS(&pkt->sv_avb_version_msg_type, 7, 7, val)

#define SET_MAAP_AVB_VERSION(pkt, val)                      \
    SET_BITS(&pkt->sv_avb_version_msg_type,4,6,val)

#define SET_MAAP_MSG_TYPE(pkt, val)                         \
    SET_BITS(&pkt->sv_avb_version_msg_type,0,3, val)

#define SET_MAAP_VERSION(pkt, val)                                  \
    SET_BITS(&pkt->maap_version_data_length_hi, 3, 7, val)

#define SET_MAAP_DATALENGTH(pkt, val)               \
  do  \
   { \
     SET_BITS(&pkt->maap_version_data_length_hi, 0, 2, (val) >> 8); \
     SET_BITS(&pkt->data_length_lo, 0, 7, (val) & 0xff); \
   }while(0)


#define SET_MAAP_REQUESTED_COUNT(pkt, val) \
   do \
     { \
      pkt->requested_count[0] = (val >> 8); \
      pkt->requested_count[1] = val & 0xff; \
     }  while(0)

#define SET_MAAP_CONFLICT_COUNT(pkt, val) \
   do \
     { \
      pkt->conflict_count[0] = (val >> 8); \
      pkt->conflict_count[1] = val & 0xff; \
     }  while(0)






#endif // __AVB_1722_MAAP_PROTOCOL_H__
