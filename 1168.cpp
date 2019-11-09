#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n,tl,suma=0;
	
	char v[1000];
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		
		scanf("%s",&v);
		
		tl=strlen(v);
		
		for(int i=0;i<tl;i++){
			
			if(v[i]=='0' or v[i]=='9' or v[i]=='6'){
				
				suma+=6;
				
				
			}
			else if(v[i]=='2' or v[i]=='3' or v[i]=='5'){
				
				
				suma+=5;
				
			}
			else if(v[i]=='1'){
				
				
				suma+=2;
				
			}
			else if(v[i]=='4'){
				
				
				suma+=4;
				
			}
			else if(v[i]=='7'){
				
				
				suma+=3;
				
			}
			else if(v[i]=='8'){
				
				
				suma+=7;
				
			}
			
			
			
		}
		
		cout<<suma<<" "<<"leds"<<endl;
		
		suma=0;
		
	}
	
	
	return 0;
}
