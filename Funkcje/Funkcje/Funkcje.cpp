#include <iostream>

using namespace std;

int zad1(int tab[]) {

    srand(time(NULL));

    int suma = 0;

    for (int i = 0; i < sizeof(tab)/sizeof(int); i++) {

        tab[i] = rand() % 101;

        suma += tab[i];
    }
    return suma;
}
int zad2(int tab[]) {

    srand(time(NULL));

    int wynik = 0;

    for (int i = 0; i < sizeof(tab) / sizeof(int); i++) {

        tab[i] = rand() % 101;

  
         if (tab[i] % 2 == 0) {

               wynik = wynik + 1;
         }
        
    }
    return wynik;
    
}

int zad3(int tab[]) {

    srand(time(NULL));

    int najwiekszy = tab[0];

    for (int i = 0; i < sizeof(tab) / sizeof(int); i++) {

        tab[i] = rand() % 101;


        if (tab[i] > najwiekszy) {

            najwiekszy = tab[i];
        }

    }
    return najwiekszy;
}

void generowanieLosowych(int tab[]) {
    
    srand(time(NULL));

    for (int i = 0; i < sizeof(tab) / sizeof(int); i++) {

        tab[i] = rand() % 101;
        
    }
}
int zad4(int tab1[],int tab2[], int tab3[]) {

   

}
int main()
{

    //Zad1
    int tab[20];
   
    cout << zad1(tab) << endl;
 
    //Zad2
    cout << zad2(tab) << endl;

    //Zad3
    cout << zad3(tab) << endl;

    //Zad4 
    int tab1[20], tab2[20], tab3[20];
}

