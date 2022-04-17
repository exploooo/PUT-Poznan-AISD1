#include <iostream>
using namespace std;

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
