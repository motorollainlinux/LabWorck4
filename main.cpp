/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int const t = 10;
int f = 0,numbers[t], sumbols[3][t], summ[t], average[t],multiplic[t];

void function(int)
     {
         sumbols[1][f] = numbers[f]/100;
         sumbols[2][f] = (numbers[f] % 100)/10;
         sumbols[3][f] = numbers[f] % 10;
         summ[f] = sumbols[1][f]+sumbols[2][f]+sumbols[3][f];
         multiplic[f] = sumbols[1][f]*sumbols[2][f]*sumbols[3][f];
         average[f] = (sumbols[1][f]+sumbols[2][f]+sumbols[3][f])/3;
         cout << "для чила: " << numbers[f]<< "\n";
         cout << "  сумма: " << summ[f]<< "\n";
         cout << "  произведение:" << multiplic[f] << "\n";
         cout << "  сред. арифметическое: " << average[f] << "\n";
     }
int main()
{
    cout << "v.0.0.1\n";
    cout << "кол-во чисел:"<< t << "\n";
     for (int i = 0; i <= t-1; i++) 
     {
         cout << "введите чило №" << i+1 << "\n";
         cin >> numbers[i];
     }
    
     for (; f <= t-1; f++)
     {
         function(f);
     }
     return 0;
}
 