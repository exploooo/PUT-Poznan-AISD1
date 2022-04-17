#include <iostream>
using namespace std;

/*

Polecenia:

Napisz program, kt�ry wykona jedno z poni�szych zada� (numer zadania jest wprowadzany przez u�ytkownika na pocz�tku wykonania programu BEZ poprzedzaj�cego komunikatu):

1. Obliczy �redni� arytmetyczn� dla 4 liczb ca�kowitych wprowadzonych przez u�ytkownika. Liczby wprowadzane s� przez u�ytkownika BEZ poprzedzaj�cego komunikatu.
Wynik oblicze� ma zosta� wypisany na ekran. Sprawdzanie poprawno�ci wprowadzanych danych nie jest wymagane.

2. Wyznaczy pole tr�jk�ta. U�ytkownik (BEZ poprzedzaj�cego komunikatu) podaje d�ugo�� podstawy, a nast�pnie odpowiadaj�c� jej wysoko�� tr�jk�ta w cm.
Obliczone pole tr�jk�ta ma zosta� wypisane na ekran. W przypadku, gdy u�ytkownik poda dla kt�rejkolwiek d�ugo�ci warto�� mniejsz� ni� 0 nale�y wy�wietli� "NaN".

3. Realizuje prosty kalkulator. U�ytkownik w pierwszym etapie wprowadza numer operacji, kt�r� chce wykona�, gdzie 1 - dodawanie, 2 - odejmowanie, 3 - mno�enie, 4 - dzielenie, 5 - modulo.
Nast�pnie u�ytkownik (BEZ poprzedzaj�cego komunikatu) wprowadza dwie liczby, na kt�rych wybrana wcze�niej operacja ma zosta� wykonana. Program ma wy�wietli� wynik wybranego dzia�ania.
W przypadku dzielenia przez 0 nale�y wy�wietli� "NaN". Sprawdzanie poprawno�ci danych wprowadzanych do kalkulatora nie jest wymagane.

W programie nale�y sprawdzi�, czy numer zadania zosta� poprawnie wprowadzony. W przypadku b��dnego wprowadzenia numeru zadania na ekran nale�y wy�wietli� "Wrong task number.". Sprawdzanie poprawno�ci typu wprowadzanych danych nie jest wymagane.

Przyk�adowo, dla poni�szych danych wej�ciowych:

2 3 4

program powinien wy�wietli�

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
