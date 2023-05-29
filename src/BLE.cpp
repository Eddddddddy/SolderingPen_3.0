#include "OpenT12.h"
char BLE_name[20] = "OPEN-T12";
uint8_t BLE_State = false;
extern FirmwareMSC MSC_Update;

void BLE_Init(void) {
  if (!BLE_State) return;

  // SerialBT.begin(BLE_name);
}

void BLE_Restart(void) {
  // SerialBT.end();
  // BLE_Init();

  if (BLE_State == true) {
    // MSC_Update.onEvent(usbEventCallback);
    MSC_Update.begin();
    // BLE_State = true;
  } else {
    MSC_Update.end();
    // BLE_State = false;
  }
}

void BLE_Rename(void) {
  TextEditor("蓝牙设备名", BLE_name);
  BLE_Restart();
}