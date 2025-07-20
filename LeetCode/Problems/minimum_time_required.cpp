// LeetCode Problem: Minimum Time Required to Visit All Points
// problem number: 1266
// logic: accessing the elements of a 2-d vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> a;
    a.push_back({1, 2});
    a.push_back({3, 4});

    vector<int> last;
    int x1, y1;
    last = a.back();
    x1 = last[0];
    y1 = last[1];
    a.pop_back();

    return 0;
}

// this is the code to access the elements of a 2d vector we have to use the back() function to get the last element of the vector and to access the elements of the last the vector we have to use the index of the vector.

// now main code logic:
// create a counter variable to count the minimum time required.
// Then create a vector(last) to store the elements of the given 2d vector, and then insert the last element of the vector in the newly created vector.
// then create a 2 new variables as x1, y1 to store the elements of the last vector.
// then pop out the last element from the given vector.
// then write a while loop logic which will be running till the given vector is not empty.
//      in the while loop create a new vector to store the elements of the given vector.
//      this is will always contain the last element of the existing vector(points).
//      then create a 2 new variables as x2, y2 to store the elements of the last vector.
//      then pop out the last element from the given vector.
//      then calculate the count as maximum of the absolute difference of the x1 and x2 and y1 and y2.
//      then assign the x1 and y1 to x2 and y2 respectively.
//      then pop out the last element from the given vector.
// finally return the count as the minimum time required to reach the last point from the first point.

class Solution
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        int count = 0;
        vector<int> last1 = points.back();
        points.pop_back();
        int x1, y1;
        x1 = last1[0];
        y1 = last1[1];
        while (points.size() != NULL)
        {
            vector<int> last2 = points.back();
            points.pop_back();
            int x2, y2;
            x2 = last2[0];
            y2 = last2[1];
            count += max(abs(x1 - x2), abs(y1 - y2));
            x1 = x2;
            y1 = y2;
            last2.pop_back();
        }
        return count;
    }
};