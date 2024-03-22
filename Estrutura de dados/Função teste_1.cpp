#include <iostream>

using namespace std;

// Função para calcular o número mínimo de ladrilhos
pair<int, int> calcularLadrilhos(int n, int m) {
    // Área total com ladrilhos pretos
    int areaTotal = n * m;

    // Área com ladrilhos brancos (removendo uma borda de 1 unidade de cada lado)
    int areaBrancos = (n - 2) * (m - 2);

    // Área com ladrilhos pretos (subtraindo a área dos brancos da área total)
    int areaPretos = areaTotal - areaBrancos;

    // Retornando o par de resultados
    return make_pair(areaBrancos, areaPretos);
}

int main() {
    // Solicitar ao usuário as dimensões da área em ladrilhos
    cout << "Digite a largura da área em ladrilhos: ";
    int largura;
    cin >> largura;

    cout << "Digite a altura da área em ladrilhos: ";
    int altura;
    cin >> altura;

    // Chamada da função e obtenção dos resultados
    pair<int, int> resultado = calcularLadrilhos(largura, altura);

    // Impressão dos resultados
    cout << "Número de ladrilhos brancos: " << resultado.first << endl;
    cout << "Número de ladrilhos pretos: " << resultado.second << endl;

    return 0;
}
