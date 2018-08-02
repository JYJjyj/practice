//给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数
#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

stack<int> func(int num, int n)
{
    int tmp = num;
    stack<int> s;
    while(num != 0)
    {
        tmp = num % n;
        num = (num - tmp) / n;
        s.push(tmp);
    }
    return s;
}

int main()
{
    int num, n;
    cin >> num;
    cin >> n;
    stack<int> s = func(num, n);
    size_t size = s.size();
    printf("s.size() = %lu\n",size);
    while(size--)
    {
        if(s.top() > 9)
        {
            printf("%c",'A' + s.top() - 10);
        }
        else
        {
            printf("%d",s.top());
        }
        s.pop();
    }
    cout<<endl;
}
