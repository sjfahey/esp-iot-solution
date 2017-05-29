#ifndef __ALINK_USER_CONFIG_H__
#define __ALINK_USER_CONFIG_H__
#include "esp_log.h"

#if CONFIG_CLOUD_ALINK
#define ALINK_PASSTHROUGH           CONFIG_ALINK_PASSTHROUGH
#define ALINK_LOG_LEVEL             CONFIG_LOG_ALINK_LEVEL
#define ALINK_WIFI_WAIT_TIME        (CONFIG_WIFI_WAIT_TIME * 1000)
#define ALINK_RESET_KEY_IO          CONFIG_ALINK_RESET_KEY_IO
#define ALINK_DEFAULU_TASK_PRIOTY   CONFIG_ALINK_TASK_PRIOTY
#define ALINK_MODULE_NAME           CONFIG_ALINK_MODULE_NAME
#define ALINK_DATA_LEN              CONFIG_ALINK_DATA_LEN

#define ALINK_INFO_SN               CONFIG_ALINK_INFO_SN
#define ALINK_INFO_NAME             CONFIG_ALINK_INFO_NAME
#define ALINK_INFO_VERSION          CONFIG_ALINK_INFO_VERSION
#define ALINK_INFO_MODEL            CONFIG_ALINK_INFO_MODEL
#define ALINK_INFO_KEY              CONFIG_ALINK_INFO_KEY
#define ALINK_INFO_SECRET           CONFIG_ALINK_INFO_SECRET
#define ALINK_INFO_SANDBOX_KEY      CONFIG_ALINK_INFO_SANDBOX_KEY
#define ALINK_INFO_SANDBOX_SECRET   CONFIG_ALINK_INFO_SANDBOX_SECRET
#define ALINK_INFO_TYPE             CONFIG_ALINK_INFO_TYPE
#define ALINK_INFO_CATEGORY         CONFIG_ALINK_INFO_CATEGORY
#define ALINK_INFO_MANUFACTURER     CONFIG_ALINK_INFO_MANUFACTURER
#define ALINK_INFO_CID              CONFIG_ALINK_INFO_CID
#else
#define ALINK_PASSTHROUGH         (1)
#define ALINK_LOG_LEVEL           (ESP_LOG_INFO)
#define ALINK_WIFI_WAIT_TIME      (60)
#define ALINK_RESET_KEY_IO        (0)
#define ALINK_DEFAULU_TASK_PRIOTY (4)
#define ALINK_MODULE_NAME         "ESP-WROOM-32"
#define ALINK_DATA_LEN            (512)

#define ALINK_INFO_SN             "1234567"
#define ALINK_INFO_NAME           "ALINKTEST"
#define ALINK_INFO_VERSION        "1.0.0"
#define ALINK_INFO_MODEL          "ALINKTEST_LIVING_LIGHT_SMARTLED"
#define ALINK_INFO_KEY            "ljB6vqoLzmP8fGkE6pon"
#define ALINK_INFO_SECRET         "YJJZjytOCXDhtQqip4EjWbhR95zTgI92RVjzjyZF"
#define ALINK_INFO_SANDBOX_KEY    "dpZZEpm9eBfqzK7yVeLq"
#define ALINK_INFO_SANDBOX_SECRET "THnfRRsU5vu6g6m9X6uFyAjUWflgZ0iyGjdEneKm"
#define ALINK_INFO_TYPE           "LIGHT"
#define ALINK_INFO_CATEGORY       "LIVING"
#define ALINK_INFO_MANUFACTURER   "ALINKTEST"
#define ALINK_INFO_CID            "2D0044000F47333139373038"
#endif

#endif
