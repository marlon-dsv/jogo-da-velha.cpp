#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    char jogo[3][3];
    char player[20], player2[20];

    int linhas, colunas;
    int jogador = 1;
    int fimdejogo = 0;
    int empate;

    cout << "\n\n ======= JOGO DA VELHA ======= \n\n";

    cout << "nome do player (X): ";
    cin >> player;

    cout << "nome do player (o): ";
    cin >> player2;

    // Inicializa a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            jogo[i][j] = ' ';
        }
    }

    // Enquanto ninguém ganhar, continua o jogo
    while (fimdejogo == 0) {

        system("cls");

        cout << "\n " << jogo[0][0] << " | " << jogo[0][1] << " | " << jogo[0][2];
        cout << "\n===========";
        cout << "\n " << jogo[1][0] << " | " << jogo[1][1] << " | " << jogo[1][2];
        cout << "\n===========";
        cout << "\n " << jogo[2][0] << " | " << jogo[2][1] << " | " << jogo[2][2] << "\n\n\n";

        // Jogador 1 ou jogador 2
        if (jogador == 1) {
            cout << player << ", escolha sua jogada\n";
        }
        else {
            cout << player2 << ", escolha sua jogada\n";
        }

        cout << "\npara a linha desejada, entao: \n\n";
        cout << "digite 0 para a primeira linha\n";
        cout << "digite 1 para a segunda linha\n";
        cout << "digite 2 para a terceira linha\n\n";

        cout << "digite a linha escolhida: ";
        cin >> linhas;

        system("cls");

        if (linhas < 0 || linhas > 2) {
            cout << "linha invalida!\n";
            system("pause");
            continue;
        }

        cout << "\npara a coluna desejada, entao: \n\n";
        cout << "digite 0 para a primeira coluna\n";
        cout << "digite 1 para a segunda coluna\n";
        cout << "digite 2 para a terceira coluna\n\n";

        cout << "digite a coluna escolhida: ";
        cin >> colunas;

        system("cls");

        if (colunas < 0 || colunas > 2) {
            cout << "coluna invalida!\n";
            system("pause");
            continue;
        }

        // Verifica se a posição já foi utilizada
        if (jogo[linhas][colunas] != ' ') {
            cout << "jogada ja usada, tente novamente!\n";
            system("pause");
            continue;
        }

        // Coloca X ou O na posição escolhida
        switch (jogador) {

            case 1:
                jogo[linhas][colunas] = 'x';
                break;

            case 2:
                jogo[linhas][colunas] = 'o';
                break;
        }

        // Verifica linhas e colunas
        for (int i = 0; i < 3; i++) {

            if (jogo[i][0] == jogo[i][1] &&
                jogo[i][1] == jogo[i][2] &&
                jogo[i][0] != ' ') {

                fimdejogo = 1;
            }

            if (jogo[0][i] == jogo[1][i] &&
                jogo[1][i] == jogo[2][i] &&
                jogo[0][i] != ' ') {

                fimdejogo = 1;
            }
        }

        // Verifica a diagonal principal
        if (jogo[0][0] == jogo[1][1] &&
            jogo[1][1] == jogo[2][2] &&
            jogo[0][0] != ' ') {

            fimdejogo = 1;
        }

        // Verifica a diagonal secundária
        if (jogo[0][2] == jogo[1][1] &&
            jogo[1][1] == jogo[2][0] &&
            jogo[0][2] != ' ') {

            fimdejogo = 1;
        }

        // Verifica empate
        empate = 1;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                if (jogo[i][j] == ' ') {
                    empate = 0;
                }
            }
        }

        // Troca o jogador
        if (fimdejogo == 0 && empate == 0) {

            if (jogador == 1)
                jogador = 2;
            else
                jogador = 1;
        }

        // Se todas as posições estiverem preenchidas, termina
        if (empate == 1)
            break;
    }

    system("cls");

    // Mostra o tabuleiro final
    cout << "\n " << jogo[0][0] << " | " << jogo[0][1] << " | " << jogo[0][2];
    cout << "\n===========";
    cout << "\n " << jogo[1][0] << " | " << jogo[1][1] << " | " << jogo[1][2];
    cout << "\n===========";
    cout << "\n " << jogo[2][0] << " | " << jogo[2][1] << " | " << jogo[2][2] << "\n";

    // Mostra o resultado
    if (fimdejogo == 1) {

        if (jogador == 1) {

            cout << "\n" << player << " VENCEU O JOGO !!!\n";
            cout << "\n" << player2 << " NAO FOI DESTA VEZ!\n";
            cout << "\n";
        }
        else {

            cout << "\n" << player2 << " VENCEU O JOGO !!!\n";
            cout << "\n" << player << " NAO FOI DESTA VEZ!\n";
            cout << "\n";
        }
    }
    else {

        cout << "\n DEU VELHA !!! EMPATE\n";
        cout << "\n";
    }

    return 0;
}