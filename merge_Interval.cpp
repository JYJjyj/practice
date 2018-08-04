#include <iostream>
#include <vector>
using namespace std;

//Definition for an interval.
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval>::iterator it1 = intervals.begin();
        vector<Interval>::iterator it2 = it1 + 1;
        vector<Interval>::iterator it3 = it1; 
        for(; it3 < intervals.end() - 1; it3++)
        {
            if((*it1).end >= (*it2).start)
            {
                if((*it1).end < (*it2).end)
                    (*it1).end = (*it2).end;
                intervals.erase(it2);
            it1++;
            it2 = it1;
            it2++;
            }
            else
            {
                it1++;
                it2++;
            }
        }
        return intervals;
    }
};


int main()
{
    Solution s;
    vector<Interval> v;
    Interval i(1,3);
    Interval x(1,2);
    Interval y(8,10);
    Interval q(15,18);
    v.push_back(i);
    v.push_back(x);
    v.push_back(y);
    v.push_back(q);
    s.merge(v);
    for(size_t i = 0; i < v.size(); i++)
    {
        cout<<"["<<v[i].start<<","<<v[i].end<<"]"<<" ";
    }
    cout<<endl;
    return 0;
}
