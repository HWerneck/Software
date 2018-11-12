#include <iostream>

int main()
{
    std::cout << "Digite o valor inicial aplicado à poupança:" << std::endl;
    double valorInicial;
    std::cin >> valorInicial;
    std::cout << "Digite o valor a ser adicionado todo mês à poupança (a partir do segundo mês):" << std::endl;
    double valorMensal;
    std::cin >> valorMensal;
    std::cout << "Digite o percentual de renda mensal da poupança:" << std::endl;
    double percentualRenda;
    std::cin >> percentualRenda;
    std::cout << "Digite a quantidade de meses de aplicação na poupança:" << std::endl;
    int quantidadeMeses;
    std::cin >> quantidadeMeses;
    double total;
    total = valorInicial * (1 + (percentualRenda/100));
    for (int i = 0; i < (quantidadeMeses - 1); i++)
    {
        total = (total + valorMensal)*(1 + (percentualRenda/100));
    }
    if (quantidadeMeses <= 1)
    {
        std::cout << "No final de " << quantidadeMeses << " mês, a poupança terá rendido R$" << total << "." << std::endl;        
    } else
    {
        std::cout << "No final de " << quantidadeMeses << " meses, a poupança terá rendido R$" << total << "." << std::endl;
    }
    return 0;
}
