#include <iostream>
#include <math.h>
using namespace	std;

int penambahan(int a, int b)
{
	int c = a + b;
	return c;
}
int pengurangan(int d, int e)
{
	int f = d - e;
	return f;
}
int perkalian(int g, int h)
{
	int i = g * h;
	return i;
}
float pembagian(float j, float k)
{
	float l = j / k;
	return l;
}

int main()
{
	int a, b, d, e, g, h;
	float j, k;
	char menu;
	cout << "======================" <<endl;
	cout << "| PROGRAM KALKULATOR |" << endl;
	cout << "======================" <<endl;
	cout << "|  Menu Operasi :    |" << endl;
	cout << "| 1. Penambahan      |" << endl;
	cout << "| 2. Pengurangan     |" << endl;
	cout << "| 3. Perkalian       |" << endl;
	cout << "| 4. Pembagian       |" << endl;
	cout << "======================" <<endl;

	cout << "Pilih Menu Nomor : ";
	cin >> menu;

	switch (menu)
	{
	case '1':
	{
		cout << "======================" <<endl;
		cout << "|     Penambahan     |" <<endl;
		cout << "======================" <<endl;
		cout << "Bilangan Pertama : ";
		cin >> a;
		cout << "Bilangan Kedua   : ";
		cin >> b;
		int hasil1 = penambahan(a, b);
		cout << "Hasil dari " << a << " + " << b << " = " << hasil1 <<endl;
		cout << "======================" <<endl;
		break;
	}
	case '2':
	{
		cout << "======================" <<endl;
		cout << "|    Pengurangan     |" <<endl;
		cout << "======================" <<endl;
		cout << "Bilangan Pertama : ";
		cin >> d;
		cout << "Bilangan Kedua   : ";
		cin >> e;
		int hasil2 = pengurangan(d, e);
		cout << "Hasil dari " << d << " - " << e << " = " << hasil2 <<endl;
		cout << "======================" <<endl;
		break;
	}
	case '3':
	{
		cout << "======================" <<endl;
		cout << "|     Perkalian      |" <<endl;
		cout << "======================" <<endl;
		cout << "Bilangan Pertama : ";
		cin >> g;
		cout << "Bilangan Kedua   : ";
		cin >> h;
		int hasil3 = perkalian(g, h);
		cout << "Hasil dari " << g << " * " << h << " = " << hasil3 <<endl;
		cout << "======================" <<endl;
		break;
	}
	case '4':
	{
		cout << "======================" <<endl;
		cout << "|     Pembagian      |" <<endl;
		cout << "======================" <<endl;
		cout << "Bilangan Pertama : ";
		cin >> j;
		cout << "Bilangan Kedua   : ";
		cin >> k;
		float hasil4 = pembagian(j, k);
		cout << "Hasil dari " << j << " / " << k << " = " << hasil4 <<endl;
		cout << "======================" <<endl;
		break;
	}
	default:
		break;
	}
}
