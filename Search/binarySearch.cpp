// Linear search
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &arr, int k)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
        else
        {
            end = mid - 1;
            mid = (start + end) / 2;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 10, 40};

    int ans = search(arr, 10);

    cout << ans << " ";

    return 0;
}