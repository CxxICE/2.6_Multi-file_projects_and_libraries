#include "math_calc.h"

#include <iostream>
#include <cmath> //��� ���������� � �������, �.�. ���������� � ������� ������� - �� ����������� ������

void add(double num1, double num2)
{
	std::cout << num1 << " ���� " << num2 << " = " << num1 + num2 << std::endl;
}

void sub(double num1, double num2)
{
	std::cout << num1 << " ����� " << num2 << " = " << num1 - num2 << std::endl;
}

void mul(double num1, double num2)
{
	std::cout << num1 << " �������� �� " << num2 << " = " << num1 * num2 << std::endl;
}

void div(double num1, double num2)
{
	if (num2 == 0)
	{
		std::cout << "������� �� ���� ����������" << std::endl;
	}
	else
	{
		std::cout << num1 << " ��������� �� " << num2 << " = " << num1 / num2 << std::endl;
	}	
}

void exp(double num1, double num2)
{
	std::cout << num1 << " � ������� " << num2 << " = " << std::pow(num1, num2) << std::endl;	
}