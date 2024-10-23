#include <iostream>
using namespace std;
int main()
{
          // ####################### Pointers ##################
          // Pointer are use to store the address of a integer variable.
          int num = 50;
          int *ptr = &num;
          cout << "Value of num: " << num << endl;
          cout << "Address of num: " << &num << endl;
          cout << "Value of ptr: " << ptr << endl;
          cout << "Value pointed by ptr: " << *ptr << endl;

          // ####################### Dereference Operators #####################
          // Dereference operator is used to access the value of a pointer variable.
          cout << "Value pointed by ptr: " << *ptr << endl;

          // ####################### Null Pointer  #####################

          int *null_ptr = NULL;
          cout << "Null pointer : " << null_ptr << endl;

          return 0;
}