#include <iostream>
#include <locale>

using namespace std;

int main() 
{
 setlocale(LC_ALL, "portuguese"); 

  int opcao, n1, n2;
 
  while ((opcao==1) || (opcao==2) || (opcao==3) || (opcao==4) );
  {
  cout << ("Digite o primeiro n?mero: ") << endl;
  cin >> n1; 
  cout << ("Digite o segundo n?mero: ") << endl;
  cin >> n2;
  cout << ("Escolha uma das seguintes op??oes:") << endl;
  cout << ("1.M?dia entre os n?meros digitados.") << endl;
  cout << ("2.Diferen?a do maior pelo menor.") << endl;
  cout << ("3.Produto entre os n?meros digitados.") << endl;
  cout << ("4.Divis?o do primeiro pelo segundo.") << endl;
  cin >> opcao;
  
   if (opcao==1)
   {
   	cout <<("M?dia = ") << ((n1+n2)/2);
   }
   if (opcao==2)
   {
   	if (n1>n2)
   		cout << ("Diferen?a = ") << (n1-n2);
   	else
	   	cout << ("Diferen?a = ") << (n2-n1);
   }
    if (opcao==3)
   {
   	cout << ("Produto = ") << (n1*n2);
   } 
   if (opcao==4)
   {
   	if (n2!=0)
   		cout << ("Divis?o = ") << (n1/n2);
   	else
	  cout << ("Divisor inv?lido!"); 
   }
  }
   
 return 0;
}