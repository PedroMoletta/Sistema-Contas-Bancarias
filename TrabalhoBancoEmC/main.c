#include <stdio.h>
#include "pessoa.h"

// Constantes
enum
{
    OP_NAO_SELECIONADA = 0,
    OP_ADICIONAR,
    OP_ALTERAR,
    OP_LOCALIZAR,
    OP_LISTAR_CONTAS,
    OP_REALIZAR_DEPOSITO,
    OP_REALIZAR_SAQUE,
    OP_SALDO_GERAL,
    OP_SAIR,
};

// Protótipos
int menu();

int main() {
    int posicao = 0;

    int opcao = OP_NAO_SELECIONADA;


    while(opcao != OP_SAIR)
    {
        opcao = menu();
        switch(opcao)
        {
            case OP_ADICIONAR:

                cadastrar(posicao);
                posicao++;
                break;

            case OP_ALTERAR:
                alterar(posicao);

                break;

            case OP_LOCALIZAR:
                procurar(posicao);
                break;

            case OP_LISTAR_CONTAS:
                imprimirTodos(posicao);
                break;

            case OP_REALIZAR_DEPOSITO:
                deposito(posicao);
                break;

            case OP_REALIZAR_SAQUE:
                saque(posicao);
                break;

            case OP_SALDO_GERAL:
                saldo(posicao);

                break;
            case OP_SAIR:

                break;
        }


    }

    return 0;
}

int menu()
{
    int op;

    printf("%d - Inserir nova conta\n", OP_ADICIONAR);
    printf("%d - Alterar dados de uma conta\n", OP_ALTERAR);
    printf("%d - Procurar uma conta\n", OP_LOCALIZAR);
    printf("%d - Listar todas as contas\n", OP_LISTAR_CONTAS);
    printf("%d - Realizar deposito\n", OP_REALIZAR_DEPOSITO);
    printf("%d - Realizr saque\n", OP_REALIZAR_SAQUE);
    printf("%d - Mostrar saldo geral\n", OP_SALDO_GERAL);
    printf("%d - Sair\n", OP_SAIR);
    printf("Selecione sua opcao: ");
    scanf("%d", &op);


    return op;
}

