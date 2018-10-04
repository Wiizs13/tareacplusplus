/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include <iostream>


//Declaraciones globales

using namespace std;

float Llamada(int min, float tar) //declaracion de funcion
	{
		float pago;
		pago = min  *  tar;
	
	return pago;
	}
	//declaracion de la funcion ap
	int ap(int res);
	
	void  desicion(); //declaracion de la desicion

int main(){
	
    float PagoParcial;
    float minutos;
    int reg;		//variables
    float pagoTotal; 
    
    
system("COLOR 60");
        cout<<"Ingrese el total de minutos que utilizo: "<<endl; //impresion en pantalla
        cin>>minutos; //asignacion a la variable
        		//ciclo para verificar erroes en el programa
            while ( cin.fail () ){ 
                cin.clear();
                cin.ignore(1000,'\n'); //numero de datos ignorados
                system("COLOR 4F");
                system("cls"); //limpiando la pantalla
                 cout<<""<<endl;
                cout<<"Los datos ingresados no son validos"<<endl; //impresion en pantalla
                desicion();
            }
            //if para verificar que todos los numeros sean mayores a 0
            if (minutos <= 0 ){  
                system("cls");
                cout<<""<<endl;
                cout<<"El valor no es valido."<<endl;
                desicion();
            }
			
		if(minutos <=10 ) //si minutos es menor de 10 
			{
                PagoParcial = 0.05; //pagoParcial sera igual a 0.05 por el minuto hablado 
            }
		else if(minutos<=15 ) //si minutos es menor o igual a 15
			{
            	PagoParcial = 0.08; // pagoParcial sera igual a 0.08 por el minuto hablado
            }
		else if(minutos > 15 ) //si minutos es mayor a 15 
			{
            	PagoParcial = 0.10; //pagoParcial sera igual a 0.10 por el minuto hablado.
            }
                   
		pagoTotal = Llamada(minutos,PagoParcial); //pago total sera igual a la llamada por los minutos hablado por el pago parcial.
                    
                    cout<<""<<endl;
        cout<<"El costo de su llamada es: $"<<pagoTotal<<endl;  //impresion de en pantalla
		cout<<"y su tarifa es: $"<<PagoParcial<<endl; //impresion en pantalla
        
    desicion();     //llamada a la funcion
    
    return 0; //finalizacion del programa
}

 //declaracion de la funcion
void desicion(){
			int r;//declaramos "r" para almacenar la respuesta del usuario.
			cout<<""<<endl;
            cout<<"Quiere intentarlo de nuevo \n 1. si \n 2. no"<<endl;//impresion en pantalla para solicitar una respuesta al usuario
            cin>>r;
                if(r == 1){
                        system("cls");// eliminar todo el texto en pantalla.
                        main();//llamada a la funcion main.
                }
                else{
                        system("cls");//comando para eliminar todo el texto en pantalla.
                        exit(0);
                }
				  
			}
			
			


