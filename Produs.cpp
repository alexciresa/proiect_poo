#include "Produs.h"

Produs::Produs()
{
    this->denumireProdus = "Necunoscuta";
    this->pretProdus = 0;
}

Produs::Produs(string denumireProdus, float pretProdus)
{
    this->denumireProdus = denumireProdus;
    if (pretProdus > 0)
        this->pretProdus = pretProdus;
    else pretProdus = 0;
 
}

Produs::Produs(const Produs& prod)
{
    this->denumireProdus = prod.denumireProdus;
    this->pretProdus = prod.pretProdus;
}

void Produs::operator=(Produs prod)
{
    this->denumireProdus = prod.denumireProdus;
    this->pretProdus = prod.pretProdus;
}

istream& operator>>(istream& intrare, Produs& prod)
{
    cout << "Denumire produs: ";
    char buffer[50];
    intrare.getline(buffer, 50);
    prod.denumireProdus = buffer;
    cout << "Pretul produsului: ";
    intrare >> prod.pretProdus;

    return intrare;
}

    ostream& operator<<(ostream & iesire, Produs prod)
    {
        iesire << "Denumire produs: " << prod.denumireProdus << endl << "Pret: " << prod.pretProdus << endl;

        return iesire;
    }

    ifstream& operator>>(ifstream& intrare, Produs& prod)
    {
        char buffer[50];
        intrare.getline(buffer, 50);
        prod.denumireProdus = buffer;
        intrare >> prod.pretProdus;

        return intrare;
    
    }

    ofstream& operator<<(ofstream& iesire, Produs prod)
    {
        const char* aux = prod.denumireProdus.c_str();
        iesire.write(aux, strlen(aux) + 1);
        iesire << endl;
        iesire << prod.pretProdus;
        iesire << endl;


        return iesire;
    }
