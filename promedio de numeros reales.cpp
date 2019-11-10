#include<iostream>

using namespace std;

int main(){
	float a, suma=0, promedio;
	
	cout<<"digite la cantidad de numeros que desea guardar "<<endl;
	cin>>a;
	
	int cantNumeros = a;
	float numeros[cantNumeros];  
	
	for(int i=0; i< cantNumeros; i++){   
	
	cout<<"Ingrese un valor "<<(i+1)<<endl;
	cin>>numeros[i];
	}
	
	cout<<"Los numeros que digito son: "<<endl;
	for (int i=0; i<cantNumeros; i++){
			
	cout<<numeros[i]<<endl;	
	}
	cout<<"El promedio de los valores que digito son : "<<endl;
	for (int i=0; i<cantNumeros; i++){
		
	suma=numeros[i]+suma;		
	}
	promedio = suma/a;
	
	cout<<promedio<<endl;
	
	return 0;
}

