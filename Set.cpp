#include <iostream>  //The line #include <iostream> in C++ is a preprocessor directive that tells the compiler to include the contents of the <iostream> library into your program before compilation.
                     // iostream stands for "input-output stream" and provides functionality for input and output operations, such as reading from the keyboard and writing to the console
using namespace std; // jb hum isko nhi use karenge to humko cout ke pahle 'std::cout' aur end me 'std::endl; likhna compulsary hoga ..
int main()
{
          cout << "Shashank Shukla is currently running" << endl;
          cout << "Shashank Shukla is currently running" << '\n'; // We are Also use '\n' in place of '<<endl;' And '\n ' is faster than '<<endl;
          cout << "Shukla is currently running " << " Running together";
          return 0;
}
