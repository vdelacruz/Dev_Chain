#ifndef AVB_1722_1_APP_HOOKS_H_
#define AVB_1722_1_APP_HOOKS_H_

#include <xccompat.h>
#include "avb_api.h"
#include "avb_1722_1_common.h"
#include "avb_1722_1_adp.h"
#include "avb_1722_1_acmp_pdu.h"

#ifdef __XC__
/** A new AVDECC entity has advertised itself as available. It may be an entity starting up or
 *  a previously seen entity that had timed out.
 *
 * \param i_avb             client interface of type ``avb_interface`` into avb_manager()
 * \param my_guid   The GUID of this entity
 * \param entity    The information advertised by the remote entity
 * \param c_tx      A transmit channel end to the Ethernet server
 **/
void avb_entity_on_new_entity_available(client interface avb_interface i_avb, const_guid_ref_t my_guid, avb_1722_1_entity_record *entity, chanend c_tx);

void avb_entity_on_new_entity_available_default(client interface avb_interface i_avb, const_guid_ref_t my_guid, avb_1722_1_entity_record *entity, chanend c_tx);

/** A Controller has indicated that a Listener is connecting to this Talker stream source
 *
 * \param i_avb             client interface of type ``avb_interface`` into avb_manager()
 * \param source_num        The local id of the Talker stream source
 * \param listener_guid     The GUID of the Listener entity that is connecting
 **/
void avb_talker_on_listener_connect(client interface avb_interface i_avb, int source_num, const_guid_ref_t listener_guid);

void avb_talker_on_listener_connect_default(client interface avb_interface i_avb, int source_num, const_guid_ref_t listener_guid);

/** A Controller has indicated that a Listener is disconnecting from this Talker stream source
 *
 * \param i_avb             client interface of type ``avb_interface`` into avb_manager()
 * \param source_num        The local id of the Talker stream source
 * \param listener_guid     The GUID of the Listener entity that is disconnecting
 * \param connection_count  The number of connections a Talker thinks it has on it’s stream source,
                            i.e. the number of connect TX stream commands it has received less the number of
                            disconnect TX stream commands it has received. This number may not be accurate since an AVDECC Entity may
                            not have sent a disconnect command if the cable was disconnected or the AVDECC Entity abruptly powered down.
 **/
void avb_talker_on_listener_disconnect(client interface avb_interface i_avb, int source_num, const_guid_ref_t listener_guid, int connection_count);

void avb_talker_on_listener_disconnect_default(client interface avb_interface i_avb, int source_num, const_guid_ref_t listener_guid, int connection_count);

/** A Controller has indicated that a Listener has returned an error code for a connection attempt.
 *
 * \param i_avb             client interface of type ``avb_interface`` into avb_manager()
 * \param my_guid           The GUID of this entity
 * \param source_num        The local id of the Talker stream source
 * \param listener_guid     The GUID of the Listener entity that is connecting
 * \param status            The status returned by the Listener
 * \param c_tx              A transmit channel end to the Ethernet server
 **/
void avb_talker_on_listener_connect_failed(client interface avb_interface i_avb, const_guid_ref_t my_guid, int source_num,
        const_guid_ref_t listener_guid, avb_1722_1_acmp_status_t status, chanend c_tx);

void avb_talker_on_listener_connect_failed_default(client interface avb_interface i_avb, const_guid_ref_t my_guid, int source_num,
        const_guid_ref_t listener_guid, avb_1722_1_acmp_status_t status, chanend c_tx);

/** A Controller has indicated to connect this Listener sink to a Talker stream
 *
 * \param i_avb             client interface of type ``avb_interface`` into avb_manager()
 * \param sink_num          The local id of the Listener stream sink
 * \param talker_guid       The GUID of the Talker entity that is connecting
 * \param dest_addr         The destination MAC address of the Talker stream
 * \param stream_id         The 64 bit Stream ID of the Talker stream
 * \param my_guid           The GUID of this entity
 **/
avb_1722_1_acmp_status_t avb_listener_on_talker_connect(client interface avb_interface i_avb,
                                                        int sink_num, const_guid_ref_t talker_guid,
                                                        unsigned char dest_addr[6],
                                                        unsigned int stream_id[2],
                                                        const_guid_ref_t my_guid);

avb_1722_1_acmp_status_t avb_listener_on_talker_connect_default(client interface avb_interface i_avb,
                                                                int sink_num, const_guid_ref_t talker_guid,
                                                                unsigned char dest_addr[6],
                                                                unsigned int stream_id[2],
                                                                const_guid_ref_t my_guid);

/** A Controller has indicated to disconnect this Listener sink from a Talker stream
 *
 * \param i_avb             client interface of type ``avb_interface`` into avb_manager()
 * \param sink_num          The local id of the Listener stream sink
 * \param talker_guid       The GUID of the Talker entity that is disconnecting
 * \param dest_addr         The destination MAC address of the Talker stream
 * \param stream_id         The 64 bit Stream ID of the Talker stream
 * \param my_guid           The GUID of this entity
 **/
void avb_listener_on_talker_disconnect(client interface avb_interface i_avb,
                                       int sink_num, const_guid_ref_t talker_guid,
                                       unsigned char dest_addr[6],
                                       unsigned int stream_id[2],
                                       const_guid_ref_t my_guid);

void avb_listener_on_talker_disconnect_default(client interface avb_interface i_avb,
                                               int sink_num, const_guid_ref_t talker_guid,
                                               unsigned char dest_addr[6],
                                               unsigned int stream_id[2],
                                               const_guid_ref_t my_guid);


#endif

#endif

