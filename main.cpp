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
	std::cout << "������� ������� ������ ������ ��������: \n";
	std::cin >> rub;
	std::cout << "eur = 103,19 �����, usd = 92,41 �����, cny = 13,15 �����, jpy = 0,63 �����, kzt = 0,19 ������, Farit = 37 ������\n ";
	std::cout << "�������� ������ � ������� ������ ��������� ����� : \n";
	std::cin >> currency;
	do {
		std::cout << (rub / currency) - ((rub / currency) / 0, 5) << "/t ���������: " << ((rub / currency) / 0, 5) << " ������";
	} while (true);
	
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
