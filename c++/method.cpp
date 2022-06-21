#include<iostream>
using namespace std;
class student{
    public : 
    string name;
    int id;
    void details(string n, int i){
        name = n ;
        id = i;
    }
    void display(){
        cout<<"Student name : "<<name<<endl;
        cout<<"Student id : "<<id<<endl;
    }
};
int main()
{
    string n;
    int i;
    cout<<"Enter Student name : "<<endl;
    cin>>n;
    cout<<"Enter student id : "<<endl;
    cin>>i;
    student stu;
    stu.details(n,i);
    stu.display();
    return 0;

}