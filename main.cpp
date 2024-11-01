#include <iostream>
#include <Windows.h>
#include <random>


int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float ArrPizza[] = {79,89,99,69,59,66,77};
	float ArrSnack[] = {99,88,77,66};
	float ArrDrink[] = {100,99,88,77,66};

	float Cheeze = ArrPizza[0];
	float Pepperony = ArrPizza[1];
	float ChoosePizza = 0;
	float CostPizza = 0;
	int CountPizza = 0;
	float TotalSumm = 0;
	
	while(true)
	{
		char Choose;
		std::cout << "Выберите пиццу: Сырная - 79 рублей\n\t\tПепперони - 89 рублей ";
		std::cout << "\nВыбор: ";
		std::cin >> ChoosePizza;
		if (ChoosePizza == 1)
		{
			CostPizza += ArrPizza[0];
			CountPizza++;
		}
		else if (ChoosePizza == 2)
		{
			CostPizza += ArrPizza[1];
			CountPizza++;
		}
		
		if (CountPizza % 5 == 0)
		{
			CostPizza -= ChoosePizza;
		}
		std::cout << "\n\nВзять еще?: Да - 1\n\t    Нет - 0";
		std::cout << "\nВыбор: ";
		std::cin >> Choose;
		if (Choose == '0')
		{
			break;
		}
	} 



	

	

	



	return 0;
}












//chiselki-------------------------------------------------------------------
/*const int size = 20;
	int arr[size]{};
	int zeroCount = 0;
	int summPositive = 0;
	int summNegative = 0;
	int ostatokOtDeleniya = 0;
	std::cout << "chisla massiva: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		if (arr[i] == 0)
		{
			zeroCount++;
		};
		std::cout << arr[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			summPositive = summPositive + arr[i];
		};
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			summNegative = summNegative + arr[i];
		}
	}
	std::cout << "\n\nchetnie chisla: ";
	for (int i = 0; i < size; i++)
	{
		if (arr[i]%2 == 0 && arr[i] != 0)
		{
			std::cout << arr[i] << " ";
		}
	}
	std::cout << "\n\nnechetnie chisla: ";
	for (int i = 0; i < size; i++)
	{
		if (arr[i]%2 != 0 && arr[i] != 0)
		{
			std::cout << arr[i] << " ";
		}
	}
	std::cout << "\n\nsumma polojitel'nih chisel: " << summPositive << "\n";
	std::cout << "\nsumma otricatel'nih chisel: " << summNegative << "\n";
	std::cout << "\nkolichestvo nulei: " << zeroCount << "\n";*/
//-----------------------------------------------------------------------------------------------------------
//sovpadenie chisel randoma i vvoda polzovatelya//dodelat'
//const int size = 10;
//int comp[size]{};
//int user[size]{};

//for (int i = 0; i < size; i++)
//{

//	int count = 0;
//	do
//	{
//		std::cout << "Введите десять цифр от -5 до 8: ";
//		std::cin >> user[i];
//	} while (user[i] < -5 || user[i] > 8);
//	do
//	{
//		comp[i] = rand() % 14 - 5;
//		std::cout << comp[i] << "\n";
//		std::cout << user[i];
//		if (user[i] == comp[i])
//		{
//			count++;
//		}
//	} while (comp[i] != user[i]);
//	if (count > 0)
//	{
//		std::cout << "molodec";
//	};
//Массивы 11.10.24
//int a = 3;
//int arr[9];
//arr[3] = 4;
//const int size = 9;
//int arr[size]{ 4,3,1,3 };
//std::cout << arr[9];
//for (int i = 0; i < size; i++)
//{
//	arr[i] = i;
//	std::cout << arr[i] << " ";
//};

//Ехать или не ехать
//int spacing1;
//int spacing2;
//int weight;
//float fuel = 500;
//int consumption;
//int refueling;

//do
//{
//	std::cout << "\nВведите вес блоков питания(кг): ";
//	std::cin >> weight;
//	std::cout << "\nВведите расстояние от точки A до точки B(км): ";
//	std::cin >> spacing1;
//	std::cout << "\nВведите расстояние от точки B до точки C(км): ";
//	std::cin >> spacing2;

