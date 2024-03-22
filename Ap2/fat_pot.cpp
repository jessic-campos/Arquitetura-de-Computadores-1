/*Faça um programa que leia um inteiro positivo N como entrada e calcule a seguinte expressão:
((5-N)! - 3^(4-N) - 2^(4-N) + 12)! + 1/(2!)
Implemente uma função que calcule o fatorial de um número inteiro positivo X.
Implemente uma outra função que calcule a potência (^) de uma base B elevada a um expoente E inteiro e positivo.
Use essas funções para resolver a expressão.

Obs.: Não usar operador ** (python), nem função pow (c/c++), nem função Math.pow (javascript).*/

#include <iostream>

using namespace std;

int fatorial(int n);
int potencia(int n, int e);

int main(){

int n;
cin >> n;

//((5-N)! - 3^(4-N) - 2^(4-N) + 12)! + 1/(2!)

/*float part1 = (fatorial(5-n))-(potencia(3, 4 - n)) - (potencia(2, 4 -n)) + 12;
float part2 = fatorial(2);
float part3 = 1/(part2);
float resultado = part1 + part3;
*/

/*
float part1 = (fatorial(5-n))-(potencia(3, 4 - n)) - (potencia(2, 4 -n)) + 12;
float part2= 1/(fatorial(2));
float resultado = part1 + part2;
*/

//float resultado = (fatorial(5-n))-(potencia(3, 4 - n)) - (potencia(2, 4 -n)) + 12 + 1/fatorial(2);

  float part1 = (fatorial(5 -n)) - (potencia(3, 4 - n)) - (potencia(2, 4 - n)) + 12;
  float part2 = fatorial(part1);
  float part3 = fatorial(2);
  float part4 = 1/(part3);
  float resultado = part2 + part4;
      


  cout << fixed;
  cout.precision(1);

  cout << resultado;

return 0;

}
 

//5 4 3 2 1

int fatorial (int n){

int f = 1;

for(int i = 1; i <= n; i++){
  f *= i;
}
return f;

}



int potencia (int n, int e){

int r = 1;
for(int i =1; i <= e; i++){
  r*=n;
  
  }
  
return r;

}

