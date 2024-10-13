#include <stdio.h>
#include "calculator.h"

int main() {
    double x = 5, y = 3;
    Calculator calculator;
    printf("Add: %d\n", calculator.Add(x, y));
    printf("Sub: %d\n", calculator.Sub(x, y));
    return 0;
}