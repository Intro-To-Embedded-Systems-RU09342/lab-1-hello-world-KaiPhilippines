//******************************************************************************
// Lab 1: Hello World
//
// math.c
//
// Kyle Limbaga
// Rowan University
// Date Created: September 28, 2019
// Date Updated: October 5, 2019
//******************************************************************************
#include<stdio.h>
#include<math.h>

// To call math(#, #, operator)
int math(int num1, int num2, char Operator)
{
    switch(Operator){
    case '+':   //add
        return num1+num2;
    case '-':   //subtract
        return num1-num2;
    case '*':   //multiply
        return num1*num2;
    case '/':   //divide
        return num1/num2;
    case '%':   //modulus
        return num1%num2;
    case '<':   //shift left
        return num1<<num2;
    case '>':   //shift right
        return num1>>num2;
    case '&':   //bitwise and
        return num1&num2;
    case '|':   //bitwise or
        return num1|num2;
    case '^':   //bitwise xor
        return num1^num2;
    case '~':   //bitwise inverse; no case for ~num2
        return ~num1;
    default: printf("Invalid Operator entered");//prints if none of the above operators were entered
           break;
    }
    return 0;
}

