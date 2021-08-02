#include <iostream>
#include <locale>

using namespace std;

int main() 
{
 setlocale(LC_ALL, "portuguese"); 

  int opcao, n1, n2;
 
  while ((opcao==1) || (opcao==2) || (opcao==3) || (opcao==4) );
  {
  cout << ("Digite o primeiro número: ") << endl;
  cin >> n1; 
  cout << ("Digite o segundo número: ") << endl;
  cin >> n2;
  cout << ("Escolha uma das seguintes opçãoes:") << endl;
  cout << ("1.Média entre os números digitados.") << endl;
  cout << ("2.Diferença do maior pelo menor.") << endl;
  cout << ("3.Produto entre os números digitados.") << endl;
  cout << ("4.Divisão do primeiro pelo segundo.") << endl;
  cin >> opcao;
  
   if (opcao==1)
   {
   	cout <<("Média = ") << ((n1+n2)/2);
   }
   if (opcao==2)
   {
   	if (n1>n2)
   		cout << ("Diferença = ") << (n1-n2);
   	else
	   	cout << ("Diferença = ") << (n2-n1);
   }
    if (opcao==3)
   {
   	cout << ("Produto = ") << (n1*n2);
   } 
   if (opcao==4)
   {
   	if (n2!=0)
   		cout << ("Divisão = ") << (n1/n2);
   	else
	  cout << ("Divisor inválido!"); 
   }
  }
   
 return 0;
}