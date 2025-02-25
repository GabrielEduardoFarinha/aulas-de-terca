#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    const int MAX_ALUNOS = 100;
    vector<float> medias;
    
    cout << "Digite o numero de alunos (ate 100): ";
    cin >> n;

    if (n < 1 || n > MAX_ALUNOS) {
        cout << "Número invalido de alunos. O valor deve ser entre 1 e 100." << endl;
        return 1;
    }

    float nota1, nota2;
    int acima_media = 0, na_media = 0, abaixo_media = 0;

    for (int i = 0; i < n; ++i) {
        cout << "Aluno " << i + 1 << ":" << endl;
        cout << "Digite a nota da prova 1: ";
        cin >> nota1;
        cout << "Digite a nota da prova 2: ";
        cin >> nota2;
        
        float media = (nota1 + nota2) / 2;
        medias.push_back(media);

        cout << "Media do aluno " << i + 1 << ": " << media << endl;

        if (media > 7) {
            ++acima_media;
        } else if (media == 7) {
            ++na_media;
        } else {
            ++abaixo_media;
        }
    }

    cout << "\nResultado final:" << endl;
    cout << "Acima da media (7): " << acima_media << endl;
    cout << "Na media (7): " << na_media << endl;
    cout << "Abaixo da media (7): " << abaixo_media << endl;

    return 0;
}
