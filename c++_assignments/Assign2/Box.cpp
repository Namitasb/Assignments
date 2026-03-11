#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    // Parameterized constructor (initialization)
    Box(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Function to assign new values
    void setDimensions(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Function to compute volume
    int volume() {
        return length * width * height;
    }
};

int main() {

    // Initialization using constructor
    Box b1(2, 3, 4);
    cout << "Volume after initialization: " << b1.volume() << endl;

    // Assignment using setDimensions()
    b1.setDimensions(5, 6, 7);
    cout << "Volume after assignment: " << b1.volume() << endl;

    return 0;
}

/*

Q1.2 Answers


1️ Why must initialization happen before assignment?

Initialization must happen before assignment because an object must first be created and given initial values before we can modify those values.

Initialization → happens when the object is created (constructor runs).

Assignment → changes values after the object already exists.

Without initialization, the variables may contain garbage values.

Example flow:

Object created → Constructor initializes values → Later we can assign new values.



2. When is initialization preferred over assignment?

Initialization is preferred when:

Creating objects for the first time

Using constructors

Working with constant or reference members

Ensuring objects start with valid values

Better performance (direct initialization instead of creating then assigning)

Example:

Box b1(2,3,4);  // Initialization (preferred)

Instead of:

Box b1;
b1.setDimensions(2,3,4);  // Assignment later

Initialization ensures the object starts in a valid state immediately.
*/