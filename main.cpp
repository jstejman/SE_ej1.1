#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
    DigitalIn gasDetector(D2);
    
    /*
    DigitalIn es una clase de MBED que en su constructor recibe una variable pin, la cual es un
    tipo enumerativo PinName definida por STM que apunta correctamente a las direcciones lógicas
    de los pines. Ésta llama a gpio_init_in, una función de MBED que recibe un objeto gpio_t
    la cual está descrita en gpio_object.h hecha por STM que contiene los registros in, set y clr, pin, gpio y llpin.
    */


    DigitalOut alarmLed(LED1);
    /*
    DigitalOut es una clase de MBED que en su constructor recibe una variable pin del tipo 
    PinName. Esta llama a gpio_init_out, también función de MBED qué hace básicamente lo mismo
    que gpio_init_in solo enviando hacia el pin recibido.
    */
    gasDetector.mode(PullDown);
    /*
    El método mode esta definido en el objeto gpio y recibe
    un tipo enumerativo PinMode que le indica en qué modo está:
    PullNone, PullUp, PullDown, OpenDrainPullUp, OpenDrainPullDown y OpenDrainNoPull
    */
    alarmLed = OFF;
    printf("%s\n", "Hello World");
    while (true)
    {
        if (gasDetector == ON)
        {
            alarmLed = ON;
            printf("1\n");
        }

        if (gasDetector == OFF)
        {
            alarmLed = OFF;
            printf("0\n");
        }
    }
}