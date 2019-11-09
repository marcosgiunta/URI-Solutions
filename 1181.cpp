#include <iostream>
#include <iomanip>
using namespace std;

void valores_matriz(float matriz[][12]){
	
	for(int i=0;i<12;i++){
		
		for(int j=0;j<12;j++){
			
			cin>>matriz[i][j];
			
		}
		
	}
}

void operacion_fila(float matriz[][12],int fila,char operacion){
	
	float suma=0;
	
	float promedio;
	
	for(int i=0;i<12;i++){
		
		suma=suma+matriz[fila][i];
		
	}
	
	if(operacion=='S'){
		
		cout<<fixed<<setprecision(1)<<suma<<endl;
		
		
	}
	else if(operacion=='M'){
		
		
		promedio=suma/12;
		
		cout<<fixed<<setprecision(1)<<promedio<<endl;
		
	}
	
}


int main(int argc, char *argv[]) {
	
	float M[12][12];
	
	int pos_fila;
	
	char op;
	
	cin>>pos_fila;
	
	cin>>op;
	
	valores_matriz(M);
	
	operacion_fila(M,pos_fila,op);
	
	return 0;
}
