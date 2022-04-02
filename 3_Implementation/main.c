#include<stdio.h>

int main()
{
    int num1,num2;
    int op,res;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("Enter the number of operation you what to perform\n");
    printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Modulus \n6.Power \n");
    scanf("%d",&op);
    switch(op)
    {
        case 1 : res = num1+ num2;
                break;
        
        case 2 : res = num1 -  num2;
                break;

        case 3 : res = num1 * num2;
                break;

        case 4 : res = num1 / num2;
                break;
        
        case 5 : res = num1 % num2;
                break;

        case 6 : res = num1 ^ num2;
                break;

        default : printf("Enter a correct number for operation.\n");
    }
    return 0;

}