#include<iostream>
#include "arbitrary.h"

using namespace std;

int main(){

arbitrary obj1;
arbitrary obj2(0);
arbitrary obj3(0,0);
arbitrary obj4(0,0,0);

cout<<obj1.a<<" "<<obj1.b<<" "<<obj1.c<<endl;
cout<<obj2.a<<" "<<obj2.b<<" "<<obj2.c<<endl;
cout<<obj3.a<<" "<<obj3.b<<" "<<obj3.c<<endl;
cout<<obj4.a<<" "<<obj4.b<<" "<<obj4.c<<endl;
//cout<<bj2->hello()<endl;

}
