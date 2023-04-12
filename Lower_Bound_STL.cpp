#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> q;
    int x[q];
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < q; i++) {
        int* p = lower_bound(a, a + n, x[i]);
        if (*p == x[i]) {
            cout << "Yes " << (p - a + 1) << endl;
        } else {
            cout << "No " << (p - a + 1) << endl;
        }
    }  
    return 0;
}
