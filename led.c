#include "hal.h"
#include "led.h"


void led_set(uint8_t usb_led)
{
    if (usb_led & (1<<USB_LED_NUM_LOCK)) {
        palClearPad(GPIOC, 14);
    } else {
    	palSetPad(GPIOC, 14);
    }
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        palClearPad(GPIOC, 13);
    } else {
    	palSetPad(GPIOC, 13);
    }
    if (usb_led & (1<<USB_LED_SCROLL_LOCK)) {
        palClearPad(GPIOC, 15);
    } else {
    	palSetPad(GPIOC, 15);
    }
    if (usb_led & (1<<USB_LED_COMPOSE)) {
        palClearPad(GPIOB, 4);
    } else {
    	palSetPad(GPIOB, 4);
    }
}
