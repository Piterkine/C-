#include <iostream>
#include <vector> // for vector

using namespace std;

// int main()
// {

// ########################### Vector #########################
// vector is similar to array, main difference is is vector is dyanmic in nature it means vector is they have not fixed Capacity..
// STL is library mean Standard template Library.
// STL is a type of Container which contains Vectors, Stack, queue and set etc..

// VECTOR Create Syntax
// 1). vector <int> vec;
// 2). vector <int> vec[]={1,2,3,4,5,6};
// 3). vector<int> vec(5, 0);

// ######################## ForEach in Vector #####################

// For Character
// vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f'};
// for (char val : vec)
// {
//           cout << val << " ";
// }

// For Integer
// vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// cout << "Size : " << vec.size() << endl;
// for (int val : vec)
// {
//           cout << val << " ";
// }

// ####################### Vector Push & Pop Front  #####################
// vec.push_back(10); // add element at the end of vector
// vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// cout << "Before Push  Vector value: " << vec.size() << endl;
// vec.push_back(10);
// cout << "After Push  Vector value: " << vec.size() << endl;

// // vec.pop_back(); // remove element from the end of vector
// vec.pop_back();
// cout << "After Pop  Vector value: " << vec.size() << endl;

// // vec.front() // print the front value of the vector.
// cout << "Front value: " << vec.front() << endl;

// // vec.back() // print the back value of the vector.
// cout << "Back value: " << vec.back() << endl;

// // vec.at() // access the value of the vector with index.
// cout << "At index: " << vec.at(5);

// vector<int> vec;
// vec.push_back(0);
// vec.push_back(1);
// vec.push_back(2);
// cout << "size: " << vec.size() << endl;
// cout << "Capacity" << vec.capacity() << endl;
// vec.push_back(3);
// cout << "size: " << vec.size() << endl;
// vec.push_back(4);
// // Note : ab yaha per Capacity kam hai to iske double Capacity ki vector create hogi (4*2=8) aur purane vector ki value isi me copy ho jayegi aur vector delete ho jayega..
// cout << "Capacity " << vec.capacity() << endl;

// ####################### Single Number #####################
int findNum(const vector<int> &nums, int target)
{
          for (int val : nums)
          {
                    if (val == target)
                    {
                              cout << "Found Succesfully : " << val << endl;
                              return val;
                    }
          }
          return -1;
}
int main()
{
          vector<int> nums = {0, 1, 2, 1, 2};
          int target;
          cout << "Enter target number" << endl;
          cin >> target;
          int result = findNum(nums, target);
          if (result != -1)
          {
                    cout << "Element found at index " << result << endl;
          }
          else
          {
                    cout << "Element not found in the vector." << endl;
          }

          return 0;
}