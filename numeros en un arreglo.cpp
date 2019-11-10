#include<iostream>

using namespace std;


int main(){
	int n;
	cout<<"Ingrese cuantos numeros desea almacenar "<<endl;
	cin>>n;
	
	int cantNumeros = n;
	int numeros[cantNumeros];  
	
	for(int i=0; i< cantNumeros; i++){   
	cout<<"digite el numero"<<(i+1)<<endl;
	cin>>numeros[i];
    }
	
	cout<<"Los numeros que digito son: "<<endl;
	for (int i=0; i<cantNumeros; i++){		
	cout<<numeros[i]<<endl;	
	}
	
	
	
	return 0;
}

