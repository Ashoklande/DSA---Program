// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {

        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void sort(vector<int> &s, int low, int high)
{

    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;
    sort(s, low, mid);
    sort(s, mid + 1, high);
    merge(s, low, mid, high);
}

int main()
{
    vector<int> s = {1, 3, 1, 4, 7, 6};
    sort(s, 0, s.size() - 1);
    for (int x : s)
    {
        cout << x << " ";
    }
    return 0;
}