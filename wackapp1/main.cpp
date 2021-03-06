// define
#include "stdafx.h"
#include <stdio.h>
#include <iostream> 
#include <math.h>
#include <string>
#include "vector2.h"
#include "vector3.h"
#include "woah.h"
using namespace std;
#define pi 3.14159265358979323846

// functions
void startinp();

void inputV3();

void inputV2();

// main
int main()
{
	startinp();
	return 0;
}

void startinp()
{
	div();
	printf("Vector3 or Vector2? (0/1)\n");
	char ans;
	scanf_s("%s", &ans);
	if (ans == '0')
	{
		inputV3();
	}
	else if (ans == '1')
	{ 
		inputV2(); 
	}
	else
	{
		printf("aw no\n");
	}
}

void inputV2()
{
	float newx, newy;
	div();
	// input
	printf("Input a value for X.\n");
	scanf_s("%f", &newx);
	printf("Input a value for Y.\n");
	scanf_s("%f", &newy);

	// output
	vector2 newvec(newx, newy);
	printf("Position: (%g,%g)\n", newx, newy);
	printf("Magnitude: %g\n", newvec.mag());
	vector2 unitv = newvec.unit();
	printf("Unit vector: (%g,%g)\n", unitv.x, unitv.y);

	// check if we want to restart
	div();
	printf("Continue calculating? (Y/N)\n");
	char ans;
	scanf_s("%s", &ans);
	if (ans == 'Y' || ans == 'y')
	{
		startinp();
	}
	else {
		printf("aw no");
	}
}

void inputV3()
{
	float newx, newy, newz;
	div();
	// input
	printf("Input a value for X.\n");
	scanf_s("%f", &newx);
	printf("Input a value for Y.\n");
	scanf_s("%f", &newy);
	printf("Input a value for Z.\n");
	scanf_s("%f", &newz);

	// output
	vector3 newvec(newx, newy, newz);
	printf("Position: (%g,%g,%g)\n", newx, newy, newz);
	printf("Magnitude: %g\n", newvec.mag());
	vector3 unitv = newvec.unit();
	printf("Unit vector: (%g,%g,%g)\n", unitv.x, unitv.y, unitv.z);

	// check if we want to restart
	div();
	printf("Continue calculating? (Y/N)\n");
	char ans;
	scanf_s("%s", &ans);
	if (ans == 'Y' || ans == 'y')
	{
		startinp();
	}
	else {
		printf("aw no");
	}
}