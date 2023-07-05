#include<iostream>
#include<iomanip>

using namespace std;

struct Circle{
	float radius;
};

struct Rectangle{
	float length;
	float width;
};

struct Square{
	float length;
};

float AreaOfCircle(Circle c);
float AreaOfRectangle(Rectangle r);
float AreaOfSquare(Square s);
	

int main(void)
{
	struct Circle c;
	struct Rectangle r1,r2;
	struct Square s1;
	
	float area_circle, area_yard, area_rec, area_square, green_yard;
	
	//circle
	cout <<"Enter radius: ";
	cin>>c.radius;
	
	//small rectangle
	cout <<"Enter length small rectangle: ";
	cin>>r1.length;
	
	cout <<"Enter width small rectangle: ";
	cin>>r1.width;
	
	//yard
	cout <<"Enter length yard: ";
	cin>>r2.length;
	
	cout <<"Enter width yard: ";
	cin>>r2.width;
	
	//square
	cout <<"Enter length square: ";
	cin>>s1.length;
	
	area_circle =AreaOfCircle(c);
	area_yard=AreaOfRectangle(r2);
	area_rec =AreaOfRectangle(r1);
	area_square=AreaOfSquare(s1);
	
	green_yard = area_yard - (area_circle + area_rec + area_square);
	
	cout <<"Area of green yard :" <<setiosflags(ios::fixed)<<setprecision(3)<<green_yard<<endl;
}

float AreaOfCircle(Circle c){
	return (22.0/7) * c.radius * c.radius;
}

float AreaOfRectangle(Rectangle r){
	return r.length * r.width;
}

float AreaOfSquare(Square s){
	return s.length *s.length;
}
