#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<sstream>
#include <algorithm>
using namespace std;

void tokenize(string const &str, const char delim,
vector<int> &out) 
{ 
    // construct a stream from the string 
    stringstream ss(str); 
 
    string s; 
    while (getline(ss, s, delim)) { 
        out.push_back(stoi(s)); 
    } 
} 
 
int calculateFine(vector<int> &returnedDate, vector<int> &dateDue){
    if(returnedDate[2] > dateDue[2]){
        return 10000;
    }
    else if((returnedDate[2]==dateDue[2]) && (returnedDate[1] > dateDue[1])){
        return 500*(returnedDate[1]-dateDue[1]);
    }
    else if((returnedDate[2]==dateDue[2]) && (returnedDate[1] == dateDue[1]) && (returnedDate[0] > dateDue[0])){
        return 15*(returnedDate[0]-dateDue[0]);
    }
    else{
        return 0;
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string date1;
    string date2;
    getline(cin,date1);
    getline(cin,date2); 
    const char delim = ' '; 
    vector<int> dateReturned;
    vector<int> dateDue; 
    tokenize(date1, delim, dateReturned); 
    tokenized(date2, delim, dateDue);
    cout << calculateFine(dateReturned,dateDue) << endl;
    return 0;
}
