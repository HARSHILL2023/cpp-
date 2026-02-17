#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    sort(v.begin(), v.end());

    
    reverse(v.begin(), v.end());

    

    return 0;
}