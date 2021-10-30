#include<stdio.h>
#include<stdlib.h>

int main(){

    int cod, qnt, novoPedido, novoLanche, codInvalido, qntInvalida;
    char nome[20];
    float saldoDia=0, totalPedido;

    do{
        //COMEÇANDO UM NOVO PEDIDO
        printf("NOVO PEDIDO\n\n");

        totalPedido=0;

        printf("Nome do cliente: ");
        scanf("%[^\n]s", nome);

        do{
            //cardapio
            do{
                printf("CODIGO        LANCHE/BEBIDA         PRECO\n");
                printf("1             X-Burguer              R$6.99\n");
                printf("2             X-Salada               R$7.50\n");
                printf("3             X-Bacon                R$9.00\n");
                printf("4             X-Egg                  R$10.00\n");
                printf("5             X-Frango               R$12.00\n");
                printf("6             X-Tudo                 R$15.00\n");
                printf("---------------------------------------------");
                printf("7             Coca-Cola 2L           R$12.00\n");
                printf("8             Suco de Laranja 500ml  R$5.00\n");
                printf("9             Sprite 2L              R$9.50\n");
                printf("10            Fanta Laranja 2L       R$8.50\n\n");

                printf("Codigo do lanche: ");
                scanf("%d", &cod);

                //Validação do Código
                if(cod!=1 && cod!=2 && cod!=3 && cod!=4 && cod!=5){
                    codInvalido=1;
                    printf("\nCodigo invalido\n\n");
                }
                else{
                    codInvalido=0;
                }
                //Repetindo o laço caso o cod seja invalido
            }while(codInvalido==1);

            //Campo de digitar a quantidade
            do{
                printf("Digite a quantidade: ");
                scanf("%d", &qnt);
                
                //Validação da quantidade
                if(qnt<1){
                    qntInvalida=1;
                    printf("\nQuantidade invalida\n\n");
                }else{
                    qntInvalida=0;
                }
                //Caso a quantidade for invalida ele vai repetir o a pergunta
            }while(qntInvalida==1);

            //Calculado o valor total do pedido
            switch(cod) {
                case 1: totalPedido = totalPedido + (6.99*qnt); break;
                case 2: totalPedido = totalPedido + (7.50*qnt); break;
                case 3: totalPedido = totalPedido + (9.00*qnt); break;
                case 4: totalPedido = totalPedido + (10.00*qnt); break;
                case 5: totalPedido = totalPedido + (12.00*qnt); break;
                case 6: totalPedido = totalPedido + (15.00*qnt); break;
                case 7: totalPedido = totalPedido + (12.00*qnt); break;
                case 8: totalPedido = totalPedido + (5.00*qnt); break;
                case 9: totalPedido = totalPedido + (9.50*qnt); break;
                case 10: totalPedido = totalPedido + (8.50*qnt); break;
            }

            //Perguntado se vai add mais produtos
            do{
                printf("Deseja pedir outro produto?\n");
                printf("1 - Sim\n");
                printf("0 - não\n\n");

                printf("Opcao: ");
                scanf("%d", &novoLanche);

                //Validação da opção
                if(novoLanche!=0 && novoLanche!=1){
                    printf("\nOpcao invalida:\n\n");
                }
                
            //Se o usuario digita 1 ele vai quebrar o laço
            }while(novoLanche != 0 && novoLanche!=1);



        }while(novoLanche = 1);
    }while(novoPedido=1);
}