#include <iostream>
#include <math.h>
#include "Matrix.h"
#include <cassert>

int main()
{
	Vector2D A = Vector2D(2, 1);
	Vector2D B = Vector2D(1, 2);
	Vector2D C = A + B;
	assert(A + B == Vector2D(3,3));
	assert(B - A == Vector2D(1, -1));
	assert(A * B == Vector2D(2, 2));
};