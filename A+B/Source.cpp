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
			if (pinCard = 1998&&incercariPin>0) {
				cout << "PIN-ul introdus este corect. In continuare selecteaza una dintre actiuni: \n";
				cout << "1. Interogare sold.\n2. Retragere numerar.\n3. Anulare.";
			}
			else {
				cout << "PIN-ul introdus este incorect. Mai ai " << incercariPin << " incercari, te rog sa reincerci.\n";
				incercariPin--;
				goto reincercarePin;
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
