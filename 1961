#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

void lectura_vector(int v[],int tl){
	
	for(int i=0;i<tl;i++){
		
		scanf("%d",&v[i]);
		
	}
}
	
	bool diferencia(int v[],int tl,int salto){
		
		int operacion,i=0;
		
		bool salida=true;
		
		while(salida!=false and i<tl-1){
			
			operacion=abs(v[i]-v[i+1]);
			
			
			if(operacion>salto){
				
				salida=false;				
			}
			
			i++;
			
		}
		
		return salida;
		
	}

int main(int argc, char *argv[]) {
	
	int salto,num;
	
	int alt_tubos[100];
	
	bool salida;
	
	scanf("%d",&salto);
	
	scanf("%d",&num);
	
	lectura_vector(alt_tubos,num);
	
	salida=diferencia(alt_tubos,num,salto);
	
	if (salida==true){
		
		printf("YOU WIN\n");
		
	}
	else{
		
		printf("GAME OVER\n");
		
	}

	return 0;
}
