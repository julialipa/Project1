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
		std::cout << "������� ������� ������ ������ ��������: \n";
		std::cin >> rub;
		std::cout << "1. eur = 103.19 �����, 2. usd = 92.41 �����, 3. cny = 13.15 �����, 4. jpy = 0.63 �����, 5. kzt = 0.19 ������, 6. Farit = 37 ������\n ";
		std::cout << "�������� ������ � ������� ������ ��������� ����� : \n";
		std::cin >> currency;
		std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t ���������: " << ((rub / currency) / 0.5) << " ������";
		cycle--;
		std::cout << "������ ���������? 1 - ��, 0 - ���";
		std::cin >> choice;
		if (choice == 1)
		{
			cycle++;
		}

	} while (cycle == 1);

	
	return 0;
}



//�����������-----------------------------------------------------------------------------------
//int one = 0;
//int two = 0;
//char sign = '0';

//std::cout << "������� ����� ";
//std::cin >> one;
//std::cout << "�������� ����" << " + - * / % ";
//std::cin >> sign;

//std::cout << "������� ������ ����� ";
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
//	std::cout << "������";
//}
//----------------------------------------------------------------------------------------------
