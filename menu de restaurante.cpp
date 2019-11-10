#include <iostream>

using namespace std;

int main(){
	
	int m;
	
	cout<<"seleccione una opcion: "<<endl;
	
	cout<<"1 desayunos "<<endl;
	cout<<"2 almuerzos "<<endl;
	cout<<"3 cenas "<<endl;
	cout<<"4 postres "<<endl;
	cout<<"5 antojitos "<<endl;
	cout<<"6 salir "<<endl;
	
	cin>>m;
	
	switch(m){
		
	case 1:
	   
	   cout<<"cereal"<<endl;
	   cout<<"desayuno tipico"<<endl;
	   cout<<"pancake"<<endl;
	   cout<<"omelette"<<endl;
	break;
	
	case 2:
		
	   cout<<"sopa de pata"<<endl;
	   cout<<"pescado frito"<<endl;
	   cout<<"relleno de papa"<<endl;
	   cout<<"pollo asado"<<endl;
	break;
	
	case 3:
	
	   cout<<"cena tipica"<<endl;
	   cout<<"hamburguesas"<<endl;
	   cout<<"tacos"<<endl;
	   cout<<"carne asada"<<endl;
	break;
	
	case 4:
	
	   cout<<"cheesecake"<<endl;
	   cout<<"pastel de chocolate"<<endl;
	   cout<<"tiramizu"<<endl;
	   cout<<"pie de manzana"<<endl;
	break;
	
	case 5:
	
	   cout<<"empanadas"<<endl;
	   cout<<"pastelitos"<<endl;
	   cout<<"atol de elote"<<endl;
	   cout<<"yuca frita"<<endl;
	break;
	
	case 6:
	
	   cout<<"hasta la proxima"<<endl;
	   
	
	   
	   
	   	
		
	 default:cout<<"el valor ingresado no existe"<<endl;
	}
	
	cin.ignore();
	
	
	
	
	return 0;
}
