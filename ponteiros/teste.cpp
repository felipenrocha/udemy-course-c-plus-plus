#include <iostream>
using namespace std;

void foo(int n)
{
    n = 20;
}
void fee(int *n) // Função que acessa o endereço
{
    *n = 20;
}
int main(int argc, char *argv[])
{

    int var = 10;
    int *ponteirovar;

    ponteirovar = &var;                                 // ponteirovar esta apontando para o endereço de var
    cout << "Endereço de var: " << ponteirovar << endl; // Espera-se um endereço
    cout << "Valor de var: " << *ponteirovar << endl;   // Espera-se um valor
    foo(var);                                           // Passa uma cópia da variável
    cout << "Novo valor após foo: " << var << endl;
    fee(ponteirovar); // Passando o endereço e mudando o falor que se encontra naquele endereço
    cout << "Novo valor após fee: " << var << endl;

    int *vet = new int[10]; // Aloca um ponteiro que possui 10 posicões de int
    vet[0] = 10;            // Define que o valor do elemento na pos. 0 é 10;

    cout << "Vetor na posição 0: " << vet[0] << endl;

    for (int i = 0; i < sizeof(vet); i++)
    {
        cout << vet[i] << endl;
    }

    return 0;
}