#include<bits/stdc++.h>
using namespace std;

void sqr_star(int row){
    for (int i=1;i<=row;i++){
        for (int j=1;j<=row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void triangle_star(int row){
    for (int i=1;i<=row;i++){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void triangle_num_col(int row){
    for (int i=1;i<=row;i++){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void triangle_num_row(int row){
    for (int i=1;i<=row;i++){
        for (int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void inverted_triangle_star(int row){
    for (int i=row;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void inverted_triangle_num(int row){
    for (int i=row;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}





int main(){
    int n;
    cout<<"Enter no. of rows you want : ";
    cin>>n;
    // sqr_star(n);
    // triangle_num_col(n);
    // triangle_num_row(n);
    // inverted_triangle_star(n);
    // inverted_triangle_num(n);
    return 0;
}