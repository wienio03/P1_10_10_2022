#include <iostream>
const int w=6, k=6;
void wypisz_tab2Dwsk(float* array){
    int a,b;
    for(a=0; a<w; a++){std::cout<<"|"<<" ";
        for(b=0; b<k; b++){
            std::cout <<*(array++)<<" ";
        }
        std::cout << "|";
        std::cout << std::endl;
    }
}
int main(){
    float tab[w][k]{{1,6,9,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6}, {1,2,3,4,5,6},{1,2,3,4,5,6}};
    wypisz_tab2Dwsk(*tab);
    return 0;
}
/*const int w=6, k=6;
void print_array2D(int array[w][k]){
    int a, b;
    for (a=0; a<w; a++){
        std::cout<< "|";
        std::cout<< " ";
        for (b=0; b<k; b++){

            std::cout << array[a][b];
            std::cout << " ";
        }
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"6x6 matrix";
}

int main (){
std::cout << "Fill the 6x6 matrix in"<<std::endl;
int i, n;
int tab[w][k];
for (i=0; i<w; i++){
    for(n=0; n<k; n++){
        std::cin >> tab[i][n];
    }
}
print_array2D(tab);

    return 0;
}
 */
/*void zmiana_elementu(int tab[ ], int rozmiar)
{
    int element = NULL;
    unsigned short indeks = NULL;
    std::cout << "Podaj indeks elementu do zmiany z przedzialu (0, " << rozmiar << ") " << std::endl;
    if (std::cin) { std::cin >> indeks; }
    std::cout << std::endl << "Podaj wartosc nowego elementu (liczby calkowite): " << std::endl;   // można zrobić to za pomocą wskaźnika, wystarczy zmienić tab[indeks] na int *(tab+indeks)
    if (std::cin) { std::cin >> element; }
    if (element && indeks) { tab[indeks] = element; }}*/

/*void sumuj_tablice1D(int rozmiar, int* tab){
    int suma=0;
    int indeks;
    for ( indeks=0; indeks<rozmiar; indeks++){
        suma+=*(tab+indeks);
    }
    std::cout << "Suma elementów tablicy wynosi:" << std::endl << suma;
}
int main() {
    int size;
    std:: cout << "Podaj rozmiar tablicy:";
    std::cin >> size;
    int array[size];
    for (int n = 0; n<size ; n++ ){
        std::cin >> array[n];
    }
    sumuj_tablice1D(size, array);
    return 0;
    //double tab[10]{1.1}; // na początku 1.1 a potem 0;
    // tab[i] - odwołanie do i-tego elementu. sama nazwa "tab" to wskaźnik do 0-wego elementu
    double* wsk = tab;
    // wskaźnik wskazuje na tab[0];
    std::cout << *tab << std::endl;
    std::cout << tab[0] << std::endl;   // użycie *tab to to samo co tab[0]
    std::cout << *wsk << std::endl;*/

   /* double* wsk1 = tab[0];
   std::cout << *wsk1 << std::endl; */ // Nie działa, bo tab[0] to double a wsk1 to double*
   /*std::cout << *(wsk+2) << std::endl;
   std::cout << wsk << std::endl;
   std::cout << *(wsk) << std::endl;
   std::cout << wsk+3 << std::endl;*/



    /* int osoby{1}, pokoje{3};
    int* osoby_wsk{&osoby}, *pokoje_wsk{&pokoje};
    std::cout << pokoje_wsk <<  " " << *pokoje_wsk<< std::endl;
    int i=0,j=1,k,l=3,m=3;
    int*p=&m,r=l,*s=&j,*t=p;
    std::cout<<m<<r<<*s<<*p<<t<<std::endl; */
//

    /*double odleglosc {4};
    double* wskaznik_odleglosc_ini = &odleglosc;
    std::cout << "Po zainicjalizowaniu wartoscia 4: \n";
    std::cout << *wskaznik_odleglosc_ini;
    wskaznik_odleglosc_ini = nullptr;
    std::cout << "\nPo ustawieniu na nullptr: \n";
    if(wskaznik_odleglosc_ini!=nullptr){
    std::cout << *wskaznik_odleglosc_ini;}
    return 0;
    */
    /*
    double odleglosc_1=244.0;
    double* wskaznik_odleglosc_1=&odleglosc_1;
    std::cout << odleglosc_1 << std::endl;
    std::cout << wskaznik_odleglosc_1 << std::endl;
    std::cout << *wskaznik_odleglosc_1 << std::endl;
    *wskaznik_odleglosc_1=150;
    std::cout << odleglosc_1;
    */
    /* Gdy do wskaźnika podstawiamy inny adres nie używamy gwiazdki
    Gwiazdka to operator dereferencji, czyli wyłuskania (umożliwia dostanie się do elementu
     który przechowywany jest pod danym adresem, adresem zmiennej typu wskaźnikowego.
     Jeżeli nie wiemy jaki adres ma się znaleźć w pamięci zarezerwowanej dla danego wskaźnika, to
     możemy użyć nullptr.
     Kiedy użyjemy nullptr musimy sprawdzić, czy wskaźnik ustawiono i dopiero z niego korzystamy, czyli
     używamy if(wskaznik...!=nullptr){wykorzytsanie wskaźnika}. "nullptr" jest przeznaczony TYLKO
     dla wskaźników.
     */
    /* Możemy przekazać wskaźnik jako parametr do funkcji, np w celu zapisania wyniku funkcji
     w zmiennej parametru funkcji */
/*}*/


