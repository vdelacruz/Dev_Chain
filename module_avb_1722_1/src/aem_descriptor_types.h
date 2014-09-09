/* Descriptor Types */

#define AEM_ENTITY_TYPE                 0x0000
#define AEM_CONFIGURATION_TYPE          0x0001
#define AEM_AUDIO_UNIT_TYPE             0x0002
#define AEM_VIDEO_UNIT_TYPE             0x0003
#define AEM_SENDOR_UNIT_TYPE            0x0004
#define AEM_STREAM_INPUT_TYPE           0x0005
#define AEM_STREAM_OUTPUT_TYPE          0x0006
#define AEM_JACK_INPUT_TYPE             0x0007
#define AEM_JACK_OUTPUT_TYPE            0x0008
#define AEM_AVB_INTERFACE_TYPE          0x0009
#define AEM_CLOCK_SOURCE_TYPE           0x000a
#define AEM_MEMORY_OBJECT_TYPE          0x000b
#define AEM_LOCALE_TYPE                 0x000c
#define AEM_STRINGS_TYPE                0x000d
#define AEM_STREAM_PORT_INPUT_TYPE      0x000e
#define AEM_STREAM_PORT_OUTPUT_TYPE     0x000f
#define AEM_EXTERNAL_PORT_INPUT_TYPE    0x0010
#define AEM_EXTERNAL_PORT_OUTPUT_TYPE   0x0011
#define AEM_INTERNAL_PORT_INPUT_TYPE    0x0012
#define AEM_INTERNAL_PORT_OUTPUT_TYPE   0x0013
#define AEM_AUDIO_CLUSTER_TYPE          0x0014
#define AEM_VIDEO_CLUSTER_TYPE          0x0015
#define AEM_SENSOR_CLUSTER_TYPE         0x0016
#define AEM_AUDIO_MAP_TYPE              0x0017
#define AEM_VIDEO_MAP_TYPE              0x0018
#define AEM_SENSOR_MAP_TYPE             0x0019
#define AEM_CONTROL_TYPE                0x001a
#define AEM_SIGNAL_SELECTOR_TYPE        0x001b
#define AEM_MIXER_TYPE                  0x001c
#define AEM_MATRIX_TYPE                 0x001d
#define AEM_MATRIX_SIGNAL_TYPE          0x001e
#define AEM_SIGNAL_SPLITTER_TYPE		0x001f
#define AEM_SIGNAL_COMBINER_TYPE		0x0020
#define AEM_SIGNAL_DEMULTIPLEXER_TYPE	0x0021
#define AEM_SIGNAL_MULTIPLEXER_TYPE		0x0022
#define AEM_SIGNAL_TRANSCODER_TYPE		0x0023
#define AEM_CLOCK_DOMAIN_TYPE			0x0024
#define AEM_CONTROL_BLOCK_TYPE			0x0025
#define AEM_INVALID_TYPE                0xffff

/* 7.2.8.1 Port Flags */
#define AEM_AUDIO_PORT_FLAG_CLOCK_SYNC_SOURCE       0x00000001
#define AEM_AUDIO_PORT_FLAG_ASYNC_SAMPLE_RATE_CONV  0x00000002
#define AEM_AUDIO_PORT_FLAG_SYNC_SAMPLE_RATE_CONV   0x00000004

/*** Control Descriptors *******************************/

/* 7.2.17.1 control_value_type */
#define AEM_CONTROL_VALUE_TYPE_READ_ONLY_FLAG     0x4000
#define AEM_CONTROL_VALUE_TYPE_UNKNOWN_FLAG       0x2000

