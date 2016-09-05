/******************************************************************************

                 版权所有 (C), 2001-2015, 华为技术有限公司

 ******************************************************************************
  文 件 名   : soc_sd_sdio_interface.h
  版 本 号   : 初稿
  作    者   : Excel2Code
  生成日期   : 2015-03-10 11:22:52
  最近修改   :
  功能描述   : 接口头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2015年3月10日
    作    者   : fWX220878
    修改内容   : 从《Hi3650V100 SOC寄存器手册_SD_SDIO.xml》自动生成

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#ifndef __SOC_SD_SDIO_INTERFACE_H__
#define __SOC_SD_SDIO_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 宏定义
*****************************************************************************/

/****************************************************************************
                     (1/1) register_sd_sdio
 ****************************************************************************/
/* 寄存器说明：控制寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_CTRL_UNION */
#define SOC_SD_SDIO_CTRL_ADDR(base)                   ((base) + (0x000))

/* 寄存器说明：时钟分频系数寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_CLKDIV_UNION */
#define SOC_SD_SDIO_CLKDIV_ADDR(base)                 ((base) + (0x008))

/* 寄存器说明：时钟使能寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_CLKENA_UNION */
#define SOC_SD_SDIO_CLKENA_ADDR(base)                 ((base) + (0x010))

/* 寄存器说明：超时寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_TMOUT_UNION */
#define SOC_SD_SDIO_TMOUT_ADDR(base)                  ((base) + (0x014))

/* 寄存器说明：卡类型寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_CTYPE_UNION */
#define SOC_SD_SDIO_CTYPE_ADDR(base)                  ((base) + (0x018))

/* 寄存器说明：块大小配置寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_BLKSIZ_UNION */
#define SOC_SD_SDIO_BLKSIZ_ADDR(base)                 ((base) + (0x01C))

/* 寄存器说明：字节数寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_BYTCNT_UNION */
#define SOC_SD_SDIO_BYTCNT_ADDR(base)                 ((base) + (0x020))

/* 寄存器说明：中断屏蔽寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_INTMASK_UNION */
#define SOC_SD_SDIO_INTMASK_ADDR(base)                ((base) + (0x024))

/* 寄存器说明：命令参数寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_CMDARG_UNION */
#define SOC_SD_SDIO_CMDARG_ADDR(base)                 ((base) + (0x028))

/* 寄存器说明：命令寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_CMD_UNION */
#define SOC_SD_SDIO_CMD_ADDR(base)                    ((base) + (0x02C))

/* 寄存器说明：响应寄存器0。
   位域定义UNION结构:  SOC_SD_SDIO_RESP0_UNION */
#define SOC_SD_SDIO_RESP0_ADDR(base)                  ((base) + (0x030))

/* 寄存器说明：响应寄存器1。
   位域定义UNION结构:  SOC_SD_SDIO_RESP1_UNION */
#define SOC_SD_SDIO_RESP1_ADDR(base)                  ((base) + (0x034))

/* 寄存器说明：响应寄存器2。
   位域定义UNION结构:  SOC_SD_SDIO_RESP2_UNION */
#define SOC_SD_SDIO_RESP2_ADDR(base)                  ((base) + (0x038))

/* 寄存器说明：响应寄存器3。
   位域定义UNION结构:  SOC_SD_SDIO_RESP3_UNION */
#define SOC_SD_SDIO_RESP3_ADDR(base)                  ((base) + (0x03C))

/* 寄存器说明：屏蔽后中断状态寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_MINTSTS_UNION */
#define SOC_SD_SDIO_MINTSTS_ADDR(base)                ((base) + (0x040))

/* 寄存器说明：原始中断状态寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_RINTSTS_UNION */
#define SOC_SD_SDIO_RINTSTS_ADDR(base)                ((base) + (0x044))

/* 寄存器说明：操作状态寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_STATUS_UNION */
#define SOC_SD_SDIO_STATUS_ADDR(base)                 ((base) + (0x048))

/* 寄存器说明：FIFO水线值寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_FIFOTH_UNION */
#define SOC_SD_SDIO_FIFOTH_ADDR(base)                 ((base) + (0x04C))

/* 寄存器说明：时钟配置寄存器
   位域定义UNION结构:  SOC_SD_SDIO_GPIO_UNION */
#define SOC_SD_SDIO_GPIO_ADDR(base)                   ((base) + (0x058))

/* 寄存器说明：发送到卡处的byte数目寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_TCBCNT_UNION */
#define SOC_SD_SDIO_TCBCNT_ADDR(base)                 ((base) + (0x05C))

/* 寄存器说明：BIU FIFO传送数据的byte数寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_TTBCNT_UNION */
#define SOC_SD_SDIO_TTBCNT_ADDR(base)                 ((base) + (0x060))

/* 寄存器说明：用户ID寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_USRID_UNION */
#define SOC_SD_SDIO_USRID_ADDR(base)                  ((base) + (0x068))

/* 寄存器说明：版本寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_VERID_UNION */
#define SOC_SD_SDIO_VERID_ADDR(base)                  ((base) + (0x06C))

/* 寄存器说明：配置版本寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_HCON_UNION */
#define SOC_SD_SDIO_HCON_ADDR(base)                   ((base) + (0x070))

/* 寄存器说明：UHS-1寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_UHS_REG_UNION */
#define SOC_SD_SDIO_UHS_REG_ADDR(base)                ((base) + (0x074))

/* 寄存器说明：内置DMA配置寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_BMOD_UNION */
#define SOC_SD_SDIO_BMOD_ADDR(base)                   ((base) + (0x080))

/* 寄存器说明：启动命令寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_PLDMND_UNION */
#define SOC_SD_SDIO_PLDMND_ADDR(base)                 ((base) + (0x084))

/* 寄存器说明：链表起始地址寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_DBADDR_UNION */
#define SOC_SD_SDIO_DBADDR_ADDR(base)                 ((base) + (0x088))

/* 寄存器说明：内置DMA状态寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_IDSTS_UNION */
#define SOC_SD_SDIO_IDSTS_ADDR(base)                  ((base) + (0x08C))

/* 寄存器说明：内置DMA中断使能寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_IDINTEN_UNION */
#define SOC_SD_SDIO_IDINTEN_ADDR(base)                ((base) + (0x090))

/* 寄存器说明：当前主描述符地址寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_DSCADDR_UNION */
#define SOC_SD_SDIO_DSCADDR_ADDR(base)                ((base) + (0x094))

/* 寄存器说明：当前缓冲描述符地址寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_BUFADDR_UNION */
#define SOC_SD_SDIO_BUFADDR_ADDR(base)                ((base) + (0x098))

/* 寄存器说明：卡门限控制寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_CARDTHRCTL_UNION */
#define SOC_SD_SDIO_CARDTHRCTL_ADDR(base)             ((base) + (0x100))

/* 寄存器说明：UHS拓展寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_UHS_REG_EXT_UNION */
#define SOC_SD_SDIO_UHS_REG_EXT_ADDR(base)            ((base) + (0x108))

/* 寄存器说明：EMMC4.5DDR模式startbit控制寄存器
   位域定义UNION结构:  SOC_SD_SDIO_EMMC_DDR_REG_UNION */
#define SOC_SD_SDIO_EMMC_DDR_REG_ADDR(base)           ((base) + (0x10C))

/* 寄存器说明：ENALBE偏移寄存器。
   位域定义UNION结构:  SOC_SD_SDIO_ENABLE_SHIFT_UNION */
#define SOC_SD_SDIO_ENABLE_SHIFT_ADDR(base)           ((base) + (0x110))





