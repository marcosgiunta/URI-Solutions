#include <iostream>
using namespace std;

int algoritmo_de_josefo(int n, int k){ 
	if (n == 1) {
		return 1; 
	}
	else{
		/* La posición devuelta por algoritmo_de_josefo (n - 1, k) se ajusta porque la
		llamada recursiva algoritmo_de_josefo(n - 1, k) considera la posición original
		k% n + 1 como posición 1 */
		
		return ((algoritmo_de_josefo(n - 1, k) + k-1) % n) + 1; 
	}
} 

int main(int argc, char *argv[]) {
	
	int nc,n,k,solucion;
	
	scanf("%d",&nc);
	
	for(int i=1;i<=nc;i++){
		
		scanf("%d %d",&n,&k);
		
		solucion=algoritmo_de_josefo(n,k);
		
		printf("Case %d: %d\n",i,solucion);
		
	}
	
	return 0;
}
