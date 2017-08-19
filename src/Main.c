#include "Vector2D.h"

int main() {
	Vector2D test = newVector();
	test->x = 2;
	test->y = 3;

	Vector2D other = newVector();
	other->x = 4;
	other->y = 1;

	test->add(test, other);
	test->printThis(test);

	deleteVector(test);
	deleteVector(other);

	return 0;
}
