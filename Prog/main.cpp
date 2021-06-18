#include<iostream>
#include<string>
#include"Cylinder.h"

using namespace std;

int main(){
	
	Cylinder cylinderOne;
	
	cout << "Input values for CylinderOne:\n";
	
	// input value for Object of Cylinder (cylinderOne)
	
	cin >> cylinderOne;// stream extraction operator
	
	// display value of Object
	
	cout << "\nValues of object cylinderOne:\n";
	cout << cylinderOne;// stream insertion operator
	Cylinder cylinderTwo(cylinderOne); // copy constructor
	
	cout << "\nValues of object cylinderTwo:\n";
	cout << cylinderTwo;
	
	// unary operation
	cout << "\nValues of object cylinderOne after pre-increment:\n";
	//++cylinderOne;
	cout << ++cylinderOne;
	
	// binary operation
	
	// display value of Object
	cout << "\nValues of object cylinderThree:\n";
	Cylinder cylinderThree;
	cylinderThree = cylinderOne + cylinderTwo;
	cout << cylinderThree;// stream insertion operator
	cout << endl;
	system("pause");
	return 0;
}
