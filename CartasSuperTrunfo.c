#include <stdio.h>


int main() {
    //variáveis carta 1

        int populacao;
        int pontosturisticos;
            char cidade [70], code [3];
            char estado [10];
                float pib, area, densidade, pibcapta;
                
            

                    //cadastramento da carta 1

                        printf("Digite uma letra entre A e H para um estado: \n");
                            scanf("%s", estado);

                                printf("Código: \n");
                                    scanf("%s", code);

                                        printf("Nome da cidade: \n");
                                            scanf("%s", cidade);

                                                printf("População: \n");
                                                    scanf("%d", &populacao);

                                                        printf("Área em KM²: \n");
                                                            scanf("%f", &area);

                                                            printf("PIB: \n");
                                                            scanf("%f", &pib);

                                                            printf("Pontos Turísticos: \n");
                                                            scanf("%i", &pontosturisticos);


                                                            //Impressão da carta

                                                            printf("Carta 1: \n");
                                                            printf("Estado: %s\n", estado);
                                                            printf("Código da carta: %s\n", code);
                                                            printf("Nome da cidade: %s\n", cidade);
                                                            printf("População: %d\n", populacao);
                                                            printf("Área em KM²: %.2f\n", area);
                                                            printf("PIB: %.2f\n", pib);
                                                            printf("Pontos Turísticos: %d\n", pontosturisticos);

                                                            //adição da densidade populacional  e pib per capta
                                                            densidade = (float)populacao/area;   

                                                            pibcapta = (float)pib/populacao;

                                                            printf("Densidade populacional: %.2f\n", densidade);
                                                            printf("PIB per Capita: %.2f\n", pibcapta);
                                                        
           
                                                            

            int populacao2;
            int pontosturisticos2;
            char cidade2 [70], code2 [3];
            char estado2 [10];
                float pib2, area2;

                    //cadastramento da carta 2

                        printf("Digite uma letra entre A e H para um estado: \n");
                            scanf("%s", estado2);

                                printf("Código: \n");
                                    scanf("%s", code2);

                                        printf("Nome da cidade: \n");
                                            scanf("%s", cidade2);

                                                printf("População: \n");
                                                    scanf("%d", &populacao2);

                                                        printf("Área em KM²: \n");
                                                            scanf("%f", &area2);

                                                             printf("PIB: \n");
                                                            scanf("%f", &pib2);

                                                            printf("Pontos Turísticos: \n");
                                                            scanf("%d", &pontosturisticos2);


                                                            printf("Carta 2: \n");
                                                            printf("Estado: %s\n", estado2);
                                                            printf("Código: %s\n", code2);
                                                            printf("Nome da cidade: %s\n", cidade2);
                                                            printf("População: %d\n", populacao2);
                                                            printf("Área em KM²: %f\n", area2);
                                                            printf("PIB: %f\n", pib2);
                                                            printf("Pontos Turísticos: %d\n", pontosturisticos2);
                                                            


                                                            
  
                                        return 0;

                                                    }
