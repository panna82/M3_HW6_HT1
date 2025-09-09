
#include <iostream>
#include "Windows.h"
#define MODE 1

int add(int a, int b)
{
	return a + b;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

#ifndef MODE
#error "Необходимо определить MODE!"
#endif // !MODE

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	{
	int a=0, b=0;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Результат сложения:  " << add(a, b) << std::endl;
	}
#else 
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif // MODE == 0
}