//	if (weight <= 400 && spacing1 < 251 && spacing2 < 251 && spacing1 > 0 && spacing2 > 0 && weight > 0)
//	{
//		consumption = spacing1 * 2;
//		fuel = fuel - consumption;
//		consumption = spacing2 * 2;
//		refueling = consumption - fuel;
//		std::cout << "\nМожно ехать, нужно дозаправить в точке B: " << refueling << " литров";

//	}
//	else if (weight <= 400 && spacing1 > 251 && spacing2 > 251 && spacing1 < 0 && spacing2 < 0 && weight > 0)
//	{
//		std::cout << "\n Ехать нельзя";

//	};

//	if (weight <= 900 && spacing1 < 101 && spacing2 < 101 && spacing1 > 0 && spacing2 > 0 && weight > 0)
//	{
//		consumption = spacing1 * 5;
//		fuel = fuel - consumption;
//		consumption = spacing2 * 5;
//		refueling = consumption - fuel;
//		std::cout << "\nМожно ехать, нужно дозаправить в точке B: " << refueling << " литров";

//	}
//	else
//	{
//		std::cout << "\n Ехать нельзя";

//	};

//	if (weight <= 1400 && spacing1 < 62.6 && spacing2 < 62.6 && spacing1 > 0 && spacing2 > 0 && weight > 0)
//	{
//		consumption = spacing1 * 8;
//		fuel = fuel - consumption;
//		consumption = spacing2 * 8;
//		refueling = consumption - fuel;
//		std::cout << "\nМожно ехать, нужно дозаправить в точке B: " << refueling << " литров";

//	}
//	else
//	{
//		std::cout << "\n Ехать нельзя";
//	};

//	if (weight < 1900 && spacing1 < 45.4 && spacing2 < 45.4 && spacing1 > 0 && spacing2 > 0 && weight > 0)
//	{
//		consumption = spacing1 * 11;
//		fuel = fuel - consumption;
//		consumption = spacing2 * 11;
//		refueling = consumption - fuel;
//		std::cout << "\nМожно ехать, нужно дозаправить в точке B: " << refueling << " литров";

//	}
//	else
//	{
//		std::cout << "\n Ехать нельзя";

//	};
//} while (spacing1 <= 0 || spacing2 <= 0 || weight <= 0);

//-------------------------------------------------------------
//Конвертация валюты
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
	//std::cout << "Введите сколько рублей хотите обменять: \n";
	//std::cin >> rub;
	//std::cout << "1. eur = 103.19 рубля, \n2. usd = 92.41 рубля, \n3. cny = 13.15 рубля, \n4. jpy = 0.63 рубля, \n5. kzt = 0.19 рублей, \n6. Farit = 37 рублей\n ";
	//std::cout << "Выберите валюту в которую хотите перевести рубли(1,2,3,4,5,6) : \n";
	//std::cin >> choice;
	//if (choice == 1)
	//{
	//	currency = eur;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t Коммиссия: " << ((rub / currency) / 0.5) << " рублей";
	//	cycle--;
	//};
	//if (choice == 2)
	//{
	//	currency = usd;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t Коммиссия: " << ((rub / currency) / 0.5) << " рублей";
	//	cycle--;
	//};
	//if (choice == 3)
	//{
	//	currency = cny;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t Коммиссия: " << ((rub / currency) / 0.5) << " рублей";
	//	cycle--;
	//}
	//if (choice == 4)
	//{
	//	currency = jpy;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t Коммиссия: " << ((rub / currency) / 0.5) << " рублей";
	//	cycle--;
	//};
	//if (choice == 5)
	//{
	//	currency = kzt;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t Коммиссия: " << ((rub / currency) / 0.5) << " рублей";
	//	cycle--;
	//};
	//if (choice == 6)
	//{
	//	currency = Farit;
	//	std::cout << (rub / currency) - ((rub / currency) / 0.5) << "/t Коммиссия: " << ((rub / currency) / 0.5) << " рублей";
	//	cycle--;
	//};
	//std::cout << "Хотите повторить? 1 - да, 0 - нет: ";
	//std::cin >> choice;
	//if (choice == 1)
	//{
	//	cycle++;
	//}
//} while (cycle == 1);


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
