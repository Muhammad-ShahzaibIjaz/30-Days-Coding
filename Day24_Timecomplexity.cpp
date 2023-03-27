#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    bool is_prime = true;
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
    is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> number;
        if(isPrime(number)){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not prime" << endl;
        }
    }
    return 0;
}
