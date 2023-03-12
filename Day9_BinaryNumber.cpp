#include <bits/stdc++.h>
#include <stack>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int previousConsective = 0;
    int current = 0;
    while(n > 0){
        int result = n%2;
        //cout << result;
        if(result == 1 && previousConsective == 0){
            previousConsective += 1;
            current += 1;
        }
        else if(result == 1){
            current += 1;
        }
        else{
            if(previousConsective >= current){
                current = 0;
            }
            else{
                previousConsective = current;
                current = 0;
            }
        }
        n = n/2;
    }
    if(previousConsective >= current){
        cout << previousConsective << endl;
    }
    else{
        cout << current << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
