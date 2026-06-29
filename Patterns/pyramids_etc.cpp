#include<bits/stdc++.h>
using namespace std;

void pyramid_star(int row){
    for (int i=1;i<=row;i++){
        for (int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        for (int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        
        cout<<endl;
    }
}

void inverted_pyramid_star(int row){
    for (int i=row;i>=1;i--){
        for (int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        for (int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        
        cout<<endl;
    }
}

void side_triangle(int row){
    for (int i=1;i<=2*row+1;i++){
        int stars=i;
        if (i>row) stars=2*row-i;
            for (int j=1;j<=stars;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    


int main(){
    int n;
    cout<<"Enter half of no. of rows you want : ";
    cin>>n;
    // pyramid_star(n);
    // inverted_pyramid_star(n);
    // side_triangle(n);
    return 0;
}