// define
#include "stdafx.h"
#include <stdio.h>
#include <iostream> 
#include <math.h>
#include <string>
#include "vector.h"
#include "woah.h"
using namespace std;
#define pi 3.14159265358979323846

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
