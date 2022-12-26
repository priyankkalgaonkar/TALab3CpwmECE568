#include "mbed.h"

//PWM output channel
PwmOut PWM1(A5);

// main() runs in its own thread in the OS
int main()
{
    PWM1.period_ms(500);
    int x;
    x=1;
    while(1)
    {
        PWM1.pulsewidth_ms(x);
        x=x+1;
        wait_us(100000);
        if(x==500)
        {
            x=1;
        }
    }
}