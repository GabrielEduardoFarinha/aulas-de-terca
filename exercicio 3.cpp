#include <iostream>

int main() {
	int numeros [10];
	int maior;
	int menor;
	
	std::cout <<"digite 10 numeros:\n";
	for (int i = 0; i < 10; i++) {
		std::cin >> numeros[i];
		}
		maior = numeros [0];
		menor = numeros [0];
		
		for (int i = 1; i < 10; i++) {
			if (numeros[i] > maior) {
				maior = numeros[i];
			} else if (numeros[i] < menor){
				menor = numeros [i];
			}
		}
		
		std::cout << "o maior e " << maior << std::endl;
		std::cout << "o menor e " << menor << std::endl;
		return 0;
}
	
