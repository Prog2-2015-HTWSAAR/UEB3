// NOPE IN BEARBEITUNG!
/**
* compile: g++ -c -Wall -pedantic *.cpp
* compile: g++ -o ueb01 *.o
* @file Artikel.cpp
* @Author Andreas Schreiner & Simon Bastian
*
* @date 16.05.2015
*
* Artikel Funktionen
*
*/

#include "Artikel.h"
/**
* @brief Konstruktor mit 2 Parameter(Artikelnummer. Bezeichnung)
* @details Konstruktor zur Erzeugung eines Artikel Obj mit bestand=0
* @param[in] artikelNr muss vierstellig sein!
* @param[in] bezeichnung darf kein leerer String sein!
*/
Artikel::Artikel(int artikelNr, string bezeichnung){
	if (artikelNr < 1000  || artikelNr > 9999) {
		throw "Die Artikelnummer muss eine 4-stellige positive Zahl sein!";
	}

	if (bezeichnung.empty()){
		throw "Die Bezeichnung eines Artikels darf nicht leer sein!";
	}
	this->artikelNr = artikelNr;
	this->bezeichnung = bezeichnung;
	this->bestand = 0;
}
/**
* @brief Konstruktor mit 3 Parameter(Artikelnummer. Bezeichnung, Bestand)
* @details Konstruktor zur Erzeugung eines Artikel Obj 
* @param[in] artikelNr Artikelnummer
* @param[in] bezeichnung Bezeichnung 
* @param[in] bestand Lagerbestand
*/
Artikel::Artikel(int artikelNr, string bezeichnung, int bestand){
	if (artikelNr < 1000  || artikelNr > 9999) {
		throw "Die Artikelnummer muss eine 4-stellige positive Zahl sein!";
	}

	if (bezeichnung.empty()){
		throw "Die Bezeichnung eines Artikels darf nicht leer sein!";
	}
	if (bestand < 0){
		throw "Der Bestand dar nie negativ sein!";
	}
	this->artikelNr = artikelNr;
	this->bezeichnung = bezeichnung;
	this->bestand = bestand;


}


/**
* @brief bucheZugang
* @details Funktion zum erhoehen des Bestands
* @param[in] menge anzahl des zu addierenden Wertes
*/

void Artikel::bucheZugang(int menge){
	if(menge < 0){
		throw "Es duerfen nur positive Mengen gebucht werden!";
	}
	bestand += menge;
}
/**
* @brief bucheAbgang
* @details Funktion zum verringern des Bestands
* @param[in] menge anzahl des zu subtrahierenden Wertes
*/
void Artikel::bucheAbgang(int menge){
	if(menge < 0){
		throw "Es duerfen nur positive Mengen gebucht werden!";
	}
	bestand -= menge;
}
/**
* @brief setBestand bei Inventur
* @details Funktion zum setzen des Bestands
* @param[in] menge anzahl des zu setzenden Wertes
*/
void Artikel::setBestand(int neuBestand){
	if (neuBestand < 0){
		throw "Der Bestand dar nie negativ sein!";
	}
	bestand = neuBestand;

}
/**
* @brief setBezeichnung
* @details Funktion zum setzen der Bezeichnung
* @param[in] neuBezeichnung  Neue Bezeichnung
*/
void Artikel::setBezeichnung(string neuBezeichnung){
	if (neuBezeichnung.empty()){
		throw "Die Bezeichnung eines Artikels darf nicht leer sein!";
	}
	bezeichnung = neuBezeichnung;
}
/**
* @brief ausgeben
* @details Funktion zum ausgeben eines Obj
*/
void Artikel::ausgeben(){
	cout << "Artikelnummer: " << artikelNr
		<< "\nBezeichnung: " << bezeichnung
		<< "\naktl. Bestand: " << bestand << endl;
}

