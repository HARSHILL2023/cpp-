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

    
    ofstream fout("Output.txt");

    if (!fout)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    fout << "Vector elements after sorting and reversing:\n";
    for (int num : v)
    {
        fout << num << " ";
    }

    fout.close();

    cout << "Data successfully written to Output.txt" << endl;

    return 0;
}