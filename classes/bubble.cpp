#include <iostream>

using namespace std;

class Carro
{
public:
    char nome[20];
    char cor[200];
    char placa[8];
    double preco;
};

main(int argc, char const *argv[])
{

    Carro carros[10];

    int i = 0;
    
    while (true)
    {
        char resp;
        cout << "Digite o nome do carro: ";
        cin >> carros[i].nome;
        cout << "Digite o preço do carro: ";
        cin >> carros[i].preco;
        cout << "Voce deseja continuar?  <S> SIM ou <N>NÃO:  ";
        cin >> resp;
        if (resp != 'S')
        {
            break;
        }
        cout << endl;
        i++;
    }

    return 0;
}
