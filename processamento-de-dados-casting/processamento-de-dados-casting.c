#include <stdio.h>

int main ()
{

    int x1, y1;
    x1 = 5;
    y1 = 2 * x1;
    printf("%d\n", x1);
    printf("%d\n", y1);

    printf("\n");

    int x2;
    double y2;
    x2 = 5;
    y2 = 2 * x2;
    printf("%d\n", x2);
    printf("%.1lf\n", y2);

    printf("\n");

    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);

    printf("\n");

    int a3, b3, resultado;
    a3 = 5;
    b3 = 2;
    resultado = a3 / b3;
    printf("%d\n", resultado);

    printf("\n");

    double a4;
    int b4;
    a4 = 5.0;
    b4 = (int) a4;
    printf("%d\n", b4);

    printf("\n");

    int a5, b5;
    double resultado5;
    a5 = 5;
    b5 = 2;
    resultado5 = (double) a5 / b5;
    printf("%lf\n", resultado5);

    return 0;

}
