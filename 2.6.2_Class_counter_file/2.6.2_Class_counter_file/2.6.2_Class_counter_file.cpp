#include <windows.h>

#include <iostream>
#include <string>

#include "counter.h"

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string inText;
	int start;
	do
	{
		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:";
		std::cin >> inText;
		if (inText == "да")
		{
			std::cout << "Введите начальное значение счётчика:";
			std::cin >> start;
			Counter count(start);
			counting(count);
			break;
		}
		else if (inText == "нет")
		{
			Counter count;
			counting(count);
			break;
		}		
		else
		{
			std::cout << "Неверный ввод!\n";
		}
	} while (true);	
	std::system("pause");
}
