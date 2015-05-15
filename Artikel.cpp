/**
* compile: g++ -c -Wall -pedantic *.cpp
* compile: g++ -o ueb01 *.o
* @file Artikel.cpp
* @Author Andreas Schreiner & Simon Bastian
*
* @date 08.05.2015
*
* Artikel Funktionen
*
*/
#include <stdexcept>
#include "Artikel.h"
/**
* @brief Konstruktor mit 2 Parameter(Artikelnummer. Bezeichnung)
* @details Konstruktor zur Erzeugung eines Artikel Obj mit bestand=0
* @param[in] artikelNr Artikelnummer des neuen Obj
* @param[in] bezeichnung Bezeichnung des neuen Obj
*/
Artikel::Artikel(int artikelNr, string bezeichnung){
	try{
		if (artikelNr / 1 <= 0) {
			throw runtime_error("error_nan_or_negative");
		}
		else{

			this->artikelNr = artikelNr;
			this->bezeichnung = bezeichnung;
			this->bestand = 0;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}
}
/**
* @brief Konstruktor mit 3 Parameter(Artikelnummer. Bezeichnung, Bestand)
* @details Konstruktor zur Erzeugung eines Artikel Obj 
* @param[in] artikelNr Artikelnummer
* @param[in] bezeichnung Bezeichnung 
* @param[in] bestand Lagerbestand
*/
Artikel::Artikel(int artikelNr, string bezeichnung, int bestand){
	try {
		if (artikelNr / 1 <= 0 ) {
			throw runtime_error("error_nan_or_negative");
		}
		else if (bestand / 1 <= 0) {
			throw runtime_error("error_nan_or_negative");
		}
		else{
			this->artikelNr = artikelNr;
			this->bezeichnung = bezeichnung;
			this->bestand = bestand;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}
}


/**
* @brief bucheZugang
* @details Funktion zum erhoehen des Bestands
* @param[in] menge anzahl des zu addierenden Wertes
*/

void Artikel::bucheZugang(int menge){
	try {
		if (menge / 1 <= 0) {
			throw runtime_error("error_nan_or_negative");
		}
		else{
			bestand += menge;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}

}
/**
* @brief bucheAbgang
* @details Funktion zum verringern des Bestands
* @param[in] menge anzahl des zu subtrahierenden Wertes
*/
void Artikel::bucheAbgang(int menge){
	try {
		if (menge / 1 <= 0) {
			throw runtime_error("error_nan_or_negative");
		}
		else{
			bestand -= menge;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}
}
/**
* @brief setBestand
* @details Funktion zum setzen des Bestands
* @param[in] menge anzahl des zu setzenden Wertes
*/
void Artikel::setBestand(int neuBestand){
	try {
		if (neuBestand / 1 <= 0) {
			throw runtime_error("error_nan_or_negative");
		}
		else{
			bestand = neuBestand;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}
}
/**
* @brief setBezeichnung
* @details Funktion zum setzen der Bezeichnung
* @param[in] neuBezeichnung  Neue Bezeichnung
*/
void Artikel::setBezeichnung(string neuBezeichnung){
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

