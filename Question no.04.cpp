#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
// here d_n represents decimal number...
// remainder is denoted by r and q represents quotient...
int d_n, a=1, x, r, q;
//bin_n stands for binary number here..
int bin_n[100];	

cout<<"Enter the decimal number to convert in binary :";
cin>>d_n;

q=d_n;
while(q!=0){	
	
    bin_n[a++]=q%2;
    q=q/2;	}	

cout<<"The binary number is : ";	

for(x=a-1;x>0;x--)
    {cout<<bin_n[x];}

return 0;
}
