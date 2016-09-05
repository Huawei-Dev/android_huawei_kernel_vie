/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : main
  版 本 号   : 初稿
  作    者   : z00273164
  生成日期   : 2014年10月10日
  最近修改   :
  功能描述   : main.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2014年10月10日
    作    者   : z00273164
    修改内容   : 创建文件

******************************************************************************/
#ifndef __MAIN_H__
#define __MAIN_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "oal_ext_if.h"
#include "oam_ext_if.h"
#include "frw_ext_if.h"



#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_MAIN_H
/*****************************************************************************
  2 宏定义
*****************************************************************************/
/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/



/*****************************************************************************
  10 函数声明
*****************************************************************************/

#if (_PRE_PRODUCT_ID_HI1102_DEV ==_PRE_PRODUCT_ID)
extern oal_int32  hi1102_device_main_init(oal_void);
extern oal_void  device_main_init(oal_void);
extern oal_uint8  device_psm_main_function(oal_void);
#elif (_PRE_PRODUCT_ID_HI1102_HOST ==_PRE_PRODUCT_ID)
extern oal_int32  hi1102_host_main_init(oal_void);
extern oal_void   hi1102_host_main_exit(oal_void);
#elif  (_PRE_PRODUCT_ID_HI1151==_PRE_PRODUCT_ID)
extern oal_int32  hi1151_main_init(oal_void);
extern oal_void   hi1151_main_exit(oal_void);
#endif






#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif
