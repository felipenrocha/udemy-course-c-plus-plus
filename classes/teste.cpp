#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
public:
    char nome[25];
    char cpf[20];
    int idade;
};

int main(int argc, char const *argv[])
{

    Pessoa p1; // Instancia de uma classe = objeto de Pessoa

    strcpy(p1.nome, "João");
    strcpy(p1.cpf, "02533523127");
    p1.idade = 20;
    cout << "Nome: " << p1.nome << endl;
    cout << "CPF: " << p1.cpf << endl;
    cout << "Idade: " << p1.idade << endl
         << endl;

    // Inicializando uma Classe:

    Pessoa p2 = {"Felipe", "12345678", 18};

    cout << "Nome: " << p2.nome << endl;
    cout << "CPF: " << p2.cpf << endl;
    cout << "Idade: " << p2.idade << endl
         << endl;

    // Inicializando varias classes

    Pessoa pessoas[3] = {
        {"Felipe", "12345678", 18},
        {"Pedro", "2220154", 22},
        {"Tiago", "8752202", 23}
        };

    for (int i = 0; i < 3; i++)
    {
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "CPF: " << pessoas[i].cpf << endl;
        cout << "Idade: " << pessoas[i].idade << endl;
    }

    return 0;
}
