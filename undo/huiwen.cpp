#include <iostream>
#include <string>
using namespace std;

int func(string str)
{
    string::iterator begin = str.begin();
    string::iterator end = str.end();
    int flag = 0;
    end--;
    while(begin < end)
    {
        if(*begin == *end)
        {
            begin++;
            end--;
            continue;
        }
        else
        {
            flag++;
            if(flag > 1)
            {
                break;
            }
            if(*end == *(begin++))
            {
                continue;
            }
            else
            {
                begin--;
                if(*begin == *(end--))
                    continue;
            }
            continue;
        }
    }
    if(flag == 0 || flag == 1)
        return true;
    else
        return false;
}

int main()
{
    string str;
    cin >> str;
    cout<<func(str)<<endl;
    return 0;
}
