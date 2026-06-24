#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    if (year%4==0){
        cout<<"Leap year!";
    }
    else{
        cout<<"Not leap year!";
    }

    return 0;
}