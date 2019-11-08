#include <iostream>
using namespace std;

void lectura_vector(int v[],int n){
	
	for(int i=0;i<n;i++){
		
		scanf("%d",&v[i]);
		
	}
	
}

int comparar_peso(int v[],int n,int p,int pc){
	
	int i=0;
	
	int cont=0;
	
	int dejo;
	
	while((p<=v[i]) and (i<n)){
		
		if(pc>v[0]){
			
			dejo=pc-v[i];
			
			pc=pc-dejo;
			
		}
		
		if(pc>v[i] and i!=0){
			
			cont++;
			
			dejo=pc-v[i];
			
			pc=pc-dejo;
			
		}
		
		i++;
		
		
	}
	
	return cont;
	
}


int main(int argc, char *argv[]) {
	
	int p,c,n,peso_total,hojas_con_comida;
	
	int v[100];
	
	scanf("%d %d %d",&p,&c,&n);
	
	peso_total=p+c;
	
	lectura_vector(v,n);
	
	hojas_con_comida=comparar_peso(v,n,p,peso_total);
	
	printf("%d\n",hojas_con_comida);
	
	
	return 0;
}
