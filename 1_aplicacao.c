//Aplicando alguns dos primeiros conhecimentos adquiridos em aulas criando uma interface simples de cadastro
#include <stdio.h>

//Variaveis que receberao as entradas do usuario
int option;
char input[20];
char username[20];
char pwd[10];

//Funcao que limpa o terminal
int limpar() {
	system("cls");
	return(1);
}

//Funcoes que irao chamar as interfaces
int menu() {
	printf("\n===========MENU===========\n");
	printf("\nOpcoes:\n");
	printf("\n1 - Cadastrar Usuario\n");
	printf("2 - Entrar como Usuario\n");
	printf("3 - Sair do programa\n");
	printf("\nDigite o numero da opcao...: ");
	
	return(1);
}
int cadastrar() {
	limpar();
	printf("\n========CADASTRAR=========\n");
	printf("\nEntre com um nome de usuraio (sem espacos)...: ");
	scanf("%s", &username);
	printf("\nEntre com uma senha...: ");
	scanf("%s", &pwd);
	
	printf("\nUsuario %s cadastrado com sucesso\n", username);
	printf("\nDigite 1 para voltar ao Menu...");
	scanf("%d");
	
	return(1);
}

int login (){
	limpar();
	printf("\n=========LOGIN===========\n");
	printf("\nUsuario...: ");
	scanf("%s", &input);
	printf("Entrou com %s, atual eh %s.", input, username);
	if(input == username) {
		printf("\nSenha...: ");
		scanf("%s", input);
		if(input == pwd) {
			printf("Entrou com Sucesso!");
		} else printf("Senha Incorreta!");
	} else printf("Usuario Invalido!");
	
	return(1);
}

//Inicio do Programa
int main() {
	limpar();
	
	menu();
	scanf("%d", &option);
	
	if(option == 1) {
		cadastrar();
		main();
	}
	else if(option == 2) {
		login();
	}
	else if (option == 3) {
		return(0);
	}
	
	return(0);
}
