// Question number: 217

// we can use set to solve this problem as it prevents duplicate entries

// logic: create a set and insert all the elements of vector into the set and then compare the size of the set with that of the vector
// if the size of both of them are not same then it means that duplicate elements are present in the vector and return true as an output, else return false.

// Time complexity for this solution is O(n).

#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        if (s.size() != nums.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};