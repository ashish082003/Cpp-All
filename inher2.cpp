#include <iostream>
using namespace std;

class A
{
    int a;

public:
    int b = 12;
};
class B : public A;
{

public:
    int c = b + 12;
};
class C : public A, public B;
{
public:
    int d = c + 12;
    void printc()
    {
        cout << "value of c=" << d << endl;
    }
};
int main()
{
    C o1;
    o1.printc();
    return 0;
}
