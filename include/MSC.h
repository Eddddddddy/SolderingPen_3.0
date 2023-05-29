#ifndef FIRMWAREMSC_H
#define FIRMWAREMSC_H

#include "Arduino.h"
#include "FirmwareMSC.h"
#include "USB.h"

// MSC Firmware
// FirmwareMSC MSC_Update;

// void MSCUpdating(void) {
//   bool lastbutton = (!digitalRead(BUTTON_PIN));
//   u8g2.clearBuffer();                  // clear the internal memory
//   u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
//   u8g2.drawStr(0, 10,
//                "MSC Update");  // write something to the internal memory
//   u8g2.sendBuffer();           // transfer internal memory to the display
//   delay(1000);
//   do {
//     MSC_Update.onEvent(usbEventCallback);
//     MSC_Update.begin();
//     if (lastbutton && digitalRead(BUTTON_PIN)) {
//       delay(10);
//       lastbutton = false;
//     }
//   } while (digitalRead(BUTTON_PIN) || lastbutton);

//   MSC_Update.end();
// }

static void usbEventCallback(void *arg, esp_event_base_t event_base,
                             int32_t event_id, void *event_data);

#endif  // FIRMWAREMSC_H