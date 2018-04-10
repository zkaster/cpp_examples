// Example how to count amount of objects using static variable

#include "stdafx.h"
#include <iostream>

using namespace std;

class Box {
public:
	static int objectCount;// we use static variable to count number of objects

	// Constructor definition
	Box(double l = 2.0, double b = 2.0, double h = 2.0) {
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;

		// Increase every time object is created
		objectCount++;
	}
	Box(int i) {
		cout << "Constructor called without count." << endl;
		length = i;
		breadth = i;
		height = i;

		// Increase every time object is created
		//objectCount++;
	}
	double Volume() {
		return length * breadth * height;
	}

private:
	double length;     // Length of a box
	double breadth;    // Breadth of a box
	double height;     // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) {
	Box Box1(3.3, 1.2, 1.5);    // Declare box1
	Box Box2(8.5, 6.0, 2.0);    // Declare box2
	Box Box3(2);
		 
								// Print total number of objects.
	cout << "Total objects: " << Box::objectCount << endl;
	getchar();
	
	return 0;
}
