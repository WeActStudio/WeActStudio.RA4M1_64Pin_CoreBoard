/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = rtc_alarm_periodic_isr, /* RTC PERIOD (Periodic interrupt) */
            [1] = rtc_carry_isr, /* RTC CARRY (Carry interrupt) */
            [2] = sci_uart_rxi_isr, /* SCI9 RXI (Received data full) */
            [3] = sci_uart_txi_isr, /* SCI9 TXI (Transmit data empty) */
            [4] = sci_uart_tei_isr, /* SCI9 TEI (Transmit end) */
            [5] = sci_uart_eri_isr, /* SCI9 ERI (Receive error) */
        };
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
            [0] = BSP_PRV_IELS_ENUM(EVENT_RTC_PERIOD), /* RTC PERIOD (Periodic interrupt) */
            [1] = BSP_PRV_IELS_ENUM(EVENT_RTC_CARRY), /* RTC CARRY (Carry interrupt) */
            [2] = BSP_PRV_IELS_ENUM(EVENT_SCI9_RXI), /* SCI9 RXI (Received data full) */
            [3] = BSP_PRV_IELS_ENUM(EVENT_SCI9_TXI), /* SCI9 TXI (Transmit data empty) */
            [4] = BSP_PRV_IELS_ENUM(EVENT_SCI9_TEI), /* SCI9 TEI (Transmit end) */
            [5] = BSP_PRV_IELS_ENUM(EVENT_SCI9_ERI), /* SCI9 ERI (Receive error) */
        };
        #endif