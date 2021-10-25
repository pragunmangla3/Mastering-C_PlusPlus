#include<iostream>

using namespace std;

int main(){

// simple loop

for(int i{1},j{2} ; i<=5 ; i++,j++){
    cout<<i<<" + "<<j<<" = "<<i+j<<endl;
}

// range based loop

int scores[] {1,2,3,4,5};

for(int score: scores){
    cout<<score<<" ";;
}

cout<<endl;
// auto automatically takes the data type required

for(auto score: scores){
    cout<<score<<" ";
}

cout<<endl;
//you can declare in the loop itself also;

for(auto c: "Frank"){
    cout<<c<<" ";
}


}