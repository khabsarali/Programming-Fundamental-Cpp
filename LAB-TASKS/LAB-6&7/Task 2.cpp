#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Entered the temperature"<<endl;
	cin>> temp;
	if (temp>=40){
    cout<<"stay indoors because it is extremely hot and could be dangerous to health"<<endl;
    	}
    else if(temp>30&&temp<39){
    	cout<<"should suggest drinking plenty of water to stay hydrated in the hot weather."<<endl;
	}
    else if(temp>20&&temp<29){
    	cout<<"that the weather is pleasant and suitable for outdoor activities."<<endl;
	}	
	else{
		cout<<"wearing warm clothes to stay comfortable in the cooler weather."<<endl;
		
	}
	
	return 0;
}
