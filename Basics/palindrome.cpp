#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,rev=0;
    cout<<"Enter the number you want to check : ";
    cin>>num;
    int org=num;
    while(num>0){
        rev=rev*10+(num%10);
        num/=10;
    }
    if (rev==org){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    return 0;
}