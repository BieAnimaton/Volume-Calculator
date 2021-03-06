#include <stdio.h>
#include <math.h>

int valor;
float volume, pi = 3.1415, raio, comprimento, altura, largura, areaBase;

int main()
{
    printf("##################################################################\n");
    printf("Bem vindo(a), este programa � destinado ao C�lculo de Volumes\n");
    printf("Escolha uma das op��es abaixo:\n\n");
    printf("Digite 0 para Sair do Programa\n");
    printf("Digite 1 para calcular o Volume do Cubo\n");
    printf("Digite 2 para calcular o Volume da Pir�mide\n");
    printf("Digite 3 para calcular o Volume do Cilindro\n");
    printf("Digite 4 para calcular o Volume do Cone\n");
    printf("Digite 5 para calcular o Volume da Esfera\n\n");

    printf("Op��o: ");
    scanf("%d", &valor);

    if (valor == 0) {
        printf("Saindo do Programa 0");
        exit(0);
    } else if (valor == 1) {
        volumeCubo();
    } else if (valor == 2) {
        volumePiramide();
    } else if (valor == 3) {
        volumeCilindro();
    } else if (valor == 4) {
        volumeCone();
    } else if (valor == 5) {
        volumeEsfera();
    } else {
        printf("N�o estendemos o comando");
        main();
    }


    return 0;
}

int volumeCubo() {
    printf("Digite o valor do Comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite o valor da Altura: ");
    scanf("%f", &altura);

    printf("Digite o valor da Largura: ");
    scanf("%f", &largura);

    volume = comprimento * altura * largura;

    printf("O Volume do Cubo � %.2f\n\n", volume);
    main();

    return 0;
}

int volumePiramide() {
    printf("Digite A �rea da Base: ");
    scanf("%f", &areaBase);

    printf("Digite a Altura: ");
    scanf("%f", &altura);

    volume = areaBase * altura / 3;

    printf("O Volume da Pir�mide � %.2f\n\n", volume);
    main();

    return 0;
}

int volumeCilindro() {
    printf("Digite o Raio: ");
    scanf("%f", &raio);

    printf("Digite a Altura: ");
    scanf("%f", &altura);

    volume = pi*pow(raio, 2)*altura;

    printf("O Volume do Cilindro � %.2f\n\n", volume);
    main();

    return 0;
}

int volumeCone() {
    printf("Digite o valor do Raio: ");
    scanf("%f", &raio);

    printf("Digite o valor da Altura: ");
    scanf("%f", &altura);

    volume = (pi*pow(raio, 2)*altura)/3;

    printf("O Volume do Cone � %.2f\n", volume);
    main();

    return 0;
}

int volumeEsfera() {
    printf("Digite o valor do Raio");
    scanf("%f", &raio);

    volume = (4*pi*pow(raio, 3))/3;

    printf("O Volume da Esfera � %.2f\n", volume);
    main();

    return 0;
}
