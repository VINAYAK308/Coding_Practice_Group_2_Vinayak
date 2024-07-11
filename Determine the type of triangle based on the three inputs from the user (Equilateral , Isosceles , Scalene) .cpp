#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the lengths of First side of triangle : ";
    cin>>a;
    cout<<"Enter the lengths of Second side of triangle : ";
    cin>>b;
    cout<<"Enter the lengths of Third side of triangle : ";
    cin>>c;
    if(a==b==c){
        cout<<"Triangle is Equilateral triangle"<<endl;
    }else if(a==b || a==c || b==c ){
        cout<<"Triangle is Isosceles  triangle"<<endl;
    }else{
        cout<<"Triangle is Scalene triangle"<<endl;
    }
}