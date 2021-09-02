//but: mettre un nombre de 5 chiffre en 5 ligne
//Auteur: Samuel Bisson
//Date: 2021-09-02

#include <iostream>

using namespace std;

void main()
{
	//variable

	int nb;
	int div = 10000;
	int x;

	system("color b");

	//entre le premier chiffre

	cout << "etre le nombre a 5 chiffres" << endl;
	cin >> nb;

	//vérifier si le nb a 5 chiffres 


	
		if (nb > 9999 && nb < 99999)
		{
			// afficher le premier chiffre
		
			x = nb % div;
			cout << nb / div << endl;
	
			//afficher les autre chiffres
	
			for (int  i = 0; i < 4; i++)
			{
				div = div / 10;
				cout << x / div << endl;
				x = nb % div;
			}
		
		}
		else
		{
			cout << "Ce nombre ne contient pas 5 chiffres." << endl;
		}
	

		
	system("pause");
	
	//	etre le nombre a 5 chiffres
	//	26666
	//	2
	//	6
	//	6
	//	6
	//	6
	//	Appuyez sur une touche pour continuer...
	
	
	
	
	
	//	etre le nombre a 5 chiffres
	//	3
	//	Ce nombre ne contient pas 5 chiffres.
	
}
