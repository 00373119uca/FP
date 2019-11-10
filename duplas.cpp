#include<iostream>

using namespace std;

int main(){
	int k, X[3], Y[3];
	
	cout<<"digite un numero entero: ";cin>>k;
	cout<<"\n";
	cout<<"digite valores para X"<<endl;
	for(int i=0;i<k;i++){
		
		cout<<"valores "<<i+1<<" de X: ";cin>>X[i];
	}
	cout<<endl;
	cout<<"digite valores para Y"<<endl;
	cout<<endl;
	for (int j=0;j<k;j++){
		
		cout<<"valores "<<j+1<<" de Y: ";cin>>Y[j];
	}
	cout<<endl;
	cout<<"Arreglo de X:"<<endl;
	for(int i=0;i<k;i++){
		
		cout<<X[i]<<" ";
	}
	cout<<endl;
	cout<<"Arreglo de Y:"<<endl;
	
	for (int j=0;j<k;j++){
		
		cout<<Y[j]<<" ";
	}
	
	
	return 0;
}
