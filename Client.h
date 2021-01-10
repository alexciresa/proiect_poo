#pragma once
#include "persoana.h"

class Client :	public Persoana

{
	unsigned int codClient;

public:

	Client();
	Client(string numePersoana, string localitate, string data_nasterii, unsigned int codClient);
	~Client();


	unsigned int getCodClient();
	void setCodClient(unsigned int codClient);
};

