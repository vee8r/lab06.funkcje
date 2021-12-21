//#include <iostream>
//#include"Nagłówek.h"
// namespace std;

//deklaracja 
/*
int suma() // typ funkcji ktory zwraca
float roznica(float, float);
void wypisz(); // funkcja nie przyjmuje zadnych 

int main()
{
    int a = 23, b = 1;
    wypisz();
    cout << suma(2, 3) << endl;
    cout << suma(a, b) << endl;
    cout << roznica(2, 3) << endl;

    for (int i = 0; i < 5; i++)
    {
        wypisz();
    }

} //koniec main
// definicje funkcji
int suma(int a, int b) {
return a + b; // funkcja zwraca
}

float roznica(float a, float b) {
    return a - b;
}

void wypisz
*/
//#include <iostream>
//#include <math.h>

//using namespace std;
//int main()
//{
    /* {
        int a = 23, b = 1;
        for (int i = 0; i < 5; i++)
        {
            wypisz();
        }

        cout << suma(2, 3) << endl;
        cout << suma(a, b) << endl;
        cout << roznica(2, 3) << endl;

    }*/
    /*
    int r, ok, pk;
    string obwod, pole;
    float m_pi = 3.14159265358979323846;
    cout << "Witaj podaj dlugosc promienia:"; cin >> r;
    cout << "Dlugosc promienia wynosi:" << r << endl;
    cout << "Co chcesz obliczyc? Napisz obwod lub pole:";
    if (cin >> obwod)
    {
        ok = 2 * m_pi * r;
        cout << "Obwod wynosi:" << ok;
    }
    else if (cin >> pole)
    {
        pk = m_pi * r * r;
        cout << "Pole wynosi:" << pk;
    }

    return 0;
    */




    //ZADANIE 1
 /*
#include <iostream>
using namespace std;
float kolo(float promien)
{
    float pole;
    pole = 3, 14 * promien * promien;
    return pole;
}
float prostokat(float a, float b)
{
    float pole;
    pole = a * b;
    return  pole;
}
float trojkat(float a, float h)
{
    float pole;
    pole = a * h;
    return pole;
}
float szescian(float a)
{
    float objetosc;
    objetosc= a * a * a;
    return objetosc;
}
float walec(float r, float h)
{
    float objetosc;
    objetosc = 3, 14 * r * r * h;
    return objetosc;
}


int main()
{
    cout<<"pole kola: "<<kolo(10)<<endl;
    cout<< "pole porsotkata: "<<prostokat(10, 20)<<endl;
    cout<< "pole trojkata: "<<trojkat(5, 7)<<endl;
    cout<< "objetosc szescianu: "<<szescian(20)<<endl;
    cout << "objetosc walca: " << walec(4, 6) << endl;
}
*/


    //ZADANIE 2
/*
  #include <iostream>
using namespace std;

bool LiczbaPierwsza(int liczba)
{
	if (liczba < 2)
	{
		return false;
	}
	for (int i = 2; i < liczba; i++)
	{
		if (liczba % i == 0)
		{
			return false;
		}
	}
	return true;
}



int main()
{
	int liczba;
	cout << "podaj liczbe: ";
	cin >> liczba;
	if (LiczbaPierwsza(liczba) == 1)
	{
		cout << "Twoja liczba jest liczba pierwsza ";
	}
	else {
		cout << "Twoja liczba nie jest liczba pierwsza ";
	}
}
 */
 
//ZADANIE 3
/*
#include <iostream>
using namespace std;

void  liczba_binarna(int liczba)
{
    int binarna[50];
    int i = 0, a, b;
    while (liczba != 0)
    {
        binarna[i] = liczba % 2;
        liczba = liczba / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binarna[j];
    }
}

int main()
{
    int liczba;
    cout << "podaj liczbe: ";
    cin >> liczba;
    cout << "Twoja liczba wyglada w postaci binarnej nastepujaco: ";
    liczba_binarna(liczba);
}
*/

//ZADANIE 4
#include <iostream>
using namespace std;

int  dwusilnia(int liczba)
{
    int a;
    if (liczba == 0)
    {
        return 1;
    }
    if (liczba % 2 == 0)
    {
        a = liczba;
        while (liczba != 2)
        {
            liczba = liczba - 2;
            a = a * liczba;
        }
        return a;
    }
    else
    {
        a = liczba;
        while (liczba != 1)
        {
            liczba = liczba - 2;
            a = a * liczba;
        }
        return a;
    }
}

int main()
{
    int liczba;
    cout << "podaj liczbe: ";
    cin >> liczba;
    cout << "Dwusilnia z Twojej liczby wynosi: " << dwusilnia(liczba);
}


