#include <iostream>
using namespace std;

void t1(int arr[], int sz) {
    int s = 0;
    for(int g = 0; g < sz; g++) {
        s += arr[g];
    }
    cout << "Resultado = " << s;
}

void t2(int arr[], int sz) {
    int p = 1;
    for(int j = 0; j < sz; j++) {
        p *= arr[j];
    }
    cout << "Resultado = " << p;
}

int main() {
    int arr[5];
    int sz = 5;
    int escolha;
    cout << "Digite opção 1 ou 2: ";
    cin >> escolha;
    if(escolha == 1) {
        cout << "Digite os valores do vetor:\n";
        for(int i = 0; i < sz; i++) {
            cin >> arr[i];
        }
        t1(arr, sz);
    } else if(escolha == 2) {
        cout << "Digite os valores do vetor:\n";
        for(int l = 0; l < sz; l++) {
            cin >> arr[l];
        }
        t2(arr, sz);
    }
    return 0;
}
