#include <iostream>
using namespace std;

void ingresar_valores(int vector[]){
	
	for(int i=0;i<10;i++){
		
		cin>>vector[i];
	}
}

void comparar_valores(int vector[]){
	
	for(int i=0;i<10;i++){
		
		if(vector[i]<0 or vector[i]==0){
			
			vector[i]=1;
			
			
		}
		
	}
	
}

void imprimir_vector(int vector[]){
	
	for(int i=0;i<10;i++){
		
		cout<<"X"<<"["<<i<<"]"<<" = "<<vector[i]<<endl;
	}
	
	
}


int main(int argc, char *argv[]) {
	
	int numero[10];
	
	ingresar_valores(numero);
	
	comparar_valores(numero);
	
	imprimir_vector(numero);
	
	return 0;
}
