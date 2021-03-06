/*
 * Support for Medfield PNW Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 Intel Corporation. All Rights Reserved.
 *
 * Copyright (c) 2010 Silicon Hive www.siliconhive.com.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef _cell_params_h
#define _cell_params_h

#define SP_PMEM_LOG_WIDTH_BITS           6  /*Width of PC, 64 bits, 8 bytes*/
#define SP_ICACHE_TAG_BITS               4  /*size of tag*/
#define SP_ICACHE_SET_BITS               8  /* 256 sets*/
#define SP_ICACHE_BLOCKS_PER_SET_BITS    1  /* 2 way associative*/
#define SP_ICACHE_BLOCK_ADDRESS_BITS     11 /* 2048 lines capacity*/

#define SP_ICACHE_ADDRESS_BITS \
	                    (SP_ICACHE_TAG_BITS+SP_ICACHE_BLOCK_ADDRESS_BITS)

#define SP_PMEM_DEPTH        (1<<SP_ICACHE_ADDRESS_BITS)

#define SP_FIFO_0_DEPTH      0
#define SP_FIFO_1_DEPTH      0
#define SP_FIFO_2_DEPTH      0
#define SP_FIFO_3_DEPTH      0
#define SP_FIFO_4_DEPTH      0
#define SP_FIFO_5_DEPTH      0
#define SP_FIFO_6_DEPTH      0
#define SP_FIFO_7_DEPTH      0


#define SP_SLV_BUS_MAXBURSTSIZE        1

#endif /* _cell_params_h */

