#include <stdio.h>


int main() {
    //variáveis carta 1 e 2
        int populacao, pontosturisticos;
            char cidade [70], code [3];
            char estado [1];
                float pib, area;

                    //cadastramento da carta 1

                        printf("Digite uma letra entre A e H para um estado: \n");
                            scanf("%c", estado);

                                printf("Código da carta: \n");
                                    scanf("%s", code);

                                        printf("Nome da cidade: \n");
                                            scanf("%50s", cidade);

                                                printf("População: \n");
                                                    scanf("%d", &populacao);

                                                        printf("Área em KM²: \n");
                                                            scanf("%f", &area);
    


    return 0;
}
