#include<iostream>
using namespace std;
class student{
    public:
    int a,b; 
    float c;
    void disp(int n, int m){
        a = n;
        b = m;
        cout<<a<<endl;
        cout<<b<<endl;
    }
    void disp(int n){
        a = n;
        cout<<"Square root is : "<<a*a<<endl;
    }
    void disp(int n, float m){
        a = n;
        c = m;
        cout<<"Addition is : "<<(a+c)<<endl;
    }
    void disp(float n, int m){
        a = n;
        c = m;
        cout<<"Multiplication is : "<<(a*c)<<endl;
    }
    };
    int main(){
        int a,b;
        float c;
        cout<<"Enter two integer values : ";
        cin>>a>>b;
        cout<<"Enter the float value :";
        cin>>c;
        student stu;
        stu.disp(a,b);
        stu.disp(a);
        stu.disp(a,c);
        stu.disp(c,b);
        return 0;
    }
    