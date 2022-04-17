#include <iostream>
using namespace std;

/*

1. Obliczy średnią arytmetyczną dla 4 liczb całkowitych wprowadzonych przez użytkownika. Liczby wprowadzane są przez użytkownika BEZ poprzedzającego komunikatu.
Wynik obliczeń ma zostać wypisany na ekran. Sprawdzanie poprawności wprowadzanych danych nie jest wymagane.

2. Wyznaczy pole trójkąta. Użytkownik (BEZ poprzedzającego komunikatu) podaje długość podstawy, a następnie odpowiadającą jej wysokość trójkąta w cm.
Obliczone pole trójkąta ma zostać wypisane na ekran. W przypadku, gdy użytkownik poda dla którejkolwiek długości wartość mniejszą niż 0 należy wyświetlić "NaN".

3. Realizuje prosty kalkulator. Użytkownik w pierwszym etapie wprowadza numer operacji, którą chce wykonać, gdzie 1 - dodawanie, 2 - odejmowanie, 3 - mnożenie,
4 - dzielenie, 5 - modulo. Następnie użytkownik (BEZ poprzedzającego komunikatu) wprowadza dwie liczby, na których wybrana wcześniej operacja ma zostać wykonana.
Program ma wyświetlić wynik wybranego działania. W przypadku dzielenia przez 0 należy wyświetlić "NaN".
Sprawdzanie poprawności danych wprowadzanych do kalkulatora nie jest wymagane.

*/


int main(){

    int wybor;
    cin >> wybor;

    switch(wybor){

    case 1:{

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << (static_cast<float>(a) + static_cast<float>(b) + static_cast<float>(c) + static_cast<float>(d))/4;

    break;
    }

    case 2:{

        float wysokosc, podstawa;
        cin >> wysokosc >> podstawa;
        if (wysokosc < 0 || podstawa < 0){
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

            if(b==0){
                cout << "NaN";
            }

            else{
                cout << a/b;
            }

        break;
        }

        case 5:{

            if(b==0){
                cout << "NaN";
            }

            else{
                cout << static_cast<int>(a)%static_cast<int>(b);
            }

        break;
        }

        default:
            cout << "Wrong Operation Number";

        }

    break;
    }

    default:
        cout << "Wrong Task Number.";

    }

    return 0;
}
