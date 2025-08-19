/* 

    Config.h => General RTOS Configuration file,
    used for the basic params all the way to the
    advanced ones. 

*/

#ifndef CONFIG_H
#define CONFIG_H

// =========================
// RTOS System Configuration
// =========================

/ System tick rate (Hz)
#define CONFIG_TICK_RATE_HZ       1000  // 1 ms tick

// Maximum number of threads
#define CONFIG_MAX_THREADS        8

// Stack size per thread (in bytes)
#define CONFIG_THREAD_STACK_SIZE  1024

// Enable preemption (1 = yes, 0 = cooperative only)
#define CONFIG_USE_PREEMPTION     1

// Enable basic mutex support
#define CONFIG_USE_MUTEXES        1

// Enable debug logging over UART
#define CONFIG_USE_UART_DEBUG     1

// Use static memory allocation only
#define CONFIG_USE_STATIC_ALLOC   1

// Priority levels (0 = lowest, higher = more important)
#define CONFIG_MAX_PRIORITY_LEVELS  5

// CPU clock frequency (used for SysTick)
#define CONFIG_CPU_CLOCK_HZ       72000000  // Example: 72 MHz (STM32F103)

#endif // CONFIG_H


/*

EXAMPLE:

#include "config.h"

#if CONFIG_USE_PREEMPTION
    // use preemptive scheduler logic
#else
    // use cooperative scheduler
#endif


*/