#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void revArr(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    {
        { // output array loop

            int arr[] = {10, 7, 2, 35, 21, 108};  // here we did not define the size of array so it will be same as array inside, if we would have already defined the size of array and give value to few indices even then the full size indices will be alloted but given randome numbers to undefined.
            int size = sizeof(arr) / sizeof(int); // this way is better for undefined array size, rather than directly writing the size in size variable.

            // loop 0 to size-1
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << endl;
            }
            cout << endl;
        }

        { // Input and output array loop

            int size = 5;
            int arr[size];

            // input
            for (int i = 0; i < size; i++)
            {
                cout << "Enter digits: ";
                cin >> arr[i];
            }

            // output
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << endl;
            }
            cout << endl;
        }

        {
            { // Smallest array value
                int nums[] = {7, 5, -21, 37, 1};
                int size = 5;

                int smallNum = __INT_MAX__;

                for (int i = 0; i < size; i++)
                {
                    if (nums[i] < smallNum)
                    {
                        smallNum = nums[i];
                    }
                }
                cout << "Smallest: " << smallNum << endl;

                // We also have min/max function which does same things as above code.

                nums[2] = -77;
                int smallNum2 = INT_MAX;
                int larNum = INT_MIN;

                for (int i = 0; i < size; i++)
                {
                    smallNum2 = min(nums[i], smallNum2);
                    larNum = max(nums[i], larNum);
                }
                cout << "Smallest Number: " << smallNum2 << endl;
                cout << "Largest Number: " << larNum << endl;
            }

            { // Largest arrayindex value
                int nums[] = {6, 11, 30, -3, 7, -97};
                int size = sizeof(nums) / sizeof(int);

                int minNum = INT_MAX;
                int minNumInx;

                int maxNum = INT_MIN;
                int maxNumInx;

                for (int i = 0; i < size; i++)
                {
                    if (nums[i] < minNum)
                    {
                        minNum = nums[i];
                        minNumInx = i;
                    }
                }

                for (int i = 0; i < size; i++)
                {
                    if (nums[i] > maxNum)
                    {
                        maxNum = nums[i];
                        maxNumInx = i;
                    }
                }
                // cout << "Maximum Number: " << maxNum << endl;
                cout << "Minimum Number Index: " << minNumInx << endl;
                cout << "Maximum Number Index: " << maxNumInx << endl;
            }
        }

        {
            { // Linear Search Algorithm

                // Print the maching number index
                int nums[] = {4, 2, 4, 9, 11};
                int size = 5;

                int targetDig = 11;

                cout << "Linear Search Target Index: " << linearSearch(nums, size, targetDig) << endl;
            }

            {
                // Reverse an array
                int nums[] = {4, 9, 32, 1, 18};
                int size = 5;

                int revNums[size];
                int position = 0;

                for (int i = size - 1; i >= 0; i--)
                {
                    revNums[position] = nums[i];
                    cout << revNums[position] << " ";
                    position++;
                }
                cout << endl;

                /* Or you can do this with "swap function" */
                int numsOne[] = {3, 4, 55, 2, 23};
                int sizeOne = 5;
                revArr(numsOne, sizeOne);

                for (int i = 0; i < sizeOne; i++)
                {
                    cout << numsOne[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}