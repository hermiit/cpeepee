// define
#include "stdafx.h"
#include <stdio.h>
#include <iostream> 
#include <math.h>
#include <string>
using namespace std;
#define pi 3.14159265358979323846

// functions
float unit(float alpha)
{
	float newuv = sin((pi / 2)*alpha);
	return newuv;
}

float hypo(float x, float y) 
{
	return sqrt(pow(x,2) + pow(y,2));
}

void div() { cout << "------------------------------" << endl; }

// classes
class vector
{
	public:
		// vars
		float x, y;

		// construct
		vector() { x = 0; y = 0; }
		vector(float x1, float y1) { x = x1; y = y1; }

		// functions
		float mag() { return hypo(x, y); }
		vector unit() 
		{
			float uvx = x / mag(); 
			float uvy = y / mag(); 
			vector uvvec(uvx,uvy);
			return uvvec; 
		}
};

// main
int main()
{
	float newx, newy;
	div();
	printf("Input a value for X.\n");
	scanf_s("%f", &newx);
	printf("Input a value for Y.\n");
	scanf_s("%f", &newy);
	vector newvec(newx, newy);
	printf("Position: (%g,%g)\n", newx, newy);
	printf("Magnitude: %g\n", newvec.mag());
	vector unitv = newvec.unit();
	printf("Unit vector: (%g,%g)\n", unitv.x, unitv.y);
	div();
	return 0;
}
