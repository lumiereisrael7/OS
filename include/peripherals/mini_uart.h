#ifndef	_P_MINI_UART_H
#define	_P_MINI_UART_H

#include "peripherals/base.h"

#define     AUX_IRQ                 (PERIPHERAL_BASE + 0x215000)

#define     AUX_ENABLES             (PERIPHERAL_BASE + 0x215004)

#define     AUX_MU_IO_REG           (PERIPHERAL_BASE + 0x215040)
#define     AUX_MU_IER_REG          (PERIPHERAL_BASE + 0x215044)
#define     AUX_MU_IIR_REG          (PERIPHERAL_BASE + 0x215048)
#define     AUX_MU_LCR_REG          (PERIPHERAL_BASE + 0x21504C)
#define     AUX_MU_MCR_REG          (PERIPHERAL_BASE + 0x215050)
#define     AUX_MU_LSR_REG          (PERIPHERAL_BASE + 0x215054)
#define     AUX_MU_MSR_REG          (PERIPHERAL_BASE + 0x215058)
#define     AUX_MU_SCRATCH          (PERIPHERAL_BASE + 0x21505C)
#define     AUX_MU_CNTL_REG         (PERIPHERAL_BASE + 0x215060)
#define     AUX_MU_STAT_REG         (PERIPHERAL_BASE + 0x215064)
#define     AUX_MU_BAUD_REG         (PERIPHERAL_BASE + 0x215068)

#define     AUX_SPI1_CNTL0_REG      (PERIPHERAL_BASE + 0x215080)
#define     AUX_SPI1_CNTL1_REG      (PERIPHERAL_BASE + 0x215084)
#define     AUX_SPI1_STAT_REG       (PERIPHERAL_BASE + 0x215088)
#define     AUX_SPI1_IO_REG         (PERIPHERAL_BASE + 0x215090)
#define     AUX_SPI1_PEEK_REG       (PERIPHERAL_ABSE + 0x215094)

#define     AUX_SPI2_CNRL0_REG      (PERIPHERAL_BASE + 0X2150C0)
#define     AUX_SPI2_CNTL1_REG      (PERIPHERAL_BASE + 0x2150C4)
#define     AUX_SPI2_STAT_REG       (PERIPHERAL_BASE + 0x2150C8)
#define     AUX_SPI2_IO_REG         (PERIPHERAL_BASE + 0x2150D0)
#define     AUX_SPI2_IO_PEEK_REG    (PERIPHERAL_BASE + 0x2150D4)


#endif  /*_P_MINI_UART_H */
