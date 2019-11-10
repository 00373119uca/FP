#include <iostream>
 
using namespace std;
 
int main() {
  int numeros[2][2];
  
  for (int i=0; i<2; i++){
      for (int k=0; k<2; k++){
      	
        cout<<"digite un numero ["<<i<<"]["<<k<<"]: ";
        
        cin>>numeros [i][k];
        }
  }
  
  for (int i=0; i<2; i++){
  	
      for (int k=0; k<2; k++){
      	
        cout<<numeros[i][k]<<" | ";    
      }
      
      cout<<endl; 
  }  
  
  return 0;
}
