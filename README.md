# ClassC
A very simple OOP wrapper in plain C using structs and function pointers. For demonstration purposes, a 2D vector implementation is included.

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
```
