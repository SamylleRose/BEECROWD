#include <stdio.h>

int main(){

    double triangle_area, criecle_area, trapezio_area, square_area, rectangle_area, A, B, C; 

    scanf("%lf%lf%lf", &A, &B, &C);

    triangle_area = A * C / 2;
    criecle_area = 3.14159 * (C * C);
    trapezio_area = (A + B) * C / 2;
    square_area = B * B;
    rectangle_area = A * B;

    printf("TRIANGULO: %.3lf\n", triangle_area);
    printf("CIRCULO: %.3lf\n", criecle_area);
    printf("TRAPEZIO: %.3lf\n", trapezio_area);
    printf("QUADRADO: %.3lf\n", square_area);
    printf("RETANGULO: %.3lf\n", rectangle_area);
    
    return 0;

}