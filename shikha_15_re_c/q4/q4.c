
include <stdio.h>
typedef unsigned long long ull;


enum Fruit {
    APPLE,
    BANANA,
    ORANGE
};

#define SQUARE(x) ((x) * (x))

#ifdef DEBUG
#define DEBUG_MSG(msg) printf("Debug: %s\n", msg)
#else
#define DEBUG_MSG(msg)
#endif

int main() {
    ull myVar = 1234567890;

    enum Fruit myFruit = APPLE;

    int num = 5;
    int square = SQUARE(num);

    printf("myVar = %llu\n", myVar);
    printf("myFruit = %d\n", myFruit);
    printf("square = %d\n", square);

    DEBUG_MSG("This is a debugging message");

    return 0;
}




