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


// Main
class vector3
{
	public:
		// construct
		float x, y, z;
		vector3() { x = 0; y = 0; z = 0; }
		vector3(float x1, float y1, float z1) { x = x1; y = y1; z = z1; }

		// functions
		float mag() { return hypo3(x, y, z); }
		vector3 unit()
		{
			float uvx = x / mag();
			float uvy = y / mag();
			float uvz = z / mag();
			return vector3(uvx, uvy, uvz);
		}
		vector3 scal(float alpha)
		{
			return vector3(x*alpha, y*alpha, z*alpha);
		}
};