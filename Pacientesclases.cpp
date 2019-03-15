
/******************************************************************************
/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/


#include <iostream>
#include <conio.h>		//Cabezeras utilizadas
#include <cstdlib> 


using namespace std;	//linia utilizada para evitar escribir std::

class Paciente{ //declaracion de la clase
	
    private: //se declara las variables que seran de tipo privadas para que 
    	     int cor;//solo la clase pueda acceder a ellas
    	     char nom[20];
    	     char ape[20]; //declaracion de las variables
			 int edad;
			 char s[2]; 
			 char ec[50];
    public: //se declara la variable de tipo publico para que cualquier clase externa o funcion pueda utilizarlas
    	  Paciente();//constructor de la clase 
    	  void Mostrar(); 
    	  void Pedir();
    	  ~Paciente(); //destructor de la clase
    	
};
void clear(); //funcion creada para evitar escribir system("cls");
Paciente::Paciente() //declaracion de el constructor
{

}
Paciente::~Paciente() //declaracion de el destructor
{

}
void Paciente::Mostrar() //declaracion de la funcion paciente mostrar
{
   cout<<"_______________________"<<endl;
   cout<<cor<<endl;
   cout<<nom<<endl;
   cout<<ape<<endl; //esta funcion imprimira en pantalla todos los datos de las variables
   cout<<edad<<endl;
   cout<<s<<endl;
   cout<<ec<<endl;
}
void Paciente::Pedir() //declaracion de la variable paciente pedir
{
	clear(); //llamada a la funcion
  cout<<"Correlativo:"<<endl;
  cin>>cor;
  clear();
  cout<<"Nombre:"<<endl;
  cin>>nom;
  clear();
  cout<<"Apellido:"<<endl;
   cin>>ape;
   clear();
  cout<<"Edad:"<<endl; //esta funcion le pedira al usuario todos los datos que necesita para llenar la clase
  cin>>edad;			//y los guardara en las variables creadas
  clear();
  cout<<"Sexo:"<<endl;
   cin>>s;
   clear();
  cout<<"Emfermedad Cronica:"<<endl;
   cin>>ec;
   clear(); //llamada a la funcion
}




int main() { //Inicio de el main
	Paciente *p1; //de la clase paciente se crean dos puntero
	Paciente *p2; 
	int opcion; //creacion de variable 
	char r; 	//creacion de variable
	
	do{
		clear(); //llamada a la funcion
	
	cout<< "===============>Opciones<==============="<<endl; //impresion de mensaje
   cout << "____________________________________________________"<<endl;
   cout<< "1) Agregar Paciente"<<endl;
   cout<< "2) Mostrar Paciente"<<endl; //menu
   cout<< "3) Salir" <<endl;
   cout << "____________________________________________________"<<endl;
   cout<< "Ingrese una opcion: ";
   cin>>opcion; 
	switch(opcion){ //inicio de switch
		case 1: //caso numero 1
			clear(); //llamada a funcion
				p1=new Paciente(); //puntero uno sera igual a nuevo paciente
				p1->Pedir(); //puntero uno llama a funcion pedir
					clear(); //limpia 
				cout<<"Desea Agregar otro paciente? (Y/N)"<<endl; //imprime mensaje
				cin>>r; //guarda dato en r
				while(r=='y'||r=='Y'){ //si r es igual a y //ESTO SE HIZO ASI EN CASO QUE EL USUARIO SOLO QUIERA INGRESAR UN PACIENTE
				p2=new Paciente(); //llama a puntero 2 
				p2->Pedir();
				break; //
				}		
			break;
			
		case 2: //caso 2
	clear(); //limpia
			 p1->Mostrar(); //puntro uno llama a funcion mostrar
				while(r=='y'||r=='Y'){ //en caso que el usuario haya ingresado y entra //ESTO SE HIZO HACI EN CASO QUE EL USUARIO
				p2->Mostrar();															// PONGA NO EL PROGRAMA SE DETENDRIA
			break;																		//PORQUE ESTARIA ESPERANDO EL DATO DE
																						//PUNTERO 2 ASI ME EVITE QUE SE DETENGA
}
system("pause"); //SISTEM PAUSE
break;
}
}while(opcion!=3); 

	
	getch();
	system("pause"); 
	return 0;
} //FIN DE MAIN

void clear(){	 ///DESARROLLO DE LA FUNCION DE LIMPIEZA
				system("cls");
					}
						
