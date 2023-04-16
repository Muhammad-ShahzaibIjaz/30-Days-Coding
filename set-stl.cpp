#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;

    set<int> s;

    while (q--){
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            s.insert(x);
        } else if (type == 2) {
            s.erase(x);
        } else {
            if (s.count(x)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }  
    return 0;
}



