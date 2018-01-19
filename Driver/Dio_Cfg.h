#ifndef DIO_CFG_H
#define DIO_CFG_H
/*============================================================================*\
 * This file was generated by the SCG framework.
 *
 * The configuration parameters were checked statically for correctness
 * by DETECT tool and code generator. DO NOT EDIT THIS FILE MANUALLY!!!
 *
 * \b Application:        DIO \n
 * \b Target:             NEC 78K0R \n
 * \b Compiler:           IAR 78K0R C/C++ \n
 * \b Module:             Dio_Cfg.h \n
 * \b File-Revision:      1.0.1 \n
 * \b Changeable-by-user: No \n
 * \b Module-Owner:       SSA Team \n
 * \b Last-Modified:      %date_modified% \n
 * \b Classification:     CONFIDENTIAL \n
\*============================================================================*/

/**\file
 * \brief Configuration file for SSA DIO driver.
 *
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-11-1}{SSA-REQ-DIO-99-1,  SSA-REQ-DIO-100-3, SSA-REQ-DIO-113-1,
 *                             SSA-REQ-DIO-115-1, SSA-REQ-DIO-223-1, SSA-REQ-DIO-301-1,
 *                             SSA-REQ-DIO-302-1, SSA-REQ-DIO-303-1, SSA-REQ-DIO-304-1}
 */

/*============================================================================*\
 *
 * Copyright 2010  Controls & Security, All Rights Reserved
 * It is not allowed to reproduce or utilize parts of this document in any form
 * or by any means, including photocopying and microfilm, without permission in
 * written by  Electronics & Safety Division.
 *
\*============================================================================*/

/*============================================================================*\
 * PREPROCESSOR DIRECTIVES
\*============================================================================*/

/* INCLUDE DIRECTIVES FOR STANDARD HEADERS -----------------------------------*/

#include "SchM_Dio.h"
#include "Std_Types.h"


/* INCLUDE DIRECTIVES FOR OTHER HEADERS --------------------------------------*/

/* EXPORTED DEFINES FOR CONSTANTS --------------------------------------------*/


/* PRQA S 288 ++
   MISRA RULE 3.1 VIOLATION:
   Character (at) is required for doxygen syntax.
 */
/** \defgroup VersionInfo_Cfg
 * \name Published information:
 * \details
 * 1. Major, minor and patch version number of AUTOSAR specification on which the
 * appropriate implementation is based on. \n
 * 2. Software major, minor and patch version of this file. \n
 * \n
 * Note: Specific numbers are given only as an example of implementation.\n
 *
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-14-1}{SSA-REQ-DIO-235-1, SSA-REQ-DIO-236-1}
 * @{
 */
#define DIO_CFG_H_AR_MAJOR_VERSION (2u)
#define DIO_CFG_H_AR_MINOR_VERSION (1u)
#define DIO_CFG_H_AR_PATCH_VERSION (0u)

#define DIO_CFG_H_SW_MAJOR_VERSION (1u)
#define DIO_CFG_H_SW_MINOR_VERSION (0u)
#define DIO_CFG_H_SW_PATCH_VERSION (1u)
/* @}*/
/* PRQA S 288 -- */


/* External modules version checking */
#if(   (STD_TYPES_AR_MAJOR_VERSION != DIO_CFG_H_AR_MAJOR_VERSION) || \
       (STD_TYPES_AR_MINOR_VERSION != DIO_CFG_H_AR_MINOR_VERSION))
#error "AUTOSAR version mismatch between Dio_Cfg.h and Std_Types.h modules."
#endif

/** \brief Component version information API switch.
 *
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-12-1}{SSA-REQ-DIO-220-1, SSA-REQ-DIO-230-1, SSA-REQ-DIO-231-1}
 */
#define DIO_VERSION_INFO_API   (STD_OFF)

/** \brief Preprocessor switch for enabling the development error detection.
 * \details This switch has no effect when ## macros are used.
 *
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-13-1}{SSA-REQ-DIO-222-1, SSA-REQ-DIO-232-1, SSA-REQ-DIO-233-1,
 *                             SSA-REQ-DIO-294-1}
 */
#define DIO_DEV_ERROR_DETECT   (STD_OFF)

/* EXPORTED DEFINE MACROS (#, ##) --------------------------------------------*/

/*============================================================================*\
 * EXPORTED TYPEDEF DECLARATIONS
\*============================================================================*/

