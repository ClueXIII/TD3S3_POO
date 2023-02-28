//la fonction retourne la somme des entiers de 1 à n
#include <iostream>
using namespace std;

int somme_entiers(int n){
    if (n<=1) return n;
    return n + somme_entiers(n-1);
}

bool palindrome(char T[], int deb,int fin){
    if (fin - deb <=0) return true;
    return T[deb] == T[fin] && palindrome(T, deb + 1, fin - 1);
}

int main(){
cout << "------------------------------1------------------------------" << endl;
    cout << somme_entiers(5) << endl;
cout << "------------------------------2------------------------------" << endl;
    char tab[]="taat";
    palindrome(tab,0, 3)? cout << "palindrome"<<endl: cout << "pas palindrome" << endl;
cout << "------------------------------3------------------------------" << endl;
    
    return 0;
}