/******************************************************************************
!  Copyright(C) 2009-2014 Intel Corporation. All Rights Reserved.
!
!  The source code, information  and  material ("Material") contained herein is
!  owned  by Intel Corporation or its suppliers or licensors, and title to such
!  Material remains  with Intel Corporation  or its suppliers or licensors. The
!  Material  contains proprietary information  of  Intel or  its  suppliers and
!  licensors. The  Material is protected by worldwide copyright laws and treaty
!  provisions. No  part  of  the  Material  may  be  used,  copied, reproduced,
!  modified, published, uploaded, posted, transmitted, distributed or disclosed
!  in any way  without Intel's  prior  express written  permission. No  license
!  under  any patent, copyright  or  other intellectual property rights  in the
!  Material  is  granted  to  or  conferred  upon  you,  either  expressly,  by
!  implication, inducement,  estoppel or  otherwise.  Any  license  under  such
!  intellectual  property  rights must  be express  and  approved  by  Intel in
!  writing.
!
!  *Third Party trademarks are the property of their respective owners.
!
!  Unless otherwise  agreed  by Intel  in writing, you may not remove  or alter
!  this  notice or  any other notice embedded  in Materials by Intel or Intel's
!  suppliers or licensors in any way.
!
!******************************************************************************/
/* 
 * -- High Performance Computing Linpack Benchmark (HPL)                
 *    HPL - 2.1 - October 26, 2012
 *    Antoine P. Petitet                                                
 *    University of Tennessee, Knoxville                                
 *    Innovative Computing Laboratory                                 
 *    (C) Copyright 2000-2008 All Rights Reserved                       
 *                                                                      
 * -- Copyright notice and Licensing terms:                             
 *                                                                      
 * Redistribution  and  use in  source and binary forms, with or without
 * modification, are  permitted provided  that the following  conditions
 * are met:                                                             
 *                                                                      
 * 1. Redistributions  of  source  code  must retain the above copyright
 * notice, this list of conditions and the following disclaimer.        
 *                                                                      
 * 2. Redistributions in binary form must reproduce  the above copyright
 * notice, this list of conditions,  and the following disclaimer in the
 * documentation and/or other materials provided with the distribution. 
 *                                                                      
 * 3. All  advertising  materials  mentioning  features  or  use of this
 * software must display the following acknowledgement:                 
 * This  product  includes  software  developed  at  the  University  of
 * Tennessee, Knoxville, Innovative Computing Laboratory.             
 *                                                                      
 * 4. The name of the  University,  the name of the  Laboratory,  or the
 * names  of  its  contributors  may  not  be used to endorse or promote
 * products  derived   from   this  software  without  specific  written
 * permission.                                                          
 *                                                                      
 * -- Disclaimer:                                                       
 *                                                                      
 * THIS  SOFTWARE  IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,  INCLUDING,  BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE UNIVERSITY
 * OR  CONTRIBUTORS  BE  LIABLE FOR ANY  DIRECT,  INDIRECT,  INCIDENTAL,
 * SPECIAL,  EXEMPLARY,  OR  CONSEQUENTIAL DAMAGES  (INCLUDING,  BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA OR PROFITS; OR BUSINESS INTERRUPTION)  HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT,  STRICT LIABILITY,  OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */ 
#ifndef HPL_H
#define HPL_H
/*
 * ---------------------------------------------------------------------
 * HPL default compile options that can overridden in the Make.<arch>
 * ---------------------------------------------------------------------
 */
#ifndef HPL_NO_MPI_DATATYPE         /* Use MPI user-defined data type */
#define HPL_USE_MPI_DATATYPE
#endif
 
#ifndef HPL_COPY_L  /* do not copy L, use MPI user-defined data types */
#define HPL_NO_COPY_L
#endif
 
#ifndef HPL_DETAILED_TIMING         /* Do not enable detailed timings */
#define HPL_NO_DETAILED_TIMING
#endif
 
#ifndef HPL_CALL_VSIPL          /* Call the Fortran 77 BLAS interface */
#ifndef HPL_CALL_CBLAS                       /* there can be only one */
#define HPL_CALL_FBLAS
#endif
#endif
/*
 * ---------------------------------------------------------------------
 * Include files
 * ---------------------------------------------------------------------
 */
#ifdef OFFLOAD
#include "hpl_global.h"
#endif
#include "hpl_misc.h"
#include "hpl_blas.h"
#include "hpl_auxil.h"
#include "hpl_gesv.h"

#include "hpl_pmisc.h"
#include "hpl_pauxil.h"
#include "hpl_panel.h"
#include "hpl_pfact.h"
#include "hpl_pgesv.h"

#include "hpl_timer.h"
#include "hpl_matgen.h"
#include "hpl_test.h"

#include "hpl_ptimer.h"
#include "hpl_pmatgen.h"
#include "hpl_ptest.h"

#endif
/*
 * End of hpl.h
 */
