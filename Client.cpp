#include "Client.h"

Client::Client() : Persoana(), codClient(0) {}

Client::Client(string numePersoana, string localitate, string data_nasterii, unsigned int codClient) : Persoana(numePersoana, localitate, data_nasterii), codClient(codClient)
{
}

unsigned int Client::getCodClient()
{
	return codClient;
}

void Client::setCodClient(unsigned int codClient)
{
	this->codClient = codClient;
}

