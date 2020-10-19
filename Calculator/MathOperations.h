//
//  MathOperations.h
//  Calculator
//
//  Created by A4-iMAC01 on 19/10/2020.
//

#ifndef MathOperations_h
#define MathOperations_h
@interface MathOperations : NSObject
-(bool)insertFirstOperator:(double)firstNumber;
-(void)insertOperation:(char)operation;
-(bool)insertSecondOperator:(double)secondNumber;
-(double)getSolution;
@end
#endif /* MathOperations_h */