/*****************************************************************************
  3 枚举定义
*****************************************************************************/



/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/



/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/



/*****************************************************************************
  7 UNION定义
*****************************************************************************/

/****************************************************************************
                     (1/1) register_sd_sdio
 ****************************************************************************/
/*****************************************************************************
 结构名    : SOC_SD_SDIO_CTRL_UNION
 结构说明  : CTRL 寄存器结构定义。地址偏移量:0x000，初值:0x00000000，宽度:32
 寄存器说明: 控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  controller_reset  : 1;  /* bit[0]    : 1'b0:无效；
                                                             1'b1:复位控制器。
                                                             该bit在两个AHB时钟周期和两个cclk_in时钟周期后自动清零。
                                                             复位的对象：BIU/CIU接口、CIU及其状态机、CTRL寄存器的abort_read_data、send_irq_response、read_wait位。
                                                             该bit对内部DMA、FIFO、中断逻辑不影响。 */
        unsigned int  fifo_reset        : 1;  /* bit[1]    : 1'b0:无效；
                                                             1'b1:复位数据fifo指针；
                                                             复位完成后该bit自动清零。 */
        unsigned int  dma_reset         : 1;  /* bit[2]    : 1'b0:无效；
                                                             1'b1:复位内部DMA控制逻辑；
                                                             该bit在AHB两个时钟后自动清除。 */
        unsigned int  reserved_0        : 1;  /* bit[3]    : 保留。 */
        unsigned int  int_enable        : 1;  /* bit[4]    : 1'b0:禁止全局中断；
                                                             1'b1:使能全局中断。 */
        unsigned int  dma_enable        : 1;  /* bit[5]    : 1'b0:禁止DMA传输模式；
                                                             1'b1:使能DMA传输模式。 */
        unsigned int  read_wait         : 1;  /* bit[6]    : 1'b0:禁止读等待；
                                                             1'b1:使能读等待。
                                                             在给SDIO卡发送读等待命令时使用。 */
        unsigned int  send_irq_response : 1;  /* bit[7]    : 1'b0:无效；
                                                             1'b1:发送自动IRQ回复。
                                                             当回复已经发送，此bit自动清零。
                                                             为了等待MMC产生中断，控制器发送指令CMD40并等待来自MMC的中断回复。同时，如果控制器希望不要停留在中断等待状态，可将该bit置“1”，发送指令CMD40并回到IDLE状态。 */
        unsigned int  abort_read_data   : 1;  /* bit[8]    : 1'b0:无效；
                                                             1'b1:读SDIO卡过程中发送suspend指令后，软件查询卡是否进入了suspend状态，当查询到到卡subpend，则如见需将该bit置1，使数据传输状态机回到idle状态，等待下一个块传输。
                                                             状态机回到idle状态后，此bit自动清零。 */
        unsigned int  reserved_1        : 16; /* bit[9-24] : 保留。 */
        unsigned int  use_internal_dmac : 1;  /* bit[25]   : 1'b0:通过slave接口搬运数据；
                                                             1'b1:通过内部DMAC搬运数据。 */
        unsigned int  reserved_2        : 6;  /* bit[26-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_CTRL_UNION;
#endif
#define SOC_SD_SDIO_CTRL_controller_reset_START   (0)
#define SOC_SD_SDIO_CTRL_controller_reset_END     (0)
#define SOC_SD_SDIO_CTRL_fifo_reset_START         (1)
#define SOC_SD_SDIO_CTRL_fifo_reset_END           (1)
#define SOC_SD_SDIO_CTRL_dma_reset_START          (2)
#define SOC_SD_SDIO_CTRL_dma_reset_END            (2)
#define SOC_SD_SDIO_CTRL_int_enable_START         (4)
#define SOC_SD_SDIO_CTRL_int_enable_END           (4)
#define SOC_SD_SDIO_CTRL_dma_enable_START         (5)
#define SOC_SD_SDIO_CTRL_dma_enable_END           (5)
#define SOC_SD_SDIO_CTRL_read_wait_START          (6)
#define SOC_SD_SDIO_CTRL_read_wait_END            (6)
#define SOC_SD_SDIO_CTRL_send_irq_response_START  (7)
#define SOC_SD_SDIO_CTRL_send_irq_response_END    (7)
#define SOC_SD_SDIO_CTRL_abort_read_data_START    (8)
#define SOC_SD_SDIO_CTRL_abort_read_data_END      (8)
#define SOC_SD_SDIO_CTRL_use_internal_dmac_START  (25)
#define SOC_SD_SDIO_CTRL_use_internal_dmac_END    (25)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_CLKDIV_UNION
 结构说明  : CLKDIV 寄存器结构定义。地址偏移量:0x008，初值:0x00000000，宽度:32
 寄存器说明: 时钟分频系数寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_divider0 : 8;  /* bit[0-7] : 时钟分频系数。
                                                       时钟分频系数值为2XN，比如，N为0，则2X0（无分频），N为0x1时为2分频，N为0xFF时为512分频。 */
        unsigned int  reserved     : 24; /* bit[8-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_CLKDIV_UNION;
#endif
#define SOC_SD_SDIO_CLKDIV_clk_divider0_START  (0)
#define SOC_SD_SDIO_CLKDIV_clk_divider0_END    (7)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_CLKENA_UNION
 结构说明  : CLKENA 寄存器结构定义。地址偏移量:0x010，初值:0x00000000，宽度:32
 寄存器说明: 时钟使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cclk_enable    : 1;  /* bit[0]    : 1'b0:时钟禁止；
                                                          1'b1:时钟使能。 */
        unsigned int  reserved_0     : 15; /* bit[1-15] : 保留。 */
        unsigned int  cclk_low_power : 1;  /* bit[16]   : 1'b0:禁止低功耗模式
                                                          1'b1:使能低功耗模式
                                                          对MMC和SD卡，当卡在idle模式时停止时钟；SDIO卡，如果需要检测中断，则始终不可以停止。 */
        unsigned int  reserved_1     : 15; /* bit[17-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_CLKENA_UNION;
#endif
#define SOC_SD_SDIO_CLKENA_cclk_enable_START     (0)
#define SOC_SD_SDIO_CLKENA_cclk_enable_END       (0)
#define SOC_SD_SDIO_CLKENA_cclk_low_power_START  (16)
#define SOC_SD_SDIO_CLKENA_cclk_low_power_END    (16)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_TMOUT_UNION
 结构说明  : TMOUT 寄存器结构定义。地址偏移量:0x014，初值:0xFFFFFF40，宽度:32
 寄存器说明: 超时寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  response_timeout : 8;  /* bit[0-7] : Response的timeout时间
                                                           该值为cclk_out的周期数 */
        unsigned int  data_timeout     : 24; /* bit[8-31]: 读卡数据的Timeout时间
                                                           该值为cclk_out的周期数。 */
    } reg;
} SOC_SD_SDIO_TMOUT_UNION;
#endif
#define SOC_SD_SDIO_TMOUT_response_timeout_START  (0)
#define SOC_SD_SDIO_TMOUT_response_timeout_END    (7)
#define SOC_SD_SDIO_TMOUT_data_timeout_START      (8)
#define SOC_SD_SDIO_TMOUT_data_timeout_END        (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_CTYPE_UNION
 结构说明  : CTYPE 寄存器结构定义。地址偏移量:0x018，初值:0x00000000，宽度:32
 寄存器说明: 卡类型寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  card_width4 : 1;  /* bit[0]    : 1'b0:1bit模式；
                                                       1'b1:4bit模式。
                                                       仅在card_width8无效时，对1bit、4bit的配置才有效。 */
        unsigned int  reserved_0  : 15; /* bit[1-15] : 保留。 */
        unsigned int  card_width8 : 1;  /* bit[16]   : 1'b0:非8bit模式；
                                                       1'b1:8bit模式。 */
        unsigned int  reserved_1  : 15; /* bit[17-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_CTYPE_UNION;
#endif
#define SOC_SD_SDIO_CTYPE_card_width4_START  (0)
#define SOC_SD_SDIO_CTYPE_card_width4_END    (0)
#define SOC_SD_SDIO_CTYPE_card_width8_START  (16)
#define SOC_SD_SDIO_CTYPE_card_width8_END    (16)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_BLKSIZ_UNION
 结构说明  : BLKSIZ 寄存器结构定义。地址偏移量:0x01C，初值:0x00000200，宽度:32
 寄存器说明: 块大小配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  block_size : 16; /* bit[0-15] : Block大小。 */
        unsigned int  reserved   : 16; /* bit[16-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_BLKSIZ_UNION;
#endif
#define SOC_SD_SDIO_BLKSIZ_block_size_START  (0)
#define SOC_SD_SDIO_BLKSIZ_block_size_END    (15)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_BYTCNT_UNION
 结构说明  : BYTCNT 寄存器结构定义。地址偏移量:0x020，初值:0x00000200，宽度:32
 寄存器说明: 字节数寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  byte_count : 32; /* bit[0-31]: 传输的byte数目，为Block大小的整数倍。
                                                     如果是未定义长度的传输，则该寄存器设置为0，通过发送send/abort命令实现数据传输。 */
    } reg;
} SOC_SD_SDIO_BYTCNT_UNION;
#endif
#define SOC_SD_SDIO_BYTCNT_byte_count_START  (0)
#define SOC_SD_SDIO_BYTCNT_byte_count_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_INTMASK_UNION
 结构说明  : INTMASK 寄存器结构定义。地址偏移量:0x024，初值:0x00000000，宽度:32
 寄存器说明: 中断屏蔽寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_mask      : 16; /* bit[0-15] : 中断屏蔽位:
                                                         1'b0:屏蔽中断
                                                         1'b1:使能中断
                                                         bit 15 – End-bit error (read)/Write no CRC (EBE)
                                                         bit 14 – Auto command done (ACD)
                                                         bit 13 – Start-bit error (SBE)
                                                         bit 12 – Hardware locked write error (HLE)
                                                         bit 11 – FIFO underrun/overrun error (FRUN)
                                                         bit 10 – Data starvation-by-host timeout (HTO) /Volt_switch_int
                                                         bit 9 – Data read timeout (DRTO)
                                                         bit 8 – Response timeout (RTO)
                                                         bit 7 – Data CRC error (DCRC)
                                                         bit 6 – Response CRC error (RCRC)
                                                         bit 5 – Receive FIFO data request (RXDR)
                                                         bit 4 – Transmit FIFO data request (TXDR)
                                                         bit 3 – Data transfer over (DTO)
                                                         bit 2 – Command done (CD)
                                                         bit 1 – Response error (RE)
                                                         bit 0 – Card detect (CD) */
        unsigned int  sdio_int_mask : 1;  /* bit[16]   : SDIO中断屏蔽位
                                                         1'b0:屏蔽SDIO中断；
                                                         1'b1:使能SDIO中断。 */
        unsigned int  reserved      : 15; /* bit[17-31]: reserved */
    } reg;
} SOC_SD_SDIO_INTMASK_UNION;
#endif
#define SOC_SD_SDIO_INTMASK_int_mask_START       (0)
#define SOC_SD_SDIO_INTMASK_int_mask_END         (15)
#define SOC_SD_SDIO_INTMASK_sdio_int_mask_START  (16)
#define SOC_SD_SDIO_INTMASK_sdio_int_mask_END    (16)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_CMDARG_UNION
 结构说明  : CMDARG 寄存器结构定义。地址偏移量:0x028，初值:0x00000000，宽度:32
 寄存器说明: 命令参数寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmd_arg : 32; /* bit[0-31]: 命令参数。 */
    } reg;
} SOC_SD_SDIO_CMDARG_UNION;
#endif
#define SOC_SD_SDIO_CMDARG_cmd_arg_START  (0)
#define SOC_SD_SDIO_CMDARG_cmd_arg_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_CMD_UNION
 结构说明  : CMD 寄存器结构定义。地址偏移量:0x02C，初值:0x20000000，宽度:32
 寄存器说明: 命令寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmd_index                   : 6;  /* bit[0-5]  : 命令序号。 */
        unsigned int  response_expect             : 1;  /* bit[6]    : 1'b0:无response；
                                                                       1'b1:有response。 */
        unsigned int  response_length             : 1;  /* bit[7]    : 1'b0:短response；
                                                                       1'b1:长response。 */
        unsigned int  check_response_crc          : 1;  /* bit[8]    : 1'b0:不检查CRC；
                                                                       1'b1:检查CRC。 */
        unsigned int  data_expected               : 1;  /* bit[9]    : 1'b0:无数据传输；
                                                                       1'b1:有数据传输。 */
        unsigned int  read_write                  : 1;  /* bit[10]   : 1'b0:读操作；
                                                                       1'b1:写操作。 */
        unsigned int  transfer_mode               : 1;  /* bit[11]   : 1'b0:block数据传输；
                                                                       1'b1:stream数据传输。 */
        unsigned int  send_auto_stop              : 1;  /* bit[12]   : 1'b0：在数据传输完成时不发送stop命令；
                                                                       1'b1：在数据传输完成时自动发送stop命令；。
                                                                       当设置此位时，数据传输完成后，控制器会自动发送stop命令。 */
        unsigned int  wait_prvdata_complete       : 1;  /* bit[13]   : 1'b0:立即发送命令，不管之前的数据传输是否结束；
                                                                       1'b1:等待之前的数据传输完成后再发送命令。 */
        unsigned int  stop_abort_cmd              : 1;  /* bit[14]   : 1'b0：不发送stop/abort 命令；
                                                                       1'b1：发送stop/abort 命令，终止正在进行的数据传输。
                                                                       当open_end或定长的数据传输操作正在进行时，控制器发送stop/abord命令停止传输时，需要设置此位使CIU可以正确回到IDLE-state。
                                                                       该功能同样适用于Boot模式，当需要终止boot的数据传输时，发送CMD26=diasble_boot，同时设置此位为1。 */
        unsigned int  send_initialization         : 1;  /* bit[15]   : 1'b0:发送命令前不发送初始化序列；
                                                                       1'b1:发送命令前发送初始化序列。
                                                                       卡上电时，在发送任何命令前，都必须先送出初始化序列，该序列为：80个时钟周期的1序列。 */
        unsigned int  reserved_0                  : 5;  /* bit[16-20]: 保留 */
        unsigned int  update_clock_registers_only : 1;  /* bit[21]   : 1'b0:正常命令序列；
                                                                       1'b1:不发送命令，只更新卡时钟域的时钟寄存器：CLKDIV,CLKCRC,CLKENA。
                                                                       每次改变卡时钟时，需要将该bit设置为1，此时不会有命令被传送给卡，也不会产生Command Done中断。 */
        unsigned int  reserved_1                  : 2;  /* bit[22-23]: 保留 */
        unsigned int  enable_boot                 : 1;  /* bit[24]   : 1'b0:无效；
                                                                       1'b1:该bit只在boot模式下设置，当软件同时设置该bit和start_cmd，控制器检测boot序列为：CMD线为低。
                                                                       disable_boot和enable_boot不能同时有效 */
        unsigned int  expect_boot_ack             : 1;  /* bit[25]   : 1'b0:无效；
                                                                       1'b1:使能boot响应，当软件同时使能此bit和enable_boot时，控制器将检测Boot pattern信号，为"0-1-0"序列。 */
        unsigned int  disable_boot                : 1;  /* bit[26]   : 1'b0:无效；
                                                                       1'b1:停止boot操作；
                                                                       disable_boot和enable_boot不能同时有效。 */
        unsigned int  boot_mode                   : 1;  /* bit[27]   : 1'b0:boot模式；
                                                                       1'b1:备选boot模式。 */
        unsigned int  volt_switch                 : 1;  /* bit[28]   : 1'b0:无电压切换；
                                                                       1'b1:电压切换，命令必须为CMD11。 */
        unsigned int  use_hold_reg                : 1;  /* bit[29]   : 1'b0:CMD和DATA的输出不通过HOLD寄存器；
                                                                       1'b1:CMD和DATA的输出通过HOLD寄存器。 */
        unsigned int  reserved_2                  : 1;  /* bit[30]   : 保留。 */
        unsigned int  start_cmd                   : 1;  /* bit[31]   : 命令使能位，当命令被CIU执行时，该bit位清零，当该bit为1时，如果写命令寄存器会发生hardware lock error中断
                                                                       当命令已发送并且response已经返回，则产生Command Done中断。 */
    } reg;
} SOC_SD_SDIO_CMD_UNION;
#endif
#define SOC_SD_SDIO_CMD_cmd_index_START                    (0)
#define SOC_SD_SDIO_CMD_cmd_index_END                      (5)
#define SOC_SD_SDIO_CMD_response_expect_START              (6)
#define SOC_SD_SDIO_CMD_response_expect_END                (6)
#define SOC_SD_SDIO_CMD_response_length_START              (7)
#define SOC_SD_SDIO_CMD_response_length_END                (7)
#define SOC_SD_SDIO_CMD_check_response_crc_START           (8)
#define SOC_SD_SDIO_CMD_check_response_crc_END             (8)
#define SOC_SD_SDIO_CMD_data_expected_START                (9)
#define SOC_SD_SDIO_CMD_data_expected_END                  (9)
#define SOC_SD_SDIO_CMD_read_write_START                   (10)
#define SOC_SD_SDIO_CMD_read_write_END                     (10)
#define SOC_SD_SDIO_CMD_transfer_mode_START                (11)
#define SOC_SD_SDIO_CMD_transfer_mode_END                  (11)
#define SOC_SD_SDIO_CMD_send_auto_stop_START               (12)
#define SOC_SD_SDIO_CMD_send_auto_stop_END                 (12)
#define SOC_SD_SDIO_CMD_wait_prvdata_complete_START        (13)
#define SOC_SD_SDIO_CMD_wait_prvdata_complete_END          (13)
#define SOC_SD_SDIO_CMD_stop_abort_cmd_START               (14)
#define SOC_SD_SDIO_CMD_stop_abort_cmd_END                 (14)
#define SOC_SD_SDIO_CMD_send_initialization_START          (15)
#define SOC_SD_SDIO_CMD_send_initialization_END            (15)
#define SOC_SD_SDIO_CMD_update_clock_registers_only_START  (21)
#define SOC_SD_SDIO_CMD_update_clock_registers_only_END    (21)
#define SOC_SD_SDIO_CMD_enable_boot_START                  (24)
#define SOC_SD_SDIO_CMD_enable_boot_END                    (24)
#define SOC_SD_SDIO_CMD_expect_boot_ack_START              (25)
#define SOC_SD_SDIO_CMD_expect_boot_ack_END                (25)
#define SOC_SD_SDIO_CMD_disable_boot_START                 (26)
#define SOC_SD_SDIO_CMD_disable_boot_END                   (26)
#define SOC_SD_SDIO_CMD_boot_mode_START                    (27)
#define SOC_SD_SDIO_CMD_boot_mode_END                      (27)
#define SOC_SD_SDIO_CMD_volt_switch_START                  (28)
#define SOC_SD_SDIO_CMD_volt_switch_END                    (28)
#define SOC_SD_SDIO_CMD_use_hold_reg_START                 (29)
#define SOC_SD_SDIO_CMD_use_hold_reg_END                   (29)
#define SOC_SD_SDIO_CMD_start_cmd_START                    (31)
#define SOC_SD_SDIO_CMD_start_cmd_END                      (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_RESP0_UNION
 结构说明  : RESP0 寄存器结构定义。地址偏移量:0x030，初值:0x00000000，宽度:32
 寄存器说明: 响应寄存器0。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  resp0 : 32; /* bit[0-31]: response的[31:0]位。 */
    } reg;
} SOC_SD_SDIO_RESP0_UNION;
#endif
#define SOC_SD_SDIO_RESP0_resp0_START  (0)
#define SOC_SD_SDIO_RESP0_resp0_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_RESP1_UNION
 结构说明  : RESP1 寄存器结构定义。地址偏移量:0x034，初值:0x00000000，宽度:32
 寄存器说明: 响应寄存器1。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  resp1 : 32; /* bit[0-31]: 长response的[63:32]位。
                                                当CIU 发出Auto-stop 命令，response 就会被保存在该寄存器。上一条命令的response 仍然会被保存在寄存器RESP0内。Auto-stop 只供数据传输使用，回复类型一直是短response。 */
    } reg;
} SOC_SD_SDIO_RESP1_UNION;
#endif
#define SOC_SD_SDIO_RESP1_resp1_START  (0)
#define SOC_SD_SDIO_RESP1_resp1_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_RESP2_UNION
 结构说明  : RESP2 寄存器结构定义。地址偏移量:0x038，初值:0x00000000，宽度:32
 寄存器说明: 响应寄存器2。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  resp2 : 32; /* bit[0-31]: 长response的[95:64]位。 */
    } reg;
} SOC_SD_SDIO_RESP2_UNION;
#endif
#define SOC_SD_SDIO_RESP2_resp2_START  (0)
#define SOC_SD_SDIO_RESP2_resp2_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_RESP3_UNION
 结构说明  : RESP3 寄存器结构定义。地址偏移量:0x03C，初值:0x00000000，宽度:32
 寄存器说明: 响应寄存器3。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  resp3 : 32; /* bit[0-31]: 长response的[127:96]位。 */
    } reg;
} SOC_SD_SDIO_RESP3_UNION;
#endif
#define SOC_SD_SDIO_RESP3_resp3_START  (0)
#define SOC_SD_SDIO_RESP3_resp3_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_MINTSTS_UNION
 结构说明  : MINTSTS 寄存器结构定义。地址偏移量:0x040，初值:0x00000000，宽度:32
 寄存器说明: 屏蔽后中断状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_status     : 16; /* bit[0-15] : 屏蔽中断状态位:
                                                          1'b0:无中断
                                                          1'b1:有中断
                                                          bit 15 – End-bit error (read)/Write no CRC(EBE)
                                                          bit 14 – Auto command done (ACD)
                                                          bit 13 – Start-bit error (SBE)
                                                          bit 12 – Hardware locked write error(HLE)
                                                          bit 11 – FIFO underrun/overrun error(FRUN)
                                                          bit 10 – Data starvation by host timeout(HTO) /Volt_switch_int
                                                          bit 9 – Data read timeout(DRTO)
                                                          bit 8 – Response timeout(RTO)
                                                          bit 7 – Data CRC error(DCRC)
                                                          bit 6 – Response CRC error(RCRC)
                                                          bit 5 – Receive FIFO data request(RXDR)
                                                          bit 4 – Transmit FIFO data request(TXDR)
                                                          bit 3 – Data transfer over(DTO)
                                                          bit 2 – Command done(CD)
                                                          bit 1 – Response error(RE)
                                                          bit 0 – Card detect(CD) */
        unsigned int  sdio_interrupt : 1;  /* bit[16]   : 屏蔽后SDIO中断状态位：
                                                          1'b0:无SDIO中断；
                                                          1'b1:有SDIO中断。 */
        unsigned int  reserved       : 15; /* bit[17-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_MINTSTS_UNION;
#endif
#define SOC_SD_SDIO_MINTSTS_int_status_START      (0)
#define SOC_SD_SDIO_MINTSTS_int_status_END        (15)
#define SOC_SD_SDIO_MINTSTS_sdio_interrupt_START  (16)
#define SOC_SD_SDIO_MINTSTS_sdio_interrupt_END    (16)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_RINTSTS_UNION
 结构说明  : RINTSTS 寄存器结构定义。地址偏移量:0x044，初值:0x00000000，宽度:32
 寄存器说明: 原始中断状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_status     : 16; /* bit[0-15] : 原始中断状态位:
                                                          1'b0:无中断；
                                                          1'b1:有中断。
                                                          bit 15 – End-bit error (read)/Write no CRC (EBE)
                                                          bit 14 – Auto command done (ACD)
                                                          bit 13 – Start-bit error (SBE)
                                                          bit 12 – Hardware locked write error (HLE)
                                                          bit 11 – FIFO underrun/overrun error (FRUN)
                                                          bit 10 – Data starvation-by-host timeout (HTO) /Volt_switch_int
                                                          bit 9 – Data read timeout (DRTO)
                                                          bit 8 – Response timeout (RTO)
                                                          bit 7 – Data CRC error (DCRC)
                                                          bit 6 – Response CRC error (RCRC)
                                                          bit 5 – Receive FIFO data request (RXDR)
                                                          bit 4 – Transmit FIFO data request (TXDR)
                                                          bit 3 – Data transfer over (DTO)
                                                          bit 2 – Command done (CD)
                                                          bit 1 – Response error (RE)
                                                          bit 0 – Card detect (CD) */
        unsigned int  sdio_interrupt : 1;  /* bit[16]   : 原始SDIO中断状态位
                                                          1'b0:无SDIO中断；
                                                          1'b1:有SDIO中断。 */
        unsigned int  reserved       : 15; /* bit[17-31]: 保留 */
    } reg;
} SOC_SD_SDIO_RINTSTS_UNION;
#endif
#define SOC_SD_SDIO_RINTSTS_int_status_START      (0)
#define SOC_SD_SDIO_RINTSTS_int_status_END        (15)
#define SOC_SD_SDIO_RINTSTS_sdio_interrupt_START  (16)
#define SOC_SD_SDIO_RINTSTS_sdio_interrupt_END    (16)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_STATUS_UNION
 结构说明  : STATUS 寄存器结构定义。地址偏移量:0x048，初值:0x00000406，宽度:32
 寄存器说明: 操作状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fifo_rx_watermark  : 1;  /* bit[0]    : fifo是否达到receive watermark level
                                                              1'b0:未达到
                                                              1'b1:达到 */
        unsigned int  fifo_tx_watermark  : 1;  /* bit[1]    : fifo是否达到transmit watermark level
                                                              1'b0:未达到
                                                              1'b1:达到 */
        unsigned int  fifo_empty         : 1;  /* bit[2]    : fifo是否为空
                                                              1'b0:非空
                                                              1'b1:空 */
        unsigned int  fifo_full          : 1;  /* bit[3]    : fifo是否为满
                                                              1'b0:非满
                                                              1'b1:满 */
        unsigned int  cmd_fsm_state      : 4;  /* bit[4-7]  : 命令状态机
                                                              0 – Idle
                                                              1 – Send init sequence
                                                              2 – Tx cmd start bit
                                                              3 – Tx cmd tx bit
                                                              4 – Tx cmd index + arg
                                                              5 – Tx cmd crc7
                                                              6 – Tx cmd end bit
                                                              7 – Rx resp start bit
                                                              8 – Rx resp IRQ response
                                                              9 – Rx resp tx bit
                                                              10 – Rx resp cmd idx
                                                              11 – Rx resp data
                                                              12 – Rx resp crc7
                                                              13 – Rx resp end bit
                                                              14 – Cmd path wait NCC
                                                              15 – Wait; CMD-to-response turnaround */
        unsigned int  data_3_status      : 1;  /* bit[8]    : 对应card_data[3]，check卡是否在位。
                                                              1'b0:无卡；
                                                              1'b1:有卡。 */
        unsigned int  data_busy          : 1;  /* bit[9]    : 原始的card_data[0]的反向。
                                                              1'b0:卡闲；
                                                              1'b1:卡忙。 */
        unsigned int  data_state_mc_busy : 1;  /* bit[10]   : 数据发送和接受状态机是否繁忙：
                                                              1'b0:idle；
                                                              1'b1:busy。 */
        unsigned int  response_index     : 6;  /* bit[11-16]: 前一个response的序号，包括控制器发送的auto-stop的response。 */
        unsigned int  fifo_count         : 13; /* bit[17-29]: FIFO计数值。 */
        unsigned int  dma_ack            : 1;  /* bit[30]   : DMA确认信号状态。 */
        unsigned int  dma_req            : 1;  /* bit[31]   : DMA请求信号的状态。 */
    } reg;
} SOC_SD_SDIO_STATUS_UNION;
#endif
#define SOC_SD_SDIO_STATUS_fifo_rx_watermark_START   (0)
#define SOC_SD_SDIO_STATUS_fifo_rx_watermark_END     (0)
#define SOC_SD_SDIO_STATUS_fifo_tx_watermark_START   (1)
#define SOC_SD_SDIO_STATUS_fifo_tx_watermark_END     (1)
#define SOC_SD_SDIO_STATUS_fifo_empty_START          (2)
#define SOC_SD_SDIO_STATUS_fifo_empty_END            (2)
#define SOC_SD_SDIO_STATUS_fifo_full_START           (3)
#define SOC_SD_SDIO_STATUS_fifo_full_END             (3)
#define SOC_SD_SDIO_STATUS_cmd_fsm_state_START       (4)
#define SOC_SD_SDIO_STATUS_cmd_fsm_state_END         (7)
#define SOC_SD_SDIO_STATUS_data_3_status_START       (8)
#define SOC_SD_SDIO_STATUS_data_3_status_END         (8)
#define SOC_SD_SDIO_STATUS_data_busy_START           (9)
#define SOC_SD_SDIO_STATUS_data_busy_END             (9)
#define SOC_SD_SDIO_STATUS_data_state_mc_busy_START  (10)
#define SOC_SD_SDIO_STATUS_data_state_mc_busy_END    (10)
#define SOC_SD_SDIO_STATUS_response_index_START      (11)
#define SOC_SD_SDIO_STATUS_response_index_END        (16)
#define SOC_SD_SDIO_STATUS_fifo_count_START          (17)
#define SOC_SD_SDIO_STATUS_fifo_count_END            (29)
#define SOC_SD_SDIO_STATUS_dma_ack_START             (30)
#define SOC_SD_SDIO_STATUS_dma_ack_END               (30)
#define SOC_SD_SDIO_STATUS_dma_req_START             (31)
#define SOC_SD_SDIO_STATUS_dma_req_END               (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_FIFOTH_UNION
 结构说明  : FIFOTH 寄存器结构定义。地址偏移量:0x04C，初值:0x00FF0000，宽度:32
 寄存器说明: FIFO水线值寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx_wmark                         : 12; /* bit[0-11] : 发送数据时的FIFO threshold watermark level。当FIFO 计数小于该值时，使能DMA 请求。数据传输结束后为了完成剩
                                                                            余的数据，不论该值为多少，都会产生DMA 请求。
                                                                            在非DMA 模式，使能RXDR 中断。在数据传输完成后如果FIFO 计数没有大于该值，不会产生中断。这需要软件主动查询DTD 中断来读取剩余的数据。
                                                                            在DMA 模式，当数据传输结束时，即使剩余的数据比门限低，DMA 还是会发出single 传送请求读取数据，直到产生DTD 中断。
                                                                            限制：TX_WMark?FIFO_DEPTH–2
                                                                            建议：大于（FIFO_DEPTH/2）–1 时发出请求。 */
        unsigned int  reserved_0                       : 4;  /* bit[12-15]: 保留 */
        unsigned int  rx_wmark                         : 12; /* bit[16-27]: 读数据时的FIFO threshold watermark level。
                                                                            当FIFO 计数大于该值时，使能DMA 请求。数据传输结束后为了完成剩余的数据，不论该值为多少，都会产生DMA请求。
                                                                            在非DMA模式，当接收FIFO阈值（RXDR）中断使能时，则不会产生DMA request。
                                                                            在数据传输完成后如果FIFO计数没有大于该值，不会产生中断。这需要软件主动查询DTD 中断来读取剩余的数据。
                                                                            在DMA 模式，当数据传输结束时，即使剩余的数据比门限低，DMA 还是会发出single 传送请求读取数据，直到产生DTD 中断。
                                                                            限制：RX_WMark?FIFO_DEPTH–2；
                                                                            建议：大于（FIFO_DEPTH/2）–1 时发出请求。 */
        unsigned int  dw_dma_multiple_transaction_size : 3;  /* bit[28-30]: Burst Size，与DMAC 大小相同。
                                                                            000：1；
                                                                            001：4；
                                                                            010：8；
                                                                            011：16；
                                                                            100：32；
                                                                            101：64；
                                                                            110：128；
                                                                            111：256 */
        unsigned int  reserved_1                       : 1;  /* bit[31]   : 保留。 */
    } reg;
} SOC_SD_SDIO_FIFOTH_UNION;
#endif
#define SOC_SD_SDIO_FIFOTH_tx_wmark_START                          (0)
#define SOC_SD_SDIO_FIFOTH_tx_wmark_END                            (11)
#define SOC_SD_SDIO_FIFOTH_rx_wmark_START                          (16)
#define SOC_SD_SDIO_FIFOTH_rx_wmark_END                            (27)
#define SOC_SD_SDIO_FIFOTH_dw_dma_multiple_transaction_size_START  (28)
#define SOC_SD_SDIO_FIFOTH_dw_dma_multiple_transaction_size_END    (30)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_GPIO_UNION
 结构说明  : GPIO 寄存器结构定义。地址偏移量:0x058，初值:0x00FF0F00，宽度:32
 寄存器说明: 时钟配置寄存器
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0       : 8;  /* bit[0-7]  : 保留。 */
        unsigned int  div_cclk         : 4;  /* bit[8-11] : 分频模块的时钟分频系数。 */
        unsigned int  reserved_1       : 1;  /* bit[12]   : 保留。 */
        unsigned int  use_delay_sample : 1;  /* bit[13]   : 在采样时钟采样输入数据后，使用cclk_in_delay_sample寄存数据。 */
        unsigned int  reserved_2       : 2;  /* bit[14-15]: 保留。 */
        unsigned int  enable_cclk      : 1;  /* bit[16]   : 分频模块的时钟使能。 */
        unsigned int  reserved_3       : 15; /* bit[17-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_GPIO_UNION;
#endif
#define SOC_SD_SDIO_GPIO_div_cclk_START          (8)
#define SOC_SD_SDIO_GPIO_div_cclk_END            (11)
#define SOC_SD_SDIO_GPIO_use_delay_sample_START  (13)
#define SOC_SD_SDIO_GPIO_use_delay_sample_END    (13)
#define SOC_SD_SDIO_GPIO_enable_cclk_START       (16)
#define SOC_SD_SDIO_GPIO_enable_cclk_END         (16)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_TCBCNT_UNION
 结构说明  : TCBCNT 寄存器结构定义。地址偏移量:0x05C，初值:0x00000000，宽度:32
 寄存器说明: 发送到卡处的byte数目寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trans_card_byte_count : 32; /* bit[0-31]: 从CIU发送到卡的byte数目。 */
    } reg;
} SOC_SD_SDIO_TCBCNT_UNION;
#endif
#define SOC_SD_SDIO_TCBCNT_trans_card_byte_count_START  (0)
#define SOC_SD_SDIO_TCBCNT_trans_card_byte_count_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_TTBCNT_UNION
 结构说明  : TTBCNT 寄存器结构定义。地址偏移量:0x060，初值:0x00000000，宽度:32
 寄存器说明: BIU FIFO传送数据的byte数寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trans_fifo_byte_count : 32; /* bit[0-31]: 总线和FIFO之间传递的byte数目。 */
    } reg;
} SOC_SD_SDIO_TTBCNT_UNION;
#endif
#define SOC_SD_SDIO_TTBCNT_trans_fifo_byte_count_START  (0)
#define SOC_SD_SDIO_TTBCNT_trans_fifo_byte_count_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_USRID_UNION
 结构说明  : USRID 寄存器结构定义。地址偏移量:0x068，初值:0x07967797，宽度:32
 寄存器说明: 用户ID寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  usrid : 32; /* bit[0-31]: 用户ID寄存器。 */
    } reg;
} SOC_SD_SDIO_USRID_UNION;
#endif
#define SOC_SD_SDIO_USRID_usrid_START  (0)
#define SOC_SD_SDIO_USRID_usrid_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_VERID_UNION
 结构说明  : VERID 寄存器结构定义。地址偏移量:0x06C，初值:0x5342270A，宽度:32
 寄存器说明: 版本寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  verid : 32; /* bit[0-31]: 版本寄存器。 */
    } reg;
} SOC_SD_SDIO_VERID_UNION;
#endif
#define SOC_SD_SDIO_VERID_verid_START  (0)
#define SOC_SD_SDIO_VERID_verid_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_HCON_UNION
 结构说明  : HCON 寄存器结构定义。地址偏移量:0x070，初值:0x00E42C81，宽度:32
 寄存器说明: 配置版本寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hcon : 32; /* bit[0-31]: 配置版本寄存器。 */
    } reg;
} SOC_SD_SDIO_HCON_UNION;
#endif
#define SOC_SD_SDIO_HCON_hcon_START  (0)
#define SOC_SD_SDIO_HCON_hcon_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_UHS_REG_UNION
 结构说明  : UHS_REG 寄存器结构定义。地址偏移量:0x074，初值:0x00000000，宽度:32
 寄存器说明: UHS-1寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 16; /* bit[0-15] : 保留 */
        unsigned int  ddr_reg  : 1;  /* bit[16]   : DDR模式：
                                                    1'b0: 非DDR模式；
                                                    1'b1: DDR模式。 */
        unsigned int  reserved_1: 15; /* bit[17-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_UHS_REG_UNION;
#endif
#define SOC_SD_SDIO_UHS_REG_ddr_reg_START   (16)
#define SOC_SD_SDIO_UHS_REG_ddr_reg_END     (16)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_BMOD_UNION
 结构说明  : BMOD 寄存器结构定义。地址偏移量:0x080，初值:0x00000000，宽度:32
 寄存器说明: 内置DMA配置寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  swr      : 1;  /* bit[0]    : 软复位，DMA复位所有的内部寄存器，该bit在1个时钟周期后自动被清零。 */
        unsigned int  fb       : 1;  /* bit[1]    : 固定burst类型。（DMA操作时必须配置成1，否则可能导致总线挂死）。 */
        unsigned int  dsl      : 5;  /* bit[2-6]  : 链表跳转的长度。 */
        unsigned int  de       : 1;  /* bit[7]    : IDMAC使能。 */
        unsigned int  pbl      : 3;  /* bit[8-10] : 最大的burst长度，只读，该域与FIFOTH寄存器的MSIZE值相对应，要改变该寄存器的值，则写相应的值到FIFOTH寄存器中
                                                    3'b000:1
                                                    3'b001:4
                                                    3'b010:8
                                                    3'b011:16
                                                    3'b100:32
                                                    3'b101:64
                                                    3'b110:128
                                                    3'b111:256 */
        unsigned int  reserved : 21; /* bit[11-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_BMOD_UNION;
#endif
#define SOC_SD_SDIO_BMOD_swr_START       (0)
#define SOC_SD_SDIO_BMOD_swr_END         (0)
#define SOC_SD_SDIO_BMOD_fb_START        (1)
#define SOC_SD_SDIO_BMOD_fb_END          (1)
#define SOC_SD_SDIO_BMOD_dsl_START       (2)
#define SOC_SD_SDIO_BMOD_dsl_END         (6)
#define SOC_SD_SDIO_BMOD_de_START        (7)
#define SOC_SD_SDIO_BMOD_de_END          (7)
#define SOC_SD_SDIO_BMOD_pbl_START       (8)
#define SOC_SD_SDIO_BMOD_pbl_END         (10)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_PLDMND_UNION
 结构说明  : PLDMND 寄存器结构定义。地址偏移量:0x084，初值:0x00000000，宽度:32
 寄存器说明: 启动命令寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pldmnd : 32; /* bit[0-31]: 如果链表中的OWN没有设置，则DMA的状态机会进入suspend状态，往该寄存器写任何值会让DMA状态机进入正常的取链表描述符操作，该寄存器是只写寄存器。 */
    } reg;
} SOC_SD_SDIO_PLDMND_UNION;
#endif
#define SOC_SD_SDIO_PLDMND_pldmnd_START  (0)
#define SOC_SD_SDIO_PLDMND_pldmnd_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_DBADDR_UNION
 结构说明  : DBADDR 寄存器结构定义。地址偏移量:0x088，初值:0x00000000，宽度:32
 寄存器说明: 链表起始地址寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sdl : 32; /* bit[0-31]: 链表起始地址。 */
    } reg;
} SOC_SD_SDIO_DBADDR_UNION;
#endif
#define SOC_SD_SDIO_DBADDR_sdl_START  (0)
#define SOC_SD_SDIO_DBADDR_sdl_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_IDSTS_UNION
 结构说明  : IDSTS 寄存器结构定义。地址偏移量:0x08C，初值:0x00000000，宽度:32
 寄存器说明: 内置DMA状态寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ti       : 1;  /* bit[0]    : 数据传输中断，指示对应描述符的数据传输已完成。 */
        unsigned int  ri       : 1;  /* bit[1]    : 接收中断，指示描述符数据接收完成。 */
        unsigned int  fbe      : 1;  /* bit[2]    : 总线错误中断，为1时，DMA禁止所有的总线访问。 */
        unsigned int  reserved_0: 1;  /* bit[3]    : 保留。 */
        unsigned int  du       : 1;  /* bit[4]    : 描述符不可用中断(OWN=0) */
        unsigned int  ces      : 1;  /* bit[5]    : 卡错误中断指示，有如下几种中断:
                                                    EBE – End Bit Error
                                                    RTO – Response Timeout/Boot Ack Timeout
                                                    RCRC – Response CRC
                                                    SBE – Start Bit Error
                                                    DRTO – Data Read Timeout/BDS timeout
                                                    DCRC – Data CRC for Receive
                                                    RE – Response Error */
        unsigned int  reserved_1: 2;  /* bit[6-7]  : 保留。 */
        unsigned int  nis      : 1;  /* bit[8]    : 正常中断指示，为如下两种中断的组合:
                                                    IDSTS[0]:发送中断
                                                    IDSTS[1]:接受中断 */
        unsigned int  ais      : 1;  /* bit[9]    : 异常中断，为如下三种中断的组合:
                                                    IDSTS[2]:总线错误中断
                                                    IDSTS[4]:DU中断
                                                    IDSTS[5]:卡错误中断 */
        unsigned int  eb       : 3;  /* bit[10-12]: 总线错误指示。仅在IDSTS[2]有效时生效。
                                                    3'b001:写数据总线错误
                                                    3'b010:读数据总线错误
                                                    其他：保留 */
        unsigned int  fsm      : 4;  /* bit[13-16]: DMA当前状态:
                                                    0 – DMA_IDLE
                                                    1 – DMA_SUSPEND
                                                    2 – DESC_RD
                                                    3 – DESC_CHK
                                                    4 – DMA_RD_REQ_WAIT
                                                    5 – DMA_WR_REQ_WAIT
                                                    6 – DMA_RD
                                                    7 – DMA_WR
                                                    8 – DESC_CLOSE */
        unsigned int  reserved_2: 15; /* bit[17-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_IDSTS_UNION;
#endif
#define SOC_SD_SDIO_IDSTS_ti_START        (0)
#define SOC_SD_SDIO_IDSTS_ti_END          (0)
#define SOC_SD_SDIO_IDSTS_ri_START        (1)
#define SOC_SD_SDIO_IDSTS_ri_END          (1)
#define SOC_SD_SDIO_IDSTS_fbe_START       (2)
#define SOC_SD_SDIO_IDSTS_fbe_END         (2)
#define SOC_SD_SDIO_IDSTS_du_START        (4)
#define SOC_SD_SDIO_IDSTS_du_END          (4)
#define SOC_SD_SDIO_IDSTS_ces_START       (5)
#define SOC_SD_SDIO_IDSTS_ces_END         (5)
#define SOC_SD_SDIO_IDSTS_nis_START       (8)
#define SOC_SD_SDIO_IDSTS_nis_END         (8)
#define SOC_SD_SDIO_IDSTS_ais_START       (9)
#define SOC_SD_SDIO_IDSTS_ais_END         (9)
#define SOC_SD_SDIO_IDSTS_eb_START        (10)
#define SOC_SD_SDIO_IDSTS_eb_END          (12)
#define SOC_SD_SDIO_IDSTS_fsm_START       (13)
#define SOC_SD_SDIO_IDSTS_fsm_END         (16)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_IDINTEN_UNION
 结构说明  : IDINTEN 寄存器结构定义。地址偏移量:0x090，初值:0x00000000，宽度:32
 寄存器说明: 内置DMA中断使能寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ti       : 1;  /* bit[0]    : 数据传输中断使能。 */
        unsigned int  ri       : 1;  /* bit[1]    : 描述符数据接收完成中断使能。 */
        unsigned int  fbe      : 1;  /* bit[2]    : 总线错误中断使能。 */
        unsigned int  reserved_0: 1;  /* bit[3]    : 保留。 */
        unsigned int  du       : 1;  /* bit[4]    : 描述符错误中断使能。 */
        unsigned int  ces      : 1;  /* bit[5]    : 卡错误中断使能。 */
        unsigned int  reserved_1: 2;  /* bit[6-7]  : 保留。 */
        unsigned int  ni       : 1;  /* bit[8]    : 正常中断使能：
                                                    IDINTEN[0]:数据传输完成中断；
                                                    IDINTEN[1]:描述符接受完成中断。 */
        unsigned int  ai       : 1;  /* bit[9]    : 异常中断使能：
                                                    IDINTEN[2]:总线错误中中断；
                                                    IDINTEN[4]:DU中断；
                                                    IDINTEN[5]:卡错误中断。 */
        unsigned int  reserved_2: 22; /* bit[10-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_IDINTEN_UNION;
#endif
#define SOC_SD_SDIO_IDINTEN_ti_START        (0)
#define SOC_SD_SDIO_IDINTEN_ti_END          (0)
#define SOC_SD_SDIO_IDINTEN_ri_START        (1)
#define SOC_SD_SDIO_IDINTEN_ri_END          (1)
#define SOC_SD_SDIO_IDINTEN_fbe_START       (2)
#define SOC_SD_SDIO_IDINTEN_fbe_END         (2)
#define SOC_SD_SDIO_IDINTEN_du_START        (4)
#define SOC_SD_SDIO_IDINTEN_du_END          (4)
#define SOC_SD_SDIO_IDINTEN_ces_START       (5)
#define SOC_SD_SDIO_IDINTEN_ces_END         (5)
#define SOC_SD_SDIO_IDINTEN_ni_START        (8)
#define SOC_SD_SDIO_IDINTEN_ni_END          (8)
#define SOC_SD_SDIO_IDINTEN_ai_START        (9)
#define SOC_SD_SDIO_IDINTEN_ai_END          (9)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_DSCADDR_UNION
 结构说明  : DSCADDR 寄存器结构定义。地址偏移量:0x094，初值:0x00000000，宽度:32
 寄存器说明: 当前主描述符地址寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hda : 32; /* bit[0-31]: 当前主描述符地址。 */
    } reg;
} SOC_SD_SDIO_DSCADDR_UNION;
#endif
#define SOC_SD_SDIO_DSCADDR_hda_START  (0)
#define SOC_SD_SDIO_DSCADDR_hda_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_BUFADDR_UNION
 结构说明  : BUFADDR 寄存器结构定义。地址偏移量:0x098，初值:0x00000000，宽度:32
 寄存器说明: 当前缓冲描述符地址寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hba : 32; /* bit[0-31]: 当前缓冲描述符地址。 */
    } reg;
} SOC_SD_SDIO_BUFADDR_UNION;
#endif
#define SOC_SD_SDIO_BUFADDR_hba_START  (0)
#define SOC_SD_SDIO_BUFADDR_hba_END    (31)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_CARDTHRCTL_UNION
 结构说明  : CARDTHRCTL 寄存器结构定义。地址偏移量:0x100，初值:0x00000000，宽度:32
 寄存器说明: 卡门限控制寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  card_rd_thr_en     : 1;  /* bit[0]    : 卡读门限使能。 */
        unsigned int  bsy_clr_int_en     : 1;  /* bit[1]    : busy clear中断的使能。 */
        unsigned int  reserved_0         : 14; /* bit[2-15] : 保留。 */
        unsigned int  card_rd_threshhold : 11; /* bit[16-26]: 卡读门限。 */
        unsigned int  reserved_1         : 5;  /* bit[27-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_CARDTHRCTL_UNION;
#endif
#define SOC_SD_SDIO_CARDTHRCTL_card_rd_thr_en_START      (0)
#define SOC_SD_SDIO_CARDTHRCTL_card_rd_thr_en_END        (0)
#define SOC_SD_SDIO_CARDTHRCTL_bsy_clr_int_en_START      (1)
#define SOC_SD_SDIO_CARDTHRCTL_bsy_clr_int_en_END        (1)
#define SOC_SD_SDIO_CARDTHRCTL_card_rd_threshhold_START  (16)
#define SOC_SD_SDIO_CARDTHRCTL_card_rd_threshhold_END    (26)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_UHS_REG_EXT_UNION
 结构说明  : UHS_REG_EXT 寄存器结构定义。地址偏移量:0x108，初值:0x00000000，宽度:32
 寄存器说明: UHS拓展寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0            : 16; /* bit[0-15] : 保留。 */
        unsigned int  clk_smpl_phase_ctrl   : 5;  /* bit[16-20]: cclk_in_sample时钟的相位。 */
        unsigned int  clk_drv_phase_ctrl    : 5;  /* bit[21-25]: cclk_in_drv时钟的相位。 */
        unsigned int  clk_samdly_phase_ctrl : 5;  /* bit[26-30]: cclk_in_sample_delay时钟的相位。 */
        unsigned int  reserved_1            : 1;  /* bit[31]   : 保留。 */
    } reg;
} SOC_SD_SDIO_UHS_REG_EXT_UNION;
#endif
#define SOC_SD_SDIO_UHS_REG_EXT_clk_smpl_phase_ctrl_START    (16)
#define SOC_SD_SDIO_UHS_REG_EXT_clk_smpl_phase_ctrl_END      (20)
#define SOC_SD_SDIO_UHS_REG_EXT_clk_drv_phase_ctrl_START     (21)
#define SOC_SD_SDIO_UHS_REG_EXT_clk_drv_phase_ctrl_END       (25)
#define SOC_SD_SDIO_UHS_REG_EXT_clk_samdly_phase_ctrl_START  (26)
#define SOC_SD_SDIO_UHS_REG_EXT_clk_samdly_phase_ctrl_END    (30)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_EMMC_DDR_REG_UNION
 结构说明  : EMMC_DDR_REG 寄存器结构定义。地址偏移量:0x10C，初值:0x00000000，宽度:32
 寄存器说明: EMMC4.5DDR模式startbit控制寄存器
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  half_start_bit : 16; /* bit[0-15] : 控制start_bit的检测机制。对于eMMC4.5，start-bit可能为：
                                                          1.full-cycle (HALF_START_BIT = 0)；
                                                          2.少于一个完整周期(HALF_START_BIT = 1)。
                                                          在eMMC4.5使用过程中，设置此位为1，其他设置为零。 */
        unsigned int  reserved       : 16; /* bit[16-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_EMMC_DDR_REG_UNION;
#endif
#define SOC_SD_SDIO_EMMC_DDR_REG_half_start_bit_START  (0)
#define SOC_SD_SDIO_EMMC_DDR_REG_half_start_bit_END    (15)


/*****************************************************************************
 结构名    : SOC_SD_SDIO_ENABLE_SHIFT_UNION
 结构说明  : ENABLE_SHIFT 寄存器结构定义。地址偏移量:0x110，初值:0x00000000，宽度:32
 寄存器说明: ENALBE偏移寄存器。
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enable_shift : 2;  /* bit[0-1] : 控制默认enable信号的偏移量：
                                                       00：默认偏移相位；
                                                       01：enable偏移到下一个时钟上升沿；
                                                       10：enable偏移到上一个时钟下降沿；
                                                       11：保留。 */
        unsigned int  reserved     : 30; /* bit[2-31]: 保留。 */
    } reg;
} SOC_SD_SDIO_ENABLE_SHIFT_UNION;
#endif
#define SOC_SD_SDIO_ENABLE_SHIFT_enable_shift_START  (0)
#define SOC_SD_SDIO_ENABLE_SHIFT_enable_shift_END    (1)






/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/



/*****************************************************************************
  9 全局变量声明
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_sd_sdio_interface.h */
