#include "counter.h"

#include <iostream>

Counter::Counter()
{
	this->count = 1;
}

Counter::Counter(int count)
{
	this->count = count;
}

void Counter::plus()
{
	++count;
}

void Counter::minus()
{
	--count;
}

int Counter::equals()
{
	return count;
}

void counting(Counter &count)
{
	std::string inText;
	do
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'):";
		std::cin >> inText;
		if (inText == "+")
		{
			count.plus();
		}
		else if (inText == "-")
		{
			count.minus();
		}
		else if (inText == "=")
		{
			std::cout << count.equals() << '\n';
		}
		else if (inText == "x")
		{
			std::cout << "До свидания!\n";
			break;
		}
		else
		{
			std::cout << "Неверный ввод!\n";
		}
	} while (true);    
}