#include "campo.h"

int main() {
	bool logical = 1;

	campo c(30, 40, 0);
	c.sigla();
	system("pause");
	system("cls");
	c.regolamento();
	system("pause");
	system("cls");
	c.stampa();
	system("pause");
	while (logical == 1)
	{
		system("cls");
		c.aggiungiO();
		c.stampa();
		system("pause");
	}


	/*
	
		QUI CI VA IL WHILE DEL PROCESSO DEL GIOCO
	
	*/

	return 0;
}