#include <bits/stdc++.h>
using namespace std;

// Dutch National Flag Algorithm

void DNF(vector<int> &nums)
{
    int n = nums.size();
    // take 3 Pointers low,mid and high
    // We are dividing array into 3 parts.
    // we will swap elements from array,
    // such that
    //  nums[0........low-1]---->>0
    //  nums[low......mid-1]---->>1
    //  nums[high+1.......n]---->>2

    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        switch (nums[mid])
        {
        case 0:
            swap(nums[low], nums[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(nums[mid], nums[high]);
            high--;
            break;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input form the input.txt
    freopen("input1.txt", "r", stdin);
    // for writting output form the output.txt
    freopen("output1.txt", "w", stdout);
#endif

    vector<int> nums{0, 1, 2, 1, 1, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2};
    cout << "\tDutch National Flag Algorithm" << endl;
    cout << "\nBefore DNF" << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    DNF(nums);
    cout << "\nAfter DNF" << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
