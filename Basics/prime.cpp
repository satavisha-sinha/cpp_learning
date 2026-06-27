#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    bool prime=true;
    if(num<=1){
        prime=false;
    }
    if(num%2==0){
        prime=false;
    }
    else if(num%2!=0){
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                prime=false;
                break;
            }
        }
        if(prime){  
            cout<<"Prime";
        }
        else{
            cout<<"Not Prime";
        }
            
    } 
    return 0;
}