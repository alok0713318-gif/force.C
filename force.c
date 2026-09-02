#include <stdio.h>
int main() {
    float m, a, force;
    printf("Mass dalo: ");
    scanf("%f", &m);
    printf("Acceleration dalo: ");
    scanf("%f", &a);
    force = m * a;
    printf("Force = %f", force);
    return 0;
}
