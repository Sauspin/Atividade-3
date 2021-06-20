#include <iostream>
#include "investimento.cpp"

using namespace std;


Tinvestimento dataIn(){
 Tinvestimento obterDados;

 cout << "Digite o valor do Investimento: ";
 cin >> obterDados.montInvest;
 cout << "Digite a taxa de juros anual em %: ";
 cin >> obterDados.jurosAno;
 cout << "Digite o periodo do Investimento em meses: ";
 cin >> obterDados.periodInvest;

 return obterDados;
}

Tinvestimento dataOut(){
 Tinvestimento plotaDados;

 cout << "Montante de rendimentos Simples: " << montSimples << ;

//return 0;
}



int main() {

  dataIn();
  saidaSimples();
  dataOut();
  
}
