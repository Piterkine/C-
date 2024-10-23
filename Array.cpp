#include <iostream>
using namespace std;

// int main()
// {
// int marks[5] = {95, 85, 74, 80, 32};
// int price[] = {56, 23, 48, 50, 96};
// // cout << price[1] << endl;
// cout << &marks[2] << endl;
// cout << &marks[3] << endl;
// cout << &marks[4] << endl;
// }

// ####################### Loop in Array #####################
// int marks[] = {56, 98, 63, 45, 70, 80};
// int size = 6;
// for (int i = 0; i < size; i++)
// {
//           cout << marks[i] << endl;
// }
// input a number and store in the array
// int size = 5;
// int marks[size];
// for (int i = 0; i < size; i++)
// {
//           cout << "Enter the marks of student " << i + 1 << ": ";
//           cin >> marks[i];
// }

// Question 1) find the smallest number in the array with the help of loops.

// int smallest = INT8_MAX; //(INT_MAX=+infinte)
// int size = 5;
// int arr[size] = {5, 15, 22, 1, -15, 24};
// for (int i = 0; i < size; i++)
// {
//           if (smallest > arr[i])
//           {
//                     smallest = arr[i];
//           }
//           }
// cout << "The smallest number in the array is: " << smallest << endl;

// Question 2) find the Largest number in the array with the help of loops.

// int Maximum = INT8_MIN; //(INT_MAX=+infinte)
// int size = 6;
// int arr[size] = {5, 15, 22, 1, -15, 24};
// for (int i = 0; i < size; i++)
// {
//           if (Maximum < arr[i])
//           {
//                     Maximum = arr[i];
//           }
// }
// cout << "The Maximum number in the array is: " << Maximum << endl;

// ############ Method 2 ############

// Question 2) find the Smallest and Largest number in the array with the help of loops.
// int Smallest = INT8_MAX;
// int Maximum = INT8_MIN;
// int size = 6;
// int arr[size] = {5, 15, 22, 1, -15, 24};
// for (int i = 0; i < size; i++)
// {
//           Smallest = min(Smallest, arr[i]);
//           Maximum = max(Maximum, arr[i]);
// }
// cout << "The Smallest number in the array is: " << Smallest << endl;
// cout << "Maximum number in the array is: " << Maximum << endl;

// Question 3) find the smallest and largest number in the array with its index ..

// int Smallest = INT8_MAX;
// int Maximum = INT8_MIN;
// int size = 6;
// int index;
// int index2;
// int arr[size] = {5, 15, 22, 1, -15, 24};
// for (int i = 0; i < size; i++)
// {
//           if (arr[i] < Smallest)
//           {
//                     Smallest = arr[i];
//                     index = i;
//           }
//           if (arr[i] > Maximum)
//           {

//                     Maximum = arr[i];
//                     index2 = i;
//           }
// }
// cout << "The Smallest number in the array is: " << Smallest << endl;
// cout << "The index is: " << index << endl;
// cout << "Maximum number in the array is: " << Maximum << endl;
// cout << "The index of number: " << index2 << endl;

// ###########################  Itself doing this  #########################
//           cout << "[5, 15, 22, 1, -15, 56]" << endl;
//           cout << "Please select Max or Min to given array:-" << endl;
//           string choice;
//           cin >> choice;
//           if (choice == "Min")
//           {
//                     cout << "Your choice is " << choice << ":" << endl;
//                     int Smallest = INT8_MAX;
//                     int size = 6;
//                     int index;
//                     int arr[size] = {5, 15, 22, 1, -15, 24};
//                     for (int i = 0; i < size; i++)
//                     {
//                               Smallest = min(Smallest, arr[i]);
//                               index = i;
//                     }
//                     cout << "The Smallest number in the array is: " << Smallest << endl;
//                     cout << "The index is: " << index << endl;
//           }
//           else if (choice == "Max")
//           {
//                     cout << "Your choice is: " << choice << ":" << endl;
//                     int Maximum = INT8_MIN;
//                     int size = 6;
//                     int index;
//                     int arr[size] = {5, 15, 22, 1, -15, 56};
//                     for (int i = 0; i < size; i++)
//                     {
//                               Maximum = max(Maximum, arr[i]);
//                               index = i;
//                     }

//                     cout << "The Maximum number in the array is: " << Maximum << endl;
//                     cout << "The index of: " << index << endl;
//           }
//           else
//           {
//                     cout << "Invalid choice" << endl;
//           }

// ###########################  Linear Search in Array  #########################
// int target;
// cout << "Enter the target number: " << " \n";
// cin >> target;
// int size = 7;
// int arr[size] = {56, 64, 72, 89, 93, 42, 30};
// for (int i = 0; i < size; i++)
// {
//           if (arr[i] == target)
//           {
//                     cout << "Found at index: " << i << endl;
//                     break;
//           }
//           else
//           {
//                     {
//                               cout << "Not Found!!";
//                               break;
//                     }
//           }
// }

// ############################# Reverse Array #########################

// void reverseArray(int arr[], int size)
// {
//           int start = 0, end = size - 1;
//           while (start < end)
//           {
//                     swap(arr[start], arr[end]);
//                     start++;
//                     end--;
//           }
// }
// int main()
// {
//           int size = 7;

//           int arr[size] = {4, 2, 7, 8, 1, 2, 5};
//           reverseArray(arr, size);
//           for (int i = 0; i < size; i++)
//           {
//                     cout << arr[i];
//           }
//           return 0;
// }

// // ######################## Linear Search Algo #######################
// int LinearSearch(int *arr, int n)
// {
//           int key = 0;
//           for (int i = 0; i < n; i++)
//           {
//                     if (arr[i] > key)
//                     {
//                               key = arr[i];
//                     }
//           }
//           return key;
// }
// int main()
// {
//           int arr[] = {21, 27, 3, 14, 45, 16, 7};
//           int n = sizeof(arr) / sizeof(int);
//           cout << LinearSearch(arr, n) << endl;
//           return 0;
// }
// // ##################### Reverse of Array #####################
// int reverse(int *arr, int n)
// {

//           int start = 0;
//           int end = n - 1;
//           while (start < end)
//           {

//                     swap(arr[start], arr[end]);
//                     start++;
//                     end--;
//           }
// }
// int main()
// {
//           int arr[] = {2, 5, 6, 8, 13, 1};
//           int n = sizeof(arr) / sizeof(int);
//           for (int i = 0; i < n; i++)
//           {
//                     cout << " " << arr[i];
//           }
//           cout << endl;
//           reverse(arr, n);
//           for (int i = 0; i < n; i++)
//           {
//                     cout << " " << arr[i];
//           }
// }

// ####################### Binary Search #####################

int Binary(int *arr, int n, int key)
{
          int start = 0;
          int end = n - 1;
          while (start <= end)
          {
                    int mid = (start + end) / 2;
                    if (arr[mid] == key)
                    {
                              return mid;
                    }
                    else if (arr[mid] < key)
                    {
                              start = mid + 1;
                    }
                    else
                    {
                              end = mid - 1;
                    }
          }

          return -1;
}

int main()
{
          int arr[] = {2, 4, 6, 8, 10, 12};
          int n = sizeof(arr) / sizeof(int);

          cout << "Number found at index of : " << Binary(arr, n, 10);
}