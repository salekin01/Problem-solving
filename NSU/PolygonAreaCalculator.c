
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double area(int n, double side){
    return (n * side * side) / (4 * tan(M_PI/n));
}

void mainPolygonAreaCalculator(){
    int n;
    double side;
    double result;

    printf("Enter the number of sides: ");
    scanf("%d",&n);
    printf("Enter the side: ");
    scanf("%lf",&side);

    result = area(n,side);
    printf("The area of the polygon is %lf", result);
}