/* 7.2.17.1.3 value_type */
#define AEM_CONTROL_LINEAR_INT8         0x0000
#define AEM_CONTROL_LINEAR_UINT8        0x0001
#define AEM_CONTROL_LINEAR_INT16        0x0002
#define AEM_CONTROL_LINEAR_UINT16       0x0003
#define AEM_CONTROL_LINEAR_INT32        0x0004
#define AEM_CONTROL_LINEAR_UINT32       0x0005
#define AEM_CONTROL_LINEAR_INT64        0x0006
#define AEM_CONTROL_LINEAR_UINT64       0x0007
#define AEM_CONTROL_LINEAR_FLOAT        0x0008
#define AEM_CONTROL_LINEAR_DOUBLE       0x0009
#define AEM_CONTROL_SELECTOR_INT8       0x000a
#define AEM_CONTROL_SELECTOR_UINT8      0x000b
#define AEM_CONTROL_SELECTOR_INT16      0x000c
#define AEM_CONTROL_SELECTOR_UINT16     0x000d
#define AEM_CONTROL_SELECTOR_INT32      0x000e
#define AEM_CONTROL_SELECTOR_UINT32     0x000f
#define AEM_CONTROL_SELECTOR_INT64      0x0010
#define AEM_CONTROL_SELECTOR_UINT64     0x0011
#define AEM_CONTROL_SELECTOR_FLOAT      0x0012
#define AEM_CONTROL_SELECTOR_DOUBLE     0x0013
#define AEM_CONTROL_UTF8                0x0014
#define AEM_CONTROL_BODE_PLOT           0x0015
#define AEM_CONTROL_ARRAY_INT8          0x0016
#define AEM_CONTROL_ARRAY_UINT8         0x0017
#define AEM_CONTROL_ARRAY_INT16         0x0018
#define AEM_CONTROL_ARRAY_UINT16        0x0019
#define AEM_CONTROL_ARRAY_INT32         0x001a
#define AEM_CONTROL_ARRAY_UINT32        0x001b
#define AEM_CONTROL_ARRAY_INT64         0x001c
#define AEM_CONTROL_ARRAY_UINT64        0x001d
#define AEM_CONTROL_ARRAY_FLOAT         0x001e
#define AEM_CONTROL_ARRAY_DOUBLE        0x001f
#define AEM_CONTROL_SELECTOR_STRING     0x0020
#define AEM_CONTROL_SMPTE_TIME          0x0021
#define AEM_CONTROL_SAMPLE_RATE         0x0022
#define AEM_CONTROL_GPTP_TIME           0x0023
#define AEM_CONTROL_VENDOR              0x3fff

/* 7.3.4. Control Types */
#define AEM_CONTROL_TYPE_ENABLE                    0x90e0f00000000000
#define AEM_CONTROL_TYPE_IDENTIFY                  0x90e0f00000000001
#define AEM_CONTROL_TYPE_MUTE                      0x90e0f00000000002
#define AEM_CONTROL_TYPE_INVERT                    0x90e0f00000000003
#define AEM_CONTROL_TYPE_GAIN                      0x90e0f00000000004
#define AEM_CONTROL_TYPE_ATTENUATE                 0x90e0f00000000005
#define AEM_CONTROL_TYPE_DELAY                     0x90e0f00000000006
#define AEM_CONTROL_TYPE_SRC_MODE                  0x90e0f00000000007
#define AEM_CONTROL_TYPE_SNAPSHOT                  0x90e0f00000000008
#define AEM_CONTROL_TYPE_POW_LINE_FREQ             0x90e0f00000000009
#define AEM_CONTROL_TYPE_POWER_STATUS              0x90e0f0000000000a
#define AEM_CONTROL_TYPE_FAN_STATUS                0x90e0f0000000000b
#define AEM_CONTROL_TYPE_TEMPERATURE               0x90e0f0000000000c
#define AEM_CONTROL_TYPE_ALTITUDE                  0x90e0f0000000000d
#define AEM_CONTROL_TYPE_ABSOLUTE_HUMIDITY         0x90e0f0000000000e
#define AEM_CONTROL_TYPE_RELATIVE_HUMIDITY         0x90e0f0000000000f
#define AEM_CONTROL_TYPE_ORIENTATION               0x90e0f00000000010
#define AEM_CONTROL_TYPE_VELOCITY                  0x90e0f00000000011
#define AEM_CONTROL_TYPE_ACCELERATION              0x90e0f00000000012
#define AEM_CONTROL_TYPE_FILTER_RESPONSE           0x90e0f00000000013

#define AEM_CONTROL_TYPE_PANPOT                    0x90e0f00000010000
#define AEM_CONTROL_TYPE_PHANTOM                   0x90e0f00000010001
#define AEM_CONTROL_TYPE_AUDIO_SCALE               0x90e0f00000010002
#define AEM_CONTROL_TYPE_AUDIO_METERS              0x90e0f00000010003
#define AEM_CONTROL_TYPE_AUDIO_SPECTRUM            0x90e0f00000010004

