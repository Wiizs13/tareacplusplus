/******************************************************************************
/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/





#include<iostream>
#include <iomanip>
#include <conio.h> 	/***********************LIBRERIAS UTILIZADAS****************/
#include<stdlib.h>
#include<windows.h>

	using namespace std;
	
	int main(){		// INICIO DE LA APLICACION

	

	
 // VARIABLES NECESARIAS PARA EL FUNCIONAMIENTO
 	int ventas = 0;
 	float sueldo = 3.14159;
 	int  x;
 	
 	system ("color 37" ); // COLOR DE FONDO 3(AGUAMARINA) Y EL COLOR DEL TEXTO 7(BLANCO)
		cout<<"\t\t\n**********************BIENVENIDO AL SISTEMA*********************** ";  //MENSAJE DE BIENVENIDA
		 			
 	cout<<"\n\nIngrese numero de ventas realizadas en el mes: "; //IMPRESION EN PANTALLA 
 	cin>> ventas; //ASIGNAMOS EL DATO INGRESADO A LA VARIABLE VENTAS
 	Beep(1568, 200);
 	while(cin.fail()){ // ESTA FUNCION EVITA QUE EL USUARIO PONGA CARACTERES QUE NO CORRESPONDAN 
 		cin.clear();
 		cin.ignore(1000,'\n');
 			cout<<" "<<endl; //SALTO DE LINIA
 			system("COLOR 3");
 		cout<<"\n\nEl dato ingresado no es correcto"<<endl; //IMPRESION EN PANTALLA
 		Beep(1568, 600);
 /***********************************************************************************************************************/		
 		 	cout<<"\n\n***************Quiere volver a ejecutar el programa?**************"<<endl; //IMPRESION EN PANTALLA DE VOLVER A EJECUTAR EL PROGRAMA
cout<<"\n\n***********************\n\n1. si\n2. no\n\n***********************"<<endl; // OPCION SI O NO
        cin>>x; //GUARDAMOS EL DATO ASIGNADO EN LA VARIABLE X
	if(x==1) { // SI X ES IGUAL A 1 (SI) ENTONCES SE VOLVERA A EJECUTAR
	Beep(1568, 200);
	system("cls");
	      main();
    }
    else if(x==2){ //SI X ES IGUAL A 2 (NO) ENTONCES CERRARA EL PROGRAMA
    Beep(1568, 200);
    Beep(1568, 200);
        exit(0);
    }
        else {
    	cout<<"\n\n Numero Ingresado Invalido la aplicacion se finalizara"<<endl;
    	exit(0);
	}
 	}
 	while(ventas < 0){ //FUNCION PARA EVITAR NUMEROS NEGATIVOS EN LA APLICACION
 		cout<<" "<<endl;
 		system("COLOR 3");
 		cout<<"\n\nEl dato ingresado no es correcto"<<endl;
 		Beep(1568, 600);
 		cout<<"Ingrese un dato correcto"<<endl;
 /***********************************************************************************************************************/		
 		 	cout<<"\n\n***************Quiere volver a ejecutar el programa?**************"<<endl; //IMPRESION EN PANTALLA DE VOLVER A EJECUTAR EL PROGRAMA

cout<<"\n\n***********************\n\n1. si\n2. no\n\n***********************"<<endl;
        cin>>x;
	if(x==1) {
		 Beep(1568, 200);
		system("cls");
	      main();
    }
    else if(x==2){
    	Beep(1568, 200);
    Beep(1568, 200);
        exit(0);
    }
        else {
    	cout<<"\n\n Numero Ingresado Invalido la aplicacion se finalizara"<<endl;
    	exit(0);
	}
 }
 	if (ventas <= 500000 ){ //si es menor o igual de 500000 el sueldo sera de 80.000
 		cout<<" "<<endl;
 	cout<<"\t\t\nSu sueldo sera de: "<<"80.000"<<endl;
 	Beep(1568, 200);
	 }
	  else if (ventas <= 1000000 ){ //si es menor o igual de 1000000 el sueldo sera de 160.000
 		cout<<" "<<endl;
 	cout<<"\t\t\n Su sueldo sera de: "<<"160.000"<<endl;
 	Beep(1568, 200);
	 }
	 	  else if (ventas <= 1500000 ){ //si es menor o igual de 1500000 el sueldo sera de 320.000
 		cout<<" "<<endl;
 	 cout<<"\t\t\n Su sueldo sera de: "<<"320.000"<<endl;
 	 Beep(1568, 200);
 		 }
 	  else if (ventas <= 2500000 ){ //si es menor o igual de 2500000 el sueldo sera de 450.000
 		cout<<" "<<endl;
 	cout<<"\t\t\n Su sueldo sera de: "<<"450.000"<<endl;
 	Beep(1568, 200);
 		cout<<" "<<endl;
 			cout<<" "<<endl;	
	 }
 	  else if (ventas <= 4000000 ){ //si es menor o igual de 4000000 el sueldo sera de 550.000
 		cout<<" "<<endl;
 	cout<<"\t\t\n Su sueldo sera de: "<<"550.000"<<endl; 
 	Beep(1568, 200);
	 }	  
	 else // finalizacion 
	 {
 	 sueldo = ventas * 0.20; // multiplicacion por el 20% 
 	 			cout<<" "<<endl;
 	cout<<fixed<<setprecision(3)<<"\t\t\n Tu sueldo sera de el 20% de las ventas realizadas: "<<sueldo<<endl; //impresion de los datos si es mayor de 4000000
 	Beep(1568, 200);
 	Beep(1568, 200);
 	Beep(1568, 200);
}
 /***********************************************************************************************************************/		
 cout<<" "<<endl;
 		 	cout<<"\n***************Quiere volver a ejecutar el programa?**************"<<endl; //IMPRESION EN PANTALLA DE VOLVER A EJECUTAR EL PROGRAMA

cout<<"\n\n***********************\n\n1. si\n2. no\n\n***********************"<<endl;
        cin>>x;
	if(x==1) {
		 Beep(1568, 200);
		system("cls");
	      main();
    }
    else if(x==2){
    	Beep(1568, 200);
    Beep(1568, 200);
        exit(0);
    }
    else {
    	cout<<"\n\n Numero Ingresado Invalido la aplicacion se finalizara"<<endl;
    	exit(0);
	}
	getch();
}
