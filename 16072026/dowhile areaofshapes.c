#include <stdio.h>

int main() {
int choice;
float side, radius, base, height, length, breadth;
float area;
do{
printf("\n1. Area of a Square\n");
printf("2. Area of a Circle\n");
printf("3. Area of a Triangle\n");
printf("4. Area of a Rectangle\n");
printf("Choose the number: ");
scanf("%d", &choice);



    switch (choice) {
    case 1:
        printf("Enter side of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of Square = %.2f", area);
        break;

    case 2:
        printf("Enter radius of the circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of Circle = %.2f", area);
        break;

    case 3:
        printf("Enter base of the triangle: ");
        scanf("%f", &base);
        printf("Enter height of the triangle: ");
        scanf("%f", &height);
        area = 0.5 * base * height;
        printf("Area of Triangle = %.2f", area);
        break;

    case 4:
        printf("Enter length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter breadth of the rectangle: ");
        scanf("%f", &breadth);
        area = length * breadth;
        printf("Area of Rectangle = %.2f", area);
        break;

    case 5:
        printf("varan da chinasami");
        break;


}}
    while (choice!=5);

    return 0;
}
