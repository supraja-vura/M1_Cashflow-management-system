/* 
Reference : Bharat Gopal
Link : https://github.com/Bharathgopal/M1_March_2022/tree/main/3_Implementation/version2
*/
#include "calci.h"

getStatus addition(int num1,int num2,int* res){
    long int add = num1+num2;
     
    if(add > INT_MAX)
        return OVERFLOW;

    if (add < INT_MIN)
        return UNDERFLOW;
    
    *res = add;
    return SUCCESS;
    
}

getStatus subtraction(int num1,int num2,int* res){
    long int sub = num1-num2;
     
    if(sub > INT_MAX)
        return OVERFLOW;

    if (sub < INT_MIN)
        return UNDERFLOW;
    
    *res = sub;
    return SUCCESS;
    
}

getStatus multiplication(int num1,int num2,int* res){
    long int mul = num1*num2;
     
    if(mul > INT_MAX)
        return OVERFLOW;

    if (mul < INT_MIN)
        return UNDERFLOW;
    
    *res = mul;
    return SUCCESS;
    
}

getStatus division(int num1,int num2,int* res){
    long int div = num1/num2;
     
    if(div > INT_MAX)
        return OVERFLOW;

    if (div < INT_MIN)
        return UNDERFLOW;
    
    *res = div;
    return SUCCESS;
    
}

getStatus modulus(int num1,int num2,int* res){
    long int mod = num1%num2;
     
    if(mod > INT_MAX)
        return OVERFLOW;

    if (mod < INT_MIN)
        return UNDERFLOW;
    
    *res = mod;
    return SUCCESS;
    
}

getStatus power(int num1,int num2,int* res){
    long int pow = num1 ^ num2;
     
    if(pow > INT_MAX)
        return OVERFLOW;

    if (pow < INT_MIN)
        return UNDERFLOW;
    
    *res = pow;
    return SUCCESS;
    
}