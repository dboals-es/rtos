//==============================================================================
// Copyright 2020 Daniel Boals & Michael Boals
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE.
//==============================================================================

#include "types.h"

status_t Gic400DistributorInit(void* gicMmio, /*UNUSED*/ uint32_t interrupt);
status_t Gic400CpuInit(void* gicMmio, /*UNUSED*/ uint32_t interrupt);
void Gic400SoftwareInterrupt(uint32_t interrupt, uint32_t cpu);

#define GIC_INTERRUPT_ID_MASK()



#define SGI_0_INT_ID    (0)
#define SGI_1_INT_ID    (1)
#define SGI_2_INT_ID    (2)
#define SGI_3_INT_ID    (3)
#define SGI_4_INT_ID    (4)
#define SGI_5_INT_ID    (5)
#define SGI_6_INT_ID    (6)
#define SGI_7_INT_ID    (7)
#define SGI_8_INT_ID    (8)
#define SGI_9_INT_ID    (9)
#define SGI_10_INT_ID    (10)
#define SGI_11_INT_ID    (11)
#define SGI_12_INT_ID    (12)
#define SGI_13_INT_ID    (13)
#define SGI_14_INT_ID    (14)
#define SGI_15_INT_ID    (15)