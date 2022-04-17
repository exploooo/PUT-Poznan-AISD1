#include <iostream>
using namespace std;

/*

Polecenia:

Napisz program, który wykona jedno z poni¿szych zadañ (numer zadania jest wprowadzany przez u¿ytkownika na pocz¹tku wykonania programu BEZ poprzedzaj¹cego komunikatu):

1. Obliczy œredni¹ arytmetyczn¹ dla 4 liczb ca³kowitych wprowadzonych przez u¿ytkownika. Liczby wprowadzane s¹ przez u¿ytkownika BEZ poprzedzaj¹cego komunikatu.
Wynik obliczeñ ma zostaæ wypisany na ekran. Sprawdzanie poprawnoœci wprowadzanych danych nie jest wymagane.

2. Wyznaczy pole trójk¹ta. U¿ytkownik (BEZ poprzedzaj¹cego komunikatu) podaje d³ugoœæ podstawy, a nastêpnie odpowiadaj¹c¹ jej wysokoœæ trójk¹ta w cm.
Obliczone pole trójk¹ta ma zostaæ wypisane na ekran. W przypadku, gdy u¿ytkownik poda dla którejkolwiek d³ugoœci wartoœæ mniejsz¹ ni¿ 0 nale¿y wyœwietliæ "NaN".

3. Realizuje prosty kalkulator. U¿ytkownik w pierwszym etapie wprowadza numer operacji, któr¹ chce wykonaæ, gdzie 1 - dodawanie, 2 - odejmowanie, 3 - mno¿enie, 4 - dzielenie, 5 - modulo.
Nastêpnie u¿ytkownik (BEZ poprzedzaj¹cego komunikatu) wprowadza dwie liczby, na których wybrana wczeœniej operacja ma zostaæ wykonana. Program ma wyœwietliæ wynik wybranego dzia³ania.
W przypadku dzielenia przez 0 nale¿y wyœwietliæ "NaN". Sprawdzanie poprawnoœci danych wprowadzanych do kalkulatora nie jest wymagane.

W programie nale¿y sprawdziæ, czy numer zadania zosta³ poprawnie wprowadzony. W przypadku b³êdnego wprowadzenia numeru zadania na ekran nale¿y wyœwietliæ "Wrong task number.". Sprawdzanie poprawnoœci typu wprowadzanych danych nie jest wymagane.

Przyk³adowo, dla poni¿szych danych wejœciowych:

2 3 4

program powinien wyœwietliæ

6

*/

int main(){

    int wybor;
    cin >> wybor;

    switch (wybor){

    case 1:{

        int a, b, c, d;
        float srednia;

        cin >> a >> b >> c >> d;

        srednia = (static_cast<float>(a) + static_cast<float>(b) + static_cast<float>(c) + static_cast<float>(d))/4;

        cout << srednia;

    break;
    }

    case 2:{

        float podstawa, wysokosc;
        cin >> podstawa >> wysokosc;

        if (podstawa<=0 || wysokosc <= 0){
            cout << "NaN";
        }
        else{
            cout << (podstawa * wysokosc)/2;
        }

    break;
    }

    case 3:{

        int operacja;
        cin >> operacja;
        float a, b;
        cin >> a >> b;
        switch (operacja){

            case 1:{

                cout << a + b;

            break;
            }

            case 2:{

                cout << a - b;

            break;
            }

            case 3:{

                cout << a * b;

            break;
            }

            case 4:{

                if(b != 0){
                    cout << a/b;
                }
                else{
                    cout << "NaN";
                }

            break;
            }

            case 5:{

                if(b!=0){
                    cout << static_cast<int>(a)%static_cast<int>(b);
                }
                else{
                    cout << "NaN";
                }

            break;
            }

            default:
                cout << "Wrong Operation Number.";

        }

    break;
    }

    default:
        cout << "Wrong Task Number.";
    }

    return 0;
}
