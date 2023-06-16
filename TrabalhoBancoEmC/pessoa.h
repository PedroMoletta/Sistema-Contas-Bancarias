//
// Created by guilh on 01/06/2023.
//


#define MAX 10

typedef struct Pessoa * ptr_pessoa;

/**
 * Método para cadastrar uma nova pessoa na agenda
 * Detalhe: necessario alocar um espaco na memoria
 * para guardar a informaçao
 */
void cadastrar(int pos);

/**
 * Método para procurar uma pessoa cadastrada,
 * usa-se o campo nome para encontrar.
 * Pede-se o nome inicialmente, e depois varre o vetor
 * para mostrar os dados
 */
void procurar(int tam);

/**
 * Imprimir os dados de uma pessoa
 * @param p
 */
void imprimir(struct Pessoa p);

/**
 * Imprime toda a lista
 */
void imprimirTodos(int tam);

/**
 * Altera um cadastro
 */
void alterar(int pos);

/**
 * Efetuar deposito em uma conta
 */
void deposito(int pos);

/**
 * Efetuar saque em uma conta
 */
void saque(int pos);

/**
 * Mostrar saldo de todas as contas
 */
void saldo(int pos);
