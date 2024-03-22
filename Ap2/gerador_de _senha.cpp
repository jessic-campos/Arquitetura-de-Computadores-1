#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>


using namespace std;

void gerador(int digitos);


int main(){
    
   int digitos;
   
   cout << "Digite o numero de caracteres que você deseja que sua senha possua:\n";
   cin >> digitos;
   
   gerador(digitos);
   
    return 0;
}


void gerador(int digitos){

    int aleatorio = 0;
    
    srand((unsigned int)(time(NULL)));

    char maiusculas[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char minuscula[] = {"abcdefghijklmnopqrstuvwxyz"};
    char numeros[] = {"0123456789"};
    
    char senha[digitos];

   // aleatorio = rand() % 4;
    
    for (int i = 0; i < digitos; i++){

        aleatorio++;
        
        if (aleatorio == 1){
            senha[i] = maiusculas[rand() % 26];
            aleatorio = rand() % 3;
            cout << senha[i];
        }
        else if (aleatorio == 2){
            senha[i] = minuscula[rand() % 26];
            aleatorio = rand() % 3;
            cout << senha[i];
        }
        else if (aleatorio == 3){
            senha[i] = numeros[rand()% 10];
            aleatorio = rand() % 3;
            cout << senha[i];
        }  
    }
}