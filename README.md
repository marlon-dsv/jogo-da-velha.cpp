# Jogo da Velha em C++

## Sobre o Projeto

Desenvolvimento de uma versão do clássico **Jogo da Velha** utilizando a linguagem C++ padrão, como parte das atividades acadêmicas da disciplina de Algoritmos e Programação da Universidade do Vale do Itajaí (UNIVALI).

A aplicação permite uma partida entre dois jogadores humanos, com alternância de turnos, validação de jogadas e identificação automática das condições de vitória ou empate.

O projeto tem como foco a aplicação prática de matrizes, estruturas condicionais, estruturas de repetição e lógica de programação.

## Funcionalidades

- Partida entre dois jogadores humanos.
- Identificação dos jogadores por nome.
- Representação do tabuleiro por uma matriz 3 × 3.
- Alternância de turnos entre os símbolos `X` e `O`.
- Exibição organizada do tabuleiro no terminal.
- Entrada de jogadas por meio de coordenadas de linha e coluna.
- Validação dos limites do tabuleiro.
- Impedimento de jogadas em posições já ocupadas.
- Solicitação de uma nova jogada ao mesmo jogador quando a entrada é inválida.
- Verificação de combinações vencedoras nas linhas, colunas e diagonais.
- Identificação de empate quando todas as posições estão preenchidas sem um vencedor.
- Exibição do tabuleiro final e do resultado da partida.

## Regras do Jogo

Dois jogadores alternam suas jogadas, posicionando seus respectivos símbolos em uma das nove casas do tabuleiro.

A vitória ocorre quando um jogador consegue alinhar três símbolos iguais em uma das seguintes configurações:

- Horizontal: três posições consecutivas na mesma linha.
- Vertical: três posições consecutivas na mesma coluna.
- Diagonal: três posições consecutivas em uma das diagonais do tabuleiro.

Caso todas as nove posições sejam preenchidas sem que nenhuma condição de vitória seja alcançada, a partida termina empatada.

## Conceitos de Programação Aplicados

- **Matrizes bidimensionais:** representação e manipulação do tabuleiro 3 × 3.
- **Variáveis e tipos de dados:** armazenamento dos nomes, símbolos e estados da partida.
- **Estruturas condicionais:** validação de jogadas e identificação de resultados.
- **Estruturas de repetição:** controle dos turnos e execução da partida.
- **Operadores relacionais e lógicos:** verificação dos limites e das combinações vencedoras.
- **Validação de entradas:** tratamento de coordenadas inválidas e posições ocupadas.
- **Controle de fluxo:** alternância de jogadores e encerramento da partida.

## Tecnologias

- **Linguagem:** C++ padrão
- **Execução:** Terminal/console
- **Estrutura de dados principal:** matriz bidimensional 3 × 3.

## Objetivo Acadêmico

Consolidar os conhecimentos de programação estruturada por meio da implementação de um jogo completo, exercitando a manipulação de matrizes, a validação de dados e a construção de algoritmos para tomada de decisões.

## Instituição

Universidade do Vale do Itajaí (UNIVALI)  
Disciplina: Algoritmos e Programação 1

