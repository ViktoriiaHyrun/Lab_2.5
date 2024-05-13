#include <stdio.h>
#include <math.h>

int main() {
    double x, y, a;
    printf("Please enter value for x: ");
    scanf("%lf", &x);
    printf("Please enter value for y: ");
    scanf("%lf", &y);

    a = pow(2, -x) * sqrt(pow(x, -4) + sqrt(fabs(y)));

    printf("Result is a: %lf\n", a);

    return 0;
}
