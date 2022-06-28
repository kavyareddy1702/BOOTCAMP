#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void disp(int n, int m){
        a = n;
        b = m;
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
class B : public A{
    public: 
    void disp(int n, int m)
    {
        a = n;
        b = m;
        cout<<"Addition : "<<(a+b)<<endl;
    }
};
int main(){
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    A *obj;
    B obj1;
    obj = &obj1;
    obj->disp(x,y);
    //or(*obj).disp(x,y)
    //obj1.disp(x,y);
    return 0;
}
