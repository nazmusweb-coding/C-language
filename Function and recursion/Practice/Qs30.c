// Write functions to calculate area of a square, a circle & a rectangle.
#include<stdio.h>
// imported for using in conditional
#include<string.h>
// imported for using square function
#include<math.h>
// function declaration(with parameter)/ prototype
void area_square(float a);
void area_circle(float r);
void area_rectangle(float l, float w);

int main() {
    char user[3];
    float a, r, l, w;
    // asking user what does he want to use actually.
    printf("Welcome to a calculator. It can area of a square, a circle & a rectangle.\nWhich one do you need? (s,c,r or all): ");
    scanf("%s", user);
    if (strcmp(user, "s")==0) {
        // funtion call with argument
        area_square(a);
    } else if (strcmp(user, "c")==0) {
        // funtion call with argument
        area_circle(r);
    } else if (strcmp(user, "r")==0) {
        // function call with argument
        area_rectangle(l, w);
    } else if (strcmp(user, "all")==0) {
        // funtion call with arguments
        area_square(a);
        area_circle(r);
        area_rectangle(l, w);
    }
}

// function definition
void area_square(float a) {
    printf("Enter the side of square: ");
    scanf("%f", &a);
    double area_square = pow(a, 2);
    printf("The area of square is: %lf\n", area_square);
}

void area_circle(float r) {
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    double area_circle = 3.1416 * pow(r, 2);
    printf("The area of circle is: %lf\n", area_circle);
}

void area_rectangle(float l, float w) {
    printf("Enter the length and width of rectangle: ");
    scanf("%f%f", &l, &w);
    double area_rectangle = l * w;
    printf("The area of rectangle is: %lf\n", area_rectangle);
}