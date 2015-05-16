// NOPE IN BEARBEITUNG!
/**
* @file Artikel.h
* @Author Andreas Schreiner & Simon Bastian
* @date 2015
*
* Eingabe Funktionen
*/
#ifndef ARTIKEL_H_
#define ARTIKEL_H_
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/**
* @brief Artikel Klasse
*/
class Artikel {
public:
	/**
	* @brief Konstruktor mit drei Argumenten
	* @param artikelNr
	* @param bezeichnung
	* @param bestand
	*/
	Artikel(int artikelNr, string bezeichnung, int bestand);
	/**
	* @brief Konstruktor mit zwei Argumenten
	* @param artikelNr
	* @param bezeichnung
	* @param bestand
	*/
	Artikel(int artikelNr, string bezeichnung);
	/**
	* @brief Zugangsbuchung eines Artikels
	* @param menge
	*/
	void bucheZugang(int menge);
	/**
	* @brief Abgangsbuchung eines Artikels
	* @param menge
	*/
	void bucheAbgang(int menge);
	/**
	* @brief Set Neuer Bestand
	* @param neuBestand
	*/
	void setBestand(int neuBestand);
	/**
	* @brief Set Neue Bezeichnung
	* @param neuBezeichnung
	*/
	void setBezeichnung(string neuBezeichnung);
	/**
	* @brief get Artikelnummer
	*/
	int getArtikelNr(){
		return artikelNr;
	}
	/**
	* @brief get Bezeichnung
	*/
	string getBezeichnung(){
		return bezeichnung;
	}
	/**
	* @brief get Bestand
	*/
	int getBestand(){
		return bestand;
	}
	/**
	* @brief Ausgeben
	* @details gebe Obj aus
	*/
	void ausgeben();
private:
	int artikelNr; ///< Artikel Nummer
	string bezeichnung; ///< Artikel Bezeichnung
	int bestand; ///< Artikel Bestand

};


#endif 

