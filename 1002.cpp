#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	double radio,area;
		const double pi=3.14159;
    cin>>radio;
	area=(pi*radio*radio);
    cout<<"A="<<fixed<<setprecision(4)<<area<<endl;
	return 0;
}
