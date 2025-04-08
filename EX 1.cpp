#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Digite um valor: ";
    cin >> valor;
    
    if (valor > 10) {
        cout << "É MAIOR QUE 10!" << endl;
    } else {
        cout << "NÃO É MAIOR QUE 10!" << endl;
    }
    
    return 0;

}
