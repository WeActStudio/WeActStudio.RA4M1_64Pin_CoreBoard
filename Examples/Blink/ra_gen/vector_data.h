/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
        #ifdef __cplusplus
        extern "C" {
        #endif
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (6)
        #endif
        /* ISR prototypes */
        void rtc_alarm_periodic_isr(void);
        void rtc_carry_isr(void);
        void sci_uart_rxi_isr(void);
        void sci_uart_txi_isr(void);
        void sci_uart_tei_isr(void);
        void sci_uart_eri_isr(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_RTC_PERIOD ((IRQn_Type) 0) /* RTC PERIOD (Periodic interrupt) */
        #define RTC_PERIOD_IRQn          ((IRQn_Type) 0) /* RTC PERIOD (Periodic interrupt) */
        #define VECTOR_NUMBER_RTC_CARRY ((IRQn_Type) 1) /* RTC CARRY (Carry interrupt) */
        #define RTC_CARRY_IRQn          ((IRQn_Type) 1) /* RTC CARRY (Carry interrupt) */
        #define VECTOR_NUMBER_SCI9_RXI ((IRQn_Type) 2) /* SCI9 RXI (Received data full) */
        #define SCI9_RXI_IRQn          ((IRQn_Type) 2) /* SCI9 RXI (Received data full) */
        #define VECTOR_NUMBER_SCI9_TXI ((IRQn_Type) 3) /* SCI9 TXI (Transmit data empty) */
        #define SCI9_TXI_IRQn          ((IRQn_Type) 3) /* SCI9 TXI (Transmit data empty) */
        #define VECTOR_NUMBER_SCI9_TEI ((IRQn_Type) 4) /* SCI9 TEI (Transmit end) */
        #define SCI9_TEI_IRQn          ((IRQn_Type) 4) /* SCI9 TEI (Transmit end) */
        #define VECTOR_NUMBER_SCI9_ERI ((IRQn_Type) 5) /* SCI9 ERI (Receive error) */
        #define SCI9_ERI_IRQn          ((IRQn_Type) 5) /* SCI9 ERI (Receive error) */
        #ifdef __cplusplus
        }
        #endif
        #endif /* VECTOR_DATA_H */