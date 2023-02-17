#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the value of n:";
cin>>n;
bool prime=true;
if(n==0 || n==1)
{
prime=false;
}
for(int i=0;i<n/2;i++){
if(n%i==0){
prime=false;
}
}
if(prime==true){
cout<<"n is prime number"<<endl;
}
else{
cout<<"n is not prime number"<<endl;
}
return 0;
}
