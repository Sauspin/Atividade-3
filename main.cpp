#include <iostream>
#include "investimento.cpp"

using namespace std;


Tinvestimento dataIn (){
 Tinvestimento obterDados;

 cout << "Digite o valor do Investimento: ";
 cin >> obterDados.montInvest;
 cout << "Digite a taxa de juros anual; ";
 cin >> obterDados.jurosAno;
 cout << "Digite o periodo do Investimento em anos: ";
 cin >> obterDados.periodInvestAnos;

 return obterDados;
}







int main() {
  
}