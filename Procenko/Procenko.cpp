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
