#include <iostream>
using namespace std;
int main()
{
          // ###### Square Patterns #####
          // Question 1) '*' pattern

          // int n = 4;
          // for (int i = 0; i < n; i++) // Outer loop
          // {
          //           for (int j = 0; j < n; j++) // Inner loop
          //           {
          //                     cout << "* ";
          //           }
          //           cout << endl;
          // }
          // return 0;

          //  Question 2)'A' pattern

          // int n = 4;
          // for (int i = 0; i < n; i++) // Outer loop
          // {
          //           char ch = 'A';              // 65
          //           for (int j = 0; j < n; j++) // Inner loop
          //           {
          //                     cout << ch << ' ';
          //                     ch += 1;
          //           }
          //           cout << endl;
          // }
          // return 0;

          //  Question 3) print the patern in this form "123456789"
          // int num = 1;
          // for (int i = 0; i < 3; i++)
          // {
          //           for (int j = 1; j <= 3; j++)
          //           {
          //                     cout << num << ' ';
          //                     num++;
          //           }
          //           cout << endl;
          // }
          // return 0;

          // ############### SQUARE PATTERNS #############

          // Question 4) '*' pattern
          // int n = 4;
          // for (int i = 0; i < n; i++) // Outer loop
          // {
          //           for (int j = 0; j < i + 1; j++) // Inner loop
          //           {
          //                     cout << "* ";
          //           }
          //           cout << endl;
          // }
          // return 0;

          // Question 5) '*' pattern with number
          // int n = 4;
          // for (int i = 1; i <= n; i++) // Outer loop
          // {
          //           for (int j = 0; j < i; j++) // Inner loop
          //           {
          //                     cout << i << " ";
          //           }
          //           cout << endl;
          // }
          // return 0;

          // Question 6) print the patern in this form -
          // A
          // B B
          // C C C
          // D D D D

          //  int n = 4;
          //  char ch = 'A';
          //  for (int i = 1; i <= n; i++)
          //  {
          //            for (int j = 0; j < i; j++)
          //            {
          //                      cout << ch << " ";
          //            }
          //            ch += 1;
          //            cout << endl;
          //  }

          // Question 7) print the patern in this form --
          // 1
          // 1 2
          // 1 2 3
          // 1 2 3 4

          // for (int i = 0; i <= 4; i++) // Outer loop
          // {
          //           int num = 1;
          //           for (int j = 1; j <= i; j++) // Inner loop
          //           {
          //                     cout << num << " ";
          //                     num += 1;
          //           }
          //           cout << endl;
          // }

          // Question 8) print the patern in this form --
          // 1
          // 2 1
          // 3 2 1
          // 4 3 2 1

          // int n = 4;
          // for (int i = 1; i <= n; i++)
          // {
          //           for (int j = i; j > 0; j--)
          //           {
          //                     cout << j << " ";
          //           }
          //           cout << endl;
          // }

          // Question 9) print the Floyd's triangle pattern
          // 1
          // 2 3
          // 4 5 6
          // 7 8 9 10

          // int n = 4;
          // int num = 1;
          // for (int i = 1; i <= n; i++)
          // {
          //           for (int j = 0; j < i; j++)
          //           {
          //                     cout << num << " ";
          //                     num += 1;
          //           }
          //           cout << endl;
          // }

          // Question 10) print the patern in this form --
          // 1 1 1 1
          // 2 2 2
          // 3 3
          // 4
          // int n = 0;
          // int num = 1;
          // for (int i = 4; i >= n; i--)
          // {
          //           for (int j = 1; j < i + 1; j++)
          //           {
          //                     cout << num << " ";
          //           }
          //           num++;
          //           cout << endl;
          // }

          // Question 11) print the patern in this form --
          // 1 1 1 1
          //   2 2 2
          //     3 3
          //       4

          // int n = 4;
          // for (int i = 0; i < n; i++)
          // {
          //           // Space
          //           for (int j = 0; j < i; j++)
          //           {
          //                     cout << " ";
          //           }
          //           // Number
          //           for (int j = 0; j < n - i; j++)
          //           {
          //                     cout << (i + 1);
          //           }
          //           cout << endl;
          // }

          // Question 11) print the patern in this form --
          // AAAA
          //  BBB
          //   CC
          //     D
          // int n = 4;
          // char ch = 'A';
          // for (int i = 0; i < n; i++)
          // {
          //           // Space
          //           for (int j = 0; j < i; j++)
          //           {
          //                     cout << " ";
          //           }
          //           // Number
          //           for (int j = 0; j < n - i; j++)
          //           {
          //                     cout << ch;
          //           }
          //           ch += 1;
          //           cout << endl;
          // }

          // Question 12) print the patern in this form --
          // 1 1 1 1
          // 2 2 2
          //  3 3
          //   4

          // int n = 4;
          // for (int i = 0; i < n; i++)
          // {
          //           // Space
          //           for (int j = 0; j < i; j++)
          //           {
          //                     cout << " ";
          //           }
          //           // Number
          //           for (int j = 0; j < n - i; j++)
          //           {
          //                     cout << (i + 1) << " ";
          //           }
          //           cout << endl;
          // }

          // ##################### Pyriamid Pattern ###################

          //        1
          //       121
          //      12321
          //     1234321
          //    123454321
          //   12345654321
          //  1234567654321
          // 123456787654321

          int n = 8;
          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < n - i - 1; j++)
                    {
                              cout << " ";
                    }

                    for (int j = 1; j <= i + 1; j++)
                    {
                              cout << j;
                    }
                    for (int j = i; j > 0; j--)
                    {
                              cout << j;
                    }

                    cout << endl;
          }

          // ##################### Hollow Diamond Pattern ###################

          return 0;
}