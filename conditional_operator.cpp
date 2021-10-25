#include<iostream>

using namespace std;

int main(){

// (condition_expression) ? expr1 : expr2 -> if condition is true, return expr1, else expr2. its a ternary operation
int a {10}, b{20};

cin>>a>>b;
int result = (a>b) ? a : b;
cout<<"max of a and b is :"<<result<<endl;
cout<<"to check if denominator is not zero : "<< ((b!=0) ? a/b : 0) <<endl;

// checking even or odd

int num {};
cin>>num;

// long way
if(num%2==0){
    cout<<"even"<<endl;
}
else{
    cout<<"odd"<<endl;
}

// short way
cout<< ( (num%2==0) ? "even" : "odd" )<<endl;



}