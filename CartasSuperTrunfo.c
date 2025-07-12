#include <stdio.h>


int main() {
    //variáveis carta 1
        int populacao, pontosturisticos;
            char cidade [70], code [3];
            char estado [10];
                float pib, area;

                    //cadastramento da carta 1

                        printf("Digite uma letra entre A e H para um estado: \n");
                            scanf("%s", estado);

                                printf("Código da carta: \n");
                                    scanf("%s", code);

                                        printf("Nome da cidade: \n");
                                            scanf("%s", cidade);

                                                printf("População: \n");
                                                    scanf("%d", &populacao);

                                                        printf("Área em KM²: \n");
                                                            scanf("%f", &area);

                                                            printf("Carta1: \n");
                                                            printf("Estado: %s\n", estado);
                                                            printf("Código da carta: %s\n", code);
                                                            printf("Nome da cidade: %s\n", cidade);
                                                            printf("População: %d\n", populacao);
                                                            printf("Área em KM²: %f\n", area);

                                                        

                                        


    return 0;
}
