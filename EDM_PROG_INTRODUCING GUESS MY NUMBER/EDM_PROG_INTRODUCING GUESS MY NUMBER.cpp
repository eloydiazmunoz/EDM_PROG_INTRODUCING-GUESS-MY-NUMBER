#include <iostream>  // Inclusió de la llibreria d'entrada/sortida
#include <cstdlib>  // Inclusió de la llibreria estàndard de C amb funcions d'ús general
#include <ctime>  // Inclusió de la llibreria per a manipulació del temps

using namespace std;  // Espai de noms per a utilitzar les entitats de la llibreria standard

int main() {  // Funció principal del programa
    srand(time(0));  // Inicialització de la generació de nombres aleatoris

    int numeroAleatori = rand() % 100 + 1;  // Genera un nombre aleatori entre 1 i 100
    int suposicio, intents = 0;  // Declaració de variables per emmagatzemar la suposició de l'usuari i el nombre d'intents

    cout << "Benvingut al joc de l'endevina el nombre entre 1 i 100!" << endl;  // Missatge de benvinguda

    do {
        cout << "Introdueix la teva suposicio: ";  // Sol·licitud de la suposició de l'usuari
        cin >> suposicio;  // Lectura de la suposició de l'usuari

        if (suposicio < 1 || suposicio > 100) {  // Comprovació de la validesa de la suposició
            cout << "La suposicio ha d'estar entre 1 i 100. Torna a provar." << endl;  // Missatge d'error
            continue;  // Torna al principi del bucle
        }

        if (suposicio > numeroAleatori) {  // Comparació de la suposició amb el nombre aleatori
            cout << "Massa alta. Torna a provar." << endl;  // Missatge indicant que la suposició és massa alta
        }
        else if (suposicio < numeroAleatori) {  // Comparació de la suposició amb el nombre aleatori
            cout << "Massa baixa. Torna a provar." << endl;  // Missatge indicant que la suposició és massa baixa
        }

        intents++;  // Increment del comptador d'intents
    } while (suposicio != numeroAleatori);  // Bucle que continua fins que la suposició coincideixi amb el nombre aleatori

    cout << "Felicitats! Has endevinat el nombre en " << intents << " intents." << endl;  // Missatge de felicitació amb el nombre d'intents

    return 0;  // Indicació d'èxit del programa
}
