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
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    int pos, start, end;
    cin >> pos >> start >> end;

    // remove element at given position
    v1.erase(v1.begin() + pos - 1);

    // remove range of elements
    v1.erase(v1.begin() + start - 1, v1.begin() + end - 1);

    // print size of vector and remaining elements
    cout << v1.size() << endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}
