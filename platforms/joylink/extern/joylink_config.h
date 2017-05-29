#ifndef JOYLINK_APP_H
#define JOYLINK_APP_H
#include "sdkconfig.h"

#if CONFIG_CLOUD_JOYLINK
#define JOYLINK_BLE_ENABLE        CONFIG_JOYLINK_BLE_ENABLE
#define JOYLINK_BLE_BUTTON_ENABLE CONFIG_JOYLINK_BLE_BUTTON_ENABLE
#define JOYLINK_BLE_BUTTON_NUM    CONFIG_JOYLINK_BLE_BUTTON_NUM
#define JOYLINK_SMNT_BUTTON_NUM   CONFIG_JOYLINK_SMNT_BUTTON_NUM
#define JOYLINK_RESET_BUTTON_NUM  CONFIG_JOYLINK_RESET_BUTTON_NUM

#define JOYLINK_AES_KEY           CONFIG_JOYLINK_AES_KEY
#define JOYLINK_VERSION           CONFIG_JOYLINK_VERSION
#define JOYLINK_ACCESSKEY         CONFIG_JOYLINK_ACCESSKEY
#define JOYLINK_LOCAL_KEY         CONFIG_JOYLINK_LOCAL_KEY
#define JOYLINK_FEEDID            CONFIG_JOYLINK_FEEDID
#define JOYLINK_DEVTYPE           CONFIG_JOYLINK_DEVTYPE
#define JOYLINK_SERVER            CONFIG_JOYLINK_SERVER
#define JOYLINK_SERVER_PORT       CONFIG_JOYLINK_SERVER_PORT
#define JOYLINK_CID               CONFIG_JOYLINK_CID
#define JOYLINK_FW_VERSION        CONFIG_JOYLINK_FW_VERSION
#define JOYLINK_MODEL_CODE        CONFIG_JOYLINK_MODEL_CODE
#define JOYLINK_UUID              CONFIG_JOYLINK_UUID
#define JOYLINK_LAN_CTRL          CONFIG_JOYLINK_LAN_CTRL
#define JOYLINK_CMD_TYPE          CONFIG_JOYLINK_CMD_TYPE
#else
#define JOYLINK_BLE_ENABLE        (0)
#define JOYLINK_BLE_BUTTON_ENABLE (0)
#define JOYLINK_BLE_BUTTON_NUM    (13)
#define JOYLINK_SMNT_BUTTON_NUM   (14)
#define JOYLINK_RESET_BUTTON_NUM  (15)

#define JOYLINK_AES_KEY           "DNWXVNMPGRZB7DC5"
#define JOYLINK_VERSION           (1)
#define JOYLINK_ACCESSKEY         ""
#define JOYLINK_LOCAL_KEY         ""
#define JOYLINK_FEEDID            ""
#define JOYLINK_DEVTYPE           (0)
#define JOYLINK_SERVER            "live.smart.jd.com"
#define JOYLINK_SERVER_PORT       (2002)
#define JOYLINK_CID               "011c022b"
#define JOYLINK_FW_VERSION        "001"
#define JOYLINK_MODEL_CODE        "a1"
#define JOYLINK_UUID              "GNQIYS"
#define JOYLINK_LAN_CTRL          (1)
#define JOYLINK_CMD_TYPE          (0)
#endif

#endif


