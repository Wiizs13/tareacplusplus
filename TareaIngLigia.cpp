/******************************************************************************

                           Codigo Creado por:
                       Wilbert Alexander Arana Diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos

*******************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;
/*/////////////////////////////////////////////////////////////////////////////////////*/
struct Empleado{
char cod[5];
char nombre[50];
int edad;
float salbase;    
float salliquido;
float isss;																	/*Variables globales*/
float afp;
float renta;
float totalprestamo;
char departamento[60];
char puesto[60] ;
};
struct Sucursal{
int numsucursal;
char nombresucursal[60];
/*///////////////////////////////////////////////////////////////////////////////////////////////////*/
};
float calisss(float sal,float tope)
{
int isss=0;
if(sal<1000)	//FUNCION PARA HACER DESCUENTO DE ISSS
isss=sal*0.03;
else
isss=30;
return isss;
}


float calafp(float sal,float isss)
{
	int afp;
	afp = sal * 0.0725; //FUNCION PARA HACER DESCUENTO DE AFP
	return afp;																		/*Creacion de Funciones para el Programa*/
}
float calrenta(float sal,float isss,float afp)
{
	int renta;
	    if ( sal < 487.61 ) {
        renta = 0 ;
    } else if ( sal < 642.86 ) {
        renta = 17.48 ;
    } else if ( sal < 915.82 ) {
        renta = 32.7 ;					//FUNCION PARA HACER DESCUENTO DE RENTA
    } else if ( sal < 2058.68 ) {
        renta = 60.00 ;
    } else {
        renta = 288.57 ;
    }
    return renta;
}
/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
int main(int argc, char *argv[]) /*Inicio del Main*/
{ 
int n;
cout << "cuantos empleados tiene?"<<endl;
cin>>n;
/*//////////////////////////////////////////////////////////////////////////////////////////////////////*/
Empleado e[n];
Sucursal s;
int cp;
int a; 															/*Variables dentro del main*/
int b;
int contador;
/*//////////////////////////////////////////////////////////////////////////////////////////////////////*/
for(int i=0; i<n;i++)
{
cout << "Cod:"<<endl;
cin>>e[i].cod;
cout << "Nombre:"<<endl;
cin>>e[i].nombre;
cout << "Edad:"<<endl;
cin>>e[i].edad; 											/*Ciclo for para pedir los datos del trabajador*/
cout << "Salbase:"<<endl;
cin>>e[i].salbase; 
e[i].isss=calisss(e[i].salbase,0.03); 
e[i].afp=calafp(e[i].salbase,0.0725);
e[i].renta=calrenta(e[i].salbase,0.03 , 0.0725);
/*//////////////////////////////////////////////////////////////////////////////////////////////////////*/

cout << "Cuantos prestamos ah realizado?:"<<endl;
cin>>cp;
contador=0;//contador
float totpres=0;//acumulador
float pres;
while(contador<cp)
{
cout << "Cantidad del Prestamo:"<<endl; //MENSAJE
cin>>pres;															/*FUNCION PARA HACER DESCUENTO POR PRESTAMOS*/
if(e[i].salbase*0.2>(e[i].salbase-totpres)) //SI SALARIO BASE*0.20 ES MAYOR A EL SALARIO BASE - TOTALPRESTADO
{
totpres=totpres+pres; 

}
contador++;
}
/*///////////////////////////////////////////////////////////////////////////////////////////////////////*/


for(int i=0; i<n;i++)
{
cout<<" "<<endl;
cout<<"Codigo: "<<e[i].cod<<"\t";
cout<<"Nombre: "<<e[i].nombre<<"\t";
cout<<"Edad: "<<e[i].edad<<"\t";
cout<<"Salario: "<<e[i].salbase<<"\t"<<endl;
cout<<" "<<endl;
cout<<"Descuento de ISSS: "<<e[i].isss<<"\t"<<endl;							/*Impresion en pantalla con los resultados*/
cout<<"Descuento de AFP: "<<e[i].afp<<"\t"<<endl;
cout<<"Descuento de Renta: "<<e[i].renta<<"\t"<<endl;
cout<<"Salario Liquido: "<<e[i].salbase-totpres-(e[i].renta+e[i].isss+e[i].afp)<<"\t"<<endl;
/*cout<<"4334dsds "<<totpres<<endl;*/
cout<<endl;

}
/*//////////////////////////////////////////////////////////////////////////////////////////////////////*/

system("Pause");
}													/*Finalizacion del main*/
}
/*//////////////////////////////////////////////////////////////////////////////////////////////////////*/
