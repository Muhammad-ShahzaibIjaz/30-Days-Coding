#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle {
protected:
    int width, height;
public:
    void display() {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }
    void display() {
        cout << width * height << endl;
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea rect_area;
    
    /*
     * Read the width and height
     */
    rect_area.read_input();
    
    /*
     * Print the width and height
     */
    rect_area.Rectangle::display();
    
    /*
     * Print the area
     */
    rect_area.display();
    
    return 0;
}