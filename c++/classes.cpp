#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int id;
};
int main(){
    student stu;
    cout<<"Enter student name : "<<endl;
    cin>>stu.name;
    cout<<"Enter student id : "<<endl;
    cin>>stu.id;
    cout<<"Student name : "<<stu.name<<endl;
    cout<<"Student id : "<<stu.id<<endl;
    return 0;
}