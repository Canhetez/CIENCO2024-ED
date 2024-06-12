#include <iostream>
#include <locale>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    stack <int> pilha;
    int n = 1;

    while(n != 0){
        cout << "Digite um número inteiro positivo, caso queira finalizar digite 0: ";
        cin >> n;

        if(n != 0){
            pilha.push(n);
        }
    }
     cout << "\nNúmeros na ordem inversa: " << endl;

    while(!pilha.empty()){
        cout << pilha.top();
        pilha.pop();
        cout << " ";
    }
    cout << endl;
}
