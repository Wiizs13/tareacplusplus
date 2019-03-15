
/******************************************************************************
/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/


#include <iostream>
#include <conio.h>		//cabezeras utilizadas
#include <queue>
#include<stdio.h>
#include <string.h>

using namespace std;		//linia para evitar escribir std::

struct we{	//creacion de una estructura 
		int x; //declaracion de las variables x, y, z.
		int y;
		int z;

};
    	queue<we>cola;	//declaracion de la cola
	
	we *p;	//se crea un puntero de la cola
	we aux;	//y una variable auxiliar para guardar temp los datos
	int opcion;	//variable para el menu
	char res;
	
void clear(); //declaracion de funcion de limpieza
void menu ();	///declaracion de funcion menu
void ap (int opcion);	//declaracion de funcion para evitar numeros negativos y letras


int main (){	//inicio de main


	
	
	
menu();	//llama a la funcion menu
	
	getch();
	
	return 0;
} //finaliza main

void menu(){ //inicio de desarrollo de funcion menu
	system ("color 02" ); //cambia el color de la consola
clear(); //llama a al funcion de limpieza
	do{	//inicia un do while
				clear(); //llama a la funcion de limpieza
   cout<< "===============>Opciones<==============="<<endl;
   cout << "____________________________________________________"<<endl;
   cout<< "1) Agregar vector"<<endl;
   cout<< "2) Mostrar coordenadas"<<endl;				//imprime el menu
   cout<< "3) Mostrar Promedio de coordenadas"<<endl;
   cout<< "4) Eliminar" <<endl;
   cout<< "5) Salir" <<endl;
   cout << "____________________________________________________"<<endl;
   cout<< "Ingrese una opcion: ";
   cin>>opcion;	//guarda el numero ingresado en la variable opcion

	ap(opcion);	//comprueba numeros negativos y letras
	switch(opcion){	//inicia el switch y toma el dato de opcion
			case 1: //caso numero 1
					do{ //inicia un do while
						clear();
						cout<<"-->Ingrese el valor de X: "<<endl;
						cin>>aux.x;
							clear();
						cout<<"-->Ingrese el valor de Y: "<<endl;
						cin>>aux.y;
						clear();										//Pide los datos de x, y, z
							cout<<"-->Ingrese el valor de Z: "<<endl;	//y los guarda en la variable aux 
						cin>>aux.z;
						clear();
						cola.push(aux);					//a la cola le envia todos los datos que se encuentran en aux
						p=&cola.front();				//el puntero apunta a el primer dato

						cout<<"Quiere ingresar otro Ahorrante? (Y/N)"<<endl;	//imprime mensaje
    					cin>>res;
  				 		}while(res=='y'|| res=='Y');	//comprueba
				

			break;
			
			      		
			case 2:
			      			clear();
			      			if (cola.empty()) { 
      			  			cout << "EEEEEEE    RRRRRRR     OOOOO     OOOOO   RRRRRRR"<<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR"          <<endl;
				   			cout << "EE         RR    RRR O       O O       O RR    RRR"           <<endl;
				   			cout << "EEEEEEE    RRRRRRRR  O       O O       O RRRRRRRR"          <<endl;	//en caso que la cola se encuentre vasia
				   			cout << "EE         RR   RR   O       O O       O RR   RR"              <<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR"            <<endl;
				   			cout << "EEEEEEE    RR     RR   OOOOO     OOOOO   RR     RR"          <<endl; 
				   					cout<<""<<endl;;
				   			cout<<""<<endl;;
				 			  cout << "___________________________________________"<<endl;
   					    	 cout << "\nLa cola No contiene Informacion para mostrar"<<endl; 
   					    	 cout << "\nAgrega un Vector!"<<endl; 
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
								cout<<"X: "<<aux.x<<endl;
								cout<<"Y: "<<aux.y<<endl;	//sino imprimira todos los datos que se encuentren en la cola gracias al ciclo for
								cout<<"Z: "<<aux.z<<endl;
								cout << "___________________________________________"<<endl;
								cout << ""<<endl;
								cout << ":::::::::::::::::::::::::::::::::::::::::::"<<endl;
								p++; //el puntero siempre apunta al primer dato
								}
							   p=&cola.front();
							   system("pause");
							   clear();
				  					  } 
			 break;
			 case 4:
					 		  	clear();
				   if (cola.empty()){ 
				   			cout << "EEEEEEE    RRRRRRR     OOOOO     OOOOO   RRRRRRR           uuuu   uuuu"<<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR          u  u   u  u"          <<endl;
				   			cout << "EE         RR    RRR O       O O       O RR    RRR         uuuu   uuuu     "           <<endl;
				   			cout << "EEEEEEE    RRRRRRRR  O       O O       O RRRRRRRR                       "  <<endl;							//en caso que la cola se encuentre vasia
				   			cout << "EE         RR   RR   O       O O       O RR   RR             uuuuuuuu    "      <<endl;
				   			cout << "EE         RR    RR   O     O   O     O  RR    RR          u          u  "            <<endl;
				   			cout << "EEEEEEE    RR     RR   OOOOO     OOOOO   RR     RR        u             u"          <<endl;
				   			cout<<""<<endl;;
				   			cout<<""<<endl;;
				 		  cout << "___________________________________________"<<endl;
   					     cout << "\nLa Cola No contiene Ningun Nodo"<<endl; 
   					     cout << "\nAgrega Vectores!!"<<endl; 
   					     cout << "___________________________________________"<<endl;
   					     cout<<""<<endl;;
				   			cout<<""<<endl;;
   					     system("pause");
   						 } 
    					else {  //sino esta vasia
    						aux=*p; //la variable auxiliar sera igual a el puntero
   					     cout<<"Nodo eliminado"<<endl; 
				cout << "___________________________________________"<<endl;
				cout<<"\nX: "<<aux.x<<endl;
				cout<<"Y: "<<aux.y<<endl;		//imprime datos que seran borrados
				cout<<"Z: "<<aux.z<<endl;
				cout << "___________________________________________"<<endl;
				
				cola.pop();	//borra el primer dato de la cola
      		     p=&cola.front();	//apunta al primer dato
      		     system("pause");	
   								 } 
				     clear();			    
	   break;
			 case 3:
					 	clear();
					 p=&cola.front();	//apunta al prime dato
			                      float px;	//se declaran las variables
		                          float py;
			                      float pz;
			                      int su; //variable de suma
			                      int auxi;	//variable para el promedio
			                      
			                    for(su=0; su<cola.size();su++ ){ //ciclo for
				                aux=*p; //variable auxiliar sera igual al puntero
				                px=px+aux.x;	//px sera igual al dato que tenga mas la variable auxiliar
				                py=py+aux.y;
				                pz=pz+aux.z;

				                p++; //siempre se incrementara el puntero en 1
	}
            	cout<<"Promedio de x--> "<< (px/su)<<endl; //promedio sera igual a la suma de todo entre el numero de vueltas
            	cout<<"Promedio de y--> "<< (py/su)<<endl;
            	cout<<"Promedio de z--> "<< (pz/su)<<endl;
            	auxi=cola.size()*8; //esto es para calcular el numero de bits que se utiliza
            	cout<<"\nEsta Utilizando: "<<auxi<< " BITS de memoria"<<endl<<endl;	//auxi que se le ha asignado un valor inicial de 8
																					//sera igual a el numero de datos*8 y asi da el promedio
							system("pause");
		      		     clear();
		    break;
			
			     	
		  	p=&cola.front();
			}
		}while(opcion!=5);
		
		
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
