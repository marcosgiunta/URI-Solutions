#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

void desplazamiento_letras(string &palabra){
	
	for(int i=0;i<palabra.size();i++){
		
		if(isalpha(palabra[i])){
			
			
			palabra[i]=palabra[i]+3;
			
			
		}
		
	}
	
}
	
string invertir_cadena(string cadena){
	
	string aux_cadena;
	
	
	for (int i = cadena.size(); i >=0 ; i--){
		
		if(cadena[i]!='\0'){
			
			aux_cadena += cadena[i];
			
		}
		
		
	}
	
	
	return aux_cadena;
	
}
	
void mitad_adelante(string &palabra){
	
	int mitad=(palabra.size())/2;
	
	for(int i=mitad;i<palabra.size();i++){
		
		palabra[i]=palabra[i]-1;
		
		
	}
	
}

int main(int argc, char *argv[]) {
	
	int n;
	
	string mensaje,mensaje_invertido;
	
	scanf("%d",&n);
	
	cin.ignore();
	
	for(int i=0;i<n;i++){
		
		getline(cin,mensaje);
		
		desplazamiento_letras(mensaje);
		
		mensaje_invertido=invertir_cadena(mensaje);
		
		mitad_adelante(mensaje_invertido);
		
		cout<<mensaje_invertido<<endl;
		
		
	}
	
	
	
	return 0;
}
