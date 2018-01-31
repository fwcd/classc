# ClassC
A very basic OOP wrapper for plain C using structs and function pointers. For demonstration purposes, a 2D vector implementation is included.

Please note that this project only serves as a learning exercise and thus is not suited for production usage.

Example of usage:

```C
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
```
