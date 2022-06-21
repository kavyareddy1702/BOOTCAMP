#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    student(string n, int r ){
        name = n;
        roll = r;
    }
    void display()
    {
        cout<<"Student name : "<<name<<endl;
        cout<<"Student roll : "<<roll<<endl;
    }
};
int main(){
    string n;
    int r;
    cout<<"Enter student name : ";
    cin>>n;
    cout<<"Enter student roll : ";
    cin>>r;
    student stu = student(n, r);
    stu.display();
    return 0;
}