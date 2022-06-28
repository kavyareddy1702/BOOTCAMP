//data hiding
//can be achieved in two ways 
//1. Interface -> abstract classes
//2. classes -> private acess specifier, header files
#include<iostream>
using namespace std;
class A
{
    public: 
    int x,y;
    virtual void disp() = 0;
};
class B : public A{
    public:
    B(int a, int b)
    {
        x=a;
        y=b;
    }
    void disp(){
        cout<<" "<<x<<endl;
        cout<<" "<<y<<endl;
    }
};
int main(){
    B obj = B(4,8);
    obj.disp();
    return 0;
}
