/**
* @file Artikel.h
* @Author Andreas Schreiner & Simon Bastian
* @date 16.05.2015
*
* Eingabe Funktionen
*/
#ifndef ARTIKEL_H_
#define ARTIKEL_H_
#include <string>
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
	* @param artikelPreis
	* @param bestand
	*/
	Artikel(int artikelNr, string bezeichnung, double artikelPreis, int bestand);
	/**
	* @brief Konstruktor mit zwei Argumenten
	* @param artikelNr
	* @param bezeichnung
	* @param artikelPreis
	*/
	Artikel(int artikelNr, string bezeichnung, double artikelPreis);
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
	* @brief Set Neue Bezeichnung
	* @param neuBezeichnung
	*/
	void setBezeichnung(string neuBezeichnung);
	/**
	* @brief Set Neuer Bestand
	* @param neuBestand
	*/
	void setBestand(int neuBestand);
	/**
	* @brief Set neuer Preis
	* @param neuBezeichnung	*/
	void setPreis(double neuPreis);
	/**
	 * @brief Preisaenderung
	 * @param preisaenderung in Prozent
	 */
	void aenderePreis(double preisaenderung);
	/**
	* @brief get Artikelnummer
	* @return artikelNr
	*/
	int getArtikelNr() const {
		return artikelNr;
	}
	/**
	* @brief get Bezeichnung
	* @return bezeichnung
	*/
	string getBezeichnung() const {
		return bezeichnung;
	}
	/**
	* @brief get Bestand
	* @return bestand
	*/
	int getBestand() const {
		return bestand;
	}
	/**
	* @brief get ArtikelPreis
	* @return artikelPreis
	*/
	double getArtikelPreis() const{
		return artikelPreis;
	}
private:
	int artikelNr; ///< Artikel Nummer
	string bezeichnung; ///< Artikel Bezeichnung
	int bestand; ///< Artikel Bestand
	double artikelPreis; ///< Artikel Preis
};


#endif 

