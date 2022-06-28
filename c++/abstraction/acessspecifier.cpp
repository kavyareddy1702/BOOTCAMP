#include<iostream>
using namespace std;
class A{
    private:
    int x,y,z;
    public:
    void add(int a,int b){
        x=a;
        y=b;
        z=x+y;
        cout<<"addition : "<<z<<endl;
        }
};
int main(){
    A obj;
    obj.add(4,8);
    return 0;
}