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


// QUIZ IMPORTANT - 

// if you use a keyword as an identifier, the program will not compile
// if(condition); -> a ; at the end of an if condition means, to do nothing -> treat it as not even present
// Char name[6] can only contain "larry", cuz the last index will be occupied by '\0'



// BEST PRACTICES

//use int age {9}, instead of int age = 19; former has some advantages
// always initialize a variable, otherwise you will get a warning
// you should name the variable more meaningfully, even if it gets a bit long.
// initialize variable when you are using them.
// dont use #define pi 2.34 -> since the preprocessor doesnt know C++, can lead to difficult errors.

    return 0;
}