/* ENUMS ---------------------------------------------------------------------*/

/** \brief Type for storing ChannelId.
 * \details To use as input parameter for Dio_WriteChannel()
 * and Dio_ReadChannel() functions.\n
 * \n
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-15-1}{SSA-REQ-DIO-135-1, SSA-REQ-DIO-226-1}
 */
typedef uint8 Dio_ChannelType;


/* Symbolic names for DIO channels: to use as input parameter for Dio_WriteChannel() and Dio_ReadChannel() functions. */
#define DIO_PIN_P00 ((Dio_ChannelType) 0)
#define DIO_PIN_P01 ((Dio_ChannelType) 1)
#define DIO_PIN_P02 ((Dio_ChannelType) 2)
#define DIO_PIN_P10 ((Dio_ChannelType) 10)
#define DIO_PIN_P11 ((Dio_ChannelType) 11)
#define DIO_PIN_P12 ((Dio_ChannelType) 12)
#define DIO_PIN_P13 ((Dio_ChannelType) 13)
#define DIO_PIN_P14 ((Dio_ChannelType) 14)
#define DIO_PIN_P15 ((Dio_ChannelType) 15)
#define DIO_PIN_P16 ((Dio_ChannelType) 16)
#define DIO_PIN_P17 ((Dio_ChannelType) 17)
#define DIO_PIN_P30 ((Dio_ChannelType) 30)
#define DIO_PIN_P31 ((Dio_ChannelType) 31)
#define DIO_PIN_P32 ((Dio_ChannelType) 32)
#define DIO_PIN_P40 ((Dio_ChannelType) 40)
#define DIO_PIN_P41 ((Dio_ChannelType) 41)
#define DIO_PIN_P42 ((Dio_ChannelType) 42)
#define DIO_PIN_P43 ((Dio_ChannelType) 43)
#define DIO_PIN_P44 ((Dio_ChannelType) 44)
#define DIO_PIN_P45 ((Dio_ChannelType) 45)
#define DIO_PIN_P46 ((Dio_ChannelType) 46)
#define DIO_PIN_P47 ((Dio_ChannelType) 47)
#define DIO_PIN_P50 ((Dio_ChannelType) 50)
#define DIO_PIN_P51 ((Dio_ChannelType) 51)
#define DIO_PIN_P52 ((Dio_ChannelType) 52)
#define DIO_PIN_P53 ((Dio_ChannelType) 53)
#define DIO_PIN_P54 ((Dio_ChannelType) 54)
#define DIO_PIN_P55 ((Dio_ChannelType) 55)
#define DIO_PIN_P56 ((Dio_ChannelType) 56)
#define DIO_PIN_P57 ((Dio_ChannelType) 57)
#define DIO_PIN_P60 ((Dio_ChannelType) 60)
#define DIO_PIN_P61 ((Dio_ChannelType) 61)
#define DIO_PIN_P62 ((Dio_ChannelType) 62)
#define DIO_PIN_P63 ((Dio_ChannelType) 63)
#define DIO_PIN_P64 ((Dio_ChannelType) 64)
#define DIO_PIN_P65 ((Dio_ChannelType) 65)
#define DIO_PIN_P66 ((Dio_ChannelType) 66)
#define DIO_PIN_P67 ((Dio_ChannelType) 67)
#define DIO_PIN_P70 ((Dio_ChannelType) 70)
#define DIO_PIN_P71 ((Dio_ChannelType) 71)
#define DIO_PIN_P72 ((Dio_ChannelType) 72)
#define DIO_PIN_P73 ((Dio_ChannelType) 73)
#define DIO_PIN_P74 ((Dio_ChannelType) 74)
#define DIO_PIN_P75 ((Dio_ChannelType) 75)
#define DIO_PIN_P76 ((Dio_ChannelType) 76)
#define DIO_PIN_P77 ((Dio_ChannelType) 77)
#define DIO_PIN_P80 ((Dio_ChannelType) 80)
#define DIO_PIN_P81 ((Dio_ChannelType) 81)
#define DIO_PIN_P82 ((Dio_ChannelType) 82)
#define DIO_PIN_P83 ((Dio_ChannelType) 83)
#define DIO_PIN_P84 ((Dio_ChannelType) 84)
#define DIO_PIN_P85 ((Dio_ChannelType) 85)
#define DIO_PIN_P86 ((Dio_ChannelType) 86)
#define DIO_PIN_P87 ((Dio_ChannelType) 87)
#define DIO_PIN_P90 ((Dio_ChannelType) 90)
#define DIO_PIN_P91 ((Dio_ChannelType) 91)
#define DIO_PIN_P92 ((Dio_ChannelType) 92)
#define DIO_PIN_P93 ((Dio_ChannelType) 93)
#define DIO_PIN_P94 ((Dio_ChannelType) 94)
#define DIO_PIN_P95 ((Dio_ChannelType) 95)
#define DIO_PIN_P96 ((Dio_ChannelType) 96)
#define DIO_PIN_P97 ((Dio_ChannelType) 97)
#define DIO_PIN_P120 ((Dio_ChannelType) 120)
#define DIO_PIN_P121 ((Dio_ChannelType) 121)
#define DIO_PIN_P122 ((Dio_ChannelType) 122)
#define DIO_PIN_P123 ((Dio_ChannelType) 123)
#define DIO_PIN_P124 ((Dio_ChannelType) 124)
#define DIO_PIN_P125 ((Dio_ChannelType) 125)
#define DIO_PIN_P126 ((Dio_ChannelType) 126)
#define DIO_PIN_P130 ((Dio_ChannelType) 130)
#define DIO_PIN_P140 ((Dio_ChannelType) 140)

