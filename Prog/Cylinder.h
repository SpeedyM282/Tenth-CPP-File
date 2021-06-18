#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder{
	private:
		double radius, height;
	public:
		Cylinder(){
			radius = 0.0;
			height = 0.0;
		}
		Cylinder(Cylinder &g){
			setHeight(g.height);
			setRadius(g.radius);
		}
		void setHeight(double height){
			this->height = height;
		}
		double getHeight() const{
			return height;
		}
		void setRadius(double radius){
			this->radius = radius;
		}
		double getRadius() const{
			return radius;
		}
		Cylinder operator + (Cylinder i){
			Cylinder ink;
			ink.height = height + i.height;
			ink.radius = radius + i.radius;
			return (ink);
		}
		Cylinder operator ++ (){
			Cylinder nik;
			++nik.height = ++height;
			++nik.radius = ++radius;
			return (nik);
		}
		friend ostream &operator << (ostream &, const Cylinder &);
		friend istream &operator >> (istream &, Cylinder &);		
		~Cylinder(){}
};

ostream &operator << (ostream &output, const Cylinder &mini){
	output << "Height: " << mini.getHeight() << "\n";
	output << "Radius: " << mini.getRadius() << "\n";
	return output;
}
istream &operator >> (istream &input, Cylinder &mini){
	
	input >> mini.height;
	input >> mini.radius;
	return input;
}

#endif




