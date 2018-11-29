/*
Este programa fue hecho por: Wilbert Diaz 
Carnet: AD18005
año: 1
carrera: Ingenieria de sistemas informaticos.
materia: programacion I 
*/

//Librerias y cabeceras a utilizar.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



//Funciones Utilizadas
void solicitud();
void Torre();
void ordenar();
void moverdisco();
int tem;
int tem2;
int n;
int i;
int j;
int desde; 
int hacia; //variables 
int con;
int tam;
int tamdisco;
int espacios;
int k; 
int matriz[100][3];
char cr='±';
char si;
char fondo=177;

void linea(int j) //funciones
{
 for(int i=0;i<j;i++)
  cout<<cr;
 cout<<endl;
}

//Inicio de Main
int main()
{
	solicitud();
	
	
    return 0;
}
//Fin de Main


//inicio de funcion de menu solicitud
void solicitud(){
	int resp; //variable resp


	
		cout<<"Bienvenido a nuestro sistema!"<<endl;
		cout<<"1) Jugar La Torre De Hanoi."<<endl; //Menu del sistema
		cout<<"2) Ordenar Numeros Aleatorios."<<endl;
		cout<<"3) Salir."<<endl;
		cout<<"Digite el numero de su eleccion!..."<<endl;
		cin>>resp; //guardar el numero dijistado en la variable resp
		
			
			if(resp == 1){  //si digita 1
				Torre(); //ejecutar las torres de hanoi
				
			}
			else if(resp == 2){//si digita 2
				ordenar(); //ordena los numeros
			}
			else if(resp == 3){	//si digita 1
				        system("cls");//comando para eliminar todo el texto en pantalla.
                        cout<<"-------------------------------------"<<endl;
                        cout<<"Hasta Luego!"<<endl; //Mensaje en pantalla
                        cout<<"-------------------------------------"<<endl;                        
			}
			else{
				system("CLS"); //limpia la pantalla
				cout<<"Esta no es una opcion valida!!!"<<endl; //mensaje de error
				
			}
}
 //Inicio de funcion torre
