#include <iostream>
#include <Windows.h>
#include <random>
int main()
{
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	int spacing1;
	int spacing2;
	int weight;
	float fuel = 500;
	int consumption;
	int refueling;
	
	do
	{
		std::cout << "\n������� ��� ������ �������(��): ";
		std::cin >> weight;
		std::cout << "\n������� ���������� �� ����� A �� ����� B(��): ";
		std::cin >> spacing1;
		std::cout << "\n������� ���������� �� ����� B �� ����� C(��): ";
		std::cin >> spacing2;

		if (weight <= 400 && spacing1 < 251 && spacing2 < 251 && spacing1 > 0 && spacing2 > 0 && weight > 0)
		{
			consumption = spacing1 * 2;
			fuel = fuel - consumption;
			consumption = spacing2 * 2;
			refueling = consumption - fuel;
			std::cout << "\n����� �����, ����� ����������� � ����� B: " << refueling << " ������";
			
		}
		else if (weight <= 400 && spacing1 > 251 && spacing2 > 251 && spacing1 < 0 && spacing2 < 0 && weight > 0)
		{
			std::cout << "\n ����� ������";
			
		};
		
		if (weight <= 900 && spacing1 < 101 && spacing2 < 101 && spacing1 > 0 && spacing2 > 0 && weight > 0)
		{
			consumption = spacing1 * 5;
			fuel = fuel - consumption;
			consumption = spacing2 * 5;
			refueling = consumption - fuel;
			std::cout << "\n����� �����, ����� ����������� � ����� B: " << refueling << " ������";
			
		}
		else
		{
			std::cout << "\n ����� ������";
			
		};
		
		if (weight <= 1400 && spacing1 < 62.6 && spacing2 < 62.6 && spacing1 > 0 && spacing2 > 0 && weight > 0)
		{
			consumption = spacing1 * 8;
			fuel = fuel - consumption;
			consumption = spacing2 * 8;
			refueling = consumption - fuel;
			std::cout << "\n����� �����, ����� ����������� � ����� B: " << refueling << " ������";
			
		}
		else
		{
			std::cout << "\n ����� ������";
		};
		
		if (weight < 1900 && spacing1 < 45.4 && spacing2 < 45.4 && spacing1 > 0 && spacing2 > 0 && weight > 0)
		{
			consumption = spacing1 * 11;
			fuel = fuel - consumption;
			consumption = spacing2 * 11;
			refueling = consumption - fuel;
			std::cout << "\n����� �����, ����� ����������� � ����� B: " << refueling << " ������";
			
		}
		else
		{
			std::cout << "\n ����� ������";
		
		};
	} while (spacing1 <= 0 || spacing2 <= 0 || weight <= 0);




	
	return 0;
}

//����������� ������
//int rub;
//int eur = 103.19;
//int usd = 92.41;
//int cny = 13.15;
//int jpy = 0.63;
//int kzt = 0.19;
//int Farit = 37;
//int currency;
//char choice;
//char cycle;
//do
//{
	//cycle = 1;
	//std::cout << "������� ������� ������ ������ ��������: \n";
	//std::cin >> rub;
	//std::cout << "1. eur = 103.19 �����, \n2. usd = 92.41 �����, \n3. cny = 13.15 �����, \n4. jpy = 0.63 �����, \n5. kzt = 0.19 ������, \n6. Farit = 37 ������\n ";
	//std::cout << "�������� ������ � ������� ������ ��������� �����(1,2,3,4,5,6) : \n";
	//std::cin >> choice;
	//if (choice == 1)
	//{
	//	currency = eur;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t ���������: " << ((rub / currency) / 0.5) << " ������";
	//	cycle--;
	//};
	//if (choice == 2)
	//{
	//	currency = usd;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t ���������: " << ((rub / currency) / 0.5) << " ������";
	//	cycle--;
	//};
	//if (choice == 3)
	//{
	//	currency = cny;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t ���������: " << ((rub / currency) / 0.5) << " ������";
	//	cycle--;
	//}
	//if (choice == 4)
	//{
	//	currency = jpy;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t ���������: " << ((rub / currency) / 0.5) << " ������";
	//	cycle--;
	//};
	//if (choice == 5)
	//{
	//	currency = kzt;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t ���������: " << ((rub / currency) / 0.5) << " ������";
	//	cycle--;
	//};
	//if (choice == 6)
	//{
	//	currency = Farit;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t ���������: " << ((rub / currency) / 0.5) << " ������";
	//	cycle--;
	//};
	//std::cout << "������ ���������? 1 - ��, 0 - ���: ";
	//std::cin >> choice;
	//if (choice == 1)
	//{
	//	cycle++;
	//}
//} while (cycle == 1);


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
