int main(){
    setlocale(LC_ALL, "portuguese");

    float a, b, c; // Lados

    printf("Entre com o angulo A: ");
    scanf("%f", &a);

    printf("Entre com o angulo B: ");
    scanf("%f", &b);

    printf("Entre com o angulo C: ");
    scanf("%f", &c);

    if (a + b >= c && a + c >= b && b + c >= a){

        if (a < 90 && b < 90 && c < 90)  printf("Triângulo acutangulo");

        else if (a > 90 || b > 90 || c > 90) printf("Triângulo obtusangulo");

        else if (a == 90 || b == 90 || c == 90) printf("Triângulo retangulo");

    } else printf("\nNão é possível formar um triângulo.\n");


    return 0;
}