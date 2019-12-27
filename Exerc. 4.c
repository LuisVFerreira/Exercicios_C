#include <stdio.h>

void main(){
	// op - opção
	// i e j - contadores
	// lin - linha escolhida pelo cliente
	// col - coluna escolhida pelo cliente
	// cadeira[30][60] - cria as cadeiras (lugares) do teatro
	// ocupacao - quantidade de pessoas no cinema
	// perc_ocupacao - percentual de ocupação no cinema
	// v_ingresso - valor normal do ingresso
	// t_arrecadado - valor total arrecadado
	int op = 1, i, j, lin, col, cadeira[30][60];
	float ocupacao = 0, perc_ocupacao, val_ingresso, t_arrecadado = 0;
	
	for(i = 0; i < 30; i++){
		for(j = 0; j < 60; j++){
			cadeira[i][j] = 0;
		}
	}
		
	printf("\t Seja Bem vindo! <<<\n");
	printf("\n>>> Gerenciamento de Teatro <<<\n");
	printf("\n\nInforme o valor padrao do ingresso hoje:\n");
	printf("\n>>R$ ");
	scanf(" %f", &val_ingresso);
	system("cls"); //-------------- Limpa a tela	
	
	inicio: // instrução goto 
	while (op != 0){
	printf("\t Seja Bem vindo! <<<\n");
	printf("\n>>> Gerenciamento de Teatro <<<\n");
	printf("\nEscolha uma opcao:\n\n");
	printf("[1] Ver disposicao das cadeiras (se encontra reservada ou nao)\n");
	printf("[2] Reservar cadeira\n");
	printf("[3] Cancelar cadeira\n");
	printf("[4] Mostrar a porcentagem de ocupacao\n");
	printf("[5] Calcular a arrecadacao\n");
	printf("[0] Sair\n");
	printf("\n>");
	scanf(" %d", &op);	
	system("cls"); //-------------- Limpa a tela
		
	switch (op){
		case 1:
			printf("\n>>> Gerenciamento de Teatro | Ver disposicao das cadeiras <<<\n");
			printf("\nInforme por qual lugar procura: \n");
			printf("\nFila: ");
			scanf(" %d", &lin);
			printf("\nColuna: ");
			scanf(" %d", &col);
			if (lin > 30 || col > 60) { // caso o usuário procure por uma cadeira inexistente
				printf("\n------------- Erro, cadeira inexistente!\n");
			for (i = 0; i < 555555555; i++); //------------------- delay com "for'
			system("cls"); break; //-------------- Limpa a tela
			goto inicio; // instrução goto
			}
			 
			if (cadeira[lin][col] == 0) printf("\nCadeira disponivel!");
			else printf("\nCadeira ocupada!");
			for (i = 0 ; i < 555555555; i++); //-------------------- delay com "for'
			system("cls"); break; //-------------- Limpa a tela
		case 2:
			printf("\n>>> Gerenciamento de Teatro | Reservar cadeira <<<\n");
			printf("\nInforme o lugar que deseja:\n");
			printf("\nFila: ");
			scanf(" %d", &lin);
			printf("\nColuna: ");
			scanf(" %d", &col);
			if (lin > 30 || col > 60) { // caso o usuário procure por uma cadeira inexistente
				printf("\n------------- Erro, cadeira inexistente!\n");
			for (i = 0; i < 555555555; i++); //------------------- delay com "for'
			system("cls"); break; //-------------- Limpa a tela
			goto inicio; // instrução goto
			} 
			
			if (cadeira[lin][col] == 0){
				cadeira[lin][col] = 1;
				ocupacao++;
				printf("\nObrigado pela reserva!");
				if (lin < 5) t_arrecadado = t_arrecadado + 0.25 * val_ingresso + val_ingresso; 
				else if (lin > 20) t_arrecadado = t_arrecadado - 0.1 * val_ingresso + val_ingresso; 
				else t_arrecadado = t_arrecadado + val_ingresso; //-------- Aninhamento de if para cálculo da arrecadação
			} else 
				printf("\nCadeira ocupada!");
			for (i = 0 ; i < 555555555; i++); //---------------- delay com "for'
			system("cls"); break; //-------------- Limpa a tela
		case 3:
			printf("\n>>> Gerenciamento de Teatro | Cancelar cadeira <<<\n");
			printf("\nInforme o lugar que deseja:\n");
			printf("\nFila: ");
			scanf(" %d", &lin);
			printf("\nColuna: ");
			scanf(" %d", &col);
			if (lin > 30 || col > 60) { // caso o usuário procure por uma cadeira inexistente
				printf("\n------------- Erro, cadeira inexistente!\n");
			for (i = 0; i < 555555555; i++); //------------------- delay com "for'
			system("cls"); break; //-------------- Limpa a tela
			goto inicio; // instrução goto
			}
			
			if (cadeira[lin][col] == 1){
				cadeira[lin][col] = 0;
				ocupacao--;
				printf("\nReserva cancelada!");
				if (lin < 5) t_arrecadado = t_arrecadado - 0.25 * val_ingresso - val_ingresso;
				else if (lin > 20) t_arrecadado = t_arrecadado + 0.1 * val_ingresso - val_ingresso; 
				else t_arrecadado = t_arrecadado - val_ingresso; //-------- Aninhamento de if para cálculo da arrecadação
			} else 
				printf("\nEsta cadeira ja esta disponivel!");
			for (i = 0; i < 555555555; i++); //------------------- delay com "for'
			system("cls"); break; //-------------- Limpa a tela
		case 4:
			printf("\n>>> Gerenciamento de Teatro | Porcentagem de ocupacao <<<\n");
			perc_ocupacao = ocupacao/18;
			printf("\nOcupacao do teatro em porcentagem: %f", perc_ocupacao);
			for (i = 0; i < 999999999; i++); //------------------------- delay com "for"
			system("cls"); break; //-------------- Limpa a tela
		case 5:
			printf("\n>>> Gerenciamento de Teatro | Arrecadacao <<<\n\n");
			printf("------------- Total arrecadado: R$ %.2f", t_arrecadado);
			for (i = 0; i < 999999999; i++); //------------------------- delay com "for"
			system("cls"); break; //-------------- Limpa a tela
			
		default :
		while (op != 0) printf("-------------- Opcao Invalida! --------------\n\n");
					
	}
		
	}	

}
