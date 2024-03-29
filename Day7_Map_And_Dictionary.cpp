#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map<string, string> phoneBook;
    
    for (int i = 0; i < n; i++) {
        string name, phone;
        cin >> name >> phone;
        phoneBook[name] = phone;
    }
    
    string query;
    while (cin >> query) {
        if (phoneBook.count(query) > 0) {
            cout << query << "=" << phoneBook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}