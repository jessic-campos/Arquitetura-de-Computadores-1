/*Faça um programa que receba um valor inteiro positivo n do usuário e mostre quantos divisores cada número de 1 a n possui.
Por exemplo, se o n for 5, o programa deve mostrar a sequência: 1 2 2 3 2. 
Isso corresponde a dizer que os números 1, 2, 3, 4 e 5 possuem 1, 2, 2, 3 e 2 divisores respectivamente.

Em seguida, mostre também quantos divisores PARES cada número de 1 a n possui. Por exemplo, se o n for 5, 
o programa deve mostrar a sequência: 0 1 0 2 0. Isso corresponde a dizer que os números 1, 2, 3, 4 e 5 
possuem 0, 1, 0, 2 e 0 divisores  pares respectivamente.

Defina uma função que conte quantos divisores um número inteiro x possui.
Defina também uma outra função que conte quantos divisores PARES um número inteiro x possui.
Use essas 2 funções para resolver o problema acima.

Obs.: Os divisores de um número x são os números pelos quais x é divisível (resto 0).
          Por exemplo, os divisores de 6 são 1, 2, 3 e 6. Ou seja, 6 é divisível por 1, 2, 3 e 6.
          Mas apenas o 2 e o 6 dos seus divisores são pares. Ou seja, o número 6 possui exatamente 2 divisores pares.*/

#include <iostream>

using namespace std;

//quantos divisores cada numero até n tem

void divisores(int num);
void divisao_par( int num);

int main(){

    int num;
    
    cin >> num; 
    
    divisores(num);
    divisao_par(num);
    

}

void divisores(int num){
    int vet[num];
    int cont = 0;
    //1 2 3 4 5
    for(int i = 1; i <= num; i++){
        for(int d = 1; d <= i; d++){//1 2 3 4 5
            if(i%d==0){
                cont++;
            }
        }
        vet[i-1] = cont;
        cont = 0;
    }
    
    
    for (int i = 0; i < num; i++) cout << vet[i] << " ";
    cout << endl;
    
    
    
}

void divisao_par(int num){
    
    int divisores [num];
    int cont = 0;
    
    for(int i = 1; i <= num; i++){
        for (int k = 1; k <= i; k++){
            if(i%k == 0 && k%2 == 0)cont ++;
        }
        
        divisores [i -1] = cont;
        cont = 0;
    }
    
    for(int i = 0;i < num; i++)cout << divisores[i] << " ";
    
    cout << endl;
    
    
}
