//Examen Final 
//Programa 1
//Jose Jarquin 
//0909-20-18406
//Programa menu de opciones 
//Librerias
#include<iostream>
#include <windows.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{//Estructura Pila
	int dato;
	Nodo *siguiente;	
};
//Funciones
void menu();
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	Nodo *pila = NULL;
	int opcion;
	int dato;
	int arreg;
	system("COLOR F5");
	do{ //Menu Opciones
		cout<<"\t       .:MENU:.                     EXAMEN FINAL JOSE JARQUIN-0909-20-18406\n";
		cout<<"\n  1. Establecer Numero de Notas-----------------------------Tamano de array."<<endl;
		cout<<"  2. Ingresar nota de estudiante----------------------------Funcion PUSH"<<endl;//Insertar
		cout<<"  3. Eliminar nota de estudiante----------------------------Funcion POP"<<endl; //Eliminar
		cout<<"  4. Mostrar notas------------------------------------------mostrar todos los elementos de la pila"<<endl;//Mostrar
		cout<<"  5. Finalizar"<<endl;//finalizar programa
		cout<<"\n                    Elige la opcion: ";
		cin>>opcion;
		
		switch(opcion){
				case 1:	// Proceso arreglo
					cout<<"Dijite en numero de arreglo: ";
					cin>>arreg;
   					break;
			case 2: //Proceso llenado pila
			cout<<"\nIngrese Nota: ";
					cin>>arreg;
					for(int i=0;i<arreg;i++);
					agregarPila(pila,arreg);
					cout<<"\nNota "<<arreg<<" agregada correctamente"<<endl;
					cout<<"\nSi desea ingresar otra nota ingrese de nuevo la opcion 2: "<<endl;
						system("pause");
					break;
							break;	
			case 3: //Proceso Sacar Datos de pila
				cout<<"\nSacando todas las notas: ";
				while(pila != NULL){
						sacarPila(pila,dato);
						if(pila != NULL){
							cout<<dato<<" , ";
						}
						else{
							cout<<dato<<".";
						}
					}
					cout<<"\n";
					system("pause");
			
							break;
			case 4: //Proceso Mostrar datos de Pila
			cout<<"\nMostrando todas las notas: ";
					while(pila != NULL){
						sacarPila(pila,dato);
						if(pila != NULL){
							cout<<dato<<" , ";
						}
						else{
							cout<<dato<<".";
						}
					}
					cout<<"\n";
					system("pause");
					break;
			case 5: break; //Finalizar
		}
		system("cls"); //limpiar pantalla
	}while(opcion != 5);
	
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
//Examen Final 
//Programa 1
//Jose Jarquin 
//0909-20-18406
//Programa menu de opciones
