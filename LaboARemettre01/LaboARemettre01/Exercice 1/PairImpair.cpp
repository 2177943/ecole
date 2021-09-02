//but: dire si le nombre est paire ou impaire
//Auteur: Samuel Bisson
//Date: 2021-09-02


#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int nb1;

		system("color b");
	for (int i = 0; i < 30; i++)
	{ 
		cout << "entre le nombre entier  :";
		cin >> nb1;
		if (nb1 % 2 == 0)
			printf("%d est une nombre pair\n", nb1);
		else
			printf("%d est un nombre impair\n", nb1);
		
	}

	//	entre le nombre entier  :1
	//	1 est un nombre impair
	//	entre le nombre entier : 2
	//	2 est une nombre pair
	//	entre le nombre entier : 3
	//	3 est un nombre impair
	//	entre le nombre entier :


}