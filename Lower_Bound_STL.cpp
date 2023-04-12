#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, query;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    cin >> query;
    int x[query];
    for (int i = 0; i < query; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < query; i++) {
        int* p = lower_bound(a, a + N, x[i]);
        if (*p == x[i]) {
            cout << "Yes " << (p - a + 1) << endl;
        } else {
            cout << "No " << (p - a + 1) << endl;
        }
    }  
    return 0;
}
