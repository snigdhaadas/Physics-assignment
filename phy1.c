#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
    int m;
    float theta_deg, d_um, lambda;
    printf("Enter order(m): ");
    scanf("%d",&m);
    printf("Enter angle theta in degrees: ");
    scanf("%f",&theta_deg);
    printf("Enter slit separation d in micrometers: ");
    scanf("%f",&d_um);
    float theta_rad = theta_deg * PI/180.0;
    float d_nm = d_um * 1000.0;
    lambda = (d_nm * sin(theta_rad)) / m;
    printf("The numeric value of the wavelength = %.2f nm\n",lambda);
    if (lambda >= 380 && lambda <= 450){
        printf("The color of the light: Violet\n");
    }
    else if (lambda > 450 && lambda <= 485){
        printf("The color of the light : Blue\n");
    }
    else if (lambda > 485 && lambda <= 500){
        printf("The color of the light: Cyan\n");
    }
    else if (lambda > 500 && lambda <= 565){
        printf("The color of the light: Green\n");
    }
    else if (lambda > 565 && lambda <= 590){
        printf("The color of the light: Yellow\n");
    }
    else if (lambda > 590 && lambda <= 625){
        printf("The color of the light: Orange\n");
    }
    else if (lambda > 625 && lambda <= 750){
        printf("The color of the light: Red\n");
    }
    else {
        printf("Out of visible color range\n");
    }
    return 0;
    }
