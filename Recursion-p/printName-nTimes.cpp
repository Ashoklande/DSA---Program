#include <iostream>

using namespace std;

void printName(int num)
{

    if (num < 1)
    {
        return;
    }
    cout << "AShoka" << endl;
    printName(num - 1);
}

int main()
{
    int n;
    cin >> n;

    printName(n);
}