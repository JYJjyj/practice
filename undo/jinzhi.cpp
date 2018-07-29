//给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数
#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

stack<char> func(int num, int n)
{
    int tmp = num;
    stack<char> s;
    while(tmp > n)
    {
        tmp = num % n;
        num = (num - tmp) / n;
        if(tmp > 9)
        {
            tmp = 'A' + (tmp - 10);
        }
        s.push(tmp);
    }
    return s;
}

int main()
{
    int num, n;
    cin >> num;
    cin >> n;
    stack<char> s = func(num, n);
    size_t size = s.size();
    printf("size = %lu\n",size);
    while(size--)
    {
        printf("%c ",s.top());
        s.pop();
    }
    cout<<endl;
}
