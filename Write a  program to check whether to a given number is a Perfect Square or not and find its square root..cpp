#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n;
    cout<<"\n Enter a to find its square root : ";
    cin>>n;
    int root = sqrt(n);
    if(n/root == root){
        cout<<"\n Entered number is prefect square";
    }else{
        cout<<"\n Entered number is not perfect square";
    }
    

    
}