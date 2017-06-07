#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

int sprawdz(int l, int i, int liczba[]){
    int j;
    for(j=0; j<i; ++j){
        if(l == liczba[j]){
            l = rand() % 10;//10
            l = sprawdz(l,i,liczba);
        }
    }
    return l;
}

void wczytaj(int tab[]){
    int i;
    printf("podaj 10 rozne liczby\n");//10
    for(i=0; i<10; ++i){//10
        scanf("%d",&tab[i]);
    }
}

void losowanie(int liczba[]){
    int i,l;
    for(i=0; i<8; ++i){//8
        l = rand() % 10;//10
        l = sprawdz(l,i,liczba);
        liczba[i]=l;
    }
}

void wypisz(int tab[], int liczba[]){
    int i;
    printf("wylosowane liczby\n");
    for(i=0; i<8; ++i){//8
        printf("%d ",tab[liczba[i]]);
    }
}

int main(){

    int liczba[8];//8
    srand(time(NULL));
    int tab[10];//10

    wczytaj(tab);
    losowanie(liczba);
    wypisz(tab,liczba);

    return 0;
}
