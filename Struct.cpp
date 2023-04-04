#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st1;
    
    cin >> st1.age >> st1.first_name >> st1.last_name >> st1.standard;
    cout << st1.age << " " << st1.first_name << " " << st1.last_name << " " << st1.standard;
    
    return 0;
}