/** \brief Numeric ID of a DIO port.
 * \n
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-16-1}{SSA-REQ-DIO-137-1, SSA-REQ-DIO-224-1}
 */
typedef uint8 Dio_PortType;

/* Symbolic names for DIO ports: to use as input parameter for Dio_WritePort() and Dio_ReadPort() functions. */
#define DIO_P0 ((Dio_PortType) 0)
#define DIO_P1 ((Dio_PortType) 1)
#define DIO_P3 ((Dio_PortType) 3)
#define DIO_P4 ((Dio_PortType) 4)
#define DIO_P5 ((Dio_PortType) 5)
#define DIO_P6 ((Dio_PortType) 6)
#define DIO_P7 ((Dio_PortType) 7)
#define DIO_P8 ((Dio_PortType) 8)
#define DIO_P9 ((Dio_PortType) 9)
#define DIO_P12 ((Dio_PortType) 12)
#define DIO_P13 ((Dio_PortType) 13)
#define DIO_P14 ((Dio_PortType) 14)

/* Number of ports which contain channel groups */
#define DIO_NB_PORTS_WITH_CHANNEL_GROUPS ((uint8)1)

/** \brief Value of a DIO port.
 *
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-17-1}{SSA-REQ-DIO-134-1, SSA-REQ-DIO-142-1, SSA-REQ-DIO-257-1,
 *                             SSA-REQ-DIO-258-1}
 */
typedef uint8 Dio_PortLevelType;

/**
 *  Structure describing each port:
 */
typedef struct {
    _VOLATILE_ uint8 *data_register;        /**< pointer to data register for I/O operations */
}
Dio_PortInfoType;

/* STRUCTS -------------------------------------------------------------------*/

/** \brief Type for the definition of a channel group.
 *
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-24-1}{SSA-REQ-DIO-139-1, SSA-REQ-DIO-227-1, SSA-REQ-DIO-228-1}
 */
typedef struct {
   Dio_PortType port;         /**< port on which channel group is defined */
   uint8 offset;              /**< position on the port, counted from LSB */
   Dio_PortLevelType mask;    /**< mask which defines the position of the channel group */
}
Dio_ChannelGroupType;

/* UNIONS --------------------------------------------------------------------*/

/* OTHER TYPEDEFS ------------------------------------------------------------*/

/*============================================================================*\
 * EXPORTED OBJECT DECLARATIONS
\*============================================================================*/

/* PRQA S 288 ++
   MISRA RULE 3.1 VIOLATION:
   Character (at) is required for doxygen syntax.
 */
/** \defgroup ChannelGroupDeclaration
 * \name Declaration of channel groups.
 * Channel group consists of several adjoining channels within a port.\n
 * \n
 * Note: ChannelGroup names are given only as an example of implementation.
 *
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-25-1}{SSA-REQ-DIO-109-1, SSA-REQ-DIO-140-1, SSA-REQ-DIO-229-1}
 * @{
 */
