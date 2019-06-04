/*******************************************************************************
/*******************************************************************************
                           Codigo Creado por:
                       Wilbert alexander arana diaz
                       			AD18005
                    Ingeneria en Sistemas Informaticos
********************************************************************************/


#include <iostream>
#include <cstdlib>
#include <FL/Fl.H>			//LIBRERIA GRAFICAS
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_message.H>
#include <array> //utilize la libreria array para almacenar los datos de los paises
#include <ctime>
#include <string>

using namespace std;

class country  //cree una clase llamada country o pais
{
public: //dentro de las clase public se encuentran los datos string y su nombre
    country(string, string);
    string pais;
    string capital;
    void form(){ //declaracion de una funcion llamada form que imprime en pantalla la capital en forma de mensaje 
  fl_message("La capital es: %s", capital.c_str());
        }
private:
        //no contiene datos privados
};
country::country(string nom, string cap) //llama a la clase country y le digo que le mandare dos variable de tipo string
{
    pais = nom;  //las variables se igualan al valor que tendran las variables de la clase
    capital = cap;
}

 std::array<country, 15> countries = {  //dentro del array solo ingrese 15 valores pero se puede aumentar la cantidad de paises y aumentar el numero 15 
            country("El Salvador", "San Salvador"),
            country("Mexico", "Ciudad de Mexico"),
            country("Estados Unidos", "Whashinton"),
            country("Japon", "Tokio"),
            country("Canada", "Toronto"),
            country("Peru", "Lima"),
            country("Chile", "Santiago"),                                   //este array se declara fuera de la clase formulario
            country("Argentina", "Buenos Aires"),                            //para evitar errores de compilacion
            country("Venezuela", "Caracas"),
            country("Rusia", "Moscu"),
            country("Colombia", "Medellin"),
            country("Uruguay", "Monte Video"),
            country("Portugal", "Lisboa"),
            country("Alemania", "Berlin"),
            country("Andorra", "Andorra la vieja"),
    };
    
class Formulario : public Fl_Window{///inicio del formulario grafico
    

    Fl_Window *window;
    Fl_Box *box;
    Fl_Button *pais1;   //Creacion de los botones
    Fl_Button *pais2;    //   
    Fl_Button *pais3;   //
    Fl_Button *pais4;//
    Fl_Button *pais5;//
     int coor_x;
    int coor_y;  //cree dos variables llamadas coordenadas para poder manejar los flbutton mas adelante
    std::array<int, 5> coor = {-1, -2, -3, -4, -5} ;

    public:
    Formulario():Fl_Window(300,325){ //tamaño de la pantalla de formulario
     	begin();
          coor_x = 75; //declaro las variables antes creadas
        coor_y = 70; 
        box = new Fl_Box(75,15,150,10,"Capitales de Paises"); //mensaje 
    	box->box(FL_RFLAT_BOX);
        box->labelsize(23); //tamaño que tendra ese mensaje
    	box->labelfont(FL_BOLD+FL_ITALIC); //tipo de la fuente del mensaje
    	box->labeltype(FL_SHADOW_LABEL); 
       
    
    
    srand(time(nullptr)); //funcion srand inicia como nulo

    int Rand_v; //variable para usar los random
    int i = 0;  //inicio un contador en 0

    while(i < 5) //contador es menor que 5 
    {            //cuando sea menor que 0 saldra
        bool isValid; //boleano inicia como valido
        int a; 
        isValid = false; 

      
        Rand_v = rand()/((RAND_MAX + 1u)/15); //variable random es igual a la funcion rand entre el numero maximo que es 15 + 1u entre 15 que son la cantidad de numeros en el array

       
        for (int j = 0; j < 5; j++) //ciclo for generar 5 random
        {
         
            if (Rand_v == coor[j])//random sera igual al numero generado aleatoria mente 
            {                      
               
                isValid = true;  //si es valido enviara un ok

            }
        }

        if (isValid != true)        //si es falso
        {
            coor[i] = Rand_v;   //coor verificara y iguala 
            i++;
        }
    }
    
   /* for (int j = 0; j < 5; j++) //este for sirve para imprimir en consola los 5 paises generados 
    {
        cout << "\n Pais: " << countries[coor[j]].pais << endl;             //esto se puede quitar 
        cout << "\n Capital: " << countries[coor[j]].capital << endl;       //pero para cuestiones de aprendisaje lo dejare
        cout << "" << endl;
    }*/
        //aqui es donde se utiliza las variables coor_x antes creadas
        //ya que de no hacerlo asi el programa da error
        pais1 = new Fl_Button(coor_x, coor_y, 150, 30, countries[coor[0]].pais.c_str());
    	pais2 = new Fl_Button(coor_x, coor_y + 50, 150, 30, countries[coor[1]].pais.c_str());
        pais3 = new Fl_Button(coor_x, coor_y +100, 150, 30, countries[coor[2]].pais.c_str()); //programa crea el boton lo ubica en X y Y y le asigna el valor de coor 
        pais4 = new Fl_Button(coor_x, coor_y +150, 150, 30, countries[coor[3]].pais.c_str()); //estos numeros se asignan porque anteriormente se generaron con el random
        pais5 = new Fl_Button(coor_x, coor_y + 200, 150, 30, countries[coor[4]].pais.c_str());
    	Fl_Color c = fl_rgb_color(85,170,255);
  
    	pais1->callback(btn_pais1,(void*)this);
        pais2->callback(btn_pais2,(void*)this);
        pais3->callback(btn_pais3,(void*)this); //estas funciones llaman a la funcion que permiten que el boton funcione 
        pais4->callback(btn_pais4,(void*)this);
        pais5->callback(btn_pais5,(void*)this);
    	end();
    }
    //////////////////////////////////////////////////
    static void btn_pais1(Fl_Widget *w, void *data) {
       Formulario *e = (Formulario*)data; 
           countries[e->coor[0]].form(); 
    }
    /////////////////////////////////////////////////
    static void btn_pais2(Fl_Widget *w, void *data) {
       Formulario *e = (Formulario*)data; //crea una variable e
             countries[e->coor[1]].form(); // esta variable e llama a la funcion coor y a la posicion de ella      
    }
    /////////////////////////////////////////////////           estas funciones son las que permiten que el programa funcione bien a traves de los botones
    static void btn_pais3(Fl_Widget *w, void *data) {
       Formulario *e = (Formulario*)data;
             countries[e->coor[2]].form();
    }
    /////////////////////////////////////////////////
    static void btn_pais4(Fl_Widget *w, void *data) {
       Formulario *e = (Formulario*)data;
            countries[e->coor[3]].form();
    }
    /////////////////////////////////////////////////
    static void btn_pais5(Fl_Widget *w, void *data) {
       Formulario *e = (Formulario*)data;
             countries[e->coor[4]].form();
    }
    /////////////////////////////////////////////////
};

int main(int argc, char** argv)
{
        Formulario *e=new Formulario(); //se crea una variable e

	e->show(argc,argv); //la variable e llama a la funcion show de la libreria FL_window
	return Fl::run(); //libreria fl retorna la corrida del programa
    return 0;
}