#define AEM_CONTROL_TYPE_SCANNING_MODE             0x90e0f00000020000
#define AEM_CONTROL_TYPE_AUTO_EXP_MODE             0x90e0f00000020001
#define AEM_CONTROL_TYPE_AUTO_EXP_PRIO             0x90e0f00000020002
#define AEM_CONTROL_TYPE_EXP_TIME                  0x90e0f00000020003
#define AEM_CONTROL_TYPE_FOCUS                     0x90e0f00000020004
#define AEM_CONTROL_TYPE_FOCUS_AUTO                0x90e0f00000020005
#define AEM_CONTROL_TYPE_IRIS                      0x90e0f00000020006
#define AEM_CONTROL_TYPE_ZOOM                      0x90e0f00000020007
#define AEM_CONTROL_TYPE_PRIVACY                   0x90e0f00000020008
#define AEM_CONTROL_TYPE_BACKLIGHT                 0x90e0f00000020009
#define AEM_CONTROL_TYPE_BRIGHTNESS                0x90e0f0000002000a
#define AEM_CONTROL_TYPE_CONTRAST                  0x90e0f0000002000b
#define AEM_CONTROL_TYPE_HUE                       0x90e0f0000002000c
#define AEM_CONTROL_TYPE_SATURATION                0x90e0f0000002000d
#define AEM_CONTROL_TYPE_SHARPNESS                 0x90e0f0000002000e
#define AEM_CONTROL_TYPE_GAMMA                     0x90e0f0000002000f
#define AEM_CONTROL_TYPE_WHITE_BAL_TEMP            0x90e0f00000020010
#define AEM_CONTROL_TYPE_WHITE_BAL_TEMP_AUTO       0x90e0f00000020011
#define AEM_CONTROL_TYPE_WHITE_BAL_COMP            0x90e0f00000020012
#define AEM_CONTROL_TYPE_WHITE_BAL_COMP_AUTO       0x90e0f00000020013
#define AEM_CONTROL_TYPE_DIGITAL_ZOOM              0x90e0f00000020014

#define AEM_CONTROL_TYPE_MEDIA_PLAYLIST            0x90e0f00000030000
#define AEM_CONTROL_TYPE_MEDIA_PLAYLIST_NAME       0x90e0f00000030001
#define AEM_CONTROL_TYPE_MEDIA_DISK                0x90e0f00000030002
#define AEM_CONTROL_TYPE_MEDIA_DISK_NAME           0x90e0f00000030003
#define AEM_CONTROL_TYPE_MEDIA_TRACK               0x90e0f00000030004
#define AEM_CONTROL_TYPE_MEDIA_TRACK_NAME          0x90e0f00000030005
#define AEM_CONTROL_TYPE_MEIDA_SPEED               0x90e0f00000030006
#define AEM_CONTROL_TYPE_MEDIA_SAMPLE_POSITION     0x90e0f00000030007
#define AEM_CONTROL_TYPE_MEDIA_PLAYBACK_TRANSPORT  0x90e0f00000030008
#define AEM_CONTROL_TYPE_MEDIA_RECORD_TRANSPORT    0x90e0f00000030009

#define AEM_CONTROL_TYPE_FREQUENCY                 0x90e0f00000040000
#define AEM_CONTROL_TYPE_MODULATION                0x90e0f00000040000
#define AEM_CONTROL_TYPE_POLARIZATION              0x90e0f00000040000

/* 7.3.3. Control Value Units */
#define AEM_CONTROL_MULTIPLIER_EXA                 0x1200
#define AEM_CONTROL_MULTIPLIER_PETA                0x0f00
#define AEM_CONTROL_MULTIPLIER_TERA                0x0c00
#define AEM_CONTROL_MULTIPLIER_GIGA                0x0900
#define AEM_CONTROL_MULTIPLIER_MEGA                0x0600
#define AEM_CONTROL_MULTIPLIER_KILO                0x0300
#define AEM_CONTROL_MULTIPLIER_HECTO               0x0200
#define AEM_CONTROL_MULTIPLIER_DEKA                0x0100
#define AEM_CONTROL_MULTIPLIER_UNITY               0x0000
#define AEM_CONTROL_MULTIPLIER_DECI                0xff00
#define AEM_CONTROL_MULTIPLIER_CENTI               0xfe00
#define AEM_CONTROL_MULTIPLIER_MILLI               0xfd00
#define AEM_CONTROL_MULTIPLIER_MICRO               0xfa00
#define AEM_CONTROL_MULTIPLIER_NANO                0xf700
#define AEM_CONTROL_MULTIPLIER_PICO                0xf400
#define AEM_CONTROL_MULTIPLIER_FEMPTO              0xf100

