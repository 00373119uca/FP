#include<iostream>

using namespace std;

int main(){
	
	int p;
	
	cout<<"seleccione una pelicula: "<<endl;
	
	cout<<"1 avengers infinity war"<<endl;
	cout<<"2 guason"<<endl;
	cout<<"3 titanes del pacifico"<<endl;
	cout<<"4 terminator"<<endl;
	cout<<"5 escuadron suicida"<<endl;
	
	cin>>p;
	
	switch(p){
		
	case 1:
	
	   cout<<"usted ha seleccionado avengers infinity war"<<endl;
	   cout<<"precio $5.00"<<endl;
	   break;
	   
	   
	case 2:
		
	   cout<<"usted ha seleccionado guason"<<endl;
	   cout<<"precio $5.00"<<endl;
	   break;
	   
	   
	case 3:
		
	   cout<<"usted ha seleccionado titanes del pacifico"<<endl;
	   cout<<"precio $5.00"<<endl;
	   break;
	   
	
	case 4:
		
	   cout<<"usted ha seleccionado terminator"<<endl;
	   cout<<"precio $5.00"<<endl;
	   break;
	   
	   
	case 5:
		
	   cout<<"usted ha seleccionado escuadron suicida"<<endl;
	   cout<<"precio $5.00"<<endl;
	   break;
	   
	   
	   default:
	   	cout<<"no tenemos esa pelicula"<<endl;
	   break;
		
		
		
		
		
	}
	
	
	
	
	
	system("pause");
	
	return 0;
}
