#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanToIntMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < s.size(); i++) {
        if (i > 0 && romanToIntMap[s[i]] > romanToIntMap[s[i-1]]) {
            result += romanToIntMap[s[i]] - 2 * romanToIntMap[s[i-1]];
        } else {
            result += romanToIntMap[s[i]];
        }
    }

    return result;
}

int main() {
    string romanNum;
    cout << "Enter a Roman numeral: ";
    cin >> romanNum;
    int result = romanToInt(romanNum);
    cout << "The equivalent integer value is " << result << endl;
    return 0;
}
