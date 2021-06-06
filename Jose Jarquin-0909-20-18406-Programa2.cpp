/*
EXAMEN FINAL
Jose Jarquin-0909-20-18406
PROGRAMA QUE ALMACENA LOS NOMBRES DE CLIENTES
*/
#include <iostream>
using namespace std;

//declarando los void para ser llamados
void mostrar();
void ingreso();
void eliminar();

//Prototipo
struct datos
{
char dato[20];
datos *dir_sig;
}
*prim,*cola,*ult=NULL;
int main()
{
int opcion;
//creando menu 
do{
	system("cls");
	system ("color f9");
	cout<<"  iNGRESO DE NOMBRE DE CLIENTES"<<endl;
		cout<<"\t       .:MENU:.                     EXAMEN FINAL JOSE JARQUIN-0909-20-18406\n";
		cout<<"\n  1. Dimencion array----------------------------------FUNCION QUEUE"<<endl;
		cout<<"  2. Mostrar Nombre de cliente------------------------FUNCION ENQUEUE"<<endl;//Insertar
		cout<<"  3. Eliminar Nombre de cliente-----------------------VISUALIZAR"<<endl; //Eliminar
		cout<<"  4. Finalizar"<<endl;//finalizar programa
		cout<<"\n                    Elige la opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: {
				ingreso();
				system ("pause");
				break;
			}
			case 2: {
				mostrar();
				system ("pause");
				break;
			}
			case 3: {
				eliminar();
				system ("pause");
				break;
				
			}
		}
		}while(opcion != 4);
	}

void ingreso(){
cola=new(datos);
cout<<"Ingrese Nombre del cliente "<<endl;
cin>>cola->dato;
if(ult!=NULL){
	ult->dir_sig=cola;
	cola->dir_sig=NULL;
	ult=cola;	
}			
else{
	prim=ult=cola;
}			
}
void mostrar(){
	if(ult==NULL){
	cout<<"La cola esta vacia"<<endl;
	return;	
}system ("cls");
cola=prim;
cout<<"Los datos de la cola son: "<<endl;
while(cola!=NULL){
	cout<<cola->dato<<endl;
	cola=cola->dir_sig;
}	
	
}			
void eliminar(){
	if(prim!=NULL){
		cola=prim;
		cout<<"Eliminado "<<prim->dato<<endl;
		prim=cola->dir_sig; //primer dato toma el segundo y apunta al siguiente
	delete(cola);  //fin de borrado
	
}	
else{
	cout<<"La cola esta vacia"<<endl;
	system ("pause");

}
}
/*
EXAMEN FINAL
Jose Jarquin-0909-20-18406
PROGRAMA QUE ALMACENA LOS NOMBRES DE CLIENTES
*/
