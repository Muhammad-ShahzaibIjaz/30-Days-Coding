#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int inputNum;
    cin >> inputNum;

    map<string, int> marks;

    for (int i = 0; i < inputNum; i++) {
        int query;
        string name;
        cin >> query >> name;

        if (query == 1) {
            int mark;
            cin >> mark;
            marks[name] += mark;
        } else if (query == 2) {
            marks.erase(name);
        } else {
            if (marks.count(name)) {
                cout << marks[name] << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }  
    return 0;
}



