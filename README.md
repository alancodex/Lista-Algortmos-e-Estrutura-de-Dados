# 📚 Atividades de Estruturas de Dados e Recursividade em C++

Um repositório contendo soluções para exercícios fundamentais de Estruturas de Dados (Listas, Pilhas e Filas) e Algoritmos Recursivos vs. Iterativos, todos implementados em C++.

## 🎯 Objetivo

Consolidar o conhecimento sobre:

1.  **Manipulação de Memória e Estruturas:** Utilização de `structs`, ponteiros (`*`) e alocação dinâmica (`malloc`/`free`, `new`/`delete`).
2.  **Recursividade vs. Iteração:** Entender a aplicação e as diferenças de performance entre soluções recursivas e suas contrapartes iterativas.
3.  **Estruturas de Dados Lineares:** Implementação e aplicação das operações básicas de Listas Encadeadas, Pilhas (Stack) e Filas (Queue).

---

## 🛠️ Detalhes da Implementação

Todos os códigos foram escritos em C++ e seguem as seguintes diretrizes:

* **Padrão:** Uso de `using namespace std;`.
* **Comentários:** Códigos entregues **sem comentários** internos.
* **Recursividade:** Prioridade de implementação em **funções recursivas** sempre que o contexto da questão permitiu.
* **Structs/Classes:** Utilização majoritária de `structs` para definição das estruturas de dados.

---

## 📂 Visão Geral dos Exercícios

Os exercícios foram divididos em três grandes blocos.

### I. Fundamentos de Structs e Ponteiros

| # | Título | Conceito Principal |
| :-: | :--- | :--- |
| **1** | Criando uma Estrutura Simples | Definição básica de `struct` e entrada/saída de dados |
| **2** | Vetor de Structs | Uso de array de `structs` e cálculo de média |
| **3** | Structs e Funções | Passagem de `struct` como parâmetro para formatação de dados |
| **4** | Structs e Ponteiros | Alocação dinâmica de `struct` (`malloc`, `free`) |
| **5** | Registro de Funcionários | Vetor de `structs` (Gestão de Dados) |
| **6** | Cadastro de Livros | Filtragem de dados em vetor de `structs` |
| **7** | Agenda de Contatos | Busca sequencial em vetor de `structs` |
| **8** | Cálculo de Área e Perímetro | Funções que operam sobre um `struct` |
| **9** | Registro de Pacientes | Filtragem por critério de idade |
| **10** | Sistema Bancário Simples | Funções de manipulação de estado (`deposito`, `saque`) |

### II. Algoritmos Recursivos vs. Iterativos

| # | Título | Tipo de Solução | Observação |
| :-: | :--- | :--- | :--- |
| **1** | Número de Dígitos | Recursiva | Divisão por 10 (Base 10) |
| **2** | Maior Elemento | Recursiva | Comparação do último elemento com o maior do resto do array |
| **3** | Soma dos Dígitos | Recursiva | Uso do operador Módulo (`%`) |
| **4** | Produto por Somas | Recursiva | Simulação da multiplicação pela soma sucessiva |
| **5** | Contagem Regressiva | Recursiva | Função com *side-effect* (impressão) |
| **6** | Palíndromo | Recursiva | Comparação dos caracteres externos |
| **7** | Contagem Regressiva | Iterativa | Equivalente do ex. 5, com `while` |
| **8** | Maior Elemento | Iterativa | Equivalente do ex. 2, com `for` |
| **9** | Soma dos Dígitos | Iterativa | Equivalente do ex. 3, com `while` |
| **10** | Produto por Somas | Iterativa | Equivalente do ex. 4, com `for` |

### III. Listas, Pilhas e Filas

#### ➡️ Listas Encadeadas (Singly Linked List)

| # | Título | Detalhe |
| :-: | :--- | :--- |
| **1** | Implementação de Lista Simples | Inserção (Início/Fim), Remoção, Exibição |
| **2** | Contagem de Elementos | Implementação **recursiva** da contagem de nós. |
| **3** | Inserção Ordenada | Mantém a lista sempre em ordem crescente. |
| **4** | Reverter uma Lista | Inversão de ponteiros **in-place** (sem nova lista). |

#### 📦 Pilhas (Stack)

| # | Título | Detalhe |
| :-: | :--- | :--- |
| **5** | Implementação de Pilha c/ Vetor | `push`, `pop`, `top`, `isEmpty` (array estático). |
| **6** | Parênteses Balanceados | Uso da lógica de Pilha para validação de expressões. |
| **7** | Inverter uma String | Uso de Pilha (LIFO) para reverter a ordem dos caracteres. |
| **8** | Decimal para Binário | Conversão com Pilha para armazenar restos na ordem inversa. |

#### 📬 Filas (Queue)

| # | Título | Detalhe |
| :-: | :--- | :--- |
| **9** | Implementação de Fila c/ Vetor | `enqueue`, `dequeue`, `front`, `isEmpty` (implementação circular). |
| **10** | Fila Circular | Reforça a implementação circular para otimização de espaço. |
| **11** | Simulação Bancária | Uso de Fila (FIFO) para modelar ordem de atendimento. |
| **12** | Inverter uma Fila | Uso de Pilha como estrutura auxiliar para inversão (FIFO -> LIFO -> FIFO). |

---

## 🚀 Como Executar

Para compilar e executar qualquer um dos códigos (e.g., `exemplo.cpp`), utilize um compilador C++ (como g++):

```bash
# 1. Compilar
g++ nome_do_arquivo.cpp -o nome_do_arquivo

# 2. Executar
./nome_do_arquivo
