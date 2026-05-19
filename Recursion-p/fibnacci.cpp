#include <iostream>
using namespace std;

int fact(int num)
{

    if (num <= 1)
    {
        return num;
    }

    return num * fact(num - 1);
}

int main()
{
    cout << fact(3);
}