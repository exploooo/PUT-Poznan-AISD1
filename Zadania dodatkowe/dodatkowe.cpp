#include <iostream>
using namespace std;

int main(){

    int wybor;
    cin>>wybor;

    switch (wybor){

        case 1:{ // Zadanie 1. �rednia wa�ona

            int x1 ,x2, x3, x4, x5, w1, w2, w3, w4, w5; //x - liczba, w - waga przypisana liczbie z danym numere, wprowadzamy liczby ca�kowite - int
            cin >> x1 >> x2 >> x3 >> x4 >> x5 >> w1 >> w2 >> w3 >> w4 >> w5;

            cout << static_cast<float>((x1 * w1 + x2 * w2 + x3 * w3 + x4 * w4 + x5 * w5))/static_cast<float>((w1 + w2 + w3 + w4 + w5)); // rzutujemy na floata i dzielimy liczb� rzeczywist� przez liczb� rzeczywist� co da nam rzeczywisty wynik

        break;
        }

        case 2:{ // Zadanie 2. Przypisanie i zamiana warto�ci zmiennych

            double a, b, c;
            cin >> a >> b >> c;
            c = a; // do zmiennej c idzie warto�� a (bufor)
            a = b; // do zmiennej a idzie warto�� b
            b = c; // do zmiennej b idzie warto�� c (czyli warto�� a)

            // stracili�my pierwotn� warto�� c

            cout << a << " " << b << " " << c;

        break;
        }

        case 3:{ // Zadanie 3. Modulo

            int a, b; // dzielenie z reszt� bez specjalnych funkcji za pomoc� modulo dokona� mo�emy tylko na liczbach ca�kowitych
            cin >> a >> b;

            cout << a%b;

        break;
        }

        case 4:{ // Zadanie 4. Ci�g liczb

            float a, b, c; // tak na prawde mo�na tu wprowadzi� liczby rzeczywiste, przedzia� i tak b�dzie dzia�a�
            cin >> a >> b >> c; // a - pocz�tek przedzia�u, b - koniec przedzia�u, c - krok

            for (float i = a; i <= b; i += c){
                cout << i << " ";
            }

        break;
        }

        case 5:{ // Zadanie 5. Silnia

            int n, silnia = 1; // nie spotka�em si� jeszcze z silni� nieca�kowit� wi�c tu zostawie typ int
            cin >> n;

            for(int i = 1; i <= n; i++){
                silnia *= i;
            }

            cout << silnia;

        break;
        }

        case 6:{ // Zadanie 6. Suma cyfr

            int x;
            int dzielnik = 10;
            int suma_cyfr = 0;
            cin >> x;

            if(x < 0){ // zamieniam liczb� na modu� by program dzia�a� bez b��d�w
                x*=-1;
            }

            while(x>0){
                suma_cyfr+=x%dzielnik;
                x/=dzielnik;
            }

            cout << suma_cyfr;

        break;
        }

        case 7:{ // Zadanie 7. Szukanie element�w w tablicy

            static const int wielkosc = 10; // wielkosc tablicy - to mozna regulowac wystarczy podmieniac wartosc zmiennej;
            int tab[wielkosc];

            if(wielkosc < 2){ // gdy tablica nie posiada nieparzystych index�w
                cout << "W tablicy nie ma nieparzystych indexow"; // pozwoli�em sobie doda� komunikat na wypadek gdy w tablicy nie pojawi si� ani jeden nieparzysty index.
            }

            else{ // Gdy tablica posiada nieparzyste indexy

                for(int i=0; i<wielkosc; i++){ // Uzupe�niamy tablic� elementami
                    cin >> tab[i];
                }

                int minimum = tab[1];

                for(int i = 3; i<wielkosc; i++){
                    if(i%2 !=0){
                        if(tab[i]<minimum){
                            minimum = tab[i];
                        }
                    }
                }

                cout << minimum;
            }

        break;
        }

        default:{
            cout << "Wrong task number.";
        }

    }

    return 0;
}
