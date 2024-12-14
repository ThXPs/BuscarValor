#include <iostream>
using namespace std;

int main() {
    const int TAM = 15;
    
    // Ingresar array de 15 posiciones
    int arr[TAM];
    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> arr[i];
    }
    
    // Buscar valor en el array
    int buscar;
    cout << "Ingrese un valor para buscar:" << endl;
    cin >> buscar;
    
    bool encontrado = false;
    
    for (int i = 0; i < TAM; i++) {
        if (arr[i] == buscar) {
            encontrado = true;
            break;
        }
    }
    
    if (encontrado) {
        cout << "El valor " << buscar << " existe en el array." << endl;
    } else {
        cout << "El valor " << buscar << " no existe en el array." << endl;
    }
    
    return 0;
}
