#include <iostream>
#include <Windows.h>
int main()
{
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int one = 0;
	int two = 0;
	char sign = '0';

	std::cout << "������� ����� ";
	std::cin >> one;
	std::cout << "�������� ����" << " + - * / % ";
	std::cin >> sign;
	
	std::cout << "������� ������ ����� ";
	std::cin >> two;
	if (sign == '+')
	{
		std::cout << one + two;
	}
	else if (sign == '-')
	{
		std::cout << one - two;
	}
	else if (sign == '*')
	{
		std::cout << one * two;
	}
	else if (sign == '/' && two != 0)
	{
		std::cout << one / two;
	}
	else if (sign == '%')
	{
		std::cout << one * two * 0,01;
	}
	else if (sign != '+' && sign != '-' && sign != '*' && sign != '/' && sign != '%' && two == 0)
	{
		std::cout << "������";
	}
	










	return 0;
}