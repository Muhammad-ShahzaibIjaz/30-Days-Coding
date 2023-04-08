#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N; 
    cin >> N;
    vector<int> V1;
    for(int i = 0; i < N; i++){
        int number;
        cin >> number;
        V1.push_back(number);
    }
    sort(V1.begin(), V1.end());
    for(int i = 0; i < N; i++){
        cout << V1[i]  << " ";
    }
    return 0;
}
