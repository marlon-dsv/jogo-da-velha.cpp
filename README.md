# 🎮 Jogo da Velha em C++

Um projeto desenvolvido em **C++** que implementa o clássico **Jogo da Velha para dois jogadores**, executado diretamente pelo terminal/console.

O projeto foi desenvolvido como atividade da disciplina de **Algoritmos e Programação**, com o objetivo de aplicar conceitos fundamentais de programação, como **matrizes, estruturas de repetição, estruturas condicionais, validação de dados e manipulação de caracteres**.

---

## 📚 Informações do Projeto

| Informação | Detalhes |
|---|---|
| **Instituição** | Universidade do Vale do Itajaí – UNIVALI |
| **Disciplina** | Algoritmos e Programação |
| **Professor** | Welington Gadelha |
| **Projeto** | M3 – O Jogo da Velha |
| **Linguagem** | C++ |
| **Tipo** | Aplicação de console |
| **Jogadores** | 2 jogadores humanos |

---

## 🎯 Objetivo

O objetivo deste projeto é desenvolver uma versão funcional do **Jogo da Velha**, permitindo que dois jogadores disputem uma partida utilizando o terminal.

O programa deve:

- Solicitar o nome dos dois jogadores;
- Representar o tabuleiro utilizando uma matriz `3x3`;
- Alternar as jogadas entre os jogadores;
- Permitir que cada jogador escolha linha e coluna;
- Impedir jogadas em posições já ocupadas;
- Validar as posições informadas;
- Detectar vitória;
- Detectar empate;
- Exibir o tabuleiro durante a partida;
- Informar o resultado final da partida.

---

# 🕹️ Como funciona o jogo

O jogo utiliza um tabuleiro composto por **3 linhas e 3 colunas**, totalizando 9 posições.

Cada jogador recebe um símbolo:

- ❌ **Jogador 1 → X**
- ⭕ **Jogador 2 → O**

O jogador escolhe uma posição informando primeiro a **linha** e depois a **coluna**.

As posições são numeradas de `0` a `2`.

### 📍 Coordenadas do tabuleiro

```text
       COLUNAS
        0   1   2

LINHA 0  _ | _ | _
        -----------
LINHA 1  _ | _ | _
        -----------
LINHA 2  _ | _ | _
```

Por exemplo, para escolher a posição central:

```text
Linha: 1
Coluna: 1
```

O resultado será:

```text
   |   |
-----------
   | X |
-----------
   |   |
```

---

# ⚙️ Funcionalidades

## 👥 Cadastro dos jogadores

No início da execução, o programa solicita o nome dos dois jogadores:

```text
nome do player (X): Joao
nome do player (o): Maria
```

O primeiro jogador recebe o símbolo `X` e o segundo recebe o símbolo `O`.

---

## 🧩 Inicialização do tabuleiro

O tabuleiro é representado por uma matriz bidimensional:

```cpp
char jogo[3][3];
```

Todas as posições são inicializadas com um espaço em branco:

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        jogo[i][j] = ' ';
    }
}
```

Dessa maneira, todas as nove posições começam disponíveis para serem utilizadas.

---

## 🔄 Alternância dos jogadores

A variável:

```cpp
int jogador = 1;
```

é responsável por controlar qual jogador está realizando a jogada.

Após uma jogada válida, o programa alterna entre os jogadores:

```cpp
if (jogador == 1)
    jogador = 2;
else
    jogador = 1;
```

Dessa forma:

- Jogador 1 → `X`
- Jogador 2 → `O`

---

# 📍 Escolha da jogada

A cada rodada, o jogador deverá informar:

1. A linha desejada;
2. A coluna desejada.

### Linhas

```text
0 → primeira linha
1 → segunda linha
2 → terceira linha
```

### Colunas

```text
0 → primeira coluna
1 → segunda coluna
2 → terceira coluna
```

---

# 🚫 Validação das jogadas

O programa verifica se a linha informada está dentro do intervalo permitido:

```cpp
if (linhas < 0 || linhas > 2) {
    cout << "linha invalida!\n";
}
```

Caso seja informada uma linha inválida:

```text
linha invalida!
```

O mesmo procedimento é realizado para a coluna:

```cpp
if (colunas < 0 || colunas > 2) {
    cout << "coluna invalida!\n";
}
```

---

## 🔒 Verificação de posição ocupada

Antes de realizar uma jogada, o programa verifica se a posição escolhida está disponível:

```cpp
if (jogo[linhas][colunas] != ' ') {
    cout << "jogada ja usada, tente novamente!\n";
}
```

Caso a posição já tenha sido utilizada, o jogador deverá escolher outra.

Mensagem apresentada:

```text
jogada ja usada, tente novamente!
```

---

# 🏆 Condições de vitória

Um jogador vence quando consegue formar uma sequência de **três símbolos iguais**.

Existem quatro possibilidades:

### ➡️ Linha horizontal

```text
 X | X | X
