#include<iostream>
using namespace std;

class A{
    int a;
    public:
    int b=12;

};
class B: public A{
int c=b+12;
public:
void printc(){
    cout<<"value of c="<<c<<endl;
}
};
int main(){
    B o1;
    o1.printc();
    return 0;
}
