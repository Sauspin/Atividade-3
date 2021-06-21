#include <iostream>
#include <stdio.h>
#include "investimento.cpp"

using namespace std;



void imprimeRend(tInvest rend){

cout << "Montante de Rendimento Simples: " << rend.montSimples << endl;
cout << "Montante de Rendimento Composto: " << rend.montComposto << endl;
cout << "Taxa de juros Ano para Mes: " << rend.convertAnoMes;
}

int main() {
  tInvest teste;

  //dataIn();

  teste.montSimples = 6;   // rendimento com juros simples
  teste.montComposto = 7;  // rendimento com juros composto
  teste.convertAnoMes = 8; // conversão de juros Ano para mês
 
  imprimeRend(tInvest teste);

  return 0;
}
