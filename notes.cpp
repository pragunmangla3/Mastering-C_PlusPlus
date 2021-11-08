#include<iostream>
#include<vector>

using namespace std;




int main(){


// Job of linker - when our file is converted into object, and other object files (iostream and all), it links all of them togather to form a single object file. Which is then executed.

// bedore compiling, the comments are replaced by "", comments never make it to compiler. also C++ pre-processor does not understand C++, it just follows preprocessor directives.
// compiler is the program that does understand C++

// if return value of main is 0, then program terminated successfully, else OS figures out what is wrong.
// int main() -> main doesnt expect anything from operating system
// int main(int argc, char* argv[]) -> here 2 peices of info are needed.
// argc - argument count is the nuber of arguments passed.
// argv - argument vector -> bunch of string

// namespace is used to resolve naming conflict -> naming between our company, standard library, and other collaborating company
// suppose a company defines cout, but its also there in std library.
// :: is the resolution operator -> used to resolve which name we want to use
// using namespace std; -> Use the entire std namespace, might not good a good idea when working in large project
// suppose we want standard namespace in case of cin, cout and endl, we can do
// using std::cin;
// using std::cout;
// using std::endl;

// cin reads from buffer (buffer filled by keyboard) and extract (using extraction operation >> )it to the number - eg - cin>>num;
// cout uses insertion operator (<<)
// cin doesn't read white spaces.

// \n and endl are same, its just that \n does not flush the buffer, endl does. 
//for example - Usually, a temporary file comes into existence when we open any word document and is automatically destroyed when we close our main file. 
//Thus when we save our work, the changes that we’ve made to our document since the last time we saved it are flushed from the buffer to permanent storage on the hard disk.


// use int age {9}, instead of int age = 19; former has some advantages C++ 11
// long int val = pow(10,12) -> is an overflow, will give some -ve abritary value in output. but if long int val {pow(10,12)}; -> will give me error. Better
// global variables are automatically initialized to 0.
// We can have global variable and local variable both with same name, but local variable will be printed inside the function (scope).
// platform and compiler determines the size of the data types
// by default, int are signed
// We can use ` in the numbers, just for our understanding. Like - 7`600`000`000 .
// int val {2.33} -> will truncate the value to give a whole number.
// long double is used for big decimal values. like 2.8444444444444444444444444498798
// short val1 {3000}; short val2 {2000}; short product {val1*val2} -> here compiler will not give overflow error, since compiler is doesnot execute the multiplication. Some arbitary -ve value will be the output.
// sizeof(int) -> gives the size. Can be also used on variables
// sizeof(int) and sizeof(unsigned int) is same, coz the amount of precision you can store remains same.
// LLONG_MAX exist, not LONTGLONG_MAX.
// const int pi {3.14}; is better practice than using #define pi 3.14 -> coz preprocessor doesnt know C++. Its not the modern way. 


// int test_scores[5] {}; -> this will create an array with all values initialised to 0.
// int test_scores[5] {0}; -> same effect as above
// int test_scores[5] {1,2}; -> 0th index will be 1, 1st index will be 2, rest will be 0
// int test_scores[] = {1,2,3} -> an array of size 3 will be created;
// name of the array is the location of the first element of the array
// vectors are dynamic arrays, belong to standard namespace. 
// vector<int> test_scores; is a vector. 
// vector<int> test_scores (5); -> 5 indexes will be automatically initialised to 0. you can further push_back new values also.
// test_score[0] and test_score.at(0) are same. // .at() gives bound check, which is important
// vector<int> test_score (3,-2); cout<<test_score[5]<<endl; -> gives an output (garbage value) ..... cout<<test_score.at(5)<<endl; -> throws an error. out of range
// vector<int> test_score {100,100,100,100}; is same as vector<int> test_score (4,100);
// if you create a 2d vector, count.at(row).at(col) is best.



// num1 = num2 = 100; -> is valid
// modulus operator only works on integers
// count = 10;  result = ++count -> means count = 11 and result = 11; pre-increment
// count = 10;  result = count++ -> means count = 11 and result = 10; post-increment
// type conversion is also called coersion. Promotion is when we convert a lower type to a higher type. Demotion is opposite.
// 2*5.2 -> 2 is promoted to 2.0 (int to double)
// int num {0}; num = 100.2 -> 100.2 is demoted to 100, and 100 will be assigned to num. potential loss of information.
// Type-casting -> static_cast<double>(total)/count -> if total and count are int, but we need double. 
// static_cast<type> -> is more restrictive, and makes sure that it can be coverted to double, unlike (double)total/count (old way), which just converts, no matter what.
// cout<<boolalpha; -> it makes the output of bool variable as true and false, instead of 1 and 0.
// if we compare, 10 and 9.99999999999999999999999 , double will give us answer as true. (since it take approx of the second number)
// not (!) has higher precedence than and (&&), and (&&) has higher precedence than or (||)
// a *= b + c; means a = a* (b+c);


// #include<cctype> ->function for testing characters and converting character case
// isalpha(c) ->true if c is a letter.
// isdigit(c) ->true if c is a digit.
// isalnum(c) ->true if c is a letter or digit.
// ispunct(c) ->true if c is a punctuation character.
// islower(c) ->true if c is a lowercase letter.
// isprint(c) ->true if c is a printable character
// isupper(c) ->true if c is a uppercase letter.
// isspace(c) ->true if c is a whitespace.

// tolower(c) -> returns lowercase of c
// toupper(c) -> returns uppercase of c

// C- STYLE STRING -> or character array -> always have a null character in the end, ie these all are null terminating strings 
// char my_name[8]; then, my_name = "frank"; // error
// char my_name[8]; then, strcpy(my_name,"frank"); // OK
// char name[50]; cin.getline(name,50); -> to get input for C-style strings. -> otherwise spaces will not be read.
// size_t is a data type (unsigned data type, so i can go forward without worring for out of bounds) for(size_t i{0};i<strlen(arr);i++)
// strcpy(a,b) -> copy b to a (internally copies 1 by 1 till it hits NULL)
// strcat(a, "adding this to a") -> concatination
// strcmp(a,b) -> compare a and b, if they are same, return 0. otherwise -1 (if first string comes lexographically before 2nd string) or +ve number otherwise.



// strings in C++
// string s1 {"frank"};
// you cant concatinate 2 C-style literaals. Ex -> sentence = "C++" + "is powerful"; -> this is illegal.
// part1 {"C++"} -> sentence = part1 + "powerful"; -> legal
// you can use strings as vectors. .at() method is really good (you wont go out of bounds).
// comparison between string is lexographical comparison (character by character), not by length .
// object.substr(strt_index, length) -- ex) string s1 {"This is a test"}; s1.substr(0,4)-> "This".
// object.find(search_string) -> gives the starting index of the substring in the object.
// string s1 {"This is a test"}; s1.find("is")-> 2. s1.find("is",3) ->5 (second value is the index we want to start search from). if nothing is found -> end position is returned.
// string s1 {"This is a test"}; s1.erase(0,5) -> //is a test
// s1.length() -> return length of the string
// always use getline(cin,s1); -> this reads entire string (space also), whereas cin>>s; -> stops at space.
// geline(cin,s,'x) -> this time third value is delemeter. we will stop reading as soon as we see that delemeter character(and that last character will not be included).
// Remember strings are objects in C++
// 2 C-style strings cant be concatinated with + operator


// FUNCTIONS IN C++

// ceil - it is the nearest integer not less than the given value
// floor - nearest integer not greater than the given value
// rand function generates random number, but the sequence is not random -> upon each execution. Hence we need to seed the function with random number, example - time
// srand(time(nullptr)) -> gives the random number. You need to include<ctime> to use time() function
// rand()%max + min -> gives you number between [min,max] -> inclusive
// compiler must know the function details before it is called! (csn be solved using function prototypes).
// if you want to not depend upon ordering of functions, you need to create a function prototype. These are also known as forward declaration
// Usually when we have huge number of functions, we create a .h file with all the function prototypes, and then include as ().h) header
// just do "int function_name (int a);" (a is optional, but better to put for documentational purposes), ; is important
// Pass by value (even in case of vector or anything)- when you pass data into a function, A copy of data is passed into the function. Making changes in fuction does not reflect in the original data.
// Formal (parameters defined in function header) vs Actual (the parameters used in the function call) parameters
// default argument values works if value not passed while calling the function. right of a parameter with default value, should all have default value.
// if you are prototyping, you only need to provide defalt values while prototyping, not defining the function.
// function overloading - a type of polymorphism. same name with different arguments. Remember - return type is not considered for which function to call.
// in fuction overloading, if a type of parameter can be promoted or demoted, it will be executed (if a specific function does not exist for it).
// be careful about overloading fuctions with default arguments.
// in case you pass the array in function(int arr[]), you are always passing by reference (In a way, you are passing by value only, since you copying the address), coz what you are passing is the memory location of the first element of arr
// You should (not must) also  pass, size_t variable along (for size), since its not explicitly mentioned. If you want that function do not alter the array, use const in function.
// always pass by reference to reduce time. (only location of the parameter is passed).
// you can also pass by constant reference - func(const vector<int> &v), if you dont want the function to change inside values, and also dont waste time making the copy of a container.
// local or inner blocks -> {} -> can see variable declared int the outer blocks, but vice versa is not true.
// static variables -> they have lifetime = lifetime of the program. They are only initialised ones. If not initialised, default value is 0.
// If a static variable is declared in a function, it is only declared once, and next time the same function is called, that value will continue from that, ie it retains its value (more like the declaration line will be skipped).
// each time a function is called -> a stack frame or Activation Record is created, and pushed into the call stack, when the function terminates, stack frame is popped. 
// Inline function -> means the function call overhead doesn't happen, instead, the function is copied to original place where it is called to savethe overhead.
// Inline int solve(int a) -> is an inline function, but compilers are smart now and do inline implicitly most of the times.



// POINTERS -

// pointers are variables and it stores the address of another variable or function.
// To use the data that the pointer is pointing to, you must know its type
// Reasons to use pointers - 
// 1. If you need to access a variable, which is out of scope, you can only do it via pointer. Inside functions, ptrs can be used to access data that are defined outside the function.
// 2. Pointers can be used to operate on arrays very efficiently.
// 3. We can allocate memory dynamically on the heap (free store). This memory doesn't even have a variable name and only way to access it, is via ptrs.
// read the pointer declaration from right to left. int *int_ptr -> int_ptr is a pointer to int. 
// always initialize the ptr. int *int_ptr {} (to point it to 0) or int *int_ptr {nullptr}.
// & is a unary operator to get the address(hexadecimal value) of a variable (that has an L value). -> variable must not be const or expression tht evaluates to temp values.
// since pointer is a variable, it can be reassigned. sizeof ptr -> can be used to calculate size (normally 4). size of pointer variable (an address) is independent of the what it is pointing to.
// untyped void pointers -> used in C, not C++ -> you dont know about that.
// pointers are variables, hence they can be uninitialised, re-initialised and can be null.
// if a pointer is declared as a pointer to int (int *ptr), we cant make it point to a double, or anything else than int.
// de-refernceing a pointer (eg - *ptr) -> gives the value stored at that address
// new keyword allocates the memory to heap, delete keyword frees the allocated memory. -> Remember, you can only access the heap memory through pointer. If you lose that pointer, memory leak happens
// Example - int *int_ptr = {nullptr}; int_ptr = new int; int_ptr = 10; delete int_ptr 
// Allocating 1-D array ->int* array_ptr = new int[size]; =  In order to free the dynamic 1-D array, use -> delete [] array_ptr;
// Refer to ArrayAndPointers folder from Resources.
// Refer to PointerArithmatic for pointer arithmatic. Remember, Pointer arithmatic only works on raw arrays
// int_ptr++ -> means jumping by size of 4 (size of int) in memory location.
// Refer ReturnPointer -> for functions with pointers
// Potential pointer pitfalls -> uninitialised Pointers -> int *ptr; *ptr = 10; -> dont know which memory location (maybe some system memory that could be lethal) we are using to store 10.
// Dangling /stray/wild pointer -> Pointer that is pointing to released memory. For ex - 2 pointers point to the same data. 1 pointer releases the data with delete, while the other pointer access the released data.
// Dangling /stray/wild pointer -> Pointer that points to invalid memory. (example - return a pointer from a function pointing to stack memory).
// not checking if "new" fails using exception handling. Dereferencing a null pointer will result in crash
// memory leak. -> using the heap via a pointer, but losing the pointer now -> No way of accessing the memory now. The memory is orphaned or leaked. (memory is still used).
// reference is alis to the vaiable its refering to. -> always good to use. pass by reference is used in range based loop and in passing data in functions.
// L-values -> values that have name and are addressable. They are also modifiable if they are not constants. int x {200}; // x is an L-value . Usually on the left hand side of an equation.
// R-values -> Values that are not L-values are R-values. they are literal, a temporary which is intented to be non-modifiable (created by C++ internaly. Ex - int x = 100; int y = x+200; // 100 and (x+200) are R-values ). Usually on the right hand side of an equation.
// int x {100}; int &ref = x; ref1 = 1000; -> // ref1 is reference to l-value
// int &ref = 100; // eroor, since 100 is an R-value. We can only create references of L-values, same in case of functions. int solve( int &n) cant be called using solve(5). But solve(x) works fine. 



// OOPS
// refer to Self_Created-projects and lecture slides. (comprehensive)
// if you just declare the method prototype in a class, but never call the function, it wont give you error even if you dont have the function body. If you call the function, you will get linker error.
// . operator is used to access the members of a class. But it you create a pointer to object, then can use -> (arror operator) to access them. Else, first derefernce them and then use . operator, Ex - (*ptr).name
// private and protected are almost same , except in case of inheritence.
// void class_name :: method() -> for implementing a method outside class, but prototype of that function should be inside the class
// use class.h file for class implementation. Remember, if you include this .h file in more than 1 .cpp file -> error will be thrown. Use include gaurd to prevent it.
/*
 #ifndef _ACCOUNT_H_
 #define _ACCOUNT_H_
 // Account class declaration
 #endif
*/
// #pragma once -> this also do the same thing. But some compilers do not support this.
// #include<> -> this form is used for including system header files, and compiler knows where they are
// #include "file_name.h" -> is different, local to project
// inline class methods are just methods declared inside the class
// constructors can be overloaded
// destructors are special member method, represented by ->  ~class_name() . They are invoked automatically when an object is destroyed. It has no parameter and no return type. They cant be overloaded. They are useful to remove memory and other resources.
// destructors are called automatically when an object goes out of scope, or delete keyword is used on an object.
// destructor are called in reverse order of making an object. Eg -> 3 objects were created in this order -> ob1,ob2,ob3 , They will get destroyed by destructor in ob3,ob2,ob1. This order
// static objects are destroyed as soon as we go out of scope, but pointer are needed to deleted with delete keyword.
// default constructor is a constructor that does not need any arguments, also know as no args constructor. If you dont provide any constructor, c++ will generate one automatically that does nothing.
// its always a best practice to have constructs to initialize the data explicitly.
// Remember, if you have any constructor declared, a default constructor will not be created by C++
//Using { } for initialization is called "Uniform Initialization" and is an important part of Modern C++.
//{ } uses an initializer list to initialize class attributes as we already do with array's etc. If the arguments in the initializer list match a constructor, then the constructor will be invoked.
//This has been introduced primarily to provide consistency in language syntax (initialising with {} will work in all contexts, whereas initialising using the assignment operator or () will work in specific contexts.
//There is a further advantage to list initialisation in that it prevents narrowing - i.e. it prevents you from providing an integer when a double is required, or a short when an integer is required. In this way it can help to reduce bugs
// Note - when making objects dynamically, use (), not {} for constructor.
// Constructor initialization list - Since initilizing through constructor isnt technically initialization (we just assign the values), since the attributes are created before constructor is called.
// Constructor initialization list - it initializes before even the constructor body executes. -> its more efficient and initializes as the object is created. Order of initialisation as same as order of declaration in the class.
/*
previous way -

class Player{
int age;
string name;

public :
player();
};


Player :: Player(){
    name = "None";
    age = 10;
}

Better way:
Player :: Player()
    : name {"None"}, age {10}{

    }

// order of initialisation will be age and then name. Becoz order depends upon declaration in the class, not in constructor.
// Should include initialization in all the constructors for all the data members or attributes.
*/

// Delegating constructor - To eleminate repetitiveness. We are calling constructor that has all the 3 values initialised. 
// i.e. We are delegating the constructor wih list initialisation with all the work.
// remember that the whole body of the constructor, you are delegating the work to will execute first, and then the costructor you called will get executed.
/*

Player :: Player()
    : Player{"None", 0} {

    }

Player:: Player(strng a, int b)
    : name {"None"}, age {0}{

    }


*/

// a default constructor is a constructor with default values. You can have a constructor that is default and have constructor initialisation list. No need for delegation constructor then. Helpful in small projects.
// there are times when you want user to provide specific number of values, we cant use this there.
// but you cant use other constructor with default one, since error will come due to imbiguity.
/*
arbitrary(int num1=1, int num2 = 2, int num3=3)
     : a{num1},b{num2},c{num3} {

}
*/

// Copy constructor -> When objects are copied C++ must create a new object from an existing object.
// When a copy is made -> passing an object by value as a parameter, returning an object by value, constructing one object based on another of the same class.
// Copy constructor is provided by Compiler (if dont provide one). Its perfectly fine in many cases. But in case of pointers, only pointer will be copied, not the data it is pointing to. This is known as shallow copying,
// Provide a copy constructor when your class has raw pointer members and provid copy constructor with a const reference parameter.
// we can use smart pointers to avoid using raw pointers
// Copy constructor ex - Class_name::Class_name(const &obj); const is for not letting it changing

/*
// copy constructor -> (can be delegate constructor as well, if dont want to initialize the list)
Player :: Player(const &source) 
    : name {source.name}, age{source.age} {

    }

// its same as this constructor if another constructor is present with both of these parameters initialsed 
Dog(const Dog &source) 
    : Dog {source.name, source.age} {
            cout<<"Copy Constructor";
    }   

void display(Player P){

}

int main(){
    Player P {"Pragun", 23}; // normal constructor will be called with 2 arguments (default will be called if present).
    display(P) -> since we are passing by value (see the fuction above), copy constructor will be called to make  copy.
    Player enemy{P}; -> copy constructor will be called

}

*/

// Shallow copy vs deep copy
// Shallow copy - its memberwise copy provided by default copy constructor, the pointer (or object) is copied, not what it points to. The issue is, when we release the storage in the destructor, the other object still refers to the released storage, Which is no longer present.
// The way we implemented our own constructor was shallow (The default constructor is same as that). 
// Remember, we need raw pointer attributes (like int*data, int *arr) for shallow copy to fail. 
// Refer ShallowCopy project (from the course).
// if you create a new object (say obj2) from an existing object (say obj1), and then change a (example int *data) value of a pointer attribute of obj2, will also change data of bj1, since they are pointing to same memory location.

// Deep Copy - It creates a separate copy of the data we are pointing to. Each copy will have a pointer to unique storage in the heap. Use deep copy when you have a raw pointer as a class data member. 
/*

Deep :: Deep(const &source){
    
    data = new int;
    *data = *source.data;
    cout<<"Deep copy made"<<endl;
}

// if you want delegating type deep copy constructor

Deep :: Deep(const &source)
    : Deep {*source.data}{
        cout<<"Deep copy made"<<endl;
    }

*/




// QUIZ IMPORTANT - 

// if you use a keyword as an identifier, the program will not compile
// if(condition); -> a ; at the end of an if condition means, to do nothing -> treat it as not even present
// Char name[6] can only contain "larry", cuz the last index will be occupied by '\0'



// BEST PRACTICES

// use int age {9}, instead of int age = 19; former has some advantages
// always initialize a variable, otherwise you will get a warning
// you should name the variable more meaningfully, even if it gets a bit long.
// initialize variable when you are using them.
// dont use #define pi 2.34 -> since the preprocessor doesnt know C++, can lead to difficult errors.
// Do function prototyping, otherwise you alsways need check the ordering of the function (usually after namespace)
// Global constants are OK but global variables should be avoided
// always intialize a pointer to nullptr or {} (means 0). or else, we could be accessing a garbage memory that we have no bussiness with
// its always a best practice to have constructs to initialize the data explicitly.

    return 0;
}