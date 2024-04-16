#include "ContBancar.h"

void ContBancar::printInfoCont()
{
	std::cout <<"Titularul Contului " << nume_utilizator << " " << prenume_utilizator << std::endl;
	std::cout << "Valuare sold: " << sold << std::endl;
}

void ContBancar::initCont()
{
    if (nume_utilizator.empty() && prenume_utilizator.empty())
    {
        std::cout << "Introduceti numele utilizatorului\n";
        std::cin >> nume_utilizator;
        std::cout << "Introduceti prenume utilizatorului\n";
        std::cin >> prenume_utilizator;

        // Validarea valorii soldului pentru a nu fi negativă
        do {
            std::cout << "Introduceti soldul initial: ";
            std::cin >> sold;
            if (sold < 0) {
                std::cout << "Eroare! Soldul initial nu poate fi negativ. Va rugam sa reintroduceti." << std::endl;
            }
        } while (sold < 0);
    }
    else
    {
        std::cout << "Error! Contul este deja initilizat " << std::endl;
    }
}


bool ContBancar::depunereSuma(float suma)
{
    if (suma == -999) {
        std::cout << "Eroare! Nu se poate introduce valoarea -999 pentru depunere." << std::endl;
        return false;
    }

    if (suma > 0 && (sold + suma) >= 0) {
        sold += suma;
        return true;
    }

    return false;
}

bool ContBancar::retragereSuma(float suma)
{
    if (suma <= 0) {
        std::cout << "Eroare! Suma de retragere trebuie să fie pozitivă." << std::endl;
        return false;
    }

    if (suma > sold) {
        std::cout << "Eroare! Fonduri insuficiente în cont." << std::endl;
        return false;
    }

    sold -= suma;
    return true;
}

bool ContBancar::retragereSuma(int suma)
{
    return false;
}

bool ContBancar::depunereSuma(int suma)
{
    return false;
}










