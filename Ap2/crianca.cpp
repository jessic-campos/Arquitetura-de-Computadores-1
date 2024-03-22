/*Faça um programa que receba um vetor de valores inteiros, representando as pontuações de n crianças em um jogo, 
e um vetor de strings, representando os nomes dessas crianças. Note que o nome e a pontuação de cada criança 
devem estar guardadas no mesmo índice nos vetores correspondentes.

Imprima a posição (índice) no vetor onde a menor pontuação está, o nome da criança que está perdendo e a sua pontuação.
Obs.: Assuma que as pontuações podem ser negativas!

Defina uma função que recebe um vetor de inteiros e retorne o índice do menor elemento. Use a função definida 
para resolver o problema acima.

Entrada:
1a linha: o tamanho do vetor
2a linha: o vetor de pontuações
3a linha: o vetor de nomes

Saída: posição (índice) da menor pontuação, nome da criança perdedora e pontuação mais baixa.*/


#include <iostream>

using namespace std;

int menor_indice(int tam, int nota[]);

int main()
{

    int tam;
    cin >> tam;

    int notas[tam]; // pontuações

    for (int i = 0; i < tam; i++)
    {
        cin >> notas[i];
    }

    string nomes[tam]; // nomes

    for (int i = 0; i < tam; i++)
    {
        cin >> nomes[i];
    }

    cout << menor_indice(tam, notas) << " " << nomes[menor_indice(tam, notas)] << " " << notas[menor_indice(tam, notas)];

    return 0;
}

int menor_indice(int tam, int nota[])
{

    int menor = nota[0];
    int indice = 0;

    

    return indice;
}
