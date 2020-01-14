#include "menu.h"
#include <windows.h>

void menu(int x, int y)
{
	//nalezy wyczyscic konsole i wybrac dzialanie dla kalkulatora
	system("CLS");
	std::cout<<"Wybierz dzialanie: "<<std::endl;
	std::cout<<"----------------------------"
	std::cout<<"1.Dodawanie"<<std::endl;
	std::cout<<"2.Odejmowanie"<<std::endl;
	std::cout<<"3.Mnozenie"<<std::endl;
	std::cout<<"4.Dzielenie"<<std::endl;

	int a;
	std::cin>>a;
	switch(a)
	{
		case 1: dodawanie(x,y);
		case 2: odejmowanie(x,y);
		case 3: mnozenie(x,y);
		case 4: dzielenie(x,y);
		default: std::cout<<"Wybrano niewlasciwa opcje";
	}


}
