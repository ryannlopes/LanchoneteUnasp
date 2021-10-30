#include<stdio.h>
#include<stdlib.h>

int main(){

    int cod, qnt, novoPedido, novoLanche, codInvalido, qntInvalida;
    char nome[20];
    float saldoDia=0, totalPedido;

    do{
        //COMEÇANDO UM NOVO PEDIDO
        printf("NOVO PEDIDO\n\n");

        totalPedido=0;//Toda vez que estiver um novo pedido ele será zerado
        
        fflush(stdin); //Limpando o buton do teclado

        //Pegando o nome do cliente
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
                printf("--------------------------------------------\n");
                printf("7             Coca-Cola 2L           R$12.00\n");
                printf("8             Suco de Laranja 500ml  R$5.00\n");
                printf("9             Sprite 2L              R$9.50\n");
                printf("10            Fanta Laranja 2L       R$8.50\n\n");

                printf("Codigo do lanche: ");
                scanf("%d", &cod);

                //Validação do Código invalidos
                if(cod!=1 && cod!=2 && cod!=3 && cod!=4 && cod!=5 && cod!=6 && cod!=7 && cod!=8 && cod!=9 && cod!=10){
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
                
                //Validação da quantidade invalidas
                if(qnt<1){
                    qntInvalida=1;
                    printf("\nQuantidade invalida\n\n");
                }else{
                    qntInvalida=0;
                }
                //Caso a quantidade for invalida ele vai repetir o a pergunta
            }while(qntInvalida==1);

            //Calculado o valor de cada lanche com a quantidade
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
                printf("0 - Nao\n\n");

                printf("Opcao: ");
                scanf("%d", &novoLanche);

                //Validação da opção
                if(novoLanche!=0 && novoLanche!=1){
                    printf("\nOpcao invalida:\n\n");
                }
                
            //Fechamento do pedido
            }while(novoLanche != 0 && novoLanche!=1);

            printf("\n");

        }while(novoLanche==1);
        //imprimindo Reccibo
        printf("RECIBO\n");
        printf("Nome do Cliente: %s\n", nome);
        printf("Total a pagar: R$ %.2f\n", totalPedido);

        //Saldo do dia
        saldoDia += totalPedido;

        printf("\n");

        //Pergunta se vai ter um novo pedido ou vai fechar o dia.
        do{
            printf("O que deseja fazer?\n");
            printf("1 - Atender novo cliente\n");
            printf("0 - Sair do Sistema\n\n");

            printf("Opcao: ");
            scanf("%d", &novoPedido);

            if(novoPedido!=0 && novoPedido!=1){
                printf("Opcao Invalida");
            }
        }while(novoPedido!=0 && novoPedido!=1);

    }while(novoPedido==1);

    //Exibindo o saldo do dia.
    printf("SALDO DO DIA \nR$ %2.f\n", saldoDia);

    return 0;
}