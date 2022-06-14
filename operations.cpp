#include <math.h>
#include <iostream>
#include <conio.h>
#include "operations.h"

using namespace std;

int sum(int number1, int number2)
{
	int result;
	__asm
	{
		mov eax, number1
		mov ebx, number2
		add eax, ebx
		mov result, eax
	}
	return result;
}

int substract(int number1, int number2)
{
	int result;
	__asm
	{
		mov eax, number1
		mov ebx, number2
		sub eax, ebx
		mov result, eax
	}
	return result;
}

int multiply(int number1, int number2)
{
	int result;
	__asm
	{
		mov eax, number1
		mov ebx, number2
		mul ebx
		mov result, eax
	}
	return result;
}

int division(int number1, int number2)
{
	int result;
	__asm
	{
		mov eax, number1
		mov edx, 0
		mov ebx, number2
		div ebx
		mov result, eax
	}
	return result;
}

int power(int number1, int number2)
{
	int result;
	__asm
	{
		mov eax, number1
		mov ecx, number2
		mov ebx, eax
		dec ecx
		multi: 
		mul ebx
		loop multi
		mov result, eax
	}
	return result;
}

int modulo(int number1, int number2)
{
	int result;
	__asm
	{
		mov eax, number1
		mov edx, 0
		mov ebx, number2
		div ebx
		mov result, edx
	}
	return result;
}



int factorial(int number1)
{
	int result;
	__asm
	{
		mov eax, number1
		mov ebx, eax
		dec ebx
		mov ecx, ebx
		fact:
		mul ecx
		loop fact
		mov result, eax
	}
	return result;
}