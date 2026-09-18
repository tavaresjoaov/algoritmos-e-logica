/* 
Faça um programa que receba dez números, calcule e mostre a 
soma dos números pares e a soma dos números primos.
*/

#include <iostream>

using namespace std;

int main() {
	
	int num;
	int somaPares = 0;
	int somaPrimos = 0;

	cout << "Digite dez numeros:\n";
	
    for (int i = 1; i <= 10; i++) {
    	
    	cin >> num;
    	
    	if (num % 2 == 0) {
    		somaPares += num;
		}
		
		bool primo = true;
		
		if (num < 2) {
    		primo = false;
		}
		else {
			for (int divisor = 2; divisor < num; divisor++) {
    			if (num % divisor == 0) {
        			primo = false;
        			break;
    			}
			}
		}

		if (primo) {
    		somaPrimos += num;
		}
    }
    
    cout << "Soma dos numeros pares: " << somaPares << endl;
    cout << "Soma dos numeros primos: " << somaPrimos;

    return 0;
}