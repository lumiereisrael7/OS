#ifndef	_P_GPIO_H
#define	_P_GPIO_H

#include "base.h"

#define GPIO_BASE       (PERIPHERAL_BASE + 0x200000)

#define GPFSEL0         (PERIPHERAL_ABSE + 0x200000)
#define GPFSEL1         (PERIPHERAL_BASE + 0x200004)
#define GPFSEL2         (PERIPHERAL_BASE + 0x200008)
#define GPFSEL3         (PERIPHERAL_BASE + 0x20000C)
#define GPFSEL4         (PERIPHERAL_BASE + 0x200010)
#define GPFSEL5         (PERIPHERAL_BASE + 0x200014)

#define GPSET0          (PERIPHERAL_BASE + 0x20001C)
#define GPSET1          (PERIPHERAL_BASE + 0x200020) 

#define GPCLR0          (PERIPHERAL_BASE + 0x200028)
#define GPCLR1          (PERIPHERAL_BASE + 0x20002C)

#define GPLEV0          (PERIPHERAL_BASE + 0x200034)
#define GPLEV1          (PERIPHERAL_BASE + 0x200038)

#define GPEDS0          (PERIPHERAL_BASE + 0x200040)
#define GPEDS1          (PERIPHERAL_BASE + 0x200044)

#define GPREN0          (PERIPHERAL_BASE + 0x20004C)
#define GPREN1          (PERIPHERAL_BASE + 0x200050)

#define GPFEN0          (PERIPHERAL_BASE + 0x200058)
#define GPFEN1          (PERIPHERAL_BASE + 0x20005C)

#define GPHEN0          (PERIPHERAL_BASE + 0x200064)
#define GPHEN1          (PERIPHERAL_BASE + 0x200068)

#define GPLEN0          (PERIPHERAL_BASE + 0x200070)
#define GPLEN1          (PERIPHERAL_BASE + 0x200074)

#define GPAREN0         (PERIPHERAL_BASE + 0x20007C)
#define GPAREN1         (PERIPHERAL_BASE + 0x200080) 

#define GPAFEN0         (PERIPHERAL_BASE + 0x200088)
#define GPAFEN1         (PERIPHERAL_BASE + 0x20008C)

#define GPPUD           (PERIPHERAL_BASE + 0x200094)
#define GPPUDCLK0       (PERIPHERAL_BASE + 0x200098)
#define GPPUDCLK1       (PERIPHERAL_BASE + 0x20009C)


#endif  /*_P_GPIO_H */