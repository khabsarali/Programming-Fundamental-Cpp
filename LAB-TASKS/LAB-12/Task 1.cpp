#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int n1;
	cout<<"Enter A Number To Find Its Square Root : ";
	cin>>n1;
	
	double r1= sqrt(n1);
	cout<<"Square Root of "<<n1<<" is : "<<r1<<endl;
	
	int r2= abs(n1);
	cout<<"Absolute Value of "<<n1<<" is : "<<r2<<endl;
	
	double r3= sin(n1);
	cout<<"Sine of "<<n1<<" is : "<<r3<<endl;
	
	double r4= cos(n1);
	cout<<"Cosine of "<<n1<<" is : "<<r4<<endl;
	
	double r5= pow(n1,3);
	cout<<"Power 3 of "<<n1<<" is : "<<r5<<endl;
	
	return 0;
}
