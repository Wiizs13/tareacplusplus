#include<iostream> //libreria para la entrada y salida de datos
#include<cstdlib>
#include <windows.h> //libreria para poder usar audios de la computadora
using namespace std; 
 
struct nodo{ //estructura 
    int nro;
    struct nodo *sgte; 
};
 
typedef struct nodo *Puntero;
 
class Pila{ //creacion de la clase llamada pila
    public: //sera de tipo publica
        Pila(void); //pila sera de tipo void no retornara nada
        void Apilar(int ); //apilar sera un void y recivira un entero
        int Desapilar(void ); //desapilar sera entero y no retornara nada
        void Cima(void); //cima sera un void y recivira un void
        bool PilaVacia(void); //pila sera un booleano y no recivira nada
        void MostrarPila(void);//mostrar sera un void y recivira un void
        void DestruirPila(void);// destruir sera un void y recivira un void
 
    private: //declaracion de datos privados
        Puntero cima;
 
};

Pila::Pila(void){ //declaracion de la funcion fila
    cima=NULL; //cima sera igual a nulo
}
 
bool Pila::PilaVacia(void){ //declaracion de booleano pila vacia
    if(cima==NULL) //cima sera igual a nulo
        return true; 
    else
        return false;
}


 
void Pila::Apilar(int x){ //de la clase pila la funcion aplilar
 
    Puntero p_aux;
    p_aux=new(struct nodo);
    p_aux->nro=x;
    p_aux->sgte=cima;
    cima=p_aux;
 
}
 
void Pila::Cima(){ //de la clase pila la funcion cima
    int x; //declaracion de variable
    if(cima==NULL) //si cima es igual a null
        cout<<"\n\n\tCola Vacia...!"; //imprime mensaje
 
    else { //sino
        x=cima->nro; //x sera igual a menos nro
        cout<<"\n\tEl Siguiente es :"<<x<<endl; //imprime mensaje
    }
}
 
int Pila::Desapilar(void){//de la clase pila la funcion desapilar
    int x;//declaracion de variable
    Puntero p_aux;// puntero p_aux
    if(cima==NULL) //si cima es igual a nullo
        cout<<"\n\n\tcola Vacia...!!"; //imprime mensaje
    else{ //sino
        p_aux=cima; //p aux sera igual a cima
        x=p_aux->nro; //x sera igual a p aux menos nro
        cima=cima->sgte;// cima sera igual a sima menos sgte
        delete(p_aux);//eliminar paux
    }
    return x; //returna x
}
 
void Pila::MostrarPila(void){ //de la clase pila la funcion mostrar
    Puntero p_aux; 
    p_aux=cima;
 
    while(p_aux!=NULL){ //un cilo si p aux es diferente de nulo
        cout<<"\t "<<p_aux->nro<<endl;//imprime tabulador 
        p_aux=p_aux->sgte;
    }
}
 
void Pila::DestruirPila(void){//de la clase pila la funcion destruir 
    Puntero p_aux;
 
    while(cima!=NULL){ //cilclo cima es diferente de nulo
            p_aux=cima; //p aux sera igual a cima
            cima=cima->sgte;//cima es igual a cima menos sgte
            delete(p_aux); //elimar paux
    }
}
	
void menu(void) //menu
{
    cout<<"\t -------------------------------------------\n";
    cout<<"\t|        SISTEMA DE COLAS                   |\n";
    cout<<"\t|-------------------------------------------|\n";
    cout<<" \t|                                           |"<<endl;
    cout<<" \t|  1. INGRESAR                              |"<<endl;
    cout<<" \t|  2. ATENDER                               |"<<endl;
    cout<<" \t|  3. MOSTRAR COLA                          |"<<endl; //impresion de menu
    cout<<" \t|  4. ELIMINAR COLA                         |"<<endl;
    cout<<" \t|  5. MOSTRAR SIGUIENTE                     |"<<endl;
    cout<<" \t|  6. SALIR                                 |"<<endl;
    cout<<" \t|                                           |"<<endl;
    cout<<"\t -------------------------------------------\n";
    cout<<"\t Ingrese opcion: "; 
}
 
int main(void ){ //funcion principal main
  
    system("color 0a"); //color de fondo
    Pila pila;
    int x; //variables
    int op; //variable
 
    do //ciclo do, while
    {
        menu();  cin>> op;
 
        switch(op) //switch
        {
            case 1: cout<< "\n\t INGRESE NUMERO : "; cin>> x;//caso numero 1
                    pila.Apilar(x);
                    
                    cout<<"\n\n\t\tNumero " << x << " encolado...\n\n";
                    break;
 
            case 2: 										//caso numero 2
                    if(pila.PilaVacia()==true)
                        cout<<"\n\n\tCola Vacia....";
                    else{
                        x = pila.Desapilar( );
                        cout<<"\n\n\tNumero "<<x<<" atendido\n";
                        }
                    break;
 
 
            case 3:												//caso numero 3
                    cout << "\n\n\t MOSTRANDO COLA\n\n";
                    if(pila.PilaVacia()!=true)
                        pila.MostrarPila(  );
                    else
                        cout<<"\n\n\tCola vacia..!"<<endl;
                    break;
 
 
            case 4:												//caso numero 4
                    pila.DestruirPila(  );
                    cout<<"\n\n\t\tCola eliminada...\n\n";
                    break;
            case 5:												//caso numero 5
                    pila.Cima();
                    break;
         }
 
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=6);
 
return 0;
}

