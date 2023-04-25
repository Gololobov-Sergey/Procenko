// Procenko.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
/*известно кол-во учеников в каждной из n школой города. 
Определить кол-во школ в которой учится более 1к учеников.
*/
using namespace std;

/*bool Foo(int x)
{
	return x % 2 == 0;
} */

//int NOD(int a, int b)
//{
//	int n = (a < b) ? a:b;
//
//	for (int i = n; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//			return i;
//	}
//}

//int Foo(int a,int b, int c = 0, int d = 0)
//{	
//	//cout << n << endl;	
//	return a + b + c + d;
//}

//void Voo(int n = 10, char t = '*')
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << t;
//	}
//	cout << endl;
//}

int main()
/* {
	cout.setf(ios::boolalpha);
	int x;

	cin >> x;
	cout << Foo(x);
}*/
{
	setlocale(LC_ALL, "ru");

 //пользователь вводит числа чётные , программа должна их удалить и вывести число которое 
	//получится путём удаления.


	//int K = 0; //отвечает за накопление этих чисел.
	int value;
	cin >> value;

	int m = 0, k = 0;
	while (value > 0)
	{
		int r = value % 10;
		if (r % 2)
		{
			m += r * pow(10, k);
			k++;
		}
		value /= 10;
	}
	cout << m;

	//найти числа в записи которых будет 5-ти знач числа
	//int C = 0;
	//for (int i = 1000; i < 9999; i++)
	//{
	//	int m = i, K= 0;
	//	while (m > 0)
	//	{
	//		int r = m % 10;
	//		if (r == 5)
	//			K++;
	//		m /= 10;
	//	}
	//	if (K == 3)
	//	{
	//		cout << i << " ";
	//		C++;
	//	}
	//}
	//cout << C;
	
	//алгоритм поиска простих чисел
	//int A = 1, B = 100;
	//for (int i = A; i <= B; i++)
	//{
	//	bool f = 0;
	//	for (int j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			f = 1;
	//			break;
	//		}
	//	}
	//	if (f == 0)
	//	{
	//		cout << i << " ";
	//	}
	//}

	//// Найти все числа n-значн. числа Амстронга.
	//int n = 3;
	//for (int i = pow(10, n - 1); i < pow(10, n) - 1; i++)
	//{
	//	int m = i, S = 0;
	//	while (m > 0)
	//	{
	//		int r = m % 10;
	//		S += pow(r,n);
	//		m /= 10;
	//	}
	//	if (S == i)
	//	{
	//		cout << i << endl;
	//	}
	//	//int r = n % 10;
	//	//S += n;
	//	// n /= 10;
	//	//K++;
	//}
	//cout << S << endl;


	////Написать программу которая выводит n *
	////На экране должен быть квадрат размером n на n
	//int n = 5;
	//for (int k = 0; k < 3; k++)//кол-во всех *
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		for (int i = 0; i < n - 1 - j; i++)//за отступ
	//		{
	//			cout << " ";
	//		}
	//		for (int i = 0; i < 2 * j + 1; i++)
	//		{
	//			cout << "*";
	//		}
	//		cout << "\n";
	//	}
	//}


	////Дз: эЛЕКтронные часы , которые уже показывают секунды , и ситуация семетрична!
	//int K = 0;
	//for (int h = 0; h < 24; h++)
	//{
	//	for (int m = 0; m < 60; m++)
	//	{
	//		for (int s = 0; s < 60; s++)
	//		{
	//			int h1 = h / 10;
	//			int h2 = h % 10;
	//			int m1 = m / 10;
	//			int m2 = m % 10;
	//			int s1 = s / 10;
	//			int s2 = s % 10;

	//			if (h1 == s2 && h2 == s1 && m1 == m2)
	//			{
	//				cout << h1 << h2 << " : " << m1 << m2 << " : " << s1 << s2 << endl;
	//				K++;
	//			}
	//		}//cout << h1 << h2 << " : " << m1 << m2 << endl;
	//	}
	//}
	//cout << "K: " << K << endl;

	//Дано целое число N (> 0). Если оно является степенью числа 3, то
	//вывести TRUE, если не является — вывести FALSE.
	//int N = 81;
	//int F = 1;
	//while (F < N)
	//{
	//	F *= 3;
	//}
	//if (F == N)
	//{
	//	cout << "yes";
	//}
	//else
	//{
	//	cout << "no";
	//}

	//Дано целое число N(> 0).Используя операции деления нацело и
	//	взятия остатка от деления, найти количество и сумму его цифр.
	//int n = 3751;
	//int K = 0, S = 0;
	//while (n > 0)
	//{
	//	int r = n % 10;
	//	S += r;
	//	n /= 10;
	//	K++;
	//}
	//cout << S << K << endl;
	
	//int N = 7;
	//int S = 1;
	//while (N>2)
	//{
	//	if (N == 2)
	//	{
	//		S *= 2;
	//		break;
	//	}
	//	S *= N;
	//	N -= 2;
	//}
	//cout << S << endl;

	//*Дано целое число N(> 0), являющееся некоторой степенью числа 2:
	//N = 2K.Найти целое число K — показатель этой степени.*/
	//int N = 128;
	//int F = 1;
	//int K = 0;
	//while (F < N)
	//{
	//	F *= 2;
	//	K++;
	//}
	//cout << K << endl;
	//int P = 1;

	//for (int i = -3; i <= 3; i++)
	//{
	//	if (i != 0)
	//	{
	//		P *= i * i;
	//	}
	//}
	//cout << P << endl;

	//int n, S = 0;
	//cin >> n;

	//for (int i = 1;i <= n; i++)
	//{
	//cout << "кол-во магазинов: " << i << " :Сколько? ";
	//int h;
	//cin >> h;

	//if (h > 10)
	//{
	//	S++;
	//}
	//cout << "кол-во магазинов которые могут продать: " << S << endl;




	//int n, S = 0;
	//cin >> n;
	//
	//for (int i = 1;i <= n; i++)
	//{
	//	cout << "кол-во учеников: " << i << " :Сколько?";
	//	int h;
	//	cin >> h;

	//	if (h > 1000)
	//	{
	//		S++;
	//	}
	//}
	//cout << "кол-во школ: " << S << endl;
	//double N = 0.43;

	//for (double i = 1; i <= 2; i+=0.2)
	//{
	//cout << i << " KG: " << i * N << "$" << endl;
	//}




	//double N = 0.43;

	//for (double i = 0.1; i <= 1; i+=0.1)
	//{
	//	cout << i << " KG: " << i * N << "$" << endl;
	//}


	//int A = 3;
	//int B = 6;

	//for (int i = A; i <= B; i++)
	//{
	//	cout << i << endl;
	//}
	//cout << B - A + 1;
	
	//int a = 18, b = 12;
	//cout << a << "/" << b << endl;
	//int N = 5;
	//int K = 3;

	//for (int i = 0; i < N; i++)
	//{
	//	cout << K << endl;
	//}

	//int nod = NOD(a, b);

	//if (nod !=1)
	//{
	//	a /= nod;
	//	b /= nod;
	//}

	//cout << a << "/" << b << endl;

	/*Voo();
	Voo(15);
	Voo(20,'$');*/
	//cout << Foo(2,5,3,1) << endl;
	//cout << Foo(2,5,3) << endl;
	//cout << Foo(2,5) << endl;	
}

/* {
	srand(time(0));
	const int n = 2;
    int massiv[n];
	int S = 0;

	for (int i = 0; i < n; i++)
	{
		massiv[i] = rand() % 10;
		cout << massiv[i] << " ";
	}
	cout << endl;

	int m = massiv[0];

	for (int i = 0; i < n; i++)
	{
		if (massiv[i] < m)
		{
			m = massiv[i];
		}
		S += massiv[i];
	}
	cout << "m=" << m << "\ns= " << S << endl;

	float x = (float)S/n;

	cout << x << endl;
}*/
