#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

        // Format and print A
        cout << hex << left << showbase << nouppercase << (long long) A << endl;

        // Format and print B
        // Format and print B with a plus sign
cout << dec << showpos << right << setw(15) << setfill('_') << fixed << setprecision(2) << B << endl;


        // Format and print C
        cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;

    }
    return 0;
}
