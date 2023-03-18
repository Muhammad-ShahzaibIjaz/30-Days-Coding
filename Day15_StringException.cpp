#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try{
        int num = stoi(S);
        cout << num << endl;
    }
    catch(exception e){
        cout << "Bad String" <<endl;
    }
    return 0;
}
