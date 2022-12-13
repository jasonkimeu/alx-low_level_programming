#include <stdio.h>
#include <stdlib.h>
#include "100-operations.h"
 
/**void connect()
{
    printf("Connected to C extension...\n");
}
 
//return random value in range of 0-50
int randNum()
{
    int nRand = rand() % 50; 
    return nRand;
}*/
 
//add two numbers and return value
int add(int a, int b)
{
    int nAdd = a + b;
    return nAdd;
}

// subtract two numbers and return value
int sub(int a, int b)
{
	int nSub = (a - b);
	return nSub;
}

// divide two numbers and return value
int div(int a, int b)
{
    int nDiv = a / b;
    return nDiv;
}

 // multiply two numbers and return value
int mul(int a, int b)
{
    int nMul = a * b;
    return nMul;
}

// modulus two numbers and return value
int mod(int a, int b)
{
    int nMod = a % b;
    return nMod;
}
