#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,dig=0;
    cout<<"Enter a number : ";
    cin>>num;
    if (num==0){
        dig=1;
    }
    else{
        while(num>0){
            dig++;
            num=num/10;
        }
    }
    cout<<"Number of digits = "<<dig;
    return 0;

}