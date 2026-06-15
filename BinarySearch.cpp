#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};

    if(binary_search(v.begin(), v.end(), 30))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
