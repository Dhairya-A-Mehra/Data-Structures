// question number: 268
// logic: declare 2 variables to store the sum of all the elements present in the vector and  the sum from 0 to n.
// then iterate through vector and add all the elements present in the vector and store it in first variable.
// then calacultate the sum from 0 to n by also iterating throught the vector, and store it in second variable.
// fnally return the difference between the second variable and first variable.
// don't use prefix sum logic here as it will not work here.

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int as = 0, gs = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            as = as + nums[i];
        }
        for (int i = 0; i <= nums.size(); i++)
        {
            gs = gs + i;
        }
        return gs - as;
    }
};