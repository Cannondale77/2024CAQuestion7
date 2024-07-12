#include "mbed.h"

#define BLINKING_RATE   2s
#define BLINKING_RATE2   5s
// main() runs in its own thread in the OS
int main()
{


    DigitalOut led(LED1);
    DigitalOut led2(LED2);

    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);

        led2 = !led2;
        ThisThread::sleep_for(BLINKING_RATE2);
    }
}

