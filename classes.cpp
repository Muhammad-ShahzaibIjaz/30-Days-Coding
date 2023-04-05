#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int age;
        int standard;
        string first_name;
        string last_name;
    public:
        void set_age(int age){
            this->age = age;
        }
        
        int get_age(){
            return this->age;
        }
        
        void set_standard(int standard){
            this->standard = standard;
        }
        
        int get_standard(){
            return this->standard;
        }
        
        void set_first_name(string first_name){
            this->first_name = first_name;
        }
        
        string get_first_name(){
            return this->first_name;
        }
        
        void set_last_name(string last_name){
            this->last_name = last_name;
        }
        
        string get_last_name(){
            return this->last_name;
        }
        
        string to_string(){
            stringstream ss1,ss2;
            ss1 << this->age;
            ss2 << this->standard;
            string age1, standard1;
            ss1 >> age1;
            ss2 >> standard1;
            return age1 + ',' + this->first_name + ',' + this->last_name + ',' + standard1;
        }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st1;
    st1.set_age(age);
    st1.set_standard(standard);
    st1.set_first_name(first_name);
    st1.set_last_name(last_name);
    
    cout << st1.get_age() << "\n";
    cout << st1.get_last_name() << ", " << st1.get_first_name() << "\n";
    cout << st1.get_standard() << "\n";
    cout << "\n";
    cout << st1.to_string();
    
    return 0;
}