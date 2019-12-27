void main(){
	// n - número
	// i7 - ímpar e múltiplo de 7
	// p3 - par e múltiplo de 3
	int n = 0, i7 = 0, p3 = 0, total = 0;	
	
	while (n != -1){
		printf("Informe um numero inteiro positivo (-1 para sair): ");
		scanf(" %d", &n);
		if (n < 0 && n != -1)
			printf("Erro, o numero informado eh negativo!\n\n");
		if (n % 2 != 0 && n % 7 == 0)
			i7++;	
		if (n % 2 == 0 && n % 3 == 0)
			p3++;
			
		total++;
	}
	
	printf("\n>>> Digitados %d numeros impares e multiplos de 7\n", i7);
	printf("\n>>> Digitados %d numeros pares e multiplos de 3\n", p3);
	printf("\n>>> Total de numeros digitados: %d\n", --total);
	
}
