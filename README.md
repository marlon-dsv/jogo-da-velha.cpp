# 🎮 Jogo da Velha em C++

Projeto desenvolvido em **C++** para a disciplina de **Algoritmos e Programação – UNIVALI**.

O programa simula uma partida de **Jogo da Velha entre dois jogadores**, utilizando uma matriz `3x3`.

## 📌 Funcionalidades

- Cadastro dos nomes dos jogadores;
- Tabuleiro 3x3;
- Jogadores `X` e `O`;
- Alternância entre os jogadores;
- Validação de linhas e colunas;
- Impede jogadas em posições ocupadas;
- Verificação de vitória;
- Verificação de empate;
- Exibição do resultado final.

## 🛠️ Tecnologias

- C++
- `iostream`
- `cstdlib`

## ▶️ Como executar

### Compilar

Utilizando o `g++`:

```bash
g++ main.cpp -o jogo_da_velha
```

### Executar

No Windows:

```bash
jogo_da_velha.exe
```

## 🎮 Exemplo do jogo

```text
======= JOGO DA VELHA =======

nome do player (X): Joao
nome do player (o): Maria

 X | O |  
-----------
   | X |  
-----------
   |   | X

Joao VENCEU O JOGO !!!

Maria NAO FOI DESTA VEZ!
```

## 🏆 Saídas esperadas

### Vitória

```text
Joao VENCEU O JOGO !!!

Maria NAO FOI DESTA VEZ!
```

### Empate

```text
DEU VELHA !!! EMPATE
```

### Jogada inválida

```text
linha invalida!
```

ou:

```text
coluna invalida!
```

### Posição já ocupada

```text
jogada ja usada, tente novamente!
```

## 📂 Estrutura

```text
jogo-da-velha/
├── main.cpp
├── README.md
└── .gitignore
```

## 👨‍💻 Autor

Projeto acadêmico desenvolvido para a disciplina de **Algoritmos e Programação – UNIVALI**.

## 🎓 Objetivo

Aplicar conceitos básicos de programação em C++, como:

- Matrizes;
- Variáveis;
- `if/else`;
- `for`;
- `while`;
- `switch`;
- Entrada e saída de dados;
- Lógica de programação.
