#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[] = {1,2,3,2,1,4,2,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> freq;

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    cout << "Element Frequencies:\n";

    for(auto x : freq)
    {
        cout << x.first
             << " -> "
             << x.second
             << endl;
    }

    return 0;
}
