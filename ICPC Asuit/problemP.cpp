#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n; // Read the value of n first
    int arr[n]; // Define the array after reading the value of n

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int op = 0;
    while(true)
    {
        bool all_even = true;

        // Check that all elements are even
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0)  // If there is just one element that is not even, stop
            {
                all_even = false;
                break;
            }
        }

        if(all_even)   // In case all elements are even
        {
            for(int i = 0; i < n; i++)
            {
                arr[i] /= 2;
            }
            op++;
        }
        else
        {
            break;
        }
    }

    cout << op;

    return 0;
}
