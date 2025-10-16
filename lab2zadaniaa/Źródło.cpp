#include <iostream>
#include <stdio.h>
using namespace std;
//zad1
/*int main()
{
	for (int i = 10; i >= 0; i--) {
		cout << i << endl;
	}
	return 0;
}*/
//zad2
/*int main()
{
	int fahr, celsius;
	int start, limit, krok;
	start = 0;
	limit = 200;
	krok = 20;

	fahr = start;
	while (fahr <= limit) {
		celsius = 5 * (fahr - 32) / 9;
		cout << fahr << "\t" << celsius << endl;
		fahr = fahr + krok;
	}
}*/
//zad3
/*int main()
{
	int fahr, celsius;
	int start, limit, krok;
	start = 0.0;
	limit = 200.0;
	krok = 20.0;
	for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
	{
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		cout << fahr << "\t" << celsius << endl;
	}
}*/
//zad6
/*int main()
{
	int fahr, celsius;
	int start, limit, krok;
	start = 0;
	cout << "Podaj limit" << endl;
	cin >> limit;
	cout << " Podaj krok" << endl;
	cin >> krok;

	fahr = start;
	while (fahr <= limit) {
		celsius = 5 * (fahr - 32) / 9;
		cout << fahr << "\t" << celsius << endl;
		fahr = fahr + krok;
	}
}*/
//zad7
/*int main()
{
	int liczba;
	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj liczbe rzeczywista" << i+1 << endl;
		cin >> liczba;
		if (liczba > 0) {
			cout << liczba << endl;
		}
	}


}*/
//zad8
/* int  main()
{
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}
	return 0;

}*/
//zad9
/*int main() {
	int n;
	cout << "Podaj wartosc n" << endl;
	cin >> n;
	for (int i = 0; i <= 100; i++) {
		if (i % n == 0) {
			cout << i << endl;
		}
	}
	return 0;
}*/
//zad10
/*int main()
{
	int n;
	int licznik = 0;
	cout << "Podaj wartosc n" << endl;
	cin >> n;
	for (int i = 0; i <= 100; i++) {
		if (i % n == 0) {
			licznik++;
		}
	}
	cout << licznik << endl;
	return 0;
}*/
//zad11
/*int main()
{
	int a, b;
	cout << "Podaj wartosc a" << endl;
	cin >> a;
	cout << "Podaj wartosc b" << endl;
	cin >> b;
	if (a < b) {
		for (int i = a; i <= b; i++) {
			if (i % 3 == 0) {
				cout << i << endl;
			}
		}
	}
	else if (a > b) {
		for (int i = b; i <= a; i++) {
			if (i % 3 == 0) {
				cout << i << endl;
			}
		}
	}
	else if (a = b) {
		cout << "Musisz podac rozne liczby" << endl;
	}

}*/
//zad12
/*int main()
{
	int n;
	cout << "Podaj wartosc n" << endl;
	cin >> n;
	float wynik;
	wynik = 0.0;
	for (int i = 0; i <= n; i++) {
		wynik += i;
	}
	float srednia = wynik / n;
	cout << srednia << endl;
}*/
//zad13
/*int main()
{
	for (int i = 100; i >= 0; i--) {
		cout << i << endl;
	}
	return 0;
}*/
//zad14
/*int main()
{
	int a, b, c;
	cout << "Podaj wartosc a" << endl;
	cin >> a;
	cout << "Podaj wartosc b" << endl;
	cin >> b;
	cout << "Podaj wartosc c" << endl;
	cin >> c;
	if (a < b && a < c) {
		cout << a << endl;
	}
	else if (b < a && b < c) {
		cout << b << endl;
	}
	else if (c < a && c < b) {
		cout << c << endl;
	}
}*/
//zad15
#include <cstdlib>
#include <ctime>
/*int main()
{
	int n, m;
	cout << "Podaj ilosc wylosowanych liczb (wartosc n)" << endl;
	cin >> n;
	cout << "Podaj ostatnia liczbe przedzialu (wartosc m)" << endl;
	cin >> m;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		int losowa_liczba = rand() % (m + 1);
		cout << losowa_liczba << endl;
	}
	return  0;
}*/
//zad16
int main() 
{
	int a;
	int b = 0;
	cout << "Podaj szczesliwy numerek" << endl;
	cin >> a;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		int losowa_liczba = rand() % 10 + 1;
		cout << losowa_liczba << endl;
		if (losowa_liczba == a) {
			cout << b++ << endl;
		}
	}
}
