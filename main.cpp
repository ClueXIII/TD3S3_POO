//la fonction retourne la somme des entiers de 1 à n
#include <iostream>
using namespace std;

int somme_entiers(int n){
    if (n<=1) return n;
    return n + somme_entiers(n-1);
}

int main(){
cout << "------------------------------1------------------------------" << endl;
    cout << somme_entiers(5) << endl;
cout << "------------------------------2------------------------------" << endl;
    
}