#include <iostream>

using namespace std;

int main(){
    string user;
    int edad;
    
    cout<<"Ingrese su nombre "<<endl;
    cin>>user;

    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
    }else{
        cout <<"HOLA MUNDO"<<endl;
    }
cout<<"ingrese su edad"<<endl;
    cin>>edad;
    
}
