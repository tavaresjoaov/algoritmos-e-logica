/* Faça um programa que leia cinco grupos de quatro números e mostre-os 
na ordem lida. Em seguida, organize-os em ordem crescente e decrescente. */

#include <iostream>

using namespace std;

int main() {
	
	int n1, n2, n3, n4, aux; 
	
	cout << "Digite quatro numeros em cada grupo:\n";
	cout << endl;

    for (int i = 1; i <= 5; i++) {
    	
    	cout << "GRUPO " << i << ":\n";
    	cin >> n1 >> n2 >> n3 >> n4;

        cout << endl;
        
        cout << "Ordem lida: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << endl;
        
        for (int j = 1; j <= 3; j++) {
        	if (n1 > n2) {
    			aux = n1;
    			n1 = n2;
    			n2 = aux;
			}
			if (n2 > n3) {
    			aux = n2;
    			n2 = n3;
    			n3 = aux;
			}
			if (n3 > n4) {
    			aux = n3;
    			n3 = n4;
    			n4 = aux;
			}
		}
		
		cout << "Ordem crescente: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << endl;
		cout << "Ordem decrescente: " << n4 << ", " << n3 << ", " << n2 << ", " << n1 << endl;
		
		cout << endl;
 
    }

    return 0;
}