#include <iostream>
using namespace std;

void lectura_vector(string v[],int &tl){
	
	for(int i=0;i<tl;i++){
		
		cin>>v[i];
		
	}
}
	void Burbuja(string V[],int &n){
		
		int i,j;
		
		string aux;
		
		for (i=0; i<n-1; i++)
		{
			for (j=i+1; j<n; j++)
			{
				if(V[i]>V[j])
				{
					aux = V[i];
					V[i] = V[j];
					V[j] = aux;
				}
			}
		}
	}
	void eliminar_elementos(string vec[],int &tam){
		
		int i,j,k;
		
		for(i = 0; i < tam; i++){
			
			for(j = i+1; j < tam; j++){
				
				if(vec[i] == vec[j]){
					
					k = j;
					
					while(k < tam){
						
						vec[k] = vec[k+1];
						
						++k;
					}
					--tam;	
					--j;
					
				}
			}
		}
		
	}
int pokemons_capturados(string V[],int &tl){
	
	int contador=0;
	
	for(int i=0;i<tl;i++){
		
		contador++;
		
		
	}
	
	return contador;
	
}

int main(int argc, char *argv[]) {
	
	string pokemons[1000];
	
	int n;
	
	int faltan;
	
	scanf("%d",&n);
	
	lectura_vector(pokemons,n);
	
	Burbuja(pokemons,n);
	
	eliminar_elementos(pokemons,n);
	
	faltan=151-(pokemons_capturados(pokemons,n));
	
	printf("Falta(m) %d pomekon(s).\n",faltan);
	
	
	
	return 0;
}
