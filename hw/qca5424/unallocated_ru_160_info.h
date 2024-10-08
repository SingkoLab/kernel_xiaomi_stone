
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _UNALLOCATED_RU_160_INFO_H_
#define _UNALLOCATED_RU_160_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_UNALLOCATED_RU_160_INFO 1


struct unallocated_ru_160_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t subband80_0_cc0                                         :  8,  
                      subband80_0_cc1                                         :  8,  
                      subband80_1_cc0                                         :  8,  
                      subband80_1_cc1                                         :  8;  
#else
             uint32_t subband80_1_cc1                                         :  8,  
                      subband80_1_cc0                                         :  8,  
                      subband80_0_cc1                                         :  8,  
                      subband80_0_cc0                                         :  8;  
#endif
};


 

#define UNALLOCATED_RU_160_INFO_SUBBAND80_0_CC0_OFFSET                              0x00000000
#define UNALLOCATED_RU_160_INFO_SUBBAND80_0_CC0_LSB                                 0
#define UNALLOCATED_RU_160_INFO_SUBBAND80_0_CC0_MSB                                 7
#define UNALLOCATED_RU_160_INFO_SUBBAND80_0_CC0_MASK                                0x000000ff


 

#define UNALLOCATED_RU_160_INFO_SUBBAND80_0_CC1_OFFSET                              0x00000000
#define UNALLOCATED_RU_160_INFO_SUBBAND80_0_CC1_LSB                                 8
#define UNALLOCATED_RU_160_INFO_SUBBAND80_0_CC1_MSB                                 15
#define UNALLOCATED_RU_160_INFO_SUBBAND80_0_CC1_MASK                                0x0000ff00


 

#define UNALLOCATED_RU_160_INFO_SUBBAND80_1_CC0_OFFSET                              0x00000000
#define UNALLOCATED_RU_160_INFO_SUBBAND80_1_CC0_LSB                                 16
#define UNALLOCATED_RU_160_INFO_SUBBAND80_1_CC0_MSB                                 23
#define UNALLOCATED_RU_160_INFO_SUBBAND80_1_CC0_MASK                                0x00ff0000


 

#define UNALLOCATED_RU_160_INFO_SUBBAND80_1_CC1_OFFSET                              0x00000000
#define UNALLOCATED_RU_160_INFO_SUBBAND80_1_CC1_LSB                                 24
#define UNALLOCATED_RU_160_INFO_SUBBAND80_1_CC1_MSB                                 31
#define UNALLOCATED_RU_160_INFO_SUBBAND80_1_CC1_MASK                                0xff000000



#endif    
