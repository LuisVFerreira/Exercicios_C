#include <stdio.h>

void main(){
	int lotacao=200, meia=0, inteira=0, resposta=0, idade;
	float total=0, fm=0, fi=0;

	//comando while vai informar as condições de encerramento do programa através de um "boleano"(resposta).
	//As condições são; Se o filme já começou, ou se ons ingressos foram esgotados

	while(resposta!=1){
	system ("cls");
	printf ("\nSISTEMA CINEMA:\n");
	printf ("Ingressos disponiveis: %i\n",lotacao);
	printf ("O filme ja começou?\n[0]Para Nao\n[1]Para sim:\n");
	scanf ("%i",&resposta);

	 printf ("Digite a idade do comprador:\t");
	            scanf ("%i",&idade);
	            if (idade>=14){
	            printf ("O comprador paga entrada inteira: RS12,00\n");
	            fi=fi+12;
	            lotacao--;
	            inteira++;
	            system("pause");
	            }if(idade<14){
	            printf ("O comprador paga meia entrada:RS6,00\n");
	            fm=fm+6;
	            lotacao--;
	            meia++;
	            system("pause");
	            }
	            if (lotacao==0){
	            printf("Ingressos esgotados");
	            resposta=0;}
	            
	    total=fm+fi;
	    printf ("Valor total de arrecadacao: %f \n",total);
	    printf ("Valor de arrecadacao com vendas de meia entrada: %f \n",fm);
	    printf ("Valor de arrecadacao com vendas de entradas inteiras: %f \n",fi);
	    printf ("Quantas pessoas vao assistir o filme: %i\n",200-lotacao);
	    printf ("Numeros de meia entradas vendidas:%i\n",meia);
	    printf ("Numeros de entradas inteiras vendidas:%i\n",inteira);
	    printf ("Vendas encerradas!!!\n");
	    system ("pause");

 }
 
 }
