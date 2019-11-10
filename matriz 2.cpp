#include <iostream>
 
using namespace std;
 
int main() {
  int numeros[100][100], filas, columnas;
  
  cout<<"digite el numero de filas: "<<endl;
  cin>>filas;
  cout<<"digite el numero de columnas: "<<endl;
  cin>>columnas;
  
  for (int i=0; i<filas; i++){
  	
      for (int k=0; k<columnas; k++){
      	
        cout<<"digite un numero ["<<i<<"]["<<k<<"]: ";
        
        cin>>numeros [i][k];
        }
  }
  
  for (int i=0; i<filas; i++){
  	
      for (int k=0; k<columnas; k++){
      	
        cout<<numeros[i][k]<<" | ";
        
      }
      
      cout<<endl; 
  }  
  

  return 0;
}
