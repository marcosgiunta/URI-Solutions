#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int password;
	
	do{
		
		scanf("%d",&password);
		
		
		if(password!=2002){
			
			printf("Senha Invalida\n");
			
		}
		else{
			
			printf("Acesso Permitido\n");
			
			
		}
		
	} while(password!=2002);
	
	
	return 0;
}
