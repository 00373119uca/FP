#include <iostream>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas,a;
	
	cout<<"digite la cantidad de filas: " <<endl; 
	cin>>filas;
	cout<<"digite la cantidad de columnas: "<<endl;
	cin>>columnas;
	cout<<"digite un numero entero: "<<endl;
	cin>>a;
		
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			
			cout<<"ingrese un numero: ["<<i<<"]["<<j<<"]";
			
			cin>>numeros[i][j];
		}
	}
	
	for(int i=0; i<filas; i++){
		
		for(int j=0; j<columnas; j++){
			
			numeros[i][j]*a;
		}
	}
	
	cout<<"matriz: " <<endl;
	for(int i=0; i<filas; i++){
		
		for(int j=0; j<columnas; j++){
			
			cout<<numeros[i][j]<<" | ";			
		}
		
		cout<<endl;
	}
	
	cout<<"producto: "<<endl;
	for(int i=0; i<filas; i++){
		
		for(int j=0; j<columnas; j++){
			
			cout<<numeros[i][j]*a<<" | ";
		}
		
		cout<<endl;
	}
	
	return 0;
}
