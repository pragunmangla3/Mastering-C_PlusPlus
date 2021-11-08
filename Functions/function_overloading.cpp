#include<iostream>
#include<string>
#include<vector>

using namespace std;


void print();
void print(double);
void print(vector<int>);
void print(int,double);

void print(){
    cout<<"first Print"<<endl;
}

void print(double val){
    cout<<"second print"<<endl;

}

void print(vector<int> val){
    cout<<"fourth Print"<<endl;
}

void print(int val1, int val2){
    cout<<"fifth Print"<<endl;
}


int main(){

    print();
    print(1.0);
    print(1); // promoted to double
    vector<int> v;
    print(v);
    print(1,2);



}