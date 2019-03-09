#include <iostream>
#include <conio.h>
#include <queue>
#include<stdio.h>
#include <string.h>

using namespace std;

struct ahorrante{
		char ticket[4];
		char numer[4];
		char edad[2];

};

	queue<ahorrante>cola;
	
	ahorrante *p;
	ahorrante aux;
	int opcion;
	char res;
	
	
void clear();
void menu ();
void ap (int opcion);


int main (){
	
	
menu();
	
	getch();
	
	return 0;
}

void menu(){
	system ("color 02" );
clear();
	do{
   cout<< "===============>Opciones<==============="<<endl;
   cout << "____________________________________________________"<<endl;
   cout<< "1) Agregar ahorrante"<<endl;
   cout<< "2) Eliminar ahorrante"<<endl;
   cout<< "3) Mostrar ahorrante"<<endl;
   cout<< "4) Salir" <<endl;
   cout << "____________________________________________________"<<endl;
   cout<< "Ingrese una opcion: ";
   cin>>opcion;

	ap(opcion);
	switch(opcion){
			case 1: 
					do{
						do{
						clear();
						cout<<"-->Ticket(4 digitos): "<<endl;
						cin>>aux.ticket;
						}while(strlen(aux.ticket)!=4);
						
	
							clear();
						cout<<"-->Numero de Cuenta: "<<endl;
						cin>>aux.numer;
						clear();
							cout<<"-->Edad de Ahorrante: "<<endl;
						cin>>aux.edad;
						clear();
						cola.push(aux);
						p=&cola.front();

						cout<<"Quiere ingresar otro Ahorrante? (Y/N)"<<endl;
    					cin>>res;
  				 		}while(res=='y'|| res=='Y');
				

			break;
			
			case 2:
				clear();
				   if (cola.empty()){ 
				   			cout << "EEEEEEE    RRRRRRR     OOOOO     OOOOO   RRRRRRR           uuuu   uuuu"    <<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR          u  u   u  u"    <<endl;
				   			cout << "EE         RR    RRR O       O O       O RR    RRR         uuuu   uuuu    "<<endl;
				   			cout << "EEEEEEE    RRRRRRRR  O       O O       O RRRRRRRR                       "  <<endl;
				   			cout << "EE         RR   RR   O       O O       O RR   RR             uuuuuuuu    " <<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR          u          u  " <<endl;
				   			cout << "EEEEEEE    RR     RR   OOOOO     OOOOO   RR     RR        u             u" <<endl;
				   			cout<<""<<endl;;
				   			cout<<""<<endl;;
				 		 	cout << "___________________________________________"<<endl;
   					     	cout << "\nLa cola no contiene datos"<<endl; 
   					     	cout << "\nAgrega un Ahorrante"<<endl; 
   					    	cout << "___________________________________________"<<endl;
   					   		cout<<""<<endl;;
				   			cout<<""<<endl;;
   					   		system("pause");
   							 } 
    						else { 
    						aux=*p;
   					   		cout<<"Nodo eliminado"<<endl;
							cout << "___________________________________________"<<endl;
							cout<<"Ticket: "<<aux.ticket<<endl;
							cout<<"Numero de Cuenta: "<<aux.numer<<endl;
							cout<<"Edad de Ahorrante: "<<aux.edad<<endl;
							cout << "___________________________________________"<<endl;
							
							cola.pop();
			      		    p=&cola.front();
			      		    system("pause");
			   								 } 
							
							
			      		     clear();
			break;
			      		
			case 3:
			      			clear();
			      			if (cola.empty()) { 
      			  			cout << "EEEEEEE    RRRRRRR     OOOOO     OOOOO   RRRRRRR"<<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR"          <<endl;
				   			cout << "EE         RR    RRR O       O O       O RR    RRR"           <<endl;
				   			cout << "EEEEEEE    RRRRRRRR  O       O O       O RRRRRRRR"          <<endl;
				   			cout << "EE         RR   RR   O       O O       O RR   RR"              <<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR"            <<endl;
				   			cout << "EEEEEEE    RR     RR   OOOOO     OOOOO   RR     RR"          <<endl; 
				   					cout<<""<<endl;;
				   			cout<<""<<endl;;
				 			  cout << "___________________________________________"<<endl;
   					    	 cout << "\nLa cola No contiene Informacion para mostrar"<<endl; 
   					    	 cout << "\nAgrega un Ahorrante!"<<endl; 
   					    	 cout << "___________________________________________"<<endl;
   					   		  cout<<""<<endl;;
				   			cout<<""<<endl;;
   					   			  system("pause");
   					   			  clear();
   				 } 
   				else { 
				   		 	for(int i=1; i<=cola.size();i++)
								{
								aux=*p;
				 				cout << "___________________________________________"<<endl;
								cout<<"Ticket: "<<aux.ticket<<endl;
								cout<<"Numero de Cuenta: "<<aux.numer<<endl;
								cout<<"Edad de Ahorrante: "<<aux.edad<<endl;
								cout << "___________________________________________"<<endl;
								cout << ""<<endl;
								cout << ":::::::::::::::::::::::::::::::::::::::::::"<<endl;
								p++;
								}
							   p=&cola.front();
							   system("pause");
							   clear();
				  					  } 
							   break;
							 		   
				      					p=&cola.front();
											}
		}while(opcion!=4);
										ap(opcion);
										} 
										
										void clear(){
											system("cls");
										}
						
						void ap (int opcion){
						        while ( cin.fail () ){ //validacion si se ingresa una letra.
						                cin.clear();
						                cin.ignore(1000,'\n');
						                system("cls");
						                cout<<"LETRAS NO PERMITIDAS"<<endl;//mensaje de error de ingreso.
						                system("pause");
						                menu();
						        }
						        if (opcion <= 0 ){ //validacion si se ingresa un numero negativo.
						                system("cls");
						                cout<<"los numeros negativos no son validos"<<endl;//mensaje de error de ingreso.2
						                system("pause");
						                menu();
						        }		
						}