#define AEM_CONTROL_UNITS_UNITLESS                 0x0000
#define AEM_CONTROL_UNITS_COUNT                    0x0001
#define AEM_CONTROL_UNITS_PERCENT                  0x0002
#define AEM_CONTROL_UNITS_FSTOP                    0x0003

#define AEM_CONTROL_UNITS_SECONDS                  0x0008
#define AEM_CONTROL_UNITS_MINUTES                  0x0009
#define AEM_CONTROL_UNITS_HOURS                    0x000a
#define AEM_CONTROL_UNITS_DAYS                     0x000b
#define AEM_CONTROL_UNITS_MONTHS                   0x000c
#define AEM_CONTROL_UNITS_YEARS                    0x000d
#define AEM_CONTROL_UNITS_SAMPLES                  0x000e
#define AEM_CONTROL_UNITS_FRAMES                   0x000f

#define AEM_CONTROL_UNITS_HERTZ                    0x0010
#define AEM_CONTROL_UNITS_SEMITONES                0x0011
#define AEM_CONTROL_UNITS_CENTS                    0x0012
#define AEM_CONTROL_UNITS_OCTAVES                  0x0013
#define AEM_CONTROL_UNITS_FPS                      0x0014

#define AEM_CONTROL_UNITS_METRES                   0x0018

#define AEM_CONTROL_UNITS_KELVIN                   0x0020

#define AEM_CONTROL_UNITS_GRAMS                    0x0028

#define AEM_CONTROL_UNITS_VOLTS                    0x0030
#define AEM_CONTROL_UNITS_DBV                      0x0031
#define AEM_CONTROL_UNITS_DBU                      0x0032

#define AEM_CONTROL_UNITS_AMPS                     0x0038

#define AEM_CONTROL_UNITS_WATTS                    0x0040
#define AEM_CONTROL_UNITS_DBM                      0x0041
#define AEM_CONTROL_UNITS_DBW                      0x0042

#define AEM_CONTROL_UNITS_PASCALS                  0x0048

#define AEM_CONTROL_UNITS_BITS                     0x0050
#define AEM_CONTROL_UNITS_BYTES                    0x0051
#define AEM_CONTROL_UNITS_KIBIBYTES                0x0052
#define AEM_CONTROL_UNITS_MEBIBYTES                0x0053
#define AEM_CONTROL_UNITS_GIBIBYTES                0x0054
#define AEM_CONTROL_UNITS_TEBIBYTES                0x0055

#define AEM_CONTROL_UNITS_BITS_PER_SEC             0x0058
#define AEM_CONTROL_UNITS_BYTES_PER_SEC            0x0059
#define AEM_CONTROL_UNITS_KIBIBYTES_PER_SEC        0x005a
#define AEM_CONTROL_UNITS_MEBIBYTES_PER_SEC        0x005b
#define AEM_CONTROL_UNITS_GIBIBYTES_PER_SEC        0x005c
#define AEM_CONTROL_UNITS_TEBIBYTES_PER_SEC        0x005d

#define AEM_CONTROL_UNITS_CANDELAS                 0x0060

#define AEM_CONTROL_UNITS_JOULES                   0x0068

#define AEM_CONTROL_UNITS_RADIANS                  0x0070

#define AEM_CONTROL_UNITS_NEWTONS                  0x0078

#define AEM_CONTROL_UNITS_OHMS                     0x0080

#define AEM_CONTROL_UNITS_METRES_PER_SEC           0x0088
#define AEM_CONTROL_UNITS_RADIANS_PER_SEC          0x0089

#define AEM_CONTROL_UNITS_METRES_PER_SEC_SQUARED   0x0090
#define AEM_CONTROL_UNITS_RADIANS_PER_SEC_SQUARED  0x0091

#define AEM_CONTROL_UNITS_TESLAS                   0x0098

#define AEM_CONTROL_UNITS_METRES_SQUARED           0x00a0

#define AEM_CONTROL_UNITS_METRES_CUBED             0x00a8
#define AEM_CONTROL_UNITS_LITRES                   0x00a9

