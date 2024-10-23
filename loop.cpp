#include <iostream>
using namespace std;
int main()
{
          // ################## While Loop #################
          // int j = 1;
          // while (j <= 10)
          // {

          //           cout << j <<" " << endl;
          //           j++;
          // }
          // return 0;
          // ################## For Loop #######################
          //           int n = 10;
          //           for (int i = 1; i <= n; i++)
          //           {
          //                     cout << i << " ";
          //           }
          //           return 0;

          //  Question################################
          // Write a program to print the sum of numbers from 1 to 5.
          // int sum = 0;
          // int num = 5;
          // for (int i = 1; i <= num; i++)
          // {
          //           sum += i;
          // }
          // cout << sum << " ";
          // return 0;

          // Method 2)

          // int sum = 0;
          // int i = 1;
          // while (i <= 50)
          // {
          //           sum += i;
          //           i++;
          // }
          // cout << sum << " ";
          // return 0;

          // Question 2) Write a program to find sum of all odd numbers 1 to 10.
          // int num = 5;
          // int oddSum = 0;
          // for (int i = 0; i <= num; i++)
          // {
          //           if (i % 2 != 0)
          //           {
          //                     oddSum += i;
          //           }
          // }
          // cout << "Odd sum = " << oddSum << " ";
          // return 0;

          // ##################### Do While loop #####################
          // int n = 10;
          // int i = 1;
          // do
          // {
          //           cout << i << " ";
          //           i++;
          // } while (i <= n);

          // Question 3) Write a program to check the number is prime or not..

          int n;
          cout << "Enter the number" << endl;
          cin >> n;
          bool isPrime = true;
          for (int i = 2; i * i <= n; i++) // i<=(n-1) bhiu likh sakte hai in place of (i*i<=n)
          {
                    if (n % i == 0)
                    {
                              isPrime = false;
                              break;
                    }
          }
          if (isPrime == true)
          {
                    cout << n << " is a prime number." << endl;
          }
          else
          {
                    cout << n << " is not a prime number." << endl;
          }

          return 0;

          // ############################ Nested Looop ############################
          // Question 4) Write a program to print the following pattern using for and while loop.
          // *****
          // *****
          // *****
          // *****
          // *****
          // for (int i = 0; i <= 5; i++)
          // {
          //           int x = 5;
          //           for (int j = 1; j <= x; j++)
          //           {
          //                     cout << "*" << " ";
          //           }
          //           cout << endl;
          // }
          // return 0;

          // #################### While Loop #################################
          int i = 0;
          while (i <= 5)
          {
                    int j = 0;
                    while (j <= 5)
                    {
                              cout << '*';
                              j++;
                    }
                    i++;
                    cout << endl;
          }

          return 0;
}
