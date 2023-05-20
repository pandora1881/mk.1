#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double calculateTriangleArea(Point A, Point B, Point C) {
    double a = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
    double b = sqrt(pow(C.x - B.x, 2) + pow(C.y - B.y, 2));
    double c = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
    
    double s = (a + b + c) / 2; // півпериметр
    
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    Point A1 = {1, 2};
    Point B1 = {3, 4};
    Point C1 = {5, 6};
    
    Point A2 = {2, 3};
    Point B2 = {4, 5};
    Point C2 = {6, 7};
    
    double area1 = calculateTriangleArea(A1, B1, C1);
    double area2 = calculateTriangleArea(A2, B2, C2);
    
    if (area1 > area2) {
        printf("Перший трикутник має більшу площу.\n");
    } else if (area2 > area1) {
        printf("Другий трикутник має більшу площу.\n");
    } else {
        printf("Обидва трикутники мають однакову площу.\n");
    }
    
    return 0;
}
