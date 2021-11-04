#include<stdio.h>
#include<stdlib.h>

void condicoesCompra();

int main(){

    int cod, qnt, novoPedido, novoLanche, codInvalido, qntInvalida, quantPedidos, opcaoEntRet, contadorPedido = 0;
    char nome[20], end[30];
    float saldoDia=0, totalPedido, taxaEntrega = 7.50, desconto;

    do{
        //COMEÇANDO UM NOVO PEDIDO
        system("cls");
        printf("NOVO PEDIDO\n\n");

        totalPedido = 0;//Toda vez que estiver um novo pedido ele será zerado
        quantPedidos = 0;
        opcaoEntRet = 0;
        contadorPedido++;
        
        fflush(stdin); //Limpando o buton do teclado

        //Pegando o dados do cliente
        //Nome
        printf("Nome do cliente: ");
        scanf("%[^\n]s", nome);
        system("cls");

        do{
            system("cls");
            //cardapio
            do{
                printf("                      LANCHES                         |                       BEBIDAS                   \n");
                printf("                                                      |                                                 \n");
                printf("  CODIGO        NOME                      PRECO       |  CODIGO        NOME                        PRECO\n");
                printf("                                                      |                                                 \n");
                printf("  1             X-Burguer                 R$ 6.99     |  11            Coca-Cola 2L                R$ 12.00\n");
                printf("  2             X-Salada                  R$ 7.50     |  12            Guarana Antarctica 2L       R$ 9.00\n");
                printf("  3             X-Bacon                   R$ 9.00     |  13            Sprite 2L                   R$ 9.00\n");
                printf("  4             X-Egg                     R$ 10.00    |  14            Fanta Laranja 2L            R$ 8.50\n");
                printf("  5             X-Frango                  R$ 12.00    |  15            Coca-Cola Lata 350ml        R$ 3.50\n");
                printf("  6             X-Tudo                    R$ 15.00    |  16            Fanta Laranja Lata 350ml    R$ 3.50\n");
                printf("  7             Pastel de Carne           R$ 5.50     |  17            Sprite Lata 350ml           R$ 3.50\n");
                printf("  8             Pastel de Queijo          R$ 5.50     |  18            Suco de laranja 500ml       R$ 5.00\n");
                printf("  9             Pastel de Frango          R$ 5.50     |\n");
                printf("  10            Hot-Dog                   R$ 6.00     |\n");

                printf("\nCodigo do lanche: ");
                scanf("%d", &cod);

                //Validação do Código invalidos
                if(cod!=1 && cod!=2 && cod!=3 && cod!=4 && cod!=5 && cod!=6 && cod!=7 && cod!=8 && cod!=9 && cod!=10 && 
                cod!=11 && cod!=12 && cod!=13 && cod!=14 && cod!=15 && cod!=16 && cod!=17 && cod!=18){
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
            switch(cod){
                case 1: totalPedido = totalPedido + (6.99*qnt); quantPedidos = quantPedidos + qnt; break;
                case 2: totalPedido = totalPedido + (7.50*qnt); quantPedidos = quantPedidos + qnt; break;
                case 3: totalPedido = totalPedido + (9.00*qnt); quantPedidos = quantPedidos + qnt; break;
                case 4: totalPedido = totalPedido + (10.00*qnt); quantPedidos = quantPedidos + qnt; break;
                case 5: totalPedido = totalPedido + (12.00*qnt); quantPedidos = quantPedidos + qnt; break;
                case 6: totalPedido = totalPedido + (15.00*qnt); quantPedidos = quantPedidos + qnt; break;
                case 7: totalPedido = totalPedido + (5.50*qnt); quantPedidos = quantPedidos + qnt; break;
                case 8: totalPedido = totalPedido + (5.50*qnt); quantPedidos = quantPedidos + qnt; break;
                case 9: totalPedido = totalPedido + (5.50*qnt); quantPedidos = quantPedidos + qnt; break;
                case 10: totalPedido = totalPedido + (6.00*qnt); quantPedidos = quantPedidos + qnt; break;
                case 11: totalPedido = totalPedido + (12.00*qnt); quantPedidos = quantPedidos + qnt; break;
                case 12: totalPedido = totalPedido + (9.00*qnt); quantPedidos = quantPedidos + qnt; break;
                case 13: totalPedido = totalPedido + (9.00*qnt); quantPedidos = quantPedidos + qnt; break;
                case 14: totalPedido = totalPedido + (8.50*qnt); quantPedidos = quantPedidos + qnt; break;
                case 15: totalPedido = totalPedido + (3.50*qnt); quantPedidos = quantPedidos + qnt; break;
                case 16: totalPedido = totalPedido + (3.50*qnt); quantPedidos = quantPedidos + qnt; break;
                case 17: totalPedido = totalPedido + (3.50*qnt); quantPedidos = quantPedidos + qnt; break;
                case 18: totalPedido = totalPedido + (5.00*qnt); quantPedidos = quantPedidos + qnt; break;
            }

            //Perguntado se vai add mais produtos
            do{
                printf("\nDeseja pedir outro produto?\n");
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

        }while(novoLanche==1);

        system("cls");
        if(quantPedidos >= 5)
        {
            printf("PARABENS!!!\nPOR PEDIR 5 OU MAIS UNIDADES, VOCE GANHOU 10%% DE DESCONTO!!\n\n");
            system("pause");
            system("cls");
        }

        do
        {
            printf("Entrega ou Retirada?\n\n");
            printf("1 - Entrega\n");
            printf("0 - Retirada\n\n");

            printf("Opcao: ");
            scanf("%d", &opcaoEntRet);

            //Validação da opção
            if(opcaoEntRet!=0 && opcaoEntRet!=1){
                printf("\nOpcao invalida:\n\n");
            }

            if(opcaoEntRet == 1)
            {   
                system("cls");
                printf("Informe o endereco: ");
                fflush(stdin);
                scanf("%[^\n]s", end);
            }
            
        }while(opcaoEntRet != 0 && opcaoEntRet!=1);


        //imprimindo Recibo
        system("cls");
        printf("***************************************************\n");
        printf("                    RECIBO - N %d \n", contadorPedido);
        printf("***************************************************\n\n");
        printf("Nome do cliente: %s\n", nome);
        printf("Total de unidades: %d\n", quantPedidos);
        if(opcaoEntRet == 1)
        {
            printf("Endereco: %s\n", end);
        }
        printf("Total a pagar: R$ %.2f\n", totalPedido);

        if(quantPedidos >= 5)
        {   
            desconto = totalPedido * 0.1;
            totalPedido = totalPedido - desconto;
            printf("Total a pagar com desconto: R$ %.2f\n", totalPedido);
        }

        if(opcaoEntRet == 1)
        {
            totalPedido = totalPedido + taxaEntrega;
            printf("Total a pagar com a taxa de entrega: R$ %.2f\n", totalPedido);
        }
        printf("\n");
        system("pause");
        
            
        //Saldo do dia
        saldoDia += totalPedido;

        printf("\n");

        //Pergunta se vai ter um novo pedido ou vai fechar o dia.
        do{
            system("cls");
            printf("O que deseja fazer?\n\n");
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
    system("cls");
    printf("SALDO DO DIA \n\n-> R$ %.2f", saldoDia);
    printf("\n");

    return 0;
}

void condicoesCompra(){
    
}