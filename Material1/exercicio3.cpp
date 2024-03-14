#include <iostream>
#include <locale>

using namespace std;

int main(){
    float horaTraba, salarioMini, valorHora, salarioBruto, imposto, salarioRec;


    cout << "Insira a quantidade de horas trabalhadas: ";
    cin >> horaTraba;

    cout << "Insira o valor do salario minimo: ";
    cin >> salarioMini;

    valorHora = salarioMini / 2;
    salarioBruto = horaTraba * valorHora;
    imposto = salarioBruto * 0.03;
    salarioRec = salarioBruto - imposto;


    cout << "O salario a receber e de: " << salarioRec;
}
