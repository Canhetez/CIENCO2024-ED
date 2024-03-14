#include <iostream>
#include <locale>

using namespace std;
#define DIAS 5
int main()
{
    float temp[DIAS];
    float soma = 0;
    float menor , maior, media;
    int abaixo = 0;

    cout << "Digite a temperatura média de cada dia do ano:" << endl;
    for (int i = 0; i < DIAS; ++i) {
        cout << "Dia " << i + 1 << ": ";
        cin >> temp[i];
        soma += temp[i];

        if (i == 0 || temp[i] < menor) {
            menor = temp[i];
        }
        if (i == 0 || temp[i] > maior) {
            maior = temp[i];
        }
    }

    media = soma / DIAS;

    for (int i = 0; i < DIAS; ++i) {
        if (temp[i] < media) {
            abaixo++;
        }
    }

    cout << "Menor temperatura do ano: " << menor << " °C \n";
    cout << "Maior temperatura do ano: " << maior << " °C \n";
    cout << "Temperatura media anual: " << media << " °C \n";
    cout << "Numero de dias no ano em que a temperatura foi inferior a media: " << abaixo << endl;
}
