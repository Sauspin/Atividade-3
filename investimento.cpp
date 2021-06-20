#include <iostream>
#include <cmath>

using namespace std;

struct Tinvestimento{
  float montInvest; // capital investido
  float jurosAno;   // juros anual
  int periodInvest; //período considerado em mes
  float montSimples; // rendimento com juros simples
  float montComposto; // rendimento com juros composto
  float convertAnoMes; // conversão de juros Ano para mês
  };


  Tinvestimento saidaSimples(){
   Tinvestimento montSimples;
   
  //int jurosAnoMes = Tinvestimento.jurosAno / 12;
   float taxa = Tinvestimento.montInvest*(Tinvestimento.jurosAno/12)*Tinvestimento.periodInvest*0.01;

   montSimples = Tinvestimento.montInvest + taxa; 

   return montSimples;
  }

  
  Tinvestimento saidaComp(){
   Tinvestimento calcComp;


   return calcComp;
  }

  
  Tinvestimento convAnoMes(){
   Tinvestimento convert;


   return convert;
  }