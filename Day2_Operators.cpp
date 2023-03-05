//Operator's
// These allow you to perform certain operations on your data. There are 3 basic types:
// 1. Unary: operates on 1 operand
// 2. Binary: operates on 2 operands
// 3. Ternary: operates on 3 operands

// Arithmetic Operators
// The binary operators used for arithmetic are as follows:
// 1.  +: Additive
// 2.  -: Subtraction
// 3.  *: Multiplication
// 4.  /: Division
// 5.  %: Remainder (modulo)

// Additional Operator
// +: A binary operator used for String concatenation
// ++: This unary operator is used to preincrement (increment by 1 before use) when prepended to a variable name or postincrement (increment by 1 after use) when appended to a variable.
// --: This unary operator is used to predecrement (decrement by 1 before use) when prepended to a variable name or postdecrement (decrement by 1 after use) when appended to a variable.
// !: This unary operator means not (negation). It's used before a variable or logical expression that evaluates to true or false.
// ==: This binary operator is used to check the equality of 2 primitives.
// !=: This binary operator is used to check the inequality of 2 primitives.
// <, >, <=, >=: These are the respective binary operators for less than, greater than, less than or equal to, and greater than or equal to, and are used to compare two operands.
// &&, ||: These are the respective binary operators used to perform logical AND and logical OR operations on two boolean (i.e.: true or false) statements.
// ? : This ternary operator is used for simple conditional statements (i.e.: if ? then : else).


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = (meal_cost*tip_percent)/100;
    double tax = (tax_percent*meal_cost)/100;
    int total_cost = round(meal_cost+tip+tax);
    cout << total_cost << endl;
}

int main()
{
    string meal_cost_temp;
    getline(cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    string tip_percent_temp;
    getline(cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    string tax_percent_temp;
    getline(cin, tax_percent_temp);

    int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

    solve(meal_cost, tip_percent, tax_percent);

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
