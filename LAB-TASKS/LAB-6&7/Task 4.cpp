#include<iostream>
using namespace std;
int main()
{
	int marks1, marks2,marks3;
	float sum,Percentage;
	cout<<"Enter subject 1 marks"<<endl;
	cin>> marks1;
	cout<<"Enter subject 2 marks"<<endl;
	cin>> marks2;
	cout<<"Enter subject 3 marks"<<endl;
	cin>> marks3;
	sum=marks1+marks2+marks3;
	cout<<"Total Marks = "<<sum<<endl;
	Percentage=(sum/300)*100;
	
	cout<<"Percentage = "<<Percentage<<endl;
	
if (marks1 >= 90) {
    cout << "Grade A" << endl;
}
else if (marks1 >= 80 && marks1 < 90) {
    cout << "Grade B" << endl;
}
else if (marks1 >= 70 && marks1 < 80) {
    cout << "Grade C" << endl;
}
else if (marks1 >= 60 && marks1 < 70) {
    cout << "Grade D" << endl;
}
else {
    cout << "Grade F" << endl;
}
if (marks2 >= 90) {
    cout << "Grade A" << endl;
}
else if (marks2 >= 80 && marks2 < 90) {
    cout << "Grade B" << endl;
}
else if (marks2 >= 70 && marks2 < 80) {
    cout << "Grade C" << endl;
}
else if (marks2 >= 60 && marks2 < 70) {
    cout << "Grade D" << endl;
}
else {
    cout << "Grade F" << endl;
}
if (marks3 >= 90) {
    cout << "Grade A" << endl;
}
else if (marks3 >= 80 && marks3 < 90) {
    cout << "Grade B" << endl;
}
else if (marks3 >= 70 && marks3 < 80) {
    cout << "Grade C" << endl;
}
else if (marks3 >= 60 && marks3 < 70) {
    cout << "Grade D" << endl;
}
else {
    cout << "Grade F" << endl;
}
 if(marks1<60){
 	cout<<"Failed"<<endl;
 }
  if(marks2<60){
 	cout<<"Failed"<<endl;
 }
  if(marks3<60){
 	cout<<"Failed"<<endl;
 }
 if(sum>=270){
 	cout<<"Student are eligible for scholarship"<<endl;
 }
  else if(sum>=240){
 	cout<<"Student are eligible for regular scholarship"<<endl;
 }
 
	
	return 0;
}
