#include <bits/stdc++.h>

using namespace std;



int main()
{
    string line;
    getline(cin, line);
    try{
        int num = stoi(line);
        cout << num << endl;
    }
    catch(exception e){
        cout << "Bad String" <<endl;
    }
    return 0;
}
