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

                                        printf("Nome da cidade: (Não use espaço)\n");
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
                                                            

                                                            //adição da densidade populacional, pib per capta e superpoder
                                                            densidade = (float)populacao/area;   

                                                            pibcapta = (float)pibb/populacao;

                                                            float SuperPoder = populacao + area + pibb + pontosturisticos + pibcapta + (1/densidade);



                                                            printf("Densidade populacional: %.2f\n", densidade);
                                                            printf("PIB per Capita: %.2f\n", pibcapta);
                                                            printf("Super Poder: %.2f\n", SuperPoder);
                                                           

                                                        
                                                      
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

                                                            float SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibcapta2 + (1/densidade2);

                                                            printf("Densidade populacional: %.2f\n", densidade2);
                                                            printf("PIB per Capita: %.2f\n", pibcapta2);
                                                            printf("Super Poder: %.2f\n", SuperPoder2);
                                                           
           
                
        

                 //print dos resultados da comparação e adição da estrutura if else para o código ficar mais claro

                     printf("Comparação de cartas (Atributo: população):\n");
                     printf("Carta 1 - %s : %d\n", cidade, populacao);  //para printar o nome da cidade assim como no exemplo da aula
                     printf("Carta 2 - %s : %d\n", cidade2, populacao2);

                        if (populacao > populacao2){
                            printf("Resultado: Carta 1 Venceu!\n");
                        } else {
                            printf("Resultado: Carta 2 Venceu!\n");
                        } 
                          printf("Comparação de cartas (Atributo: Área em KM²):\n");
                         printf("Carta 1 - %s : %.2f\n", cidade, area);  //para printar o nome da cidade assim como no exemplo da aula
                         printf("Carta 2 - %s : %.2f\n", cidade2, area2);
                          
                             if (area > area2){
                            printf("Resultado: Carta 1 Venceu!\n");
                        } else {
                            printf("Resultado: Carta 2 Venceu!\n");
                        } 
                                 printf("Comparação de cartas (Atributo: PIB):\n");
                                 printf("Carta 1 - %s : %.2f\n", cidade, pibb);  //para printar o nome da cidade assim como no exemplo da aula
                                 printf("Carta 2 - %s : %.2f\n", cidade2, pib2);

                             if (pibb > pib2){
                            printf("Resultado: Carta 1 Venceu!\n");
                        } else {
                            printf("Resultado: Carta 2 Venceu!\n");
                        }

                           printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
                           printf("Carta 1 - %s : %d\n", cidade, pontosturisticos);  //para printar o nome da cidade assim como no exemplo da aula
                         printf("Carta 2 - %s : %d\n", cidade2, pontosturisticos2);

                             if (pontosturisticos > pontosturisticos2){
                            printf("Resultado: Carta 1 Venceu!\n");
                        } else {
                            printf("Resultado: Carta 2 Venceu!\n");
                        }
                            printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
                            printf("Carta 2 - %s : %.2f\n", cidade, densidade);  //para printar o nome da cidade assim como no exemplo da aula
                         printf("Carta 2 - %s : %.2f\n", cidade2, densidade2);

                             if (densidade < densidade2){
                            printf("Resultado: Carta 1 Venceu!\n");
                        } else {
                            printf("Resultado: Carta 2 Venceu!\n");
                        }
                             printf("Comparação de cartas (Atributo: PIB per Capta):\n");
                             printf("Carta1 - %s : %.2f\n", cidade, pibcapta);  //para printar o nome da cidade assim como no exemplo da aula
                         printf("Carta 2 - %s : %.2f\n", cidade2, pibcapta2);

                             if (pibcapta > pibcapta2){
                            printf("Resultado: Carta 1 Venceu!\n");
                        } else {
                            printf("Resultado: Carta 2 Venceu!\n");
                        }
                             printf("Comparação de cartas (Atributo: Super Poder):\n");
                             printf("Carta1 - %s : %.2f\n", cidade, SuperPoder);  //para printar o nome da cidade assim como no exemplo da aula
                         printf("Carta 2 - %s : %.2f\n", cidade2, SuperPoder2);
                             
                             
                             if (SuperPoder > SuperPoder2){
                            printf("Resultado: Carta 1 Venceu!\n");
                        } else {
                            printf("Resultado: Carta 2 Venceu!\n");
                        }
                        // terminada a adição das condicionais e a impressão de um resultado mais preciso

                        printf("Vence a carta que mais venceu as comparações\n");
                        
                                                 
                                                
                                                            
  
                                                                                                                
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            return 0;
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 

                                                    }
