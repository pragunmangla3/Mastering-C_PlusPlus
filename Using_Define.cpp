#include <iostream>
using namespace std;

// this is define - but not good since we can't use this as variable name in the code now.
#define Number 2


// This is Macro, its not a function
#define Message(c,v) for(int i=0;i<c;i++)  { \
cout<<v[i]<<endl; \
}


int main(){
    cout<<Number<<endl;
    int arr[5] = {1,2,3,4,5};
    Message(5,arr);
}

/*

MESSAGE is not a function, it is a macro, which means that the preprocessor
will replace every occurrence of MESSAGE with two parameters with the text defined
previously, replacing the c parameter with whatever is passed as the first parameter of the
macro, and replacing v with whatever is used as the second parameter


\ is used for multiline macros
*/