-----------
 O | O |
-----------
   |   |
```

---

### ⬇️ Coluna vertical

```text
 X | O |
-----------
 X |   | O
-----------
 X |   |
```

---

### ↘️ Diagonal principal

```text
 X | O |
-----------
   | X |
-----------
   |   | X
```

---

### ↙️ Diagonal secundária

```text
   | O | X
-----------
   | X | O
-----------
 X |   |
```

---

## 🔍 Verificação das linhas e colunas

O programa utiliza um laço `for` para verificar as três linhas e as três colunas:

```cpp
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
```

---

## 🔀 Verificação das diagonais

### Diagonal principal

```cpp
if (jogo[0][0] == jogo[1][1] &&
    jogo[1][1] == jogo[2][2] &&
    jogo[0][0] != ' ') {

    fimdejogo = 1;
}
```

### Diagonal secundária

```cpp
if (jogo[0][2] == jogo[1][1] &&
    jogo[1][1] == jogo[2][0] &&
    jogo[0][2] != ' ') {

    fimdejogo = 1;
}
```

---

# 🤝 Condição de empate

Caso todas as posições do tabuleiro sejam preenchidas e nenhum jogador consiga formar uma sequência de três símbolos, o jogo termina em **empate**.

A verificação é feita percorrendo todas as posições da matriz:

```cpp
empate = 1;

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

        if (jogo[i][j] == ' ') {
            empate = 0;
        }
    }
}
```

Se nenhuma posição estiver vazia, o programa considera que houve empate.

---

# 🖥️ Interface

O jogo é executado diretamente no terminal.

Durante a partida, o tabuleiro é exibido da seguinte forma:

```text
 X | O | X
-----------
 O | X |  
-----------
   |   | O
```

Após cada jogada, o tabuleiro é atualizado.

---

# 🛠️ Tecnologias utilizadas

O projeto foi desenvolvido utilizando:

- **C++**
- `iostream`
- `cstdlib`
- Matriz bidimensional `3x3`
- Estruturas condicionais `if/else`
- Estrutura `switch`
- Estrutura de repetição `for`
- Estrutura de repetição `while`
- Variáveis `int`
- Variáveis `char`
- Entrada e saída pelo console

---

# 📦 Bibliotecas utilizadas

O código utiliza duas bibliotecas:

```cpp
#include <iostream>
#include <cstdlib>
```

### `iostream`

Utilizada para entrada e saída de dados:

```cpp
cin
cout
```

### `cstdlib`

Utilizada no projeto para comandos como:

```cpp
system("cls");
system("pause");
```

---

# 💻 Requisitos

Para executar o projeto, é necessário possuir um compilador C++.

### Recomendado

- Windows
- GCC / MinGW
- Code::Blocks
- Dev-C++
- Visual Studio
- Visual Studio Code com compilador C++

> **Observação:** o código utiliza `system("cls")` e `system("pause")`, portanto a execução foi pensada principalmente para o ambiente Windows.

---

# ▶️ Como executar

## 1. Clone o repositório

```bash
git clone URL_DO_SEU_REPOSITORIO
```

Entre na pasta do projeto:

```bash
cd jogo-da-velha
```

---

## 2. Compile o programa

Caso esteja utilizando o `g++`:

```bash
g++ main.cpp -o jogo_da_velha
```

---

## 3. Execute o programa

No Windows:

```bash
jogo_da_velha.exe
```

Ou:

```bash
.\jogo_da_velha.exe
```

---

# 📂 Estrutura do projeto

```text
jogo-da-velha/
│
├── main.cpp
│
├── README.md
│
└── .gitignore
```

### `main.cpp`

Arquivo que contém todo o código-fonte do jogo.

### `README.md`

Arquivo responsável pela documentação do projeto.

### `.gitignore`

Arquivo utilizado para impedir que arquivos desnecessários sejam enviados para o GitHub.

Exemplo:

```gitignore
*.exe
*.o
*.out
.vscode/
```

---

# 🧠 Conceitos de programação utilizados

O projeto foi desenvolvido para aplicar conceitos fundamentais da disciplina de **Algoritmos e Programação**.

## Matriz

O tabuleiro utiliza uma matriz bidimensional:

```cpp
char jogo[3][3];
```

---

## Estrutura `for`

Utilizada para percorrer as linhas e colunas:

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        // código
    }
}
```

---

## Estrutura `while`

Responsável por manter o jogo funcionando até que exista um vencedor:

```cpp
while (fimdejogo == 0) {
    // código do jogo
}
```

---

## Estrutura `if/else`

Utilizada para realizar diversas verificações, como:

- Jogador atual;
- Validação da linha;
- Validação da coluna;
- Posição ocupada;
- Vitória;
- Empate.

---

## Estrutura `switch`

Utilizada para definir o símbolo que será colocado no tabuleiro:

