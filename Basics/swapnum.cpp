//swap two num without third variable

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers you want to swap : ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<" Number 1 : "<<a<<", Number 2 : "<<b;

    return 0;

}