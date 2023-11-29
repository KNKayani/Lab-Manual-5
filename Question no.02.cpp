#include<iostream>
using namespace std;
int main()
{
int num1, n, a, diff, sum=0,x;

//find the sum of arithmetic progression series...
cout<<"Enter the first number of series : "<<endl;
cin>>num1;

cout<<"Enter the total number of elements in series "<<endl;	
cin>>n;

cout<<"Input the common difference for A.P series..\n";
cin>>diff;

sum = (n * (2 * num1 + (n - 1) * diff)) / 2;
x = num1 + (n - 1) * diff;

cout<<"Sum of A.P series is : "<<endl;

for(a=num1; a<=x ;  a =a+diff){
    if(a!=x)
    cout<<a<<"+";
	
	else
	cout<<a<<"="<<sum<<endl;}

return 0;
}
