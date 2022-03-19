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
	cout << "PROGRAM KALKULATOR" << endl;
	cout << "Menu Operasi:" << endl;
	cout << " 1. Penambahan" << endl;
	cout << " 2. Pengurangan" << endl;
	cout << " 3. Perkalian" << endl;
	cout << " 4. Pembagian" << endl;

	cout << "Pilih Menu No: ";
	cin >> menu;

	switch (menu)
	{
	case '1':
	{
		cout << "Bilangan Pertama: ";
		cin >> a;
		cout << "Bilangan Kedua: ";
		cin >> b;
		int hasil1 = penambahan(a, b);
		cout << "Hasil " << a << " + " << b << " = " << hasil1;
		break;
	}
	case '2':
	{
		cout << "Bilangan Pertama: ";
		cin >> d;
		cout << "Bilangan Kedua: ";
		cin >> e;
		int hasil2 = pengurangan(d, e);
		cout << "Hasil " << d << " - " << e << " = " << hasil2;
		break;
	}
	case '3':
	{
		cout << "Bilangan Pertama: ";
		cin >> g;
		cout << "Bilangan Kedua: ";
		cin >> h;
		int hasil3 = perkalian(g, h);
		cout << "Hasil " << g << " * " << h << " = " << hasil3;
		break;
	}
	case '4':
	{
		cout << "Bilangan Pertama: ";
		cin >> j;
		cout << "Bilangan Kedua: ";
		cin >> k;
		float hasil4 = pembagian(j, k);
		cout << "Hasil " << j << " / " << k << " = " << hasil4;
		break;
	}
	default:
		break;
	}
}

