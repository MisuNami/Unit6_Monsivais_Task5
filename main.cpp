#include <iostream>
#include "accounts.h"
#include <algorithm>

using namespace std;

void printArray(int[], int); //prototypes


int main()
 {
 //bubble sort  ASC method per take 2 of unit 6 assigment
cout << "\nSTART: " << cpuTime() << endl;

sort(accountBalances, accountBalances+maxAccounts);
reverse(accountBalances,accountBalances+maxAccounts);

printArray(accountBalances, maxAccounts);

cout <<"\nEND; " << cpuTime() << endl;


 return 0;
}


//Print the array function
void printArray(int arrayVals[], int size)
{

cout << "\nPrinted Values: " << endl;
 for (int i = 0; i < size; i++)
 {
   cout << arrayVals[i] << ",";
}
}