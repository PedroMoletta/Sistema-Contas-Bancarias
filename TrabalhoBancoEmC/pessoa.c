//
// Created by guilh on 01/06/2023.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pessoa.h"

ptr_pessoa p[MAX];

struct Pessoa {
    int numero;
    char cliente[51];
    int especial;
    float saldo;
};

void cadastrar(int pos){
    if(p[pos]==NULL){
        p[pos] = (ptr_pessoa)malloc(sizeof(struct Pessoa));
        fflush(stdin);
        printf("Digite numero da conta: \n");
        scanf("%d", &p[pos]->numero);
        fflush(stdin);
        printf("Digite o nome do cliente: \n");
        gets(p[pos]->cliente);
        fflush(stdin);
        printf("1-Especial 2-Normal: \n");
        scanf("%d", &p[pos]->especial);
        printf("Saldo inicial da conta: \n");
        scanf("%f", &p[pos]->saldo);
        printf("Cadastrado com sucesso\n");
    }
}

void procurar(int tam){
    char nomeProc[51];
    fflush(stdin);
    printf("Digite o nome a ser encontrado: \n");
    gets(nomeProc);
    for (int i = 0; i < tam; ++i) {
        if(strcmp(p[i]->cliente, nomeProc)==0){
            imprimir(*p[i]);
            return;
        }
    }
    printf("Nao encontrado \n");

}
void imprimir(struct Pessoa p){
    printf("+-------DADOS DO CLIENTE-------+\n");
    printf("Conta.: %d\n", p.numero);
    printf("Clente: %s\n", p.cliente);
    printf("Tipo..: %d\n", p.especial);
    printf("Saldo.: %.2f\n", p.saldo);
    printf("+------------------------------+\n");
}

void imprimirTodos(int tam){
    for (int i = 0; i < tam; ++i) {
        imprimir(*p[i]);
        printf("\n");
    }
}

void alterar(int pos){
    char nomeProc[51];
    fflush(stdin);
    printf("Digite o nome da conta para ser alterada: \n");
    gets(nomeProc);
    for (int i = 0; i < pos; ++i) {
        if(strcmp(p[i]->cliente, nomeProc)==0){

            printf("Digite o nome do cliente para ser alterado: \n");
            scanf("%s",&p[i]->cliente);
            fflush(stdin);
            printf("1-Especial 2-Normal: \n");
            scanf("%d", &p[i]->especial);
            printf("Saldo atual da conta: \n");
            scanf("%f", &p[i]->saldo);
            printf("Atualizado com sucesso\n");
            imprimir(*p[i]);
            return;
        }
    }
    printf("Nao encontrado \n");

}

void deposito(int pos){
    float deposito;
    float soma;

    char nomeProc[51];
    fflush(stdin);
    printf("Digite o nome da conta para depositar: \n");
    gets(nomeProc);
    for (int i = 0; i < pos; ++i) {
        if(strcmp(p[i]->cliente, nomeProc)==0){

            soma = p[i]->saldo;

            printf("Quantidade do deposito: \n");
            scanf("%f", &deposito);

            p[i]->saldo = deposito + soma;


            printf("Atualizado com sucesso\n");
            imprimir(*p[i]);
            return;
        }
    }
    printf("Nao encontrado \n");

}

void saque(int pos){
    float saque;
    float sub;

    char nomeProc[51];
    fflush(stdin);
    printf("Digite o nome da conta para sacar: \n");
    gets(nomeProc);
    for (int i = 0; i < pos; ++i) {
        if(strcmp(p[i]->cliente, nomeProc)==0){

            sub = p[i]->saldo;

            printf("Quantidade do saque: \n");
            scanf("%f", &saque);

            p[i]->saldo = sub - saque;


            printf("Atualizado com sucesso\n");
            imprimir(*p[i]);
            return;
        }
    }
    printf("Nao encontrado \n");

}

void saldo(int pos){
    float somatoria = 0;
    float aux;
    for (int i = 0; i < pos; i++){
        aux = p[i]->saldo;
        somatoria += aux;

    }
    printf("Saldo total: %.2f\n", somatoria);
}