#ifndef _CALCI_H_
#define _CALCI_H_

#include<stdio.h>
#include<limits.h>

typedef enum getStatus
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}getStatus;

getStatus addition(int num1,int num2,int* res);
getStatus subtraction(int num1,int num2,int* res);
getStatus multiplication(int num1,int num2,int* res);
getStatus division(int num1,int num2,int* res);
getStatus modulus(int num1,int num2,int* res);
getStatus power(int num1,int num2,int *res);

#endif 