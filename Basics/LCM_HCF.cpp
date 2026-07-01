#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the first number you want to check : ";
    cin>>num1;
    cout<<"Enter the second number you want to check : ";
    cin>>num2;
    int maxn=max(num1,num2);
    int lcm=maxn;
    while (true){
        if (lcm%num1==0 && lcm%num2==0){
            break;
        }
        lcm++;    
    }
    vector<int>vec1,vec2,cf;
    for (int i=1;i<=maxn;i++){
        if (num1%i==0){
            vec1.push_back(i);
        }
        if (num2%i==0){
            vec2.push_back(i);
        }
    }
    for (int i=0;i<vec1.size();i++){
        for (int j=0;j<vec2.size();j++){
            if (vec1[i]==vec2[j]){
                cf.push_back(vec1[i]);
            }
        }
    }
    int hcf=cf.back();
    cout<<"LCM : "<<lcm<<endl;
    cout<<"HCF : "<<hcf;
    return 0;
}