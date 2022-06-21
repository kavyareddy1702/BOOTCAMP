#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"Default constructor invoked "<<endl;
    }
};
int main(){
    student stu;
    return 0;
}