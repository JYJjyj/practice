//Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent,
//    with the colors in the order red, white and blue.
//Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(int A[], int n) {
       for(int i = 0; i < n; i++)
       {
           for(int j = i; j < n; j++)
           {
               if(A[i] > A[j])
                   swap(A[i],A[j]);
           }
       }
    }
};

int main()
{
    int A[] = {0,1,2,2,1,1,2,0,0};
    Solution s;
    s.sortColors(A,sizeof(A)/sizeof(int));  
    for(size_t i = 0; i < sizeof(A)/sizeof(int); i++)
    {
        cout << A[i] <<" ";
    }
    cout<<endl;
    return 0;
}
