#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float A, B, MEDIA;
	cin>>A>>B;
    MEDIA = (A*3.5+B*7.5)/(3.5+7.5);
	cout<<"MEDIA = "<<fixed<<setprecision(5)<<MEDIA<<endl;
	
	return 0;
}
