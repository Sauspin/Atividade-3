#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

struct tInvest{
  float montInvest;    // capital investido
  float jurosAno;      // juros anual
  int periodInvest;    // período considerado em mes
  float montSimples;   // rendimento com juros simples
  float montComposto;  // rendimento com juros composto
  float convertAnoMes; // conversão de juros Ano para mês
  };


tInvest dataIn(){
 tInvest dIn;

 cout << "Digite o valor do Investimento: ";
 cin >> dIn.montInvest;
 cout << "Digite a taxa de juros anual em %: ";
 cin >> dIn.jurosAno;
 cout << "Digite o periodo do Investimento em meses: ";
 cin >> dIn.periodInvest;

 return dIn;
}


