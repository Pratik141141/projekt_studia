#include <iostream>
#include "menu.h"

int main()
{
	int liczba1,liczba2;
	cout<<"Wprowadz pierwsza liczbe: ";
	cin>>liczba1;
	cout<<"\nWprowadz druga liczbe: ";
	cin>>liczba2;
	cout<<endl;

	menu(liczba1,liczba2);
	return 0;
}
