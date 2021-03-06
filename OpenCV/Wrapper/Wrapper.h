//
//  Wrapper.h
//  APO
//
//  Created by Kacper on 07/08/2021.
//

#ifndef Wrapper_h
#define Wrapper_h

#include <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


/**
        Definitions of functions
 */
@interface Wrapper: NSObject
//+ (NSString *)GreetingsString;

+(UIImage *) convertGrayscale:(UIImage *)src;
+(UIImage *) convertNegative:(UIImage *)src;
+(UIImage *) convertBinary:(UIImage *)src;
+(UIImage *) equalization:(UIImage *)src;

+(UIImage *) tresholding:(UIImage *)src tresholds:(int)level;
+(UIImage *) tresholdingAdaptive:(UIImage *)src tresholds:(int)level;
+(UIImage *) tresholdingOtsu:(UIImage *)src tresholds:(int)level;

+(UIImage *) blur:(UIImage *)src withKernel:(int)kernelSize;
+(UIImage *) blurGaussian:(UIImage *)src withKernel:(int)kernelSize;
+(UIImage *) blurSobel:(UIImage *)src withKernel:(int)kernelSize;
+(UIImage *) blurLaplacian:(UIImage *)src withKernel:(int)kernelSize;
+(UIImage *) blurCanny:(UIImage *)src withKernel:(int)kernelSize;

+(UIImage *) bitwiseAND:(UIImage *)src withImage:(UIImage *)second;
+(UIImage *) bitwiseOR:(UIImage *)src withImage:(UIImage *)second;
+(UIImage *) bitwiseNOT:(UIImage *)src;
+(UIImage *) bitwiseXOR:(UIImage *)src withImage:(UIImage *)second;

+(UIImage *) morphErode:(UIImage *)src;
+(UIImage *) morphDilate:(UIImage *)src;
+(UIImage *) morphOpen:(UIImage *)src;
+(UIImage *) morphClose:(UIImage *)src;
+(UIImage *) morphSkale:(UIImage *)src;

+(int) depth:(UIImage *)src;
+(int) getPixelAt:(UIImage *)src X:(int)x Y:(int)y;

@end

#endif /* Wrapper_h */
