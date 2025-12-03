#include <stdio.h>
#include <math.h>
int main () {
    double λ, θ, d;
    scanf("%lf %lf %lf", &λ, &θ, &d);
    if (λ < 380 || λ > 750) {
        printf ("Out of the range. Please enter a valid number.\n");
    }
    else {
        /*
        We know, dsinθ = mλ
        So, m = dsinθ / λ
        Converting d from µm to nm: m = (d * 1000 * sinθ) / λ
        Now, θ must be converted from degrees to radians for sin().
        */
        double angle = θ * (3.1416 / 180);
        int m = (int)((d * 1000 * sin(angle)) / λ);
        printf ("m-th order maxima: %d\n", m); 
    }

    return 0;
}