#define AEM_CONTROL_UNITS_DB                       0x00b0
#define AEM_CONTROL_UNITS_DB_PEAK                  0x00b1
#define AEM_CONTROL_UNITS_DB_RMS                   0x00b2
#define AEM_CONTROL_UNITS_DBFS                     0x00b3
#define AEM_CONTROL_UNITS_DBFS_PEAK                0x00b4
#define AEM_CONTROL_UNITS_DBFS_RMS                 0x00b5
#define AEM_CONTROL_UNITS_DBTP                     0x00b6
#define AEM_CONTROL_UNITS_DB_SPL_A                 0x00b7
#define AEM_CONTROL_UNITS_DB_Z                     0x00b8
#define AEM_CONTROL_UNITS_DB_SPL_C                 0x00b9
#define AEM_CONTROL_UNITS_DB_SPL                   0x00ba
#define AEM_CONTROL_UNITS_LU                       0x00bb
#define AEM_CONTROL_UNITS_LUFS                     0x00bc
#define AEM_CONTROL_UNITS_DB_A                     0x00bd

/*** Stream Descriptors *******************************/
#define AEM_STREAM_FLAGS_CLOCK_SYNC_SOURCE  0x00000001
#define AEM_STREAM_FLAGS_CLASS_A            0x00000002
#define AEM_STREAM_FLAGS_CLASS_B            0x00000004

/* 7.3.1. Stream Formats */
#define AEM_STREAM_FORMAT_VERSION_0           0x0000000000000000
#define AEM_STREAM_FORMAT_VERSION_1           0x4000000000000000

#define AEM_STREAM_FORMAT_61883_IIDC_SUBTYPE    0x0000000000000000
#define AEM_STREAM_FORMAT_MMA_SUBTYPE           0
#define AEM_STREAM_FORMAT_EXPERIMENTAL_SUBTYPE  0

/* Subtype 0 Stream Format */
#define AEM_SUBTYPE_0_SF_IIDC                     0x0000000000000000
#define AEM_SUBTYPE_0_SF_61183                    0x0040000000000000

/*** Audio Cluster Descriptors *********************************/
#define AEM_AUDIO_CLUSTER_FORMAT_IEC_60958		0x00
#define AEM_AUDIO_CLUSTER_FORMAT_MBLA			0x40
#define AEM_AUDIO_CLUSTER_FORMAT_MIDI			0x80
#define AEM_AUDIO_CLUSTER_FORMAT_SMPTE			0x88

/*** Jack Descriptors *********************************/

/* Flags */
#define AEM_JACK_FLAGS_CLOCK_SYNC_SOURCE        0x00000001
#define AEM_JACK_FLAGS_CAPTIVE                  0x00000002

/* Types */
#define AEM_JACK_TYPE_UNBALANCED_ANALOG         0x0007
#define AEM_JACK_TYPE_DIGITAL                   0x0009


/*** AVB Interface Descriptor *********************************/
#define AEM_INTERFACE_FLAGS_GPTP_GRANDMASTER_SUPPORTED		0x0001
#define AEM_INTERFACE_FLAGS_GPTP_SUPPORTED                  0x0002
#define AEM_INTERFACE_FLAGS_SRP_SUPPORTED                   0x0004

/*** Clock Source Descriptors *********************************/

/* Flags */
#define AEM_CLOCK_SOURCE_FLAGS_STREAM_ID		0x0001
#define AEM_CLOCK_SOURCE_FLAGS_LOCAL_ID			0x0002

/* Types */

#define AEM_CLOCK_SOURCE_INTERNAL       		0x0000
#define AEM_CLOCK_SOURCE_EXTERNAL       		0x0001
#define AEM_CLOCK_SOURCE_INPUT_STREAM           0x0002
#define AEM_CLOCK_SOURCE_MEDIA_CLOCK_STREAM		0x0003

/* MEMORY_OBJECT Types *****************************************/
#define AEM_MEMORY_OBJECT_TYPE_FIRMWARE_IMAGE   0x0000

/* MEMORY_OBJECT Operation Types *******************************/
#define AEM_MEMORY_OBJECT_OPERATION_STORE               0x0000
#define AEM_MEMORY_OBJECT_OPERATION_STORE_AND_REBOOT    0x0001
#define AEM_MEMORY_OBJECT_OPERATION_READ                0x0002
#define AEM_MEMORY_OBJECT_OPERATION_ERASE               0x0003
#define AEM_MEMORY_OBJECT_OPERATION_UPLOAD              0x0004

/*** Locale/String Descriptors *********************************/

#define AEM_NO_STRING                           ((0x1fff<<3)+7)
