# Sistema de Algoritmos de Ordenação em C

Projeto desenvolvido para implementação, testes e análise de algoritmos de ordenação utilizando linguagem C.

## Objetivo

Implementar algoritmos clássicos de ordenação, realizar testes automatizados, analisar cobertura de código e desempenho utilizando ferramentas específicas.

---

## Estrutura do Projeto

```text
Algoritmos_Ordenacao/
│
├── src/
│   ├── basics/
│   │   ├── bubble.c
│   │   ├── selection.c
│   │   └── insertion.c
│   │
│   ├── advanced/
│   │   ├── merge.c
│   │   ├── quick.c
│   │   └── heap.c
│   │
│   └── main.c
│
├── tests/
│   └── test_basic.c
│
├── docs/
│   ├── uso-ia.md
│   ├── cobertura.md
│   ├── perfil.md
│   └── guia.md
│
├── Makefile
├── README.md
└── .gitignore
```

---

## Algoritmos Implementados

### Algoritmos Básicos

- Bubble Sort
- Selection Sort
- Insertion Sort

### Algoritmos Avançados

- Merge Sort
- Quick Sort
- Heap Sort

---

## Complexidade dos Algoritmos

| Algoritmo | Melhor Caso | Caso Médio | Pior Caso |
|------------|-------------|-------------|------------|
| Bubble Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) |

---

## Compilação

Compilar programa principal:

```bash
make
```

Compilar testes:

```bash
make test
```

---

## Execução

Executar programa principal:

```bash
./programa.exe
```

Executar testes:

```bash
./teste.exe
```

---

## Cobertura de Código

Executar:

```bash
make coverage
```

Arquivos gerados:

- *.gcda
- *.gcno
- *.gcov

Ferramenta utilizada:

- gcov

---

## Análise de Desempenho

Executar:

```bash
make profile
```

Arquivos gerados:

- profile.txt
- gmon.out

Ferramenta utilizada:

- gprof

---

## Testes

Foram desenvolvidos testes automatizados para todos os algoritmos implementados.

Exemplo de saída:

```text
Bubble PASSOU
Selection PASSOU
Insertion PASSOU
Merge PASSOU
Quick PASSOU
Heap PASSOU
```

---

## Uso de Inteligência Artificial

Detalhes sobre uso e validação das ferramentas utilizadas:

```text
docs/uso-ia.md
```

---

## Autor

Thiago Santos Leis