#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int p,n, res;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Enter power : ";
    cin>>p;
    res = pow(n,p);
    cout<<res<<endl;
    return 0;
}