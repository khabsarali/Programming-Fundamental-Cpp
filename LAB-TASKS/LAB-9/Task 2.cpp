#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the table number"<<endl;
	cin>>a;
	cout<<"Enter the limit"<<endl;
	cin>>b;
	int i=1;
	while(i<=b){
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
		i++;
	}
	return 0;
	
}
