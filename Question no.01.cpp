#include <iostream>
using namespace std;
int main()
{
//program for LCM of two numbers using HCF.......
int a, x, num1, num2, LCM, HCF=1;
//input first number from user...
cout<<"Enter the first number for LCM :";
cin>>num1;

//input second number from user...
cout<<"Enter the second number for LCM :";
cin>>num2;	

x=(num1<num2) ? num1:num2;
for(a=1; a<=x; a++){
	
    if(num1%a==0 && num2%a==0)
	{ HCF=a; }}

// multiplication of LCM and HCF is equal to the product of two numbers so....
LCM=( num1 * num2 )/HCF;
//the final answer for LCM of two numbers is.........
cout<<"The LCM of "<<num1<<" and "<<num2<<" is : "<<LCM<<endl;	
	
return 0;	
} 