extern CONST(Dio_ChannelGroupType, DIO_CONST) Dio_Group1;
/* @}*/
/* PRQA S 288 -- */

/**
 * Table holding appropriate data registers.
 * Index of this table is Dio_ChannelGroupType.port.
 * Used only when at least one channel group is configured.
 */
extern CONST(Dio_PortInfoType, DIO_CONST) Dio_PortInfoLookup[DIO_NB_PORTS_WITH_CHANNEL_GROUPS];

/*============================================================================*\
 * EXPORTED FUNCTIONS PROTOTYPES
\*============================================================================*/

/*============================================================================*\
 * EXPORTED FUNCTION-LIKE-MACROS and INLINE FUNCTIONS
\*============================================================================*/

/* PRQA S 288 ++
   MISRA RULE 3.1 VIOLATION:
   Character (at) is required for doxygen syntax.
 */
/** \defgroup ReadWriteChannelPortMacros
 * \name Macros for channel and port operations.
 * \n
 * Note: Port and channel names are given only as an example of implementation - they depend on configuration.
 *
 * \Requirements
 * \reqtrace{SSA-SDD-DIO-18-1}{SSA-REQ-DIO-110-1, SSA-REQ-DIO-225-1}
 * @{
 */

/* Macros for accessing DIO_P0 */
#define DIO_CFG_WRITE_DIO_P0 (P0)
#define DIO_CFG_READ_DIO_P0 (P0)

#define DIO_CFG_WRITE_DIO_PIN_P00 (P0_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P00 (P0_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P01 (P0_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P01 (P0_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P02 (P0_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P02 (P0_bit.no2)

/* Macros for accessing DIO_P1 */
#define DIO_CFG_WRITE_DIO_P1 (P1)
#define DIO_CFG_READ_DIO_P1 (P1)

#define DIO_CFG_WRITE_DIO_PIN_P10 (P1_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P10 (P1_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P11 (P1_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P11 (P1_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P12 (P1_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P12 (P1_bit.no2)
#define DIO_CFG_WRITE_DIO_PIN_P13 (P1_bit.no3)
#define DIO_CFG_READ_DIO_PIN_P13 (P1_bit.no3)
#define DIO_CFG_WRITE_DIO_PIN_P14 (P1_bit.no4)
#define DIO_CFG_READ_DIO_PIN_P14 (P1_bit.no4)
#define DIO_CFG_WRITE_DIO_PIN_P15 (P1_bit.no5)
#define DIO_CFG_READ_DIO_PIN_P15 (P1_bit.no5)
#define DIO_CFG_WRITE_DIO_PIN_P16 (P1_bit.no6)
#define DIO_CFG_READ_DIO_PIN_P16 (P1_bit.no6)
#define DIO_CFG_WRITE_DIO_PIN_P17 (P1_bit.no7)
#define DIO_CFG_READ_DIO_PIN_P17 (P1_bit.no7)

/* Macros for accessing DIO_P3 */
#define DIO_CFG_WRITE_DIO_P3 (P3)
#define DIO_CFG_READ_DIO_P3 (P3)

#define DIO_CFG_WRITE_DIO_PIN_P30 (P3_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P30 (P3_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P31 (P3_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P31 (P3_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P32 (P3_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P32 (P3_bit.no2)

/* Macros for accessing DIO_P4 */
#define DIO_CFG_WRITE_DIO_P4 (P4)
#define DIO_CFG_READ_DIO_P4 (P4)

#define DIO_CFG_WRITE_DIO_PIN_P40 (P4_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P40 (P4_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P41 (P4_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P41 (P4_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P42 (P4_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P42 (P4_bit.no2)
#define DIO_CFG_WRITE_DIO_PIN_P43 (P4_bit.no3)
#define DIO_CFG_READ_DIO_PIN_P43 (P4_bit.no3)
#define DIO_CFG_WRITE_DIO_PIN_P44 (P4_bit.no4)
#define DIO_CFG_READ_DIO_PIN_P44 (P4_bit.no4)
#define DIO_CFG_WRITE_DIO_PIN_P45 (P4_bit.no5)
#define DIO_CFG_READ_DIO_PIN_P45 (P4_bit.no5)
#define DIO_CFG_WRITE_DIO_PIN_P46 (P4_bit.no6)
#define DIO_CFG_READ_DIO_PIN_P46 (P4_bit.no6)
#define DIO_CFG_WRITE_DIO_PIN_P47 (P4_bit.no7)
#define DIO_CFG_READ_DIO_PIN_P47 (P4_bit.no7)

/* Macros for accessing DIO_P5 */
#define DIO_CFG_WRITE_DIO_P5 (P5)
#define DIO_CFG_READ_DIO_P5 (P5)

#define DIO_CFG_WRITE_DIO_PIN_P50 (P5_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P50 (P5_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P51 (P5_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P51 (P5_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P52 (P5_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P52 (P5_bit.no2)
#define DIO_CFG_WRITE_DIO_PIN_P53 (P5_bit.no3)
#define DIO_CFG_READ_DIO_PIN_P53 (P5_bit.no3)
#define DIO_CFG_WRITE_DIO_PIN_P54 (P5_bit.no4)
#define DIO_CFG_READ_DIO_PIN_P54 (P5_bit.no4)
#define DIO_CFG_WRITE_DIO_PIN_P55 (P5_bit.no5)
#define DIO_CFG_READ_DIO_PIN_P55 (P5_bit.no5)
#define DIO_CFG_WRITE_DIO_PIN_P56 (P5_bit.no6)
#define DIO_CFG_READ_DIO_PIN_P56 (P5_bit.no6)
#define DIO_CFG_WRITE_DIO_PIN_P57 (P5_bit.no7)
#define DIO_CFG_READ_DIO_PIN_P57 (P5_bit.no7)

/* Macros for accessing DIO_P6 */
#define DIO_CFG_WRITE_DIO_P6 (P6)
#define DIO_CFG_READ_DIO_P6 (P6)

#define DIO_CFG_WRITE_DIO_PIN_P60 (P6_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P60 (P6_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P61 (P6_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P61 (P6_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P62 (P6_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P62 (P6_bit.no2)
#define DIO_CFG_WRITE_DIO_PIN_P63 (P6_bit.no3)
#define DIO_CFG_READ_DIO_PIN_P63 (P6_bit.no3)
#define DIO_CFG_WRITE_DIO_PIN_P64 (P6_bit.no4)
#define DIO_CFG_READ_DIO_PIN_P64 (P6_bit.no4)
#define DIO_CFG_WRITE_DIO_PIN_P65 (P6_bit.no5)
#define DIO_CFG_READ_DIO_PIN_P65 (P6_bit.no5)
#define DIO_CFG_WRITE_DIO_PIN_P66 (P6_bit.no6)
#define DIO_CFG_READ_DIO_PIN_P66 (P6_bit.no6)
#define DIO_CFG_WRITE_DIO_PIN_P67 (P6_bit.no7)
#define DIO_CFG_READ_DIO_PIN_P67 (P6_bit.no7)

/* Macros for accessing DIO_P7 */
#define DIO_CFG_WRITE_DIO_P7 (P7)
#define DIO_CFG_READ_DIO_P7 (P7)

#define DIO_CFG_WRITE_DIO_PIN_P70 (P7_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P70 (P7_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P71 (P7_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P71 (P7_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P72 (P7_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P72 (P7_bit.no2)
#define DIO_CFG_WRITE_DIO_PIN_P73 (P7_bit.no3)
#define DIO_CFG_READ_DIO_PIN_P73 (P7_bit.no3)
#define DIO_CFG_WRITE_DIO_PIN_P74 (P7_bit.no4)
#define DIO_CFG_READ_DIO_PIN_P74 (P7_bit.no4)
#define DIO_CFG_WRITE_DIO_PIN_P75 (P7_bit.no5)
#define DIO_CFG_READ_DIO_PIN_P75 (P7_bit.no5)
#define DIO_CFG_WRITE_DIO_PIN_P76 (P7_bit.no6)
#define DIO_CFG_READ_DIO_PIN_P76 (P7_bit.no6)
#define DIO_CFG_WRITE_DIO_PIN_P77 (P7_bit.no7)
#define DIO_CFG_READ_DIO_PIN_P77 (P7_bit.no7)

/* Macros for accessing DIO_P8 */
#define DIO_CFG_WRITE_DIO_P8 (P8)
#define DIO_CFG_READ_DIO_P8 (P8)

#define DIO_CFG_WRITE_DIO_PIN_P80 (P8_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P80 (P8_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P81 (P8_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P81 (P8_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P82 (P8_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P82 (P8_bit.no2)
#define DIO_CFG_WRITE_DIO_PIN_P83 (P8_bit.no3)
#define DIO_CFG_READ_DIO_PIN_P83 (P8_bit.no3)
#define DIO_CFG_WRITE_DIO_PIN_P84 (P8_bit.no4)
#define DIO_CFG_READ_DIO_PIN_P84 (P8_bit.no4)
#define DIO_CFG_WRITE_DIO_PIN_P85 (P8_bit.no5)
#define DIO_CFG_READ_DIO_PIN_P85 (P8_bit.no5)
#define DIO_CFG_WRITE_DIO_PIN_P86 (P8_bit.no6)
#define DIO_CFG_READ_DIO_PIN_P86 (P8_bit.no6)
#define DIO_CFG_WRITE_DIO_PIN_P87 (P8_bit.no7)
#define DIO_CFG_READ_DIO_PIN_P87 (P8_bit.no7)

/* Macros for accessing DIO_P9 */
#define DIO_CFG_WRITE_DIO_P9 (P9)
#define DIO_CFG_READ_DIO_P9 (P9)

#define DIO_CFG_WRITE_DIO_PIN_P90 (P9_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P90 (P9_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P91 (P9_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P91 (P9_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P92 (P9_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P92 (P9_bit.no2)
#define DIO_CFG_WRITE_DIO_PIN_P93 (P9_bit.no3)
#define DIO_CFG_READ_DIO_PIN_P93 (P9_bit.no3)
#define DIO_CFG_WRITE_DIO_PIN_P94 (P9_bit.no4)
#define DIO_CFG_READ_DIO_PIN_P94 (P9_bit.no4)
#define DIO_CFG_WRITE_DIO_PIN_P95 (P9_bit.no5)
#define DIO_CFG_READ_DIO_PIN_P95 (P9_bit.no5)
#define DIO_CFG_WRITE_DIO_PIN_P96 (P9_bit.no6)
#define DIO_CFG_READ_DIO_PIN_P96 (P9_bit.no6)
#define DIO_CFG_WRITE_DIO_PIN_P97 (P9_bit.no7)
#define DIO_CFG_READ_DIO_PIN_P97 (P9_bit.no7)

/* Macros for accessing DIO_P12 */
#define DIO_CFG_WRITE_DIO_P12 (P12)
#define DIO_CFG_READ_DIO_P12 (P12)

#define DIO_CFG_WRITE_DIO_PIN_P120 (P12_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P120 (P12_bit.no0)
#define DIO_CFG_WRITE_DIO_PIN_P121 (P12_bit.no1)
#define DIO_CFG_READ_DIO_PIN_P121 (P12_bit.no1)
#define DIO_CFG_WRITE_DIO_PIN_P122 (P12_bit.no2)
#define DIO_CFG_READ_DIO_PIN_P122 (P12_bit.no2)
#define DIO_CFG_WRITE_DIO_PIN_P123 (P12_bit.no3)
#define DIO_CFG_READ_DIO_PIN_P123 (P12_bit.no3)
#define DIO_CFG_WRITE_DIO_PIN_P124 (P12_bit.no4)
#define DIO_CFG_READ_DIO_PIN_P124 (P12_bit.no4)
#define DIO_CFG_WRITE_DIO_PIN_P125 (P12_bit.no5)
#define DIO_CFG_READ_DIO_PIN_P125 (P12_bit.no5)
#define DIO_CFG_WRITE_DIO_PIN_P126 (P12_bit.no6)
#define DIO_CFG_READ_DIO_PIN_P126 (P12_bit.no6)

/* Macros for accessing DIO_P13 */
#define DIO_CFG_WRITE_DIO_P13 (P13)
#define DIO_CFG_READ_DIO_P13 (P13)

#define DIO_CFG_WRITE_DIO_PIN_P130 (P13_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P130 (P13_bit.no0)

/* Macros for accessing DIO_P14 */
#define DIO_CFG_WRITE_DIO_P14 (P14)
#define DIO_CFG_READ_DIO_P14 (P14)

#define DIO_CFG_WRITE_DIO_PIN_P140 (P14_bit.no0)
#define DIO_CFG_READ_DIO_PIN_P140 (P14_bit.no0)

#endif   /* ifndef DIO_CFG_H */

/* END OF FILE -------------------------------------------------------------- */

