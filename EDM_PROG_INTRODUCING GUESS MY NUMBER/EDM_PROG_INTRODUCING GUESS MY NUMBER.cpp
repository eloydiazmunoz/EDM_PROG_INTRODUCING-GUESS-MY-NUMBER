#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicialització de la generació de nombres aleatoris

    int numeroAleatori = rand() % 100 + 1; // Genera un nombre aleatori entre 1 i 100
    int suposicio, intents = 0;

    cout << "Benvingut al joc de l'endevina el nombre entre 1 i 100!" << endl;

    do {
        cout << "Introdueix la teva suposicio: ";
        cin >> suposicio;

        if (suposicio < 1 || suposicio > 100) {
            cout << "La suposicio ha d'estar entre 1 i 100. Torna a provar." << endl;
            continue;
        }

        if (suposicio > numeroAleatori) {
            cout << "Massa alta. Torna a provar." << endl;
        }
        else if (suposicio < numeroAleatori) {
            cout << "Massa baixa. Torna a provar." << endl;
        }

        intents++;
    } while (suposicio != numeroAleatori);

    cout << "Felicitats! Has endevinat el nombre en " << intents << " intents." << endl;

    return 0;
}
