#include "MSC.h"

FirmwareMSC MSC_Update;

static void usbEventCallback(void *arg, esp_event_base_t event_base,
                             int32_t event_id, void *event_data) {
  if (event_base == ARDUINO_USB_EVENTS) {
    // arduino_usb_event_data_t* data = (arduino_usb_event_data_t*)event_data;
    switch (event_id) {
      case ARDUINO_USB_STARTED_EVENT:
        // HWSerial.println("USB PLUGGED");
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(0, 10,
        //              "USB PLUGGED");  // write something to the internal memory
        // u8g2.sendBuffer();            // transfer internal memory to the display
        ;
        break;
      case ARDUINO_USB_STOPPED_EVENT:
        // HWSerial.println("USB UNPLUGGED");
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(
        //     0, 10, "USB UNPLUGGED");  // write something to the internal memory
        // u8g2.sendBuffer();            // transfer internal memory to the display
        ;
        break;
      case ARDUINO_USB_SUSPEND_EVENT:
        // HWSerial.printf("USB SUSPENDED: remote_wakeup_en: %u\n",
        // data->suspend.remote_wakeup_en);
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(
        //     0, 10, "USB SUSPENDED");  // write something to the internal memory
        // u8g2.sendBuffer();            // transfer internal memory to the display
        break;
      case ARDUINO_USB_RESUME_EVENT:
        // HWSerial.println("USB RESUMED");
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(0, 10,
        //              "USB RESUMED");  // write something to the internal memory
        // u8g2.sendBuffer();            // transfer internal memory to the display
        break;

      default:
        break;
    }
  } else if (event_base == ARDUINO_FIRMWARE_MSC_EVENTS) {
    // arduino_firmware_msc_event_data_t* data =
    // (arduino_firmware_msc_event_data_t*)event_data;
    switch (event_id) {
      case ARDUINO_FIRMWARE_MSC_START_EVENT:
        // HWSerial.println("MSC Update Start");
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(
        //     0, 10,
        //     "MSC Update Start");  // write something to the internal memory
        // u8g2.sendBuffer();        // transfer internal memory to the display
        break;
      case ARDUINO_FIRMWARE_MSC_WRITE_EVENT:
        // HWSerial.printf("MSC Update Write %u bytes at offset %u\n",
        // data->write.size, data->write.offset);
        //  HWSerial.print(".");
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(0, 10,
        //              "MSC Updating");  // write something to the internal memory
        // u8g2.sendBuffer();  // transfer internal memory to the display
        break;
      case ARDUINO_FIRMWARE_MSC_END_EVENT:
        // HWSerial.printf("\nMSC Update End: %u bytes\n", data->end.size);
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(
        //     0, 10, "MSC Update End");  // write something to the internal memory
        // u8g2.sendBuffer();  // transfer internal memory to the display
        break;
      case ARDUINO_FIRMWARE_MSC_ERROR_EVENT:
        // HWSerial.printf("MSC Update ERROR! Progress: %u bytes\n",
        // data->error.size);
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(
        //     0, 10,
        //     "MSC Update ERROR!");  // write something to the internal memory
        // u8g2.sendBuffer();         // transfer internal memory to the display
        break;
      case ARDUINO_FIRMWARE_MSC_POWER_EVENT:
        // HWSerial.printf("MSC Update Power: power: %u, start: %u, eject: %u",
        // data->power.power_condition, data->power.start,
        // data->power.load_eject);
        // u8g2.clearBuffer();                  // clear the internal memory
        // u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
        // u8g2.drawStr(
        //     0, 10,
        //     "MSC Update Power");  // write something to the internal memory
        // u8g2.sendBuffer();        // transfer internal memory to the display
        break;

      default:
        break;
    }
  }
}