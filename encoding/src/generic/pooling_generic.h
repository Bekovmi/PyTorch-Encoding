/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * Created by: Hang Zhang
 * ECE Department, Rutgers University
 * Email: zhang.hang@rutgers.edu
 * Copyright (c) 2017
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree 
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 */
#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "generic/pooling_generic.c"
#else

int Encoding_(DilatedAvgPool2d_Forward)(
    THCTensor *X_, THCTensor *Y_, 
    int kH, int kW, int dH, int dW,
    int padH, int padW,
    int dilationH, int dilationW);

int Encoding_(DilatedAvgPool2d_Backward)(
    THCTensor *gradX_, THCTensor *gradY_, 
    int kH, int kW, int dH, int dW,
    int padH, int padW,
    int dilationH, int dilationW);

#endif
