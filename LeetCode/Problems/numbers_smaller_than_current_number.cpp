// question number: 1365
// create a vector a
// create a counter =0
// iterate through the vector nums using 2 for loops
// then in for loop, check for the condition if nums[i]>nums[j], if this conditon is satisfied then increase the counter by 1
// and in the outer for loop write a code to push_back the value of counter into vector a
// then finally main logic: don't forget to make the counter = 0 after doing push_back
// time complexity: O(n^2)

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> a;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                {
                    count++;
                }
            }
            a.push_back(count);
            count = 0;
        }
        return a;
    }
};