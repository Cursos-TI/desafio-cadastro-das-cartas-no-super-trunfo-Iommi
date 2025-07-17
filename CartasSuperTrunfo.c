#include <stdio.h>


int main() {
    //variáveis carta 1

        int populacao;
        int pontosturisticos;
            char cidade [70], code [3];
            char estado [10];
                float pibb, area, densidade, pibcapta;
                
            

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
                                                            scanf("%f", &pibb);

                                                            printf("Pontos Turísticos: \n");
                                                            scanf("%d", &pontosturisticos);


                                                            //Impressão da carta

                                                            printf("Carta 1: \n");
                                                            printf("Estado: %s\n", estado);
                                                            printf("Código da carta: %s\n", code);
                                                            printf("Nome da cidade: %s\n", cidade);
                                                            printf("População: %d\n", populacao);
                                                            printf("Área em KM²: %.2f\n", area);
                                                            printf("PIB: %.2f\n", pibb);
                                                            printf("Pontos Turísticos: %d\n", pontosturisticos);

                                                            //adição da densidade populacional  e pib per capta
                                                            densidade = (float)populacao/area;   

                                                            pibcapta = (float)pibb/populacao;

                                                            printf("Densidade populacional: %.2f\n", densidade);
                                                            printf("PIB per Capita: %.2f\n", pibcapta);
                                                           

                                                        
                                                      
           //variáveis carta 2
            int populacao2;
            int pontosturisticos2;
            char cidade2 [70], code2 [3];
            char estado2 [10];
                float pib2, area2, pibcapta2, densidade2;
                 //Adição do Super Poder
        

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
                                                            printf("Área em KM²: %.2f\n", area2);
                                                            printf("PIB: %.2f\n", pib2);
                                                            printf("Pontos Turísticos: %d\n", pontosturisticos2);


                                                            //adição da densidade populacional  e pib per capta
                                                            densidade2 = (float)populacao2/area2;   

                                                            pibcapta2 = (float)pib2/populacao2;

                                                            printf("Densidade populacional: %.2f\n", densidade2);
                                                            printf("PIB per Capita: %.2f\n", pibcapta2);
                                                           
            float SuperPoder = populacao + area + pibb + pontosturisticos + pibcapta + (1/densidade);
                 float SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibcapta2 + (1/densidade2);
        

                 //print dos resultados da comparação

                     printf("Comparação de cartas:\n");
                         printf("População:%d\n", populacao > populacao2);
                             printf("Área:%d\n", area > area2);
                                 printf("PIB:%d\n", pibb > pib2);
                                     printf("Pontos turísticos:%d\n", pontosturisticos > pontosturisticos2);
                                        printf("Densidade Populacional:%d\n", densidade < densidade2);
                                            printf("PIB per Capta:%d\n", pibcapta > pibcapta2);
                                                 printf("Super Poder:%d\n", SuperPoder > SuperPoder2);
                                                    printf("Carta 1 vence a comparação com resultado: 1");
                                                    printf("Carta 2 vence a comparação com resultado: 0");
                                                 
                                                
                                                            
  
                                                                                                                
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            return 0;
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 

                                                    }
