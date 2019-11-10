#include<iostream>

using namespace std;

int main(){
    
    int n1,n2,n3,n4,suma = 0,resta = 0,multiplicacion = 0,division = 0;
    
    cout<<"digite el primer numero: ";cin>>n1;
    cout<<"digite el segundo numero: ";cin>>n2;
    cout<<"digite el tercer numero: ";cin>>n3;
    cout<<"digite el cuarto numero: ";cin>>n4;
    
    suma = n1 + n2 + n3 + n4;
    resta= n1 - n2 - n3 - n4;
    multiplicacion= n1 * n2 * n3 * n4;
    division= n1 / n2 / n3 / n4;
    
    
    cout<<"\nla suma es: "<<suma<<endl;
    cout<<"la resta es: "<<resta<<endl;
    cout<<"la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"la division es: "<<division<<endl;
    
    
    return 0;
    
}   
