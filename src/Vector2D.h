/*
 * Vector2D.h
 *
 * A demonstration of ClassC's OOP
 * functionality.
 */

#define CLASS_NAME ClassVector2D
#define OBJ_NAME Vector2D

#include <math.h>
#include <stdio.h>
#include "ClassC.h"

class {
	int x;
	int y;

	declMethod(void, add, Vector2D other);
	declMethod(void, sub, Vector2D other);
	declMethod(void, printThis);
	declMethod(double, length);
};

implMethod(void, add, Vector2D other) {
	this->x += other->x;
	this->y += other->y;
}

implMethod(void, sub, Vector2D other) {
	this->x -= other->x;
	this->y -= other->y;
}

implMethod(void, printThis) {
	printf("[Vector] (%d", this->x);
	printf(", %d) ", this->y);
	printf("with length %f\n", this->length(this));
}

implMethod(double, length) {
	return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

constructor(newVector) {
	linkThis;

	linkMethod(add);
	linkMethod(sub);
	linkMethod(printThis);
	linkMethod(length);

	return this;
}

destructor(deleteVector) {
	cleanup;
}
