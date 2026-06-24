#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number till you want the sum : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum of n natural numbers are : "<<sum;

    return 0;
}