#include <iostream>
#include <locale>

using namespace std;

int main(){
    float salarioAtua, salarioNov;

    cout << "Insira o seuu salario atual: ";
    cin >> salarioAtua;

    if(salarioAtua < 1000){
        salarioNov = salarioAtua + (salarioAtua * 0.15);
        cout << salarioNov;
    }
    else if(salarioAtua >= 1000 && salarioAtua <= 1500){
        salarioNov = salarioAtua + (salarioAtua * 0.1);
        cout << salarioNov;
    }
    else{
        salarioNov = salarioAtua + (salarioAtua * 0.05);
        cout << salarioNov;
    }

}
