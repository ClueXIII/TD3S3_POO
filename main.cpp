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

bool chercher(const int T[], int N, int x){
    for (int i = 0; i < N; i++){
        if (T[i] == x) return true;
    }
    return false;
}

bool chercherRecur(int T[], int N, int x){
    if (N==0) return false;
    if (x==T[N-1]) return true;
    else chercherRecur(T,N-1,x);
}

int main(){
cout << "------------------------------1------------------------------" << endl;
    cout << somme_entiers(5) << endl;
cout << "------------------------------2------------------------------" << endl;
    char tab[]="taat";
    palindrome(tab,0, 3)? cout << "palindrome"<<endl: cout << "pas palindrome" << endl;
cout << "------------------------------3.0------------------------------" << endl;
    int tab2[] = {0, 1, 2, 3, 4, 5, 6, 7};
    chercher(tab2,3,2)? cout << "le chiffre est bien dans le tableau" << endl : cout << "le chiffre n'est pas dans le tableau" << endl;
cout << "------------------------------3.1------------------------------" << endl;
    chercherRecur(tab2,3,2)? cout << "le chiffre est bien dans le tableau" << endl : cout << "le chiffre n'est pas dans le tableau" << endl;
    return 0;
}