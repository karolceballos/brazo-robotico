#include<iostream>
using namespace std;
int main(){
	
//jedis deben evitar que los padawan pase al lado oscuro	
//para ello deben identificar si los midiclorias en base 10 al divirse en 5 no se pase de mas de un digito 4	
//por cada padawan se identifica si va para el lado oscuro o no
//indicar el porcentaje de padawans que tiene tendencia al lado oscuro	
	
int cantpadawan,miclodio,residuo,ladoOscuro;
float totalLadoOscuro,porcentaje;

cout<<"ingrese la cantidad de padawanes: ";
cin>>cantpadawan;

for(int i=0;i<cantpadawan;i++){
	
cout<<"ingrese el miclodio del "<<i+1<<" padawan: ";	
cin>>miclodio;  
	
    while(miclodio>=5){
    	
  	 residuo=miclodio%5;
  	if(residuo==4){
  		
  	   ladoOscuro++;	
	  }
	  
       miclodio=miclodio/5;
      
	  if(miclodio<5&& miclodio==4){
	   ladoOscuro++;	
	  }
	  
    }	
    
    if(ladoOscuro>=2){
    	
    	cout<<"el padawan "<<i+1<<" va al lado oscuro porque hay "<<ladoOscuro<<" cantidades de 4 "<<endl;
    	totalLadoOscuro++;
    }else{
    	cout<<"el padawan "<<i+1<<" no va al lado oscuro "<<ladoOscuro<<" cantidades de 4"<<endl;
    }
    ladoOscuro=0;
    
}
	
porcentaje = (totalLadoOscuro / cantpadawan)* 100;
cout << "Porcentaje de padawans que muestran tendencia al lado oscuro: " << porcentaje << "%" << endl;
	
	
	
	
	
return 0;
}
