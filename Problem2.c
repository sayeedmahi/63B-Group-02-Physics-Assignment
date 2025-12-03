#include <stdio.h>
#include <math.h>

int main() {
    double θ = 45;
    /*
    We know, asinθ = mλ
    So, the ratio of a to λ is = (m / sinθ)
    For first minimum, m = 1.
    Now, θ must be converted from degrees to radians for sin().
    */
    double angle = θ * (3.1416/180);
    double ratio = 1 / sin(angle);
    printf("For θ = 45 degrees, the slit width to wavelength ratio (a/λ) = %.4f\n", ratio);

    return 0;
}
