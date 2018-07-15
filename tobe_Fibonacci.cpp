#include <iostream>

using namespace std;
int func(int num)
{
    int prev = 1, next = 1;
    while(num >= next)
    {
        int tmp = prev + next;
        prev = next;
        next = tmp; 
    }
    return (num - prev) > (next - num) ? next - num : num - prev;
}

int main()
{
    int num;
    cin >> num;
    cout << func(num);
    return 0;
}
