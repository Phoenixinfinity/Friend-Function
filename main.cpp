#include <iostream>

using namespace std;
class Number
{
private:
    int a;
public:
    void getnum(int x);
    friend void printnum(Number num);
};
void Number::getnum(int x)
{
    a=x;
}
void printnum(Number num)
{
    cout<<"Value of a (Private data member) of class Number: "<<num.a;
}
int main()
{
    Number obj;
    obj.getnum(120);
    printnum(obj);
    cout<<"\n";
    return 0;
}
