#include <stdio.h>


int main() {
    //variáveis carta 1

        int populacao;
        int pontosturisticos, opcao;
            char cidade [70], code [3];
            char estado [10];
                float pibb, area, densidade, pibcapta;

                //adição de um menu interativo ao início do jogo

                printf("Menu Principal\n");
                printf("1. Iniciar Jogo\n");
                printf("2. Ver Regras\n");
                printf("3. Sair do jogo\n");
                printf("Escolha uma opção: \n");
                scanf("%d", &opcao);

                switch (opcao){
                    case 1:
                    printf("Iniciando o jogo...\n");
                    printf("\n");
                    break;

                    case 2:
                    printf("Regra 1: Não use espaços para digitar o nome da cidade.\n");
                    printf("Regra 2: Em densidade populacional vence a carta com menor valor.\n");
                    printf("\n");
                    break;

                    case 3: (opcao == 3);
                    printf("Saindo do programa...\n");
                    return 0; //usando essa função para encerrar o programa
                    break; 

                    

                    default: 
                    printf("Opção inválida, iniciando jogo automaticamente...");
                    printf("\n");
                    break;
                
                }
                
            

                    //cadastramento da carta 1

                        printf("Digite uma letra entre A e H para um estado: \n");
                            scanf("%s", estado);

                                printf("Código: \n");
                                    scanf("%s", code);

                                        printf("Nome da cidade:\n");
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

                                                            //Novo modelo de comparação de cartas utilizado switch e estrutras encadeadas/aninhadas + adição de outro menu interativo

                                                            int comparacao;

                                                            printf("*** Comparação de cartas ***\n");
                                                            
                                                            printf("1. Comparar População\n");
                                                            printf("2. Comparar Área\n");
                                                            printf("3. Comparar PIB\n");
                                                            printf("4. Comparar Número de pontos turísticos\n");
                                                            printf("5. Comparar Densidade populacional\n");
                                                            printf("Escolha uma opção:\n");
                                                            scanf("%d", &comparacao);

                                                            switch (comparacao){
                                                                case 1: 
                                                                printf("Nome da cidade carta 1: %s\n", cidade);
                                                                printf("Nome da cidade carta 2: %s\n", cidade2);
                                                                printf("Atributo comparado: População\n");
                                                                printf("População da carta 1: %d\n", populacao);
                                                                printf("População da carta 2: %d\n", populacao2);
                                                                if (populacao > populacao2) {
                                                                    printf("Carta 1 Venceu!\n");
                                                                }else if (populacao2 > populacao) {
                                                                    printf("Carta 2 Venceu!\n");
                                                                }else {
                                                                    printf("Empate!\n");
                                                                    
                                                                }
                                                                break;

                                                            
                                                                case 2: 
                                                                printf("Nome da cidade carta 1: %s\n", cidade);
                                                                printf("Nome da cidade carta 2: %s\n", cidade2);
                                                                printf("Atributo comparado: Área em KM²\n");
                                                                printf("Área em KM² da carta 1: %.2f\n", area);
                                                                printf("Área em KM² da carta 2: %.2f\n", area);
                                                                if (area > area2) {
                                                                    printf("Carta 1 Venceu!\n");
                                                                }else if (area < area2) {
                                                                    printf("Carta 2 Venceu!\n");
                                                                }else {
                                                                    printf("Empate!\n");
                                                                    
                                                                }
                                                                break;

                                                                case 3: 
                                                               printf("Nome da cidade carta 1: %s\n", cidade);
                                                                printf("Nome da cidade carta 2: %s\n", cidade2);
                                                                printf("Atributo comparado: PIB\n");
                                                                printf("PIB da carta 1: %.2f\n", pibb);
                                                                printf("PIB da carta 2: %.2f\n", pib2);
                                                                if (pibb > pib2) {
                                                                    printf("Carta 1 Venceu!\n");
                                                                }else if (pibb < pib2) {
                                                                    printf("Carta 2 Venceu!\n");
                                                                }else {
                                                                    printf("Empate!\n");
                                                                    
                                                                }
                                                                break;

                                                                case 4: 
                                                                printf("Nome da cidade carta 1: %s\n", cidade);
                                                                printf("Nome da cidade carta 2: %s\n", cidade2);
                                                                printf("Atributo comparado: Pontos turísticos\n");
                                                                printf("Número de pontos turísticos da carta 1: %d\n", pontosturisticos);
                                                                printf("Número de pontos turísticos da carta 2: %d\n", pontosturisticos2);
                                                                if (pontosturisticos > pontosturisticos2) {
                                                                    printf("Carta 1 Venceu!\n");
                                                                }else if (pontosturisticos < pontosturisticos2) {
                                                                    printf("Carta 2 Venceu!\n");
                                                                }else {
                                                                    printf("Empate!\n");
                                                                    
                                                                }
                                                                break;

                                                                case 5: 
                                                                printf("Nome da cidade carta 1: %s\n", cidade);
                                                                printf("Nome da cidade carta 2: %s\n", cidade2);
                                                                printf("Atributo comparado: Densidade Populacional\n");
                                                                printf("PIB da carta 1: %.2f\n", densidade);
                                                                printf("PIB da carta 2: %.2f\n", densidade2);
                                                                if (densidade > densidade2) {
                                                                    printf("Carta 1 Venceu!\n");
                                                                }else if (densidade < densidade2) {
                                                                    printf("Carta 2 Venceu!\n");
                                                                }else {
                                                                    printf("Empate!\n");
                                                                    
                                                                } 
                                                                break;

                                                                default:
                                                                printf("Opção inválida! Insira um número de 1 a 5.\n");
                                                                break;
                                                                }
                                                                


                                                                



                                                           
           
                
        

                        
                        
                                                 
                                                
                                                            
  
                                                                                                                
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            
                                                            return 0;
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 
                                                                                                                 

                                                    }
