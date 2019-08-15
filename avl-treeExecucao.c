/**************************************************************
**    Author = Marcos Augusto de Souza Pinto.                **
**    Email =  Marcos_youngman@hotmail.com.                  **
**    Data = 22/04/2012.                                     ** 
**    Descricao = Arvore AVL                                 **
***************************************************************/


# include <stdio.h>
# include "avl-tree.c"

main() /*funcao principal*/
{
      int num, nnum; /*declarando variaveis do tipo inteiro*/
      FILE *arquivo; /*declarando variavel do tio FILE*/ 
  
 arv *raiz; /*Declarando variavel do tipo arv*/
 criaGalhoNulo(&raiz); /*inicializando arvore com NULL*/
 criarArquivo(arquivo); /*criando o arquivo*/
 carregaArquivo(&raiz); /*carrendo dados salvos no arquivo*/
 while(num!=6) /*enquanto num for diferente de 6*/
 {
  cor(1); /*colorindo o texto*/
  menu(&num); /*chama um menu e uma opcao de escolha*/
  switch(num) /*compara o valor de num com os casos*/
  {
   /*caso 1*/
    case 1:
         lerNumero(&nnum);/*ler um numero inteiro*/
         insereElemento(&raiz,nnum); /*insere o numero na arvore*/
         EscreverArquivo(arquivo,nnum); /*escreve o numero no arquivo*/
         printf("\ni = %d\n",nnum);/*imprime uma mensagem*/
         impressao(raiz);/*imprime a arvore*/
         break; /*Termina o caso*/
    /*caso 2*/
    case 2:
         /*imprime a arvore*/
         impressao(raiz);
         break; /*Termina o caso*/
    /*caso 3*/
    case 3:
         /*ler um numero*/
         lerNumero(&nnum);
         /*imprime uma mesagem colorida na tela*/
         cor(10);printf("\n b = ");
         busca(raiz,nnum);/*Busca o numero na arvore*/
         break;/*Termina o caso*/
    /*caoso 4*/
    case 4:
         /*Ler um numero*/
         lerNumero(&nnum);
         /*exclui o numero se encontra->lo na arvore*/
         excluirElemento(&raiz,nnum);
         /*Atualiza o arquivo*/
         salva(raiz);
         /*imprime a arvore*/
         impressao(raiz);
         break; /*Termina o caso*/
    /*caso 5*/
    case 5:
         /*Abre o arquivo de texto*/
         system("avl.txt");
         break;/*Termina o caso*/
  }
   getch();/*espera a usuario clicar em qualque tecla para finalizar*/
   system("cls");/*limpa as imagems antes dessa opcao na tela*/
 }
}
