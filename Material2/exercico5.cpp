#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int n, soma;

    cout << "Indique o tamanho do vetor: " << endl;
    cin >> n;

    int vetA[n], vetB[n];

    cout << "\nDigite os numeros do vetor A: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Numero " << i + 1 << endl;
        cin >> vetA[i];
    }

    cout << "\nDigite os numeros do vetor B: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Numero " << i + 1 << endl;
        cin >> vetB[i];
    }

    for(int i = 0; i < n; i++)
    {
        soma = vetA[i] + vetB[i];
        cout << soma << " ";
    }


}
