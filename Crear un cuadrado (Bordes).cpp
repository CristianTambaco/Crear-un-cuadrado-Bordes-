#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



//cuadrado
void ejercicio2(){
	int numero;
	
	cout<<"** Crear un cuadrado ** "<<endl;	
	cout<<"Ingrese un numero positivo mayor igual a 2: ";
	cin>>numero;
		for(int i=0; i<numero; i++){
			
			if(i==0 || i==numero){
				for(int l=0; l<=numero; l++) cout<<"A";
			}
			else{
				for(int l=0; l<=numero; l++) {
					if(l==0 || l==numero){cout<<"B";}
					else{cout<<" ";}
					
					
				}
			}
				cout<<endl;
		}
		
	
///////////  for(int l=0; l<=numero; l++) cout<<"C";

for(int l=0; l<=numero; l++) cout<<"C";	
						
}
						
int main(){

	ejercicio2();
	
	return 0;
}
