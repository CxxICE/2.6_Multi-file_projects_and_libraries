#pragma once

class Counter
{
public:
	Counter();
	Counter(int count);
	void plus();
	void minus();
	int equals();
private:
	int count;
};

void counting(Counter &count);
