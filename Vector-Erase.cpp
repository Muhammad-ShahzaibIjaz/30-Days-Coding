#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int pos, start, end;
    cin >> pos >> start >> end;

    // remove element at given position
    v.erase(v.begin() + pos - 1);

    // remove range of elements
    v.erase(v.begin() + start - 1, v.begin() + end - 1);

    // print size of vector and remaining elements
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
