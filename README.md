# UNICESUMAR - Projeto MAPA

**PROJETO MAPA**
Considere que você é um _freelancer_ desenvolvedor de sistemas desktop. Para iniciar seu portfólio, você decide testar uma ideia de sistema para bibliotecas. Assim, você resolve que criará um programa como Prova de Conceito para validar suas ideias e também para poder mostrar para seus possíveis clientes. Dessa forma, seu programa, em versão beta (versão de testes), deverá permitir armazenar o cadastro de, no máximo, 5 (cinco) livros por vez (por execução do programa).  
  
Para cada livro, a aplicação deverá armazenar as seguintes informações:

* Um código único, gerado automaticamente pelo sistema;  
* O nome dos autores da obra;  
* O nome da obra;  
* O nome da editora.

  
O programa deverá apresentar um menu de opções ao usuário:  
  
1 – Inserir um novo cadastro: ao selecionar essa opção, o usuário deverá ser capaz de informar todos os dados de um livro. A saber: seu nome, os autores, e o nome da editora; o código do cadastro não deve ser informado pelo usuário pois o programa deve gerar automaticamente. Caso o programa já tenha armazenado o número máximo de livros (cinco), deverá ser exibida uma mensagem de erro: “Sistema de cadastro lotado. Não é possível armazenar mais informações!”. O código de um cadastro deve ser preenchido automaticamente pelo sistema e o usuário não deve ter a opção de alterar esse código. É importante salientar que para cada cadastro, deve-se ter um código distinto, ou seja, não deve ser possível que existam dois cadastros com o mesmo código, ao mesmo tempo;  
  
2 – Mostrar todos os cadastros: ao selecionar essa opção, o programa deverá imprimir, na tela, para cada livro, seu código, seu nome, os autores e a editora. Essa opção deverá mostrar na tela apenas os dados de livros que foram cadastrados. Caso seja impressa alguma outra informação sobressalente, ou caso faltem informações previamente cadastradas, será considerado um erro de programação. Caso nenhum cliente tenha sido cadastrado, antes de tentar executar essa opção (2 - Mostrar todos os cadastros), o programa deve exibir a mensagem “Lista vazia!”;  
  
0 – Encerrar: o programa deve ser encerrado se, e somente se, o usuário escolher essa opção.  
  
Observações importantes:  
Sempre que o usuário desejar executar as opção 1 ou 2 (exceto 0), o programa deve realizar o que é pedido no enunciado e, logo após isso, o programa deve retornar ao menu, dando ao usuário a possibilidade de executar novamente alguma das opções listadas no menu.  
  
Caso o usuário escolha uma opção que não conste no menu, o programa deverá exibir uma mensagem de erro como, por exemplo, “Erro: opção inválida!”; retornando ao menu logo em seguida. Caso contrário, o programa não deverá imprimir essa mensagem de erro, ou seja, se o usuário tentar executar as opções 0, 1 ou 2, o programa não entra em estado de erro.
