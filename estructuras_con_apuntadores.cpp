#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

const int N=20;

struct dato
{
	int dato1;
	char dato2[N];
};

int main()
{
	struct dato var1;
	struct dato *ptr;
	ptr= &var1;
	cout<<"puntero direccion"<< &ptr <<endl;
	cout<<"puntero valor"<< ptr <<endl;
	cout<<"insertar valor1:";
	cin>> (*ptr).dato1;
	//cin>>ptr->dato1;
	cout<<endl;
	cout<<"ingrese el  dato 2: ";
	fflush(stdin);
	cin.getline((*ptr).dato2, N, '\n');
	cout<<"valor de dato 1:"<< (*ptr).dato1<<endl;
	cout<<"valor del dato 2:"<< (*ptr).dato2<<endl;
		
	getch();
	return 0;
}
