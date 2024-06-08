#include <iostream>

//-Variable Decalaration Syntax
/*
Type variable_name;
Never use uniniatilized values

Type variable_name = value;

Type variable_name{value};
Follows uniform initialization

Type variable_name{};
If we want to use uniniatilized values than we can use this syntax

!!Variables once declared cannot change their type
*/

//-Naming Variables
/*
Name must start with a letter

C++ is case sensitive

Some Rules:
Give variables meaningful names
Name variables in (snake_case)

Don't include type in name
Don't ise negation in the name
*/

//-Fundamentals Types in CPP
/*
void -> bool -> char -> Integer Types -> Floating Point Numbers

Intger Types:-
Signed
int -> short -> long -> long long

Unsigned
unsigned int -> unsigned short -> unsigned long -> unsigned long long

Floating Point Numbers Types:-
float -> double
*/

//-Examples of Different Variables
char caret_return = '\n';			//Single character
int meaning_of_life = 42;			//Integer number
short smaller_int{ 42 };			//Short number (using {})
long bigger_int = 42L;				//Long number (L is a literal)

float fraction = 0.001f;			//Single precision float
double precise_num = 0.0011;		//Double precision float
double scientific = 2.42e-10;		//Double precision float

auto some_int{ 42 };				//Automatic type [int] (using {})
auto some_float = 13.02f;			//Automatic type [float]
auto some_double = 13.0;			//Automatic type [double]

bool this_is_fun = false;			//Boolean: true or false

//-Literals

//-Integer Literals
int decimal = 42;      // Decimal literal
int octal = 052;       // Octal literal (starts with 0)
int hex = 0x2A;        // Hexadecimal literal (starts with 0x)
int binary = 0b101010; // Binary literal (starts with 0b)

//-Floating_Point Literals
float decimal = 3.14f;     // Decimal floating-point literal
double scientific = 2.1e3; // Exponential notation (2.1 * 10^3)

//-Character Literals
char letter = 'A'; // Character literal
char newline = '\n'; // Escape sequence for newline

//-String Literals
const char* greeting = "Hello, World!"; // String literal

//-Boolean Literals
bool isTrue = true;  // Boolean literal for true
bool isFalse = false; // Boolean literal for false

//-Null Pointer Literals
int* ptr = nullptr; // Null pointer literal (C++11 and later)

//-User-Defined Literals
long double operator "" _kg(long double x) {
    return x * 1000;
}

auto weight = 5.5_kg; // User-defined literal

//-Using Limits Library
/*
It is included in limits.h header file

std::numberic_limits<T>::min()
std::numberic_limits<T>::max()

here T is the type
*/

//-Initialization VS Assignment
/*
We can also initialize the variables from other variables

int some_int{other_int};
auto some_int_copy = some_int;

Also we can assign a value to an exisiting variable

some_int_copy = 42;
some_int = some_int_copy;

!!!How to tell one from another!!!

If a statement creates a new variable - it is an initialization

If not - it is an assignment
*/

//-Const and Constexpr
/*
const:-
1.Can be used for constants created at run time
2.Can be initialized with any provided value
3.Sometimes will be available at compile time

Eg.
*/
//? This will work every time with const
int a = 42;
const int b = a;
const int c = 23;
const int d = c;
const auto e = c;

/*
constexpr:-
1.Can only be used for constants created at compile time
2.Can only be initialized from a constexpr value

Eg.
*/
int a = 42;
const int a_const = 42;
//constexpr int b = a; as it is evaluted at compile time, it cannot take normal variable into constexpr 
constexpr int c = a_const;
constexpr int d = 23;
constexpr int e = d;
constexpr int f = d;

//-Reference to Variables
/*
We can create a reference to any varialbes 
Allows us to borrow a variable to a different context
Use & to state that a vairable is a reference, 
float &ref - original_variable;
Eg.

Benefit of this is that it helps in avoiding the copying of data
*/
int main() {
    int some_variable = 42;
    int& some_variable_ref = some_variable;

    some_variable_ref = 4;
}
//-Const with references
int number = 42;
int& ref = number;
const int& const_ref = number;
/*
We can change the ref and num and it change the const_ref value also
*/

//-Some operations on variables
/*
All character, integer and floating point types are arithmentic

Arithmetic operation:- +, -, *, /, %(modulo division)
Comparisons operation: <, >, <=, >=, == return bool
Consize Format :- a += 1, a = a + 1, same as -=, *=, /=. ==
*/

//- Some Importants aspects for doing operations on variables
/*
1. Avoid (==) for floating point types
2. When doing some operations on unsigned integers be careful, like
   23U - 42U will result in "underflow"
3. Do not use de-increment operators within another expression a = (a++) + ++b
*/

//- Some more operations on variables
/*
Logical operations defined over boolean variables are:- ||(or), &&(and), !(not)

eg. bool is_happy = (!is_hungry && is_warm) || is_rich;

Increment operator - Post(a++), Pre(++a)
Decrement operator - Post(a--), Pre(--a)
*/

 