#include <iostream>
#include <cstring>
using namespace std;

	int intercambio_max(int Al[],int Bl[]){
		
		int imax1=0;
		
		int imax2=0;
		
		
		
		for(int i=0;i<100001;i++){
			
			if (Al[i]!=0 and Bl[i]==0){
				
				imax1++;
				
			}
			else if(Al[i]==0 and Bl[i]!=0){
				
				imax2++;
				
			}
			
		}
		
		if(imax1<imax2){
			
			return imax1;
			
		}
		else{
			
			return imax2;
			
		}
		
		
	}
	
	
 int main(int argc, char *argv[]) {
	
	int a,b,imax,x;
	
	int A[100001];
	
	int B[100001];
	
	do{
		memset(A, 0, sizeof(A));
		memset(B, 0, sizeof(B));
		
		scanf("%d %d",&a,&b);
		
		if(a!=0 and b!=0){
			
			for(int i=0;i<a;i++){
				
				scanf("%d",&x);
				
				A[x]++;
				
				
			}
			for(int i=0;i<b;i++){
				
				scanf("%d",&x);
				
				B[x]++;
				
				
			}
			
			imax=intercambio_max(A,B);	
			
			cout<<imax<<endl;
			
		}
		
		
	} while(a!=0 and b!=0);
	
	
	return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

	int intercambio_max(int Al[],int Bl[]){
		
		int imax1=0;
		
		int imax2=0;
		
		
		
		for(int i=0;i<100001;i++){
			
			if (Al[i]!=0 and Bl[i]==0){
				
				imax1++;
				
			}
			else if(Al[i]==0 and Bl[i]!=0){
				
				imax2++;
				
			}
			
		}
		
		if(imax1<imax2){
			
			return imax1;
			
		}
		else{
			
			return imax2;
			
		}
		
		
	}
	
	
 int main(int argc, char *argv[]) {
	
	int a,b,imax,x;
	
	int A[100001];
	
	int B[100001];
	
	do{
		memset(A, 0, sizeof(A));
		memset(B, 0, sizeof(B));
		
		scanf("%d %d",&a,&b);
		
		if(a!=0 and b!=0){
			
			for(int i=0;i<a;i++){
				
				scanf("%d",&x);
				
				A[x]++;
				
				
			}
			for(int i=0;i<b;i++){
				
				scanf("%d",&x);
				
				B[x]++;
				
				
			}
			
			imax=intercambio_max(A,B);	
			
			cout<<imax<<endl;
			
		}
		
		
	} while(a!=0 and b!=0);
	
	
	return 0;
}
