#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0;
	while(i<=5){
		sum=sum+i;
		i++;
	}
	cout << "Sum of first 5 natural numbers = " << sum << endl;
	return 0;
}
