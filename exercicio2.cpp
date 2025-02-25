#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> funcionarios;
    vector<float> salarios;
    
    cout << "Digite o numero de funcionarios da lancholandia: ";
    cin >> n;
    
    float salario, soma = 0;
    int acima_media = 0, abaixo_media = 0;

    for (int i = 0; i < n; ++i) {
        cout << "Digite o salario do funcionario " << i + 1 << ": ";
        cin >> salario;
        
        salarios.push_back(salario);
        soma += salario;
    }

    float media_salarial = soma / n;

    for (float s : salarios) {
        if (s > media_salarial) {
            ++acima_media;
        } else if (s < media_salarial) {
            ++abaixo_media;
        }
    }

    cout << "\nMedia salarial: " << media_salarial << endl;
    cout << "Funcionarios acima da media: " << acima_media << endl;
    cout << "Funcionarios abaixo da media: " << abaixo_media << endl;

    return 0;
}
