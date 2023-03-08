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
    string arr[N];
    for(int i=0; i < N; i++){
        cin >> arr[i];
    }
    int len = *(&arr + 1) - arr;
    for(int i = 0; i < N; i++){
        string str = arr[i];
        for(int j = 0 ; j < str.length(); j+=2){
            cout << str[j];
        }
        cout << " ";
        for(int k = 1; k < str.length(); k+=2){
            cout << str[k];
        }
        cout << endl;
    }
}