void Torre(){
	system("cls"); //limpia la pantalla
system("color 0f"); //cambia color
    cout<<"Las Torres de Hanoi\n"<<endl<<endl; //imprime mensaje
    cout<<"Digite la cantidad de discos: "; 
    cin>>n; //guarda en la variable n global
    while(n>13||n<3) //ciclo whilw
    {
        system("cls");
        cout<<"Tiene que jugar minimo con tres discos y maximo con 13"<<endl<<"Digite la cantidad de discos:"; //mensaje error
        cin>>n; //guarda en la variable n
    }
    tam=n+(n-1);
    for(i=1;i<=((tam*3)+3)+1;i++) //ciclo for
        cout<<fondo;//impresion
    cout<<endl<<fondo;//impresion
    for(i=0;i<n;i++) //ciclo for
    {
        for(j=0;j<3;j++) //ciclo for
        {
              if(j==0) //si es igual a 0
                  matriz[i][j]=i+1; //matriz
              else //sino
                  matriz[i][j]=0; //matriz
              for(k=1;k<=tam;k++) //ciclo foor
              {
                   tamdisco=matriz[i][j]+(matriz[i][j]-1);//tamdisco es igual a 
                   espacios=(tam-tamdisco)/2; //espacios es igual
                   if(matriz[i][j]==0) //si 
                       cout<<fondo;    //impresion
                   else//sino
                   {
                       if(k<=espacios||k>(tam-espacios)) //si 
                           cout<<fondo;
                       else//sino
                           cout<<"*"; //impresion
                   }
              }
              cout<<fondo; //impresion
        }
        cout<<endl<<fondo;
    }
    for(i=1;i<=((tam*3));i++) //ciclo for
    {
        if(i==n-1) //si 
            cout<<"T1"; //impresion 
        else if(i==((n*2)+n)-2) //sino
            cout<<"T2"; //impresion 
        else if(i==(((n*2)+n)-3)+n*2) //sino 
            cout<<"T3"; //impresion 
        else //sino
            cout<<fondo;  //impresion 
    }
    cout<<endl;  //impresion 
    for(i=1;i<=((tam*3)+4);i++)
        cout<<fondo;
    moverdisco();
}
void moverdisco()
{
    while(matriz[0][1]!=1&&matriz[0][2]!=1)
    {
    cout<<"\n\n\t\t\tLleva "<<con++<<" movimientos\n";
    do{
        cout<<"Desde cual torre (T) desea mover el disco: ";
        cin>>desde;
        if(matriz[n-1][desde-1]==0){cout<<"No hay disco en esa torre"<<endl;}
    }
    while(matriz[n-1][desde-1]==0);
    cout<<"Hacia cual torre (T) desea mover el disco: ";
    cin>>hacia;
    desde--;
    hacia--;
    for(i=0;i<n;i++)
    {
        if(matriz[i][desde]!=0)
        {
        tem=matriz[i][desde];
        tem2=i;        
        i=n;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(matriz[i][hacia]==0)
        {
            if(matriz[i+1][hacia]>tem||i==(n-1))
            {
            matriz[i][hacia]=tem;
            matriz[tem2][desde]=0;
            }
            else
            {
            cout<<"\n\nNo puede colocar un disco grande encima de uno pequeno\nni poner un disco en la misma posicion"<<endl //impresion de mensaje error
                <<"Cambie los parametros"<<endl;
                con--;
            moverdisco();
            }       
            i=0;
        }
    }
    system("cls");
    for(i=1;i<=((tam*3)+3)+1;i++)
        cout<<fondo;
    cout<<endl<<fondo;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
              for(k=1;k<=tam;k++)
              {
                   tamdisco=matriz[i][j]+(matriz[i][j]-1); //tamdisco es igual
                   espacios=(tam-tamdisco)/2; //espacio 
                   if(matriz[i][j]==0)//si
                      cout<<fondo;
                   else//sino
                   {
                       if(k<=espacios||k>(tam-espacios))//si
                           cout<<fondo;
                       else//sino
                           cout<<"*";
                   }
              }
              cout<<fondo;
        }
        cout<<endl<<fondo;
    }
    for(i=1;i<=((tam*3));i++) //ciclo for
    {
        if(i==n-1) //si
            cout<<"T1";
        else if(i==((n*2)+n)-2) //sino
            cout<<"T2";
        else if(i==(((n*2)+n)-3)+n*2)//sino
            cout<<"T3";
        else //sino
            cout<<fondo;
    }
    cout<<endl;
    for(i=1;i<=((tam*3)+4);i++)
        cout<<fondo;
    }
    system("color f1");
    cout<<"\n\nFelicitaciones acaba de ganar en "<<con<<" movimientos\n\nDesea volver a jugar S/N: "; //impresion de mensaje
    cin>>si;
    con=0;
    if(si=='s'||si=='S'){ //sino
    	        Torre();//funcion
	}
	else{ //sinoi
		system("cls");//limpiar
		solicitud(); //funcion
	}


    getchar();
}
void ordenar(){
	system("cls");
		srand(time(NULL));
	
	int Matriz [10][10];
// //impresion 
cout << " "<<endl;
	cout << "**********Numeros Generados***********"<<endl;
	cout << " "<<endl;

	for(int fila = 0; fila < 10 ; fila ++){ //ciclo for
		for (int columna = 0; columna < 10; columna ++){
		Matriz[fila][columna] = rand() % 100;
			cout<< Matriz [fila] [columna]<< " ";
		}
		cout << endl;
	}
// //impresion 
cout << " "<<endl;
	cout << "**********Numeros Ordenados**************"<<endl;
	cout << " "<<endl;
	
	
	int aux;
	for(int f=0; f < 10; f++){//metodo de la burbuja
		for(int c=0; c < 10; c++){
			for(int f1=f;f1<10;f1++){
				int caux =0;
				if(f==f1)
				{
					caux=c+1;
				}
				for(int c1=caux;c1<10;c1++){
					if(Matriz[f][c]>Matriz[f1][c1]){
						aux=Matriz[f1][c1]; 
						Matriz[f1][c1]=Matriz[f][c];
						Matriz[f][c]=aux;
					}
				}
			}
		}
	}
	
	for (int fila=0;fila<10;fila++){
		for(int columna=0; columna<10;columna++){
			cout<<Matriz[fila][columna]<<" ";
		}
		cout << endl;
	}
	cout<<" Desea Reiniciar S/N: ";  //impresion 
    cin>>si;
    if(si=='s'||si=='S'){
    	system("cls");
    	        ordenar();
	}
	else{
		system("cls");
		solicitud();
	}
	
	system("PAUSE");
}