```cpp
switch (jogador) {

    case 1:
        jogo[linhas][colunas] = 'x';
        break;

    case 2:
        jogo[linhas][colunas] = 'o';
        break;
}
```

---

# 📋 Regras do jogo

1. O jogo possui dois jogadores.
2. O primeiro jogador utiliza `X`.
3. O segundo jogador utiliza `O`.
4. O jogador `X` começa.
5. Cada jogador escolhe uma linha e uma coluna.
6. Uma posição ocupada não pode ser escolhida novamente.
7. A linha deve estar entre `0` e `2`.
8. A coluna deve estar entre `0` e `2`.
9. O jogador vence ao formar três símbolos iguais.
10. A sequência pode estar em:
    - Uma linha;
    - Uma coluna;
    - Uma diagonal.
11. Caso todas as posições sejam preenchidas sem vencedor, o resultado é empate.

---

# 🎮 Exemplo de partida

Ao iniciar o programa:

```text
======= JOGO DA VELHA =======

nome do player (X): Joao
nome do player (o): Maria
```

O jogador `Joao` começa:

```text
Joao, escolha sua jogada

para a linha desejada, entao:

digite 0 para a primeira linha
digite 1 para a segunda linha
digite 2 para a terceira linha

digite a linha escolhida:
```

Depois será solicitada a coluna:

```text
para a coluna desejada, entao:

digite 0 para a primeira coluna
digite 1 para a segunda coluna
digite 2 para a terceira coluna

digite a coluna escolhida:
```

Após algumas jogadas, o tabuleiro poderá aparecer assim:

```text
 X | O | X
-----------
 O | X |
-----------
   |   | X
```

Nesse exemplo, `X` venceu pela diagonal principal.

---

# 🚨 Exemplos de erros

## Linha inválida

Entrada:

```text
digite a linha escolhida: 5
```

Saída:

```text
linha invalida!
```

---

## Coluna inválida

Entrada:

```text
digite a coluna escolhida: 8
```

Saída:

```text
coluna invalida!
```

---

## Posição já utilizada

Caso o jogador tente selecionar uma posição ocupada:

```text
jogada ja usada, tente novamente!
```

---

# 📤 Saídas esperadas

## 🏆 Vitória do jogador X

Exemplo:

```text
 X | O |
-----------
   | X |
-----------
 O |   | X


Joao VENCEU O JOGO !!!

Maria NAO FOI DESTA VEZ!
```

O jogador `Joao` venceu através da diagonal principal.

---

## 🏆 Vitória do jogador O

Exemplo:

```text
 O | X |
-----------
 O | X |
-----------
 O |   | X


Maria VENCEU O JOGO !!!

Joao NAO FOI DESTA VEZ!
```

Nesse caso, `Maria` venceu completando uma coluna.

---

## 🤝 Empate

Exemplo:

```text
 X | O | X
-----------
 X | O | O
-----------
 O | X | X


DEU VELHA !!! EMPATE
```

Nesse cenário, todas as posições estão preenchidas e nenhum jogador conseguiu formar três símbolos iguais.

---

## ❌ Jogada inválida

### Linha

```text
digite a linha escolhida: 9

linha invalida!
```

### Coluna

```text
digite a coluna escolhida: 7

coluna invalida!
```

### Posição ocupada

```text
jogada ja usada, tente novamente!
```

---

# 🚀 Possíveis melhorias futuras

Algumas funcionalidades podem ser adicionadas futuramente:

- [ ] Criar um menu inicial;
- [ ] Permitir iniciar uma nova partida;
- [ ] Criar um placar entre os jogadores;
- [ ] Permitir escolher quem começa;
- [ ] Adicionar cores ao terminal;
- [ ] Melhorar a interface do tabuleiro;
- [ ] Criar modo jogador vs. computador;
- [ ] Implementar inteligência artificial;
- [ ] Criar funções para organizar melhor o código;
- [ ] Tornar o programa compatível com Linux e macOS.

---

# 👨‍💻 Autor

Projeto desenvolvido para a disciplina de **Algoritmos e Programação – UNIVALI**.

---

# 🎓 Finalidade acadêmica

Este projeto foi desenvolvido com finalidade **acadêmica e educacional**, buscando demonstrar na prática conceitos fundamentais de programação em C++.

Entre os principais conceitos aplicados estão:

- Matrizes;
- Variáveis;
- Condicionais;
- Laços de repetição;
- `switch`;
- Entrada e saída de dados;
- Validação de informações;
- Lógica de programação.

---

# ⭐ Considerações finais

O projeto implementa uma versão simples e funcional do **Jogo da Velha**, permitindo que dois jogadores disputem uma partida diretamente pelo terminal.

Através desse projeto foi possível aplicar conceitos básicos de **C++ e lógica de programação**, utilizando uma matriz `3x3` para representar o tabuleiro e estruturas de controle para gerenciar as jogadas, verificar vitórias e identificar empates.

## 🎮 Bom jogo!
