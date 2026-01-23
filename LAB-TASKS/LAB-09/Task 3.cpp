#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a positive number"<<endl;
	cin>>a;
	while(a<0){
		cout<<"error"<<endl;
		cin>>a;
	}
	cout<<"you entered positive number"<<endl;
	return 0;
}
