#include <stdio.h>
#include <stdlib.h>
#include "imagem.h"
#include "pedido.h"
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    
    imagem();
    pedido();

    return 0;
}
