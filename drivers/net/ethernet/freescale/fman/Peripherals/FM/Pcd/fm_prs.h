/*
 * Copyright 2008-2012 Freescale Semiconductor Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Freescale Semiconductor nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 *
 * ALTERNATIVELY, this software may be distributed under the terms of the
 * GNU General Public License ("GPL") as published by the Free Software
 * Foundation, either version 2 of that License or (at your option) any
 * later version.
 *
 * THIS SOFTWARE IS PROVIDED BY Freescale Semiconductor ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Freescale Semiconductor BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


/******************************************************************************
 @File          fm_prs.h

 @Description   FM Parser private header
*//***************************************************************************/
#ifndef __FM_PRS_H
#define __FM_PRS_H

#include "std_ext.h"


/***********************************************************************/
/*          SW parser IP_FRAG patch                                    */
/***********************************************************************/


#ifdef FM_CAPWAP_SUPPORT
#define SW_PRS_UDP_LITE_PATCH   \
{\
    0x31,0x92,0x50,0x29,0x00,0x88,0x08,0x16,0x00,0x00, \
    0x00,0x01,0x00,0x05,0x00,0x81,0x1C,0x0B,0x00,0x01, \
    0x1B,0xFF,                                    \
}
#endif /* FM_CAPWAP_SUPPORT */

#if (DPAA_VERSION == 10)
/* Version: 106.1.9 */
#define SW_PRS_IP_FRAG_PATCH                           \
{                                                      \
    0x31,0x52,0x00,0xDA,0x0A,0x00,0x00,0x00,0x00,0x00, \
    0x00,0x00,0x43,0x0A,0x00,0x00,0x00,0x01,0x1B,0xFE, \
    0x00,0x00,0x99,0x00,0x53,0x13,0x00,0x00,0x00,0x00, \
    0x9F,0x98,0x53,0x13,0x00,0x00,0x1B,0x23,0x33,0xF1, \
    0x00,0xF9,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00, \
    0x28,0x7F,0x00,0x03,0x00,0x02,0x00,0x00,0x00,0x01, \
    0x32,0xC1,0x32,0xF0,0x00,0x4A,0x00,0x80,0x1F,0xFF, \
    0x00,0x01,0x1B,0xFE,0x31,0x52,0x00,0xDA,0x06,0x00, \
    0x00,0x00,0x00,0x00,0x00,0x00,0x43,0x2F,0x00,0x00, \
    0x00,0x01,0x1B,0xFE,0x31,0x52,0x00,0xDA,0x00,0x40, \
    0x00,0x00,0x00,0x00,0x00,0x00,0x53,0x95,0x00,0x00, \
    0x00,0x00,0x9B,0x8F,0x2F,0x0F,0x32,0xC1,0x00,0x55, \
    0x00,0x28,0x28,0x43,0x30,0x7E,0x43,0x45,0x00,0x00, \
    0x30,0x7E,0x43,0x45,0x00,0x3C,0x1B,0x5D,0x32,0x11, \
    0x32,0xC0,0x00,0x4F,0x00,0x81,0x00,0x00,0x83,0x8F, \
    0x2F,0x0F,0x06,0x00,0x32,0x11,0x32,0xC0,0x00,0x4F, \
    0x00,0x55,0x00,0x01,0x00,0x81,0x32,0x11,0x00,0x00, \
    0x83,0x8E,0x00,0x50,0x00,0x01,0x01,0x04,0x00,0x4D, \
    0x28,0x43,0x06,0x00,0x1B,0x3E,0x30,0x7E,0x53,0x79, \
    0x00,0x2B,0x32,0x11,0x32,0xC0,0x00,0x4F,0x00,0x81, \
    0x00,0x00,0x87,0x8F,0x28,0x23,0x06,0x00,0x32,0x11, \
    0x32,0xC0,0x00,0x4F,0x00,0x55,0x00,0x01,0x00,0x81, \
    0x32,0x11,0x00,0x00,0x83,0x8E,0x00,0x50,0x00,0x01, \
    0x01,0x04,0x00,0x4D,0x28,0x43,0x06,0x00,0x00,0x01, \
    0x1B,0xFE,0x00,0x00,0x9B,0x8E,0x53,0x90,0x00,0x00, \
    0x06,0x29,0x00,0x00,0x83,0x8F,0x28,0x23,0x06,0x00, \
    0x06,0x29,0x32,0xC1,0x00,0x55,0x00,0x28,0x00,0x00, \
    0x83,0x8E,0x00,0x50,0x00,0x01,0x01,0x04,0x00,0x4D, \
    0x28,0x43,0x06,0x00,0x00,0x01,0x1B,0xFE,0x32,0xC1, \
    0x00,0x55,0x00,0x28,0x28,0x43,0x1B,0xCF,0x00,0x00, \
    0x9B,0x8F,0x2F,0x0F,0x32,0xC1,0x00,0x55,0x00,0x28, \
    0x28,0x43,0x30,0x7E,0x43,0xBF,0x00,0x2C,0x32,0x11, \
    0x32,0xC0,0x00,0x4F,0x00,0x81,0x00,0x00,0x87,0x8F, \
    0x28,0x23,0x06,0x00,0x32,0x11,0x32,0xC0,0x00,0x4F, \
    0x00,0x81,0x00,0x00,0x83,0x8F,0x2F,0x0F,0x06,0x00, \
    0x32,0x11,0x32,0xC0,0x00,0x4F,0x00,0x55,0x00,0x01, \
    0x00,0x81,0x32,0x11,0x00,0x00,0x83,0x8E,0x00,0x50, \
    0x00,0x01,0x01,0x04,0x00,0x4D,0x28,0x43,0x06,0x00, \
    0x1B,0x9C,0x33,0xF1,0x00,0xF9,0x00,0x01,0x00,0x00, \
    0x00,0x00,0x00,0x00,0x28,0x7F,0x00,0x03,0x00,0x02, \
    0x00,0x00,0x00,0x01,0x32,0xC1,0x32,0xF0,0x00,0x4A, \
    0x00,0x80,0x1F,0xFF,0x00,0x01,0x1B,0xFE,           \
}

#else
/* version: 106.3.13 */
#define SW_PRS_IP_FRAG_PATCH                           \
{                                                      \
    0x31,0x52,0x00,0xDA,0x0E,0x4F,0x00,0x00,0x00,0x00, \
    0x00,0x00,0x52,0xF6,0x08,0x4B,0x31,0x53,0x00,0xFB, \
    0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0x2B, \
    0x33,0xF1,0x00,0xFB,0x00,0xDF,0x00,0x00,0x00,0x00, \
    0x00,0x00,0x28,0x7F,0x31,0x52,0x00,0xDA,0x0A,0x00, \
    0x00,0x00,0x00,0x00,0x00,0x00,0x43,0x00,0x00,0x00, \
    0x00,0x01,0x1B,0xFE,0x00,0x00,0x99,0x00,0x53,0x09, \
    0x00,0x00,0x00,0x00,0x9F,0x98,0x53,0x09,0x00,0x00, \
    0x1B,0x24,0x09,0x5F,0x00,0x20,0x00,0x00,0x09,0x4F, \
    0x00,0x20,0x00,0x00,0x34,0xB7,0x00,0xF9,0x00,0x00, \
    0x01,0x00,0x00,0x00,0x00,0x00,0x2B,0x97,0x31,0xB3, \
    0x29,0x8F,0x33,0xF1,0x00,0xF9,0x00,0x01,0x00,0x00, \
    0x00,0x00,0x00,0x00,0x28,0x7F,0x00,0x03,0x00,0x02, \
    0x00,0x00,0x00,0x01,0x1B,0xFE,0x00,0x01,0x1B,0xFE, \
    0x31,0x52,0x00,0xDA,0x0E,0x4F,0x00,0x00,0x00,0x00, \
    0x00,0x00,0x53,0x3C,0x04,0x4B,0x31,0x53,0x00,0xFB, \
    0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0x2B, \
    0x33,0xF1,0x00,0xFB,0x00,0xDF,0x00,0x00,0x00,0x00, \
    0x00,0x00,0x28,0x7F,0x31,0x52,0x00,0xDA,0x06,0x00, \
    0x00,0x00,0x00,0x00,0x00,0x00,0x43,0x46,0x00,0x00, \
    0x00,0x01,0x1B,0xFE,0x31,0x52,0x00,0xDA,0x00,0x40, \
    0x00,0x00,0x00,0x00,0x00,0x00,0x53,0xAC,0x00,0x00, \
    0x00,0x00,0x9B,0x8F,0x2F,0x0F,0x32,0xC1,0x00,0x55, \
    0x00,0x28,0x28,0x43,0x30,0x7E,0x43,0x5C,0x00,0x00, \
    0x30,0x7E,0x43,0x5C,0x00,0x3C,0x1B,0x74,0x32,0x11, \
    0x32,0xC0,0x00,0x4F,0x00,0x81,0x00,0x00,0x83,0x8F, \
    0x2F,0x0F,0x06,0x00,0x32,0x11,0x32,0xC0,0x00,0x4F, \
    0x00,0x55,0x00,0x01,0x00,0x81,0x32,0x11,0x00,0x00, \
    0x83,0x8E,0x00,0x50,0x00,0x01,0x01,0x04,0x00,0x4D, \
    0x28,0x43,0x06,0x00,0x1B,0x55,0x30,0x7E,0x53,0x90, \
    0x00,0x2B,0x32,0x11,0x32,0xC0,0x00,0x4F,0x00,0x81, \
    0x00,0x00,0x87,0x8F,0x28,0x23,0x06,0x00,0x32,0x11, \
    0x32,0xC0,0x00,0x4F,0x00,0x55,0x00,0x01,0x00,0x81, \
    0x32,0x11,0x00,0x00,0x83,0x8E,0x00,0x50,0x00,0x01, \
    0x01,0x04,0x00,0x4D,0x28,0x43,0x06,0x00,0x00,0x01, \
    0x1B,0xFE,0x00,0x00,0x9B,0x8E,0x53,0xA7,0x00,0x00, \
    0x06,0x29,0x00,0x00,0x83,0x8F,0x28,0x23,0x06,0x00, \
    0x06,0x29,0x32,0xC1,0x00,0x55,0x00,0x28,0x00,0x00, \
    0x83,0x8E,0x00,0x50,0x00,0x01,0x01,0x04,0x00,0x4D, \
    0x28,0x43,0x06,0x00,0x00,0x01,0x1B,0xFE,0x32,0xC1, \
    0x00,0x55,0x00,0x28,0x28,0x43,0x1B,0xF1,0x00,0x00, \
    0x9B,0x8F,0x2F,0x0F,0x32,0xC1,0x00,0x55,0x00,0x28, \
    0x28,0x43,0x30,0x7E,0x43,0xD6,0x00,0x2C,0x32,0x11, \
    0x32,0xC0,0x00,0x4F,0x00,0x81,0x00,0x00,0x87,0x8F, \
    0x28,0x23,0x06,0x00,0x32,0x11,0x32,0xC0,0x00,0x4F, \
    0x00,0x81,0x00,0x00,0x83,0x8F,0x2F,0x0F,0x06,0x00, \
    0x32,0x11,0x32,0xC0,0x00,0x4F,0x00,0x55,0x00,0x01, \
    0x00,0x81,0x32,0x11,0x00,0x00,0x83,0x8E,0x00,0x50, \
    0x00,0x01,0x01,0x04,0x00,0x4D,0x28,0x43,0x06,0x00, \
    0x1B,0xB3,0x09,0x5F,0x00,0x20,0x00,0x00,0x09,0x4F, \
    0x00,0x20,0x00,0x00,0x34,0xB7,0x00,0xF9,0x00,0x00, \
    0x01,0x00,0x00,0x00,0x00,0x00,0x2B,0x97,0x31,0xB3, \
    0x29,0x8F,0x33,0xF1,0x00,0xF9,0x00,0x01,0x00,0x00, \
    0x00,0x00,0x00,0x00,0x28,0x7F,0x00,0x03,0x00,0x02, \
    0x00,0x00,0x00,0x01,0x1B,0xFE,0x00,0x01,0x1B,0xFE, \
}
#endif /* (DPAA_VERSION == 10) */

/****************************/
/* Parser defines           */
/****************************/
#define FM_PCD_PRS_SW_TAIL_SIZE             4                   /**< Number of bytes that must be cleared at
                                                                             the end of the SW parser area */

/* masks */
#define PRS_ERR_CAP                         0x80000000
#define PRS_ERR_TYPE_DOUBLE                 0x40000000
#define PRS_ERR_SINGLE_ECC_CNT_MASK         0x00FF0000
#define PRS_ERR_ADDR_MASK                   0x000001FF

/* others */
#define PRS_MAX_CYCLE_LIMIT                 8191
#define PRS_SW_DATA                         0x00000800
#define PRS_REGS_OFFSET                     0x00000840

#define GET_FM_PCD_PRS_PORT_ID(prsPortId,hardwarePortId) \
    prsPortId = (uint8_t)(hardwarePortId & 0x0f)

#define GET_FM_PCD_INDEX_FLAG(bitMask, prsPortId)    \
    bitMask = 0x80000000>>prsPortId


#endif /* __FM_PRS_H */
