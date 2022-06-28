// use only place holder in base class
// also known as do nothing function
// syntax - virtual returntype functionname()=0;
#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    virtual void disp()=0;
};
class B : public A{
    public: 
    void disp()
    {
        cout<<"virtual function defined in derived class";
    }
};
int main(){
    A *obj;
    B obj1;
    obj = &obj1;
    obj->disp();
    //or(*obj).disp(x,y)
    //obj1.disp(x,y);
    return 0;
}
