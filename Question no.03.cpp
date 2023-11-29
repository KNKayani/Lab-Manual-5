#include <iostream>
using namespace std;

int main()
{ 
//Display the pattern like a diamond...
cout<<"Creat a diamond !"<<endl;

int a,s,r;
//input the number of rows from user...
cout <<"Input number of rows (half of the diamond):";
cin >> r;
for(a=0;a<=r;a++){

for(s=1;s<=r-a;s++)
cout<<" ";

for(s=1;s<=2*a-1;s++)
cout<<"*";
cout<<endl;}
 
//for lower triangle...  
for(s=r-1;a>=1;a--){

for(s=1;s<=r-a;s++)
cout<<" ";

for(a=1;s<=2*a-1;s++)
cout<<"**";
cout<<endl;}

return 0;
}
