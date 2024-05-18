#include <iostream>
using namespace std;
int main () {
	
int valor;
int posicion=0;
char el;



cout<<"Ingrese el sentido de giro (derecha: D )(izquierda: I) o (salir S) ";
cin>>el;



do {

if(el!='s' && el!='S'){
	


cout<<"Digite el valor de giro: ";
cin>>valor;
switch (el)	{
	
case 'D': posicion+=valor; cout<<"La posicion es "<<posicion<<endl; break;
case 'd': posicion+=valor; cout<<"La posicion es "<<posicion<<endl; break;
case 'I': posicion-=valor; cout<<"La posicion es "<<posicion<<endl; break;	
case 'i': posicion-=valor; cout<<"La posicion es "<<posicion<<endl; break;	
default: cout<<"Valor incorrecto";break;	
}

if (posicion>=0) {
	
posicion%=360;

}else {
posicion=posicion%360+360;	
}	

}
cout<<"Ingrese el sentido de giro (derecha: D )(izquierda: I) o (salir S) ";
cin>>el;	



} while (el!='s' &&el!='S');
	
cout<<"La posicion final es "<<posicion;	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
