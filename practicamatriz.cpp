/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;


int main(int argc, char** argv) {
	
	int fil;
	int col;
	
	int matriz [30] [30];
	cout<<"Ingrese el numero de filas: "; 
	cin>>fil;
	cout<<"Ingrese el numero de columnas: ";
	cin>>col;
	for(int i=0; i<fil; i++)
	{
		for (int j=0; j<col; j++)
		{
			cout<<"Ingrese dato["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j];
			
		}
	}
	
	for(int i=0; i<fil; i++)
	{
		for (int j=0; j<col; j++)
		{
			cout<<"dato["<<i+1<<"]["<<j+1<<"]: " << matriz[i][j]<<"		";
			
		}
		cout<<endl;
	}
	
	return 0;
	getch();
}
