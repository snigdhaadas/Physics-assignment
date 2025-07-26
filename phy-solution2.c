#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
    int m1, m2;
    float lambda1, lambda2, theta1_deg, theta1_rad, theta2_rad, theta2_deg;
    printf("Enter m1 (order for known light): ");
    scanf("%d", &m1);
    printf("Enter lambda1 (wavelength for known light in nm): ");
    scanf("%f", &lambda1);
    printf("Enter theta1 (angle for known light in degrees): ");
    scanf("%f", &theta1_deg);
    printf("Enter m2 (order for unknown light): ");
    scanf("%d", &m2);
    printf("Enter lambda2 (wavelength for unknown light in nm): ");
    scanf("%f", &lambda2);
    theta1_rad = theta1_deg * PI / 180.0;
    float sin_theta2 = (m2 * lambda2 * sin(theta1_rad)) / (m1 * lambda1);
    if (sin_theta2 > 1.0) {
        printf("No diffraction angle possible. sin(theta2) > 1.\n");
    }
    else {
        theta2_rad = asin(sin_theta2);
        theta2_deg = theta2_rad * 180.0 / PI;
        printf("Second angle (theta2) = %.2f degrees\n", theta2_deg);
    }
    return 0;
}

