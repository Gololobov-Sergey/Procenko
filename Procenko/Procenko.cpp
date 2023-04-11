// Procenko.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//parne ne parne 
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
	//int a = 18, b = 12;
	//cout << a << "/" << b << endl;

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
