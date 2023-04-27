// Para resolver este problema a melhor forma é utilizar o algoritmo desenvolvido por Kruskal
// que consiste em gerar uma arvore dado um determinado grafo

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

// para resolverr esta questão
// é necessario a criação de um grafo
// para a representação do labirinto

struct vertice
{
    char dest;
    int peso;

    struct vertice *prox;
};

struct aresta
{
    char origem, destino;
    int peso;
};

struct grafo
{
    int tamanho = 6;
    struct vertice *cab[tamanho];
};

struct grafo *cria_grafo(struct aresta arestas[], int qtdArestas)
{
    struct grafo *newGrafo = (struct grafo *)malloc(sizeof(struct grafo));

    for (int i = 0; i < newGrafo->tamanho; i++)
    {
        newGrafo->cab[i] = NULL;
    }

    for (int i = 0; i < qtdArestas; i++)
    {
        char origem = arestas[i].origem;
        char destino = arestas[i].destino;
        int peso = arestas[i].peso;

        struct vertice *newNode = (struct vertice *)malloc(sizeof(struct vertice));
        newNode->dest = dest;
        newNode->peso = peso;

        newNode->prox = newGrafo->cab[origem];

        newGrafo->cab[origem] = newNode;
    }

    return newGrafo;
}

void printGraph(struct grafo *graph)
{
    for (int i = 0; i < graph->tamanho; i++)
    {
        struct vertice *ptr = graph->cab[i];
        while (ptr != NULL)
        {
            printf("%d —> %d (%d)\t", i, ptr->dest, ptr->peso);
            ptr = ptr->prox;
        }

        printf("\n");
    }
}

int main()
{
    struct aresta edges[] =
        {
            {'A', 'B', 6}, {'B', 'C', 7}, {'B', 'A', 5}, {'C', 'B', 4}, {'D', 'C', 10}, {'E', 'F', 1}, {'D', 'F', 3}};

    int n = sizeof(edges) / sizeof(edges[0]);

    struct grafo *graph = cria_grafo(edges, n, 6);

    printGraph(graph, 6);

    return 0;
}