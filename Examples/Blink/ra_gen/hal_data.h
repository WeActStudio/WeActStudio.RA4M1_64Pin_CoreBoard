/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_sci_uart.h"
            #include "r_uart_api.h"
#include "r_rtc.h"
#include "r_rtc_api.h"
FSP_HEADER
/** UART on SCI Instance. */
            extern const uart_instance_t      g_uart9;

            /** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
            extern sci_uart_instance_ctrl_t     g_uart9_ctrl;
            extern const uart_cfg_t g_uart9_cfg;
            extern const sci_uart_extended_cfg_t g_uart9_cfg_extend;

            #ifndef debug_uart9_callback
            void debug_uart9_callback(uart_callback_args_t * p_args);
            #endif
/* RTC Instance. */
extern const rtc_instance_t g_rtc0;

/** Access the RTC instance using these structures when calling API functions directly (::p_api is not used). */
extern rtc_instance_ctrl_t g_rtc0_ctrl;
extern const rtc_cfg_t g_rtc0_cfg;

#ifndef rtc_callback
void rtc_callback(rtc_callback_args_t * p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
