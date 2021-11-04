#include<stdio.h>
#include<stdlib.h>

void condicoesCompra();

int main(){

    int cod, qnt, novoPedido, novoLanche, codInvalido, qntInvalida, quantPedidos, opcaoEntRet, contadorPedido = 0;
    int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18;
    int qnt1=0, qnt2=0, qnt3=0, qnt4=0, qnt5=0, qnt6=0, qnt7=0, qnt8=0, qnt9=0, qnt10=0, qnt11=0, qnt12=0, qnt13=0, qnt14=0, qnt15, 
    qnt16=0, qnt17=0, qnt18=0;
    char nome[20], end[45], numEnd[20];
    float saldoDia = 0, totalPedido, taxaEntrega = 7.50, desconto;

    do{
        //COMEÇANDO UM NOVO PEDIDO
        system("cls");
        printf("NOVO PEDIDO\n\n");

        contadorPedido++;
        totalPedido = 0;//Toda vez que estiver um novo pedido ele será zerado
        quantPedidos = 0;
        opcaoEntRet = 0;
        
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
                case 1: totalPedido = totalPedido + (6.99*qnt); quantPedidos = quantPedidos + qnt; p1 = 1; qnt1 = qnt1 + qnt; break;
                case 2: totalPedido = totalPedido + (7.50*qnt); quantPedidos = quantPedidos + qnt; p2 = 1; qnt2 = qnt2 + qnt; break;
                case 3: totalPedido = totalPedido + (9.00*qnt); quantPedidos = quantPedidos + qnt; p3 = 1; qnt3 = qnt3 + qnt; break;
                case 4: totalPedido = totalPedido + (10.00*qnt); quantPedidos = quantPedidos + qnt; p4 = 1; qnt4 = qnt4 + qnt; break;
                case 5: totalPedido = totalPedido + (12.00*qnt); quantPedidos = quantPedidos + qnt; p5 = 1; qnt5 = qnt5 + qnt; break;
                case 6: totalPedido = totalPedido + (15.00*qnt); quantPedidos = quantPedidos + qnt; p6 = 1; qnt6 = qnt6 + qnt; break;
                case 7: totalPedido = totalPedido + (5.50*qnt); quantPedidos = quantPedidos + qnt; p7 = 1; qnt7 = qnt7 + qnt; break;
                case 8: totalPedido = totalPedido + (5.50*qnt); quantPedidos = quantPedidos + qnt; p8 = 1; qnt8 = qnt8 + qnt; break;
                case 9: totalPedido = totalPedido + (5.50*qnt); quantPedidos = quantPedidos + qnt; p9 = 1; qnt9 = qnt9 + qnt; break;
                case 10: totalPedido = totalPedido + (6.00*qnt); quantPedidos = quantPedidos + qnt; p10 = 1; qnt10 = qnt10 + qnt; break;
                case 11: totalPedido = totalPedido + (12.00*qnt); quantPedidos = quantPedidos + qnt; p11 = 1; qnt11 = qnt11 + qnt; break;
                case 12: totalPedido = totalPedido + (9.00*qnt); quantPedidos = quantPedidos + qnt; p12 = 1; qnt12 = qnt12 + qnt; break;
                case 13: totalPedido = totalPedido + (9.00*qnt); quantPedidos = quantPedidos + qnt; p13 = 1; qnt13 = qnt13 + qnt; break;
                case 14: totalPedido = totalPedido + (8.50*qnt); quantPedidos = quantPedidos + qnt; p14 = 1; qnt14 = qnt14 + qnt; break;
                case 15: totalPedido = totalPedido + (3.50*qnt); quantPedidos = quantPedidos + qnt; p15 = 1; qnt15 = qnt15 + qnt; break;
                case 16: totalPedido = totalPedido + (3.50*qnt); quantPedidos = quantPedidos + qnt; p16 = 1; qnt16 = qnt16 + qnt; break;
                case 17: totalPedido = totalPedido + (3.50*qnt); quantPedidos = quantPedidos + qnt; p17 = 1; qnt17 = qnt17 + qnt; break;
                case 18: totalPedido = totalPedido + (5.00*qnt); quantPedidos = quantPedidos + qnt; p18 = 1; qnt18 = qnt18 + qnt; break;
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
                printf("Numero e complemento: ");
                fflush(stdin);
                scanf("%[^\n]s", numEnd);
            }
            
        }while(opcaoEntRet != 0 && opcaoEntRet!=1);

        //imprimindo Recibo
        system("cls");
        printf("***************************************************\n");
        printf("                    RECIBO - N %d \n", contadorPedido);
        printf("***************************************************\n\n");
        printf(" Nome do cliente: %s\n", nome);
        if(opcaoEntRet == 1)
        {
            printf(" Endereco: %s\n", end);
            printf(" N: %s\n", numEnd);
        }
        printf(" Total de unidades: %d\n", quantPedidos);
        
        printf("\n---------------------------------------------------");
        printf("\n QTDE    DESCRICAO                        VALOR UN.");
        printf("\n---------------------------------------------------");
        if(p1 == 1){printf("\n x%d      X-Burguer                        R$ 6.99", qnt1);}
        if(p2 == 1){printf("\n x%d      X-Salada                         R$ 7.50", qnt2);}
        if(p3 == 1){printf("\n x%d      X-Bacon                          R$ 9.00", qnt3);}
        if(p4 == 1){printf("\n x%d      X-Egg                            R$ 10.00", qnt4);}
        if(p5 == 1){printf("\n x%d      X-Frango                         R$ 12.00", qnt5);}
        if(p6 == 1){printf("\n x%d      X-Tudo                           R$ 15.00", qnt6);}
        if(p7 == 1){printf("\n x%d      Pastel de Carne                  R$ 5.50", qnt7);}
        if(p8 == 1){printf("\n x%d      Pastel de Queijo                 R$ 5.50", qnt8);}
        if(p9 == 1){printf("\n x%d      Pastel de Frango                 R$ 5.50", qnt9);}
        if(p10 == 1){printf("\n x%d      Hot-Dog                          R$ 6.00", qnt10);}
        if(p11 == 1){printf("\n x%d      Coca-Cola 2L                     R$ 12.00", qnt11);}
        if(p12 == 1){printf("\n x%d      Guarana Antarctica 2L            R$ 9.00", qnt12);}
        if(p13 == 1){printf("\n x%d      Sprite 2L                        R$ 9.00", qnt13);}
        if(p14 == 1){printf("\n x%d      Fanta Laranja 2L                 R$ 8.50", qnt14);}
        if(p15 == 1){printf("\n x%d      Coca-Cola Lata 350ml             R$ 3.50", qnt15);}
        if(p16 == 1){printf("\n x%d      Fanta Laranja Lata 350ml         R$ 3.50", qnt16);}
        if(p17 == 1){printf("\n x%d      Sprite Lata 350ml                R$ 3.50", qnt17);}
        if(p18 == 1){printf("\n x%d      Suco de laranja 500ml            R$ 5.00", qnt18);}
        printf("\n---------------------------------------------------");
        printf("\n\n TOTAL:                                   R$ %.2f\n", totalPedido);

        if(quantPedidos >= 5)
        {   
            desconto = totalPedido * 0.1;
            totalPedido = totalPedido - desconto;
            printf(" TOTAL (com 10%% desconto):                R$ %.2f\n", totalPedido);
        }

        if(opcaoEntRet == 1)
        {
            totalPedido = totalPedido + taxaEntrega;
            printf(" TOTAL + TAXA DE ENTREGA (R$ 7,50):       R$ %.2f\n", totalPedido);
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