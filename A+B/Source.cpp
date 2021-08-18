#include<iostream>
#include <chrono>
#include <thread>
using namespace std;


int main() {

	bool card = true;
	string raspuns;
	int incercariRaspuns = 4;
	int pinCard;
	int incercariPin = 4;
	string raspuns2;
	float sold = 2535.79;
	string raspuns3;
	int incercariRaspuns3 = 4;
	int raspuns4;
	string raspuns5;
	int sumaRetragere;
	string raspuns6;

	cout << "Bine ati venit la bancomatul BRD!" << endl;
	RetryCard:
	cout << "Va rugam sa introduceti cardul: "<< endl;
	if (card == true) {
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	reincercareRaspuns:
		cout << "Pentru a continua, va informam ca veti fi taxati conform contractul incheiat cu banca dumneavoastra." << endl;
		cout << "Sunteti de acord?:";
		cin >> raspuns;
		if (raspuns == "DA" || raspuns == "da" || raspuns == "Da" || raspuns == "dA") {
		reincercarePin:
			cout << "Va rog sa introduceti PIN-ul cardului: ";
			cin >> pinCard;
			if (pinCard = 1998 && incercariPin > 0) {
				cout << "PIN-ul introdus este corect.";
			}
			else {
				cout << "PIN-ul introdus este incorect. Mai ai " << incercariPin << " incercari, te rog sa reincerci.\n";
				incercariPin--;
				goto reincercarePin;
			}
			altaActiune:
				cout << "In continuare selecteaza una dintre actiuni: \n";
				cout << "1. Interogare sold.\n2. Retragere numerar.\n3. Anulare.";
				cin >> raspuns2;
				if (raspuns6 == "ANULARE" || raspuns6 == "anulare" || raspuns6 == "Anulare") {
					cout << "Ati anulat. Va multumim ca ati ales sa folositi bancomatul BRD!\n";
				}
				if (raspuns2 == "INTEROGARE SOLD" || raspuns2 == "interogare sold" || raspuns2 == "Interogare Sold" || raspuns2 == "Interogare sold" || raspuns2 == "interogare Sold") {
					cout << "Soldul contului dumneavoastra este: " << sold << " lei.\n";
					cout << "Doriti sa selectati o noua actiune?";
					cin >> raspuns3;
					if (raspuns3 == "DA" || raspuns3 == "da" || raspuns3 == "Da" || raspuns3 == "dA") {
						goto altaActiune;
					}
					else if (raspuns3 == "NU" || raspuns3 == "nu" || raspuns3 == "Nu" || raspuns3 == "nU") {
						cout << "Va multumim frumos ca ati ales sa folositi bancomatul BRD. O zi buna!\n";
					}
					else if (incercariRaspuns3 > 0) {
						cout << "Raspunsul introdus este invalid. Mai ai " << incercariRaspuns3 << " incercari.\n";
						incercariRaspuns--;
						goto altaActiune;
					}
					else {
						cout << "Ati incercat de prea multe ori.\n";
						cout << "Va multumim frumos ca ati ales sa folositi bancomatul BRD. O zi buna!\n";
					}
				}
				if (raspuns2 == "RETRAGERE NUMERAR" || raspuns2 == "retragere numerar" || raspuns2 == "Retragere Numerar" || raspuns2 == "Retragere numerar" || raspuns2 == "retragere Numerar") {
					cout << "Care este suma pe care doriti sa o retrageti?\n";
					cout << "1. 50 de lei.\n2. 100 de lei.\n3. 200 de lei.\n4. 500 de lei,\n5. 900 de lei.\n6. Alta suma.";
					cin >> raspuns4;
					switch (raspuns4) {
					case 1:
						cout << "Ati ales sa scoateti 50 de lei de la bancomat. Doriti si chitanta? DA/NU";
						cin >> raspuns5;
						if (raspuns3 == "DA" || raspuns3 == "da" || raspuns3 == "Da" || raspuns3 == "dA") {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati chitanta.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
						else {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
					case 2:
						cout << "Ati ales sa scoateti 100 de lei de la bancomat. Doriti si chitanta? DA/NU";
						cin >> raspuns5;
						if (raspuns3 == "DA" || raspuns3 == "da" || raspuns3 == "Da" || raspuns3 == "dA") {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati chitanta.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
						else {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
					case 3:
						cout << "Ati ales sa scoateti 200 de lei de la bancomat. Doriti si chitanta? DA/NU";
						cin >> raspuns5;
						if (raspuns3 == "DA" || raspuns3 == "da" || raspuns3 == "Da" || raspuns3 == "dA") {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati chitanta.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
						else {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
					case 4:
						cout << "Ati ales sa scoateti 500 de lei de la bancomat. Doriti si chitanta? DA/NU";
						cin >> raspuns5;
						if (raspuns3 == "DA" || raspuns3 == "da" || raspuns3 == "Da" || raspuns3 == "dA") {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati chitanta.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
						else {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
					case 5:
						cout << "Ati ales sa scoateti 900 de lei de la bancomat. Doriti si chitanta? DA/NU";
						cin >> raspuns5;
						if (raspuns3 == "DA" || raspuns3 == "da" || raspuns3 == "Da" || raspuns3 == "dA") {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati chitanta.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
						else {
							cout << "Ridicati cardul va rog.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va rog sa ridicati banii.\n";
							std::this_thread::sleep_for(std::chrono::milliseconds(5000));
							cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
						}
					default:
					reincercareSuma:
						cout << "Va rog sa introduceti suma pe care doriti sa o retrageti. Aceasta trebuie sa fie multiplu de 5.";
						cin >> sumaRetragere;
						if (sumaRetragere % 5 == 0) {
							cout << "Ati ales sa scoateti " << sumaRetragere << " de lei de la bancomat. Doriti si chitanta? DA/NU";
							cin >> raspuns5;
							if (raspuns3 == "DA" || raspuns3 == "da" || raspuns3 == "Da" || raspuns3 == "dA") {
								cout << "Ridicati cardul va rog.\n";
								std::this_thread::sleep_for(std::chrono::milliseconds(5000));
								cout << "Va rog sa ridicati banii.\n";
								std::this_thread::sleep_for(std::chrono::milliseconds(5000));
								cout << "Va rog sa ridicati chitanta.\n";
								std::this_thread::sleep_for(std::chrono::milliseconds(5000));
								cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
							}
							else {
								cout << "Ridicati cardul va rog.\n";
								std::this_thread::sleep_for(std::chrono::milliseconds(5000));
								cout << "Va rog sa ridicati banii.\n";
								std::this_thread::sleep_for(std::chrono::milliseconds(5000));
								cout << "Va multumim ca ati ales sa folositi bancomatul BRD!\n";
							}

						}
						else if (sumaRetragere % 5 > 0) {
							cout << "Suma introdusa nu este corecta, trebuie sa fie multiplu de 5. Te rugam sa incerci din nou!\n";
							goto reincercareSuma;
						}

					}
				}
			
				}
				else if (raspuns == "NU" || raspuns == "nu" || raspuns == "Nu" || raspuns == "nU") {
				mesajSfarsit:
					cout << "Va multumim frumos ca ati ales sa folositi bancomatul BRD. O zi buna!\n";
				}
				else {
					if (incercariRaspuns > 0) {
						cout << "Raspunsul introdus este invalid. Mai ai " << incercariRaspuns << " incercari.\n";
						incercariRaspuns--;
						goto reincercareRaspuns;
					}
					else {
						cout << "Ati introdus de prea multe ori raspunsul.\n";
						goto mesajSfarsit;
					}
				}
			}
			else {
				cout << "Cardul introdus nu este valid sau nu o fost introdus corect, te rugam sa incerci din nou!\n";
				goto RetryCard;
			}

			return 0;
		}
	
