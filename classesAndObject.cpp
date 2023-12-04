#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    private:
        int scores[5] = {};
    public:
        void input(){
            for(int i = 0; i < 5; i++){
                cin >> this->scores[i];
            }
        }
        
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s1 = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s1[i].input();
    }

    // print result
    cout << n;
    cout << count;
    
    return 0;
}
