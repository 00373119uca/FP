#include<iostream>

using namespace std;

int main(){
	int b;
	float X[3], Y[3], suma=0, suma1=0, promedio=0;
	
	cout<<"digite un numero entero ";cin>>b;
	
	cout<<endl;
	
	cout<<"digite valores para x"<<endl;
	
	for(int i=0;i<b;i++){
		
		cout<<"valores "<<i+1<<"  X: ";cin>>X[i];
	}
	cout<<endl;
	
	cout<<"digite valores para  Y"<<endl;
	
	cout<<endl;
	
	for (int j=0;j<b;j++){
		
		cout<<"valores "<<j+1<<"  Y: ";cin>>Y[j];
	}
	
	
	for(int i=0;i<b;i++){
		for(int j=0;j<b;j++){
			suma=suma+X[i]*Y[j];
			suma1=suma1+Y[j];	
		}
	}
	
	promedio = suma/suma1;
	
	cout<<endl;
	
	cout<<"Arreglo  X:"<<endl;
	
	for(int i=0;i<b;i++){
		
		cout<<X[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Arreglo  Y:"<<endl;
	
	for (int j=0;j<b;j++){
		cout<<Y[j]<<" ";
	}
	
	cout<<endl;
	
	cout<<"El promedio ponderado es: "<<promedio<<endl;
	
	return 0;
}
