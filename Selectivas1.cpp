//Selectivas1.cpp
//PINO ROJAS Raul Farid Banchello
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Ingrese los tres numeros:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if((a!=b)&&(b!=c)){
    	if (a<b){
        	if (a<c){
            	if (b<c){
                	cout<<"El numero mayor es: "<<c;
            	} else {
                	cout<<"El numero mayor es: "<<b;
            	}
        	} else {
            	cout<<"El numero mayor es: "<<b;
        	}
    	} else {
        	if (b<c) {
            	if (a<c){
                	cout<<"El numero mayor es: "<<c;
            	} else {
                	cout<<"El numero mayor es: "<<a;
            	}
        	} else {
            	cout<<"El numero mayor es: "<<a;
        	}
    	}
	} else {
		cout<<"Se presentan numeros iguales";
	}
    return 0;
}
