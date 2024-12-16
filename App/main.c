/* FreeRTOS includes */
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "queue.h"

/* Standard includes */
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* Application includes */
#include "secure_timeout_system.h"

/* Peripheral includes */
#include "uart.h"
#include "IntTimer.h"

/* Task priorities */
#define mainTASK_PRIORITY (tskIDLE_PRIORITY + 2)

/* Task functions */
void TaskA(void *pvParameters);
void TaskB(void *pvParameters);
extern void vStartSecureTimeoutSystem(void);

/*--------------------------------------------------------------------------------*/

int main(int argc, char **argv) {

    printf("\n=========================== Starting the Main ============================\n\n");

    (void) argc;
    (void) argv;

    /* Hardware initialisation. */
    UART_init();

    // xTaskCreate(TaskA, "TaskA", configMINIMAL_STACK_SIZE, NULL, mainTASK_PRIORITY+1, NULL);
    // xTaskCreate(TaskB, "TaskB", configMINIMAL_STACK_SIZE, NULL, mainTASK_PRIORITY+1, NULL);

    // Start the secure timeout system
    vStartSecureTimeoutSystem();

    printf("Ready to run the scheduler...\n");
    vTaskStartScheduler();

    for (;;);

}

/*--------------------------------------------------------------------------------*/
/*
void TaskA(void *pvParameters) {

    (void) pvParameters;

    int counter = 0;

    for (;;) {

        counter++;
        // printf("Task A counter: %d\n", counter);
        printf("Task A running... \n");
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1 second

  }

}

void TaskB(void *pvParameters) {

    (void ) pvParameters;

    int counter = 0;

    for (;;) {

        counter++;
        // printf("Task B counter: %d\n", counter);
        printf("Task B running... \n");
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1 second

    }

}
*/
/*--------------------------------------------------------------------------------*/

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {

    /* This function will get called if a task overflows its stack. */

    (void)xTask;
    (void)pcTaskName;

    printf("Stack overflow in task: ");
    printf(pcTaskName);
    printf("\n");
    taskDISABLE_INTERRUPTS();

    for (;;);

}
