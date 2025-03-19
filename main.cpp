#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
    /*
    DigitalIn es una clase de MBED que en su constructor recibe una variable pin, la cual es un
    tipo enumerativo PinName definida por STM que apunta correctamente a las direcciones lógicas 
    de los pines. Ésta llama a gpio_init_in, una función de MBED.
    */

    /*asd*/
    /*das*/

    DigitalIn gasDetector(D2);
    DigitalOut alarmLed(LED1);

    /*
    El método mode también esta definido en DigitalIn
    Recibe un tipo enumerativo PinMode definido en PinNames.h definida por STM
    */    
    gasDetector.mode(PullDown);



    alarmLed = OFF;
    printf("%s\n", "Hello World");
    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
            printf("1\n");
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
            printf("0\n");
        }
    }
}