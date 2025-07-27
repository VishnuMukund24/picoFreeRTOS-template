#include "FreeRTOS.h"
#include "task.h"
#include <cstdio>
#include "pico/stdlib.h"

extern "C" void led_task(void* pvParameters)
{
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    
    while (true) {
        gpio_put(LED_PIN, 1);
        vTaskDelay(200);
        printf("LED ON\n");
        gpio_put(LED_PIN, 0);
        vTaskDelay(1000);
        printf("LED OFF\n");
    }
}

int main()
{
    stdio_init_all();
    xTaskCreate(led_task, "LED_Task", 256, NULL, 1, NULL);
    vTaskStartScheduler();
    while(1){};
    return 0;
}