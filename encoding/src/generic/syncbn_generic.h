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
#define THC_GENERIC_FILE "generic/syncbn_generic.h"
#else

int Encoding_(batchnorm_Forward)(THCTensor *output_, THCTensor *input_, 
        THCTensor *mean_, THCTensor *invstd_,
        THCTensor *gamma_, THCTensor *beta_);

int Encoding_(batchnorm_Backward)(THCTensor *gradoutput_, 
        THCTensor *input_, THCTensor *gradinput_, 
        THCTensor *gradgamma_, THCTensor *gradbeta_, THCTensor *mean_, 
        THCTensor *invstd_, THCTensor *gamma_, THCTensor *beta_, 
        THCTensor *gradMean_, THCTensor *gradStd_, int train);

int Encoding_(sum_square_Forward)(THCTensor *input_, 
        THCTensor *sum_, THCTensor *square_);

int Encoding_(sum_square_Backward)(
        THCTensor *gradInput, THCTensor *input_, 
        THCTensor *gradSum_, THCTensor *gradSquare_);

#endif
