#include <iostream>
using namespace std;
int main()
{
          // ######################## Brute Force Approach #####################
          int n = 6;
          int num[n] = {3, -4, 5, 4, -1, 7, -8};
          // int maxSum = INT8_MIN;
          // for (int st = 0; st < n; st++)
          // {
          //           int curSum = 0;
          //           for (int end = st; end < n; end++)
          //           {
          //                     curSum += arr[end];
          //                     maxSum = max(maxSum, curSum);
          //           }
          // }
          // cout << "Maximum sum of a subarray: " << maxSum << endl;

          // ######################## Kadane's Algorithm #####################
          int currSum = 0, maxSum = INT8_MIN;
          for (int val : num)
          {
                    currSum += val;
                    maxSum = max(maxSum, currSum);
                    if (currSum < 0)
                    {
                              currSum = 0;
                    }
          }
          cout << "Maximum sum of a subarray: " << maxSum << endl;
          return 0;
}