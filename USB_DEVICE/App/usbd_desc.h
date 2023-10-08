#pragma once

#include "usbd_def.h"

#define DEVICE_ID1 (UID_BASE)
#define DEVICE_ID2 (UID_BASE + 0x4)
#define DEVICE_ID3 (UID_BASE + 0x8)

#define  USB_SIZ_STRING_SERIAL 0x16

extern USBD_DescriptorsTypeDef FS_Desc;
