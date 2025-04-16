#include "xparameters.h"  // �t�ΰѼơ]GPIO ID�^
#include "xgpio.h"        // GPIO �禡�w
#include <stdio.h>
#include <stdlib.h>

// ²�橵��禡
void simple_delay(int simple_delay) {
    volatile int i = 0;
    for (i = 0; i < simple_delay; i++);
}

int main(int argc, char *argv[]) {
    XGpio led_gpio;  // �ŧi GPIO ����

    // ��l�� GPIO
    XGpio_Initialize(&led_gpio, XPAR_AXI_GPIO_0_DEVICE_ID);

    // �]�w�q�D 1 ����X
    XGpio_SetDataDirection(&led_gpio, 1, 0x0);

    printf("Start to blink LED via AXI GPIO!\n\r");

    int led_value = 0xC3;  // ��l LED ���A

    while (1) {
        printf("LED GPIO value set to 0x%X\n\r", led_value);

        // �g�J LED ��
        XGpio_DiscreteWrite(&led_gpio, 1, led_value);

        // ����
        simple_delay(100000000);

        // ½�� LED ���A
        led_value = ~led_value;
    }

    return 0;
}
