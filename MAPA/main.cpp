#include <iostream>
#include <stdio.h>
#include <locale.h>
#define max 5

typedef struct{
		int codigo;
		char autor[max];
		char obra[max];
		char editora[max];	
} Livro;
/* 
Nome: Valéria Padilha de Vargas
ADS - Algoritmos II
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int op=3, i;
	bool c = true;
	bool a;
	Livro livros[max];
	
	while(c==true){
		for(i=0;i<max;i++){
	    	if(livros[i].codigo==NULL){
				a = true;
			}else{
				a = false;
			}
		}
		printf("Selecione uma opção:\n1-Inserir um novo cadastro\n2-Mostrar todos os cadastros\n0 - Encerrar\n");
		fflush(stdin);
		scanf("%d",&op);
		if(op==1 || op==2 || op==0){
		} else{
			op=3;
		}
		switch (op)
    	{
         case 1:
         	if(a==false){
            	system("cls");
         		printf("Sistema de cadastro lotado. Não é possível armazenar mais informações!\n"); 
			}else{
				for(i=0;i<max;i++){
		            fflush(stdin);
		            printf("Inserir um novo cadastro..\n");
					livros[i].codigo = i+1;
		            printf("Digite o nome do autor:\n");
		            scanf("%s",livros[i].autor);
		            fflush(stdin);
		            printf("Digite o nome da obra:\n");
		            scanf("%s",livros[i].obra);
		            fflush(stdin);
		            printf("Digite o nome da editora:\n");
		            scanf("%s",livros[i].editora);
		            printf("\n");
				}
			}
            break;
         case 2:
            system("cls");
            printf("Mostrar todos os cadastros..\n");
            if(a==false){
	            for(i=0;i<max;i++){
	            	printf("Livro %d\n",i+1);
	            	printf("Codigo: %d\n",livros[i].codigo);
	            	printf("Autor: %s\n",livros[i].autor);
	            	printf("Obra: %s\n",livros[i].obra);
	            	printf("Editora: %s\n",livros[i].editora);
	            	printf("\n");            	
				}
				fflush(stdin);
			}else{
				printf("Lista vazia!\n");
			}
            break;
        case 0:
            printf("Programa encerrado!\n");
            c=false;
            break;
         default:
            printf("Erro: opção inválida!\n");
            break;
      	}
	}
	return 0;
}
