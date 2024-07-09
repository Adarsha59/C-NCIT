// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to generate permutations of
// at most X elements from array arr[]
void differentFlagPermutations(int X,
                               vector<string> arr)
{
    vector<string> ml;
    ml = arr;

    for (int i = 0; i < ml.size(); i++)
    {
        cout << ml[i] << " ";
    }

    int count = ml.size();

    // Traverse all possible lengths
    for (int z = 0; z < X - 1; z++)
    {

        // Stores all combinations
        // of length z
        vector<string> tmp;

        // Traverse the array
        for (int i = 0; i < arr.size(); i++)
        {
            for (int k = 0; k < ml.size(); k++)
            {
                if (arr[i] != ml[k])
                {

                    // Generate all
                    // combinations of length z
                    tmp.push_back(ml[k] + arr[i]);
                    count += 1;
                }
            }
        }

        // Print all combinations of length z
        for (int i = 0; i < tmp.size(); i++)
        {
            cout << tmp[i] << " ";
        }

        // Replace all combinations of length z - 1
        // with all combinations of length z
        ml = tmp;
    }
}

// Driver Code
int main()
{

    // Given array
    vector<string> arr { "A",
                         "B",
                         "C",
                         "D",
                         "E",
                         "F",
                         "G",
                         "H",
                         "I",
                         "J",
                         "K",
                         "L",
                         "M",
                         "N",
                         "O",
                         "P",
                         "Q",
                         "R",
                         "S",
                         "T",
                         "U",
                         "V",
                         "W",
                         "X",
                         "Y",
                         "Z",
                         "a",
                         "b",
                         "c",
                         "d",
                         "e",
                         "f",
                         "g",
                         "h",
                         "i",
                         "j",
                         "k",
                         "l",
                         "m",
                         "n",
                         "o",
                         "p",
                         "q",
                         "r",
                         "s",
                         "t",
                         "u",
                         "v",
                         "w",
                         "x",
                         "y",
                         "z" }

    // Given X
    int X = 8;

    differentFlagPermutations(X, arr);

    return 0;
}

// This code