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

void operacion_diagonal(float matriz[][12],char operacion){
	
	float suma=0;
	
	float promedio;
	
	for(int i=0;i<12;i++){
		
		for(int j=i;j<12;j++){
			
			if(j>i){
				
				suma=suma+matriz[i][j];
				
			}
			
		}
		
	}
	
	if(operacion=='S'){
		
		cout<<fixed<<setprecision(1)<<suma<<endl;
		
		
	}
	else if(operacion=='M'){
		
		
		promedio=suma/66;
		
		cout<<fixed<<setprecision(1)<<promedio<<endl;
		
	}
	
}


int main(int argc, char *argv[]) {
	
	float M[12][12];
	
	char op;
	
	cin>>op;
	
	valores_matriz(M);
	
	operacion_diagonal(M,op);
	
	return 0;
}
