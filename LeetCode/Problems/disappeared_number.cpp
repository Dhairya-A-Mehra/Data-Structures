// Question number: 448
// logic: create 2 different sets s1 and s2, then insert all the elements of the vector into s1.
// then write a for-loop from 1 to n, and check for a condition if the element is present in s1 or not. and if the element is not present in s1 then insert it into s2.
// finally return the vector s2 by typecasting it into vector<int> from set<int>, manually.

#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        set<int> s1, s2;
        for (int i = 0; i < nums.size(); i++)
        {
            s1.insert(nums[i]);
        }
        for (int i = 1; i <= nums.size(); i++)
        {
            if (s1.find(i) == s1.end())
            {
                s2.insert(i);
            }
        }
        return vector<int>(s2.begin(), s2.end());
    }
};