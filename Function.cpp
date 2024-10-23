#include <iostream>
using namespace std;
// Function definitions
// void printmata()
// {
//           cout << "Jai Mata Di \n";
// }
// int main()
// {
//           // Function calls or invoke
//           printmata();
//           return 0;
// }
// Return type is Character
// char printmata()
// {
//           cout << "Jai Mata Di \n";
//           return 'A';
// }
// int main()
// {
//           // Function calls or invoke
//           cout << printmata() << endl;
//           return 0;
// }

// ################### Parameters in the function #################

// int sum(int a, int b) // Parameters in the function
// {
//           int s = a + b;
//           return s;
//           // cout << "Sum: " << a + b << endl;
// }
// int main()
// {
//           cout << sum(20, 10); // Function call with arguments

//           return 0;
// }

// ################### Create A function to find minimum Value #################
// int MinValue(int a, int b)
// {
//           if (a < b)
//           {
//                     return a;
//           }
//           else
//           {
//                     return b;
//           }

//           // return (a < b) ? a : b;
// }
// int main()
// {
//           cout << "Minimum value is: " << MinValue(1, 8); // Function call with arguments
// }

// ###################  Cretae a Function in C++ 1 to N number of sum #################
// int sumN(int n)
// {
//           int sum = 0;
//           for (int i = 0; i <= n; i++)
//           {
//                     sum += i;
//           }
//           return sum;
// }
// int main()
// {

//           cout << sumN(7) << endl;
//           cout << sumN(100) << endl;
// }

// ###################  Cretae a Function in C++ factorial   #################

// int Factorial(int n)
// {
//           int fact = 1;
//           for (int i = 1; i <= n; i++)
//           {

//                     fact *= i;
//           }
//           return fact;
// }
// int main()
// {

//           cout << Factorial(4) << '\n';
//           cout << Factorial(5);
//           return 0;
// }

// ###################  Cretae a Function in C++ Pass By Value  #################
// int sun(int a, int b)
// {
//           a = a + 10;
//           b = b + 20;
//           return a + b;
// }
// int main()
// {
//           int a = 5, b = 4;
//           cout << "Before Function Call: " << "a = " << a << ", b = " << b << endl;
//           cout << "After Function Call: " << "a = " << sun(a, b) << ", b = " << b << endl;
//           // cout << fun(a, b) << endl;
//           return 0;
// }

// ###################  Cretae a Function in C++ Calculate sum of digits of a number  #################
// Ex-145
// Output-10
// int digisum(int num)
// {
//           int dsum = 0;
//           while (num > 0) // 383 //38 //3
//           {
//                     int lastDig = num % 10; // 3 //8 //3
//                     num /= 10;              // 38  //3  //0
//                     cout << dsum << endl;
//                     dsum += lastDig; // 0+3  //3+8 // 14
//           }
//           return dsum;
// }
// int main()
// {

//           cout << "Sum = " << digisum(383) << endl;
//           return 0;
// }

// ###################  Cretae a Function in C++ Calculate (nCr) Binomial Coefficient Functions #################

// int factorial(int n, int r)
// {
//           int nValue = 1;
//           int rValue = 1;
//           int npValue = 1;
//           int nrValue = (nValue - rValue);
//           int niche = (rValue * npValue);
//           int final;
//           for (int i = 1; i <= n; i++)
//           {
//                     nValue *= i;
//           }
//           for (int i = 1; i <= r; i++)
//           {
//                     rValue *= i;
//           }
//           for (int i = 1; i <= nrValue; i++)
//           {
//                     npValue *= i;
//           }
//           final = (nValue / niche);
//           return final;
// }
// int main()
// {
//           cout << factorial(8, 2);
//           return 0;
// }
// int factorial(int n)
// {
//           int fact = 1;
//           for (int i = 1; i <= n; i++)
//           {
//                     fact *= i;
//           }
//           return fact;
// }
// int nCr(int n, int r)
// {
//           int fact_n = factorial(n);
//           int fact_r = factorial(r);
//           int fact_nmr = factorial(n - r);
//           return fact_n / (fact_r * fact_nmr);
// }
// int main()
// {
//           int n = 8, r = 2;
//           cout << nCr(n, r) << endl;
//           return 0;
// /}

// ########################################### Decimal to Binary Conversion #########################################
// int decToBin(int decNum)
// {
//           int ans = 0;
//           int power = 1;
//           while (decNum > 0) //50 ,25 ,12 , 3, 1,0
//           {
//                     int rem = decNum % 2; //0 ,1 , 0, 1
//                     decNum /= 2; //25 , 12 ,6, 1,0
//                     ans += rem * power; //0 ,10 , 10 , 1010, 11010
//                     power *= 10; //10 , 100, 1000,10000,100000
//           }
//           return ans;
// }
// int main()
// {
//           int decNum = 50;
//           // for (int i = 1; i <= 10; i++)
//           // {
//           cout << decToBin(50) << endl;
//           // }

//           return 0;
// }

// ###################  Binary to Decimal Conversion  #################
int biToDec(int bin)
{
          int ans = 0;
          int power = 1;
          while (bin > 0)
          {
                    int rem = bin % 10;

                    // 101 => 1*2^2 + 0*2^1 + 1*2^0
                    bin /= 10;
                    ans += rem * power;
                    power *= 2;
                    cout << "Power of at this time : " << power << endl;
          }
          return ans;
}
int main()
{
          cout << biToDec(11001) << endl;
          return 0;
}