#include<iostream>
using namespace std;
int main()
{
	int  N;
	cout<<"Enter a number: ";
	cin>> N;
	int i=1;
	cout<<"The numbers from 1 to "<<N<<" are: ";
	while(i<=N){
		cout<<i<<" , ";
		i++;
	}
	return 0;
	
}
