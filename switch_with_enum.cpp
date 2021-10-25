#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

/*

enums are user defined datatypes. By default, its element take value starting from 0... to the number of elements-1;
but, We can give assign them values too 

*/

enum Direction{
 up, down, right, left
};

Direction heading {left};

switch (heading) {
    case 0 : cout<<"up";
        break;
    case 1 : cout<<"down";
        break;
    case 2 : cout<<"right";
        break;
    case 3 : cout<<"left";
        break;
    default : cout<<"wrong direction";
        break;
}

return 0;



}


