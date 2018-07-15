#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
       int ret = 0;
       int max_ret = array[0];
       size_t size = array.size();
       for(size_t i = 0; i < size; i++)
       {
           ret += array[i];
           if(ret > max_ret)
           {
               max_ret = ret;
           }
           if(ret < 0)
               ret = 0;
       }
       return max_ret;
    }
};
int main()
{
    vector<int> a; 
    a.push_back(-2);
    a.push_back(-7);
//    a.push_back(-15);
//    a.push_back(1);
//    a.push_back(2);
//    a.push_back(2);
    Solution s;
    cout << s.FindGreatestSumOfSubArray(a) << endl;
    return 0;
}
