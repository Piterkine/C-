#include <iostream>
using namespace std;
int main()
{
          bool i = true;
          cout << sizeof(i) << '\n';
          cout << i << '\n';

          //  ############################ Some important information ################################
          // Computer  Only understand 0,1 (Binary) form = that is Called Bit..
          // 0 = 1 Bit
          // 1 = 1 Bit
          // 8 Bits = 1 Byte
          // 1 Int = 4 Bytes or (4 * 8 =32 Bits)
          // 1 Char = 1 Byte
          // 1 float = 4 Bytes or 32 Bits
          // 1 Boolean = 1 Byte
          // 1 Double = 8 Byte or 64 Bits
          // 1024 Bytes = 1 Kilobyte
          // 1024 Kilobytes = 1 Megabyte
          // Note:- it is primitive data type

          // #################################### Conversion low to high like char(1) to int(4)
          char grade = 'S';
          int value = grade;
          cout << grade << endl;
          cout << value << endl;
          return 0;
          // This conversion is called implicit conversion ye humko compiler kerke deta hai..

          // ##################################### Conversion high to low like double(8) to int(4)
          double dce = 72.59;
          int num = (int)dce;
          cout << num << endl;
          return 0;
          // This is called Explicit conversion ye humko khud se kerna padta hai..
}