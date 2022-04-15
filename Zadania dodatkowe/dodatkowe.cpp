#include <iostream>
using namespace std;

int main(){

    int wybor;
    cin>>wybor;

    switch (wybor){

        case 1:{ // Zadanie 1. Œrednia wa¿ona

            int x1 ,x2, x3, x4, x5, w1, w2, w3, w4, w5; //x - liczba, w - waga przypisana liczbie z danym numere, wprowadzamy liczby ca³kowite - int
            cin >> x1 >> x2 >> x3 >> x4 >> x5 >> w1 >> w2 >> w3 >> w4 >> w5;

            cout << static_cast<float>((x1 * w1 + x2 * w2 + x3 * w3 + x4 * w4 + x5 * w5))/static_cast<float>((w1 + w2 + w3 + w4 + w5)); // rzutujemy na floata i dzielimy liczbê rzeczywist¹ przez liczbê rzeczywist¹ co da nam rzeczywisty wynik

        break;
        }

        case 2:{ // Zadanie 2. Przypisanie i zamiana wartoœci zmiennych

            double a, b, c;
            cin >> a >> b >> c;
            c = a; // do zmiennej c idzie wartoœæ a (bufor)
            a = b; // do zmiennej a idzie wartoœæ b
            b = c; // do zmiennej b idzie wartoœæ c (czyli wartoœæ a)

            // straciliœmy pierwotn¹ wartoœæ c

            cout << a << " " << b << " " << c;

        break;
        }

        case 3:{ // Zadanie 3. Modulo

            int a, b; // dzielenie z reszt¹ bez specjalnych funkcji za pomoc¹ modulo dokonaæ mo¿emy tylko na liczbach ca³kowitych
            cin >> a >> b;

            cout << a%b;

        break;
        }

        case 4:{ // Zadanie 4. Ci¹g liczb

            float a, b, c; // tak na prawde mo¿na tu wprowadziæ liczby rzeczywiste, przedzia³ i tak bêdzie dzia³a³
            cin >> a >> b >> c; // a - pocz¹tek przedzia³u, b - koniec przedzia³u, c - krok

            for (float i = a; i <= b; i += c){
                cout << i << " ";
            }

        break;
        }

        case 5:{ // Zadanie 5. Silnia

            int n, silnia = 1; // nie spotka³em siê jeszcze z silni¹ nieca³kowit¹ wiêc tu zostawie typ int
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

            if(x < 0){ // zamieniam liczbê na modu³ by program dzia³a³ bez b³êdów
                x*=-1;
            }

            while(x>0){
                suma_cyfr+=x%dzielnik;
                x/=dzielnik;
            }

            cout << suma_cyfr;

        break;
        }

        case 7:{ // Zadanie 7. Szukanie elementów w tablicy

            static const int wielkosc = 10; // wielkosc tablicy - to mozna regulowac wystarczy podmieniac wartosc zmiennej;
            int tab[wielkosc];

            if(wielkosc < 2){ // gdy tablica nie posiada nieparzystych indexów
                cout << "W tablicy nie ma nieparzystych indexow"; // pozwoli³em sobie dodaæ komunikat na wypadek gdy w tablicy nie pojawi siê ani jeden nieparzysty index.
            }

            else{ // Gdy tablica posiada nieparzyste indexy

                for(int i=0; i<wielkosc; i++){ // Uzupe³niamy tablicê elementami
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
