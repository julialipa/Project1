#include <iostream>
#include <Windows.h>
int main()
{
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float rub;
	float eur = 103.19;
	float usd = 92.41;
	float cny = 13.15;
	float jpy = 0.63;
	float kzt = 0.19; 
	float Farit = 37;
	int currency;
	int cycle = 1;
	do
	{
		char choice;
		std::cout << "Введите сколько рублей хотите обменять: \n";
		std::cin >> rub;
		std::cout << "1. eur = 103.19 рубля, 2. usd = 92.41 рубля, 3. cny = 13.15 рубля, 4. jpy = 0.63 рубля, 5. kzt = 0.19 рублей, 6. Farit = 37 рублей\n ";
		std::cout << "Выберите валюту в которую хотите перевести рубли : \n";
		std::cin >> currency;
		std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t Коммиссия: " << ((rub / currency) / 0.5) << " рублей";
		cycle--;
		std::cout << "Хотите повторить? 1 - да, 0 - нет";
		std::cin >> choice;
		if (choice == 1)
		{
			cycle++;
		}

	} while (cycle == 1);

	
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
