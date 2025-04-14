#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    struct Point {
        double x;
        double y;
    };
    
    Point A = {0, 0};
    Point B = {1, 1};
    Point C = {2, 3};
    
    double a = std::sqrt((B.x - C.x) * (B.x - C.x) + (B.y - C.y) * (B.y - C.y));
    double b = std::sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));
    double c = std::sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        double s = (a + b + c) / 2;
        double area = std::sqrt(s + (s - a) * (s - b) * (s - c));
        printf("Площадь треугольника: %.2f\n", area);
    }
    else {
        printf("Точки не образуют треугольник .\n");
    }
    return 0;
}



