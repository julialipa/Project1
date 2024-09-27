#include <iostream>
#include <Windows.h>
int main()
{
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int rub;
	int eur = 103.19;
	int usd = 92.41;
	int cny = 13.15;
	int jpy = 0.63;
	int kzt = 0.19; 
	int Farit = 37;
	int currency;
	int choice;
	std::cout << "Введите сколько рублей хотите обменять: \n";
	std::cin >> rub;
	std::cout << "eur = 103,19 рубля, usd = 92,41 рубля, cny = 13,15 рубля, jpy = 0,63 рубля, kzt = 0,19 рублей, Farit = 37 рублей\n ";
	std::cout << "Выберите валюту в которую хотите перевести рубли : \n";
	std::cin >> currency;
	do {
		std::cout << (rub / currency) - ((rub / currency) / 0, 5) << "/t Коммиссия: " << ((rub / currency) / 0, 5) << " рублей";
	} while (true);
	
	return 0;
}



//Калькулятор-----------------------------------------------------------------------------------
//int one = 0;
//int two = 0;
//char sign = '0';

//std::cout << "Введите число ";
//std::cin >> one;
//std::cout << "Выберете знак" << " + - * / % ";
//std::cin >> sign;

//std::cout << "Введите второе число ";
//std::cin >> two;
//if (sign == '+')
//{
//	std::cout << one + two;
//}
//else if (sign == '-')
//{
//	std::cout << one - two;
//}
//else if (sign == '*')
//{
//	std::cout << one * two;
//}
//else if (sign == '/' && two != 0)
//{
//	std::cout << one / two;
//}
//else if (sign == '%')
//{
//	std::cout << one * two * 0, 01;
//}
//else if (sign != '+' && sign != '-' && sign != '*' && sign != '/' && sign != '%' && two == 0)
//{
//	std::cout << "Ошибка";
//}
//----------------------------------------------------------------------------------------------
