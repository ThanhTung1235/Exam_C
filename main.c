#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

double perimeter(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return p;
}

double area(double a, double b, double c) {
    double p = perimeter(a, b, c);
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


int main() {
    double a, b, c;
    printf("Pleas enter your number 1:\n");
    scanf("%lf",&a);
    printf("Pleas enter your number 2:\n");
    scanf("%lf",&b);
    printf("Pleas enter your number 3:\n");
    scanf("%lf",&c);
    double result = area(a, b, c);
    printf("%lf",result);

}