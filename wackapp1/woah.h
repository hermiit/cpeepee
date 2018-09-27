#pragma once
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
	return sqrt(pow(x, 2) + pow(y, 2));
}

void div() { cout << "------------------------------" << endl; }