#include <stdio.h>

//QALUNOS - quantidade de alunos

#define QALUNOS 300 /* Usando #define, não é preciso percorrer o programa para alterar a quantidade de alunos, 
torna mais fácil os testes. *O exercício pede 300 alunos */

	
	typedef struct {
		char nome[30];
		int idade;
		float altura;
	} aluno;

void main(){
	// mais25anos - quantidade de alunos com + de 25 anos
	// op - opção
	// i - contador
	// idade_infmedia - quantidade de alunos com idade inferior a media
	// media_idade - média das idades
	// media_altura - média das alturas
	aluno alunos[QALUNOS];
	int mais25anos = 0, op = 0, i, idade_infmedia = 0;
	float media_idade = 0, media_altura = 0;
	
	while (op != 2){
	
	printf("\t Seja Bem vindo! <<<\n");
	printf("\n>>> Gerenciamento UNIP | Secretaria\n");
	printf("\nEscolha uma opcao:\n\n");
	printf("[1] Cadastrar alunos\n");
	printf("[2] Sair e mostrar estatisticas\n");
	printf("\n>");
	scanf(" %d", &op);
	
	system ("cls"); // Limpa a tela
	
	switch (op){
		case 1 : // Cadastra alunos
			for (i = 0; i < QALUNOS; i++){
				printf("\n>>> Gerenciamento UNIP | Secretaria | Cadastrar alunos\n\n");
				printf("Informe o nome do aluno: ");
				scanf(" %s", &alunos[i].nome);
				fflush(stdin); //----------------------------------Limpa o buffer 
				printf("Informe a idade do aluno: ");
				scanf(" %d", &alunos[i].idade);
				fflush(stdin); //----------------------------------Limpa o buffer 
				if (alunos[i].idade > 25) mais25anos++; 
				media_idade = media_idade + alunos[i].idade;			 
				printf("Informe a altura do aluno: ");
				scanf(" %f", &alunos[i].altura);
				fflush(stdin); //----------------------------------Limpa o buffer 
				media_altura = media_altura + alunos[i].altura;
				system ("cls"); //---------------------------------Limpa a tela
			} break;
					
		case 2 : // Calcula, mostra estatísticas e ecerra o sistema
			printf("\n\tfinalizando...\n") ;
			
			media_idade = media_idade/QALUNOS;
			media_altura = media_altura/QALUNOS;
				
			printf("\n>> Alunos que tem altura superior a media:\n");
			for (i = 0; i < QALUNOS; i++){
				if (alunos[i].altura > media_altura) printf(" %s - ", alunos[i].nome );
			}
			 
			printf("\n\n>> Numero de alunos com mais de 25 anos: %d\n", mais25anos);
			
				for (i = 0; i < QALUNOS; i++){
				if (alunos[i].idade < media_idade) idade_infmedia++; 
			}
			printf("\n>> Numero de alunos com idade inferior a media: %d\n", idade_infmedia);
						
			printf("\n>> Alunos com idade inferior a 18 anos e que tem altura inferior a media:\n");
			for (i = 0; i < QALUNOS; i++){
				if (alunos[i].idade < 18 && alunos[i].altura < media_altura) printf(" %s - ", alunos[i].nome ); 
			
			} break;
			
		default :
		printf("-------------- Opcao Invalida! --------------\n\n");
				
	}
		
		
	}
	

	
	
}
