#include <iostream>

using namespace std;

void printnum(int num)
{
    if (num < 1)
    {
        return;
    }
    printnum(num - 1);
    cout << num << endl;
}

int main()
{
    int n;
    cin >> n;

    printnum(n);
}