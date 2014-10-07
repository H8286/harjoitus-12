/*Harjoitus 12
Sami Liimatainen
Versio 1.0
7.10.2014
IIO14S1

Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):

1
22
333
4444
55555
666666

Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
cout << rivinro;*/

#include <iostream>
using namespace std;
int main()
{
	int luku;
	int silmukkalkm = 1;
	int kerta;

	cout << "Anna luku 1-9";
	cin >> luku;

	while (silmukkalkm <= luku)
	{
		for (kerta = silmukkalkm; kerta > 0;kerta--)
		cout << silmukkalkm;
		silmukkalkm++;
		cout << endl;
	}

	/*
	while (luku < 10)
	{
		for (; luku <= 1; luku--)
		{
		cout << "1";
		}
		cout << endl;

		for (;luku<=2; kerta--)
		{
			cout << "2";
		}
		cout << endl;

		for (kerta = 1; kerta <= 3; kerta++)
		{
			cout << "3";
		}
		cout << endl;

		for (kerta = 1; kerta <= 4; kerta++)
		{
			cout << "4";
		}
		cout << endl;

		for (kerta = 1; kerta <= 5; kerta++)
		{
			cout << "5";
		}
		cout << endl;

		for (kerta = 1; kerta <= 6; kerta++)
		{
			cout << "6";
		}
		cout << endl;

		for (kerta = 1; kerta <= 7; kerta++)
		{
			cout << "7";
		}
		cout << endl;

		for (kerta = 1; kerta <= 8; kerta++)
		{
			cout << "8";
		}
		cout << endl;

		for (kerta = 1; kerta <= 9; kerta++)
		{
			cout << "9";
		}
		cout << endl;

*/


	/*
	if (luku >= 1)
		cout << "1\n";
	if (luku >= 2)
		cout << "22\n";
	if (luku >= 3)
		cout << "333\n";
	if (luku >= 4)
		cout << "4444\n";
	if (luku >= 5)
		cout << "55555\n";
	if (luku >= 6)
		cout << "666666\n";
	if (luku >= 7)
		cout << "7777777\n";
	if (luku >= 8)
		cout << "88888888\n";
	if (luku >= 9)
		cout << "999999999\n";
		*/
}
