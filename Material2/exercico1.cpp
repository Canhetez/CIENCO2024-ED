#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main()
{
    string nomes[10];
    string nomeProc;

    cout << "Digite 10 nomes: " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << "Digite o " << i+1 << "o nome: " << endl;
        cin >> nomes[i];
    }
    cout << "Digite o nome que deseja procurar: " << endl;
    cin >> nomeProc;

    for(int i = 0; i < 10; i++)
    {
    if(nomeProc == nomes[i])
    {
        cout << "ACHEI";
    }
    else
    {
        cout << "NAO ACHEI";
    }
    break;
    }
}
