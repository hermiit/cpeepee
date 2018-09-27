#pragma once
// define
#include "stdafx.h"
#include <stdio.h>
#include <iostream> 
#include <math.h>
#include <string>
#include "woah.h"
using namespace std;

#define pi 3.14159265358979323846

// classes
class vector2
{
public:
	// vars
	float x, y;

	// construct
	vector2() { x = 0; y = 0; }
	vector2(float x1, float y1) { x = x1; y = y1; }

	// functions
	float mag() { return hypo(x, y); }
	vector2 unit()
	{
		float uvx = x / mag();
		float uvy = y / mag();
		return vector2(uvx,uvy);
	}
	vector2 scal(float alpha)
	{
		return vector2(x*alpha, y*alpha);
	}
};