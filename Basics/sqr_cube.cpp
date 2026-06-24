//write the square and cube of a number given by the user

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,sqr,cube;
    cout<<"Enter the number you want : ";
    cin>>num;
    sqr=pow(num,2);
    cube=pow(num,3);
    cout<<"Square : "<<sqr<<endl<<"Cube : "<<cube;
    
    return 0;

}