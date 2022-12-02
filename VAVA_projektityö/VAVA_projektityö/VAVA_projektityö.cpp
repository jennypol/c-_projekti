#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
bool voitto = false;
string RandomSana(int);
int RandomNumero(int);
void Hirsipuu(int);
void tulostaSana(string sana, string kirjain);

//Maaritetaan funktiot

int main() {
	int elamat = 7;
	int valinta;
	int numero;
	string kirjain;
	string sana;
	string arvattuKirjain = "";

	cout << "Valitse tasosi: \n1)Helppo\n2)Keskiverto\n3)Vaikea\n-->";
	cin >> valinta;

	//Validate input
	while (valinta < 1 || valinta > 3) {
		system ("cls");
		cout << "Olet valinnut vaaran numeron \n";
		cout<<"Valitse tasosi : \n1)Helppo\n2)Keskiverto\n3)Vaikea\n-- > ";
		cin >> valinta;
	}
	sana = RandomSana(valinta);
	system("cls");//Tyhjentaa nayton.
	bool apua = false;
	while (elamat > 0) {
		voitto = true;
		Hirsipuu(elamat);
		tulostaSana(sana, arvattuKirjain);
		if (apua) {
			voitto = false;
			apua = false;
		}
		if (voitto)
			break;

		cout << "\n\nJos haluat tietää ensimmäisen kirjaimen kitjoita 'help'";
		cout << "\n\nKirjaimia arvattu: "<<arvattuKirjain << endl;
		cout << "\n\nAnna kirjain: ";
		cin >> kirjain;
		int b = 0;
		while (kirjain[b] != '\0')
			b++;
		if (b > 2) {
			if (sana == "apua") {
				apua = true;
				elamat--;
				cout << "-->\"" << sana[0] << "\"<--" << endl;
				kirjain = sana[0];
				system("stoppi");//Pausettaa ruudun.
			}
			else {
				system("cls");
				for (;;)//lopullinen looppi
				{
					cout << "Huijjaat" << endl;
				}
			}
		}
		arvattuKirjain += kirjain[0];
		if (sana.find(kirjain) != -1 || apua) {
			system("cls");
			continue;
		}
		else {
			system("cls");
			elamat--;
		}
	}
	if (elamat == 0) {
		cout << "Hävisit";
		cout << "Sana oli: " << sana << endl;
	}
	if (elamat > 0) {
		cout << "Voitit!";
		cout << "Sana oli: " << sana << endl;
	}
	return 0;

}
string RandomSana(int valinta) {
	int randomNum = RandomNumero(valinta);
	int laskin = 1;
	string rivi, sana;
	ifstream file("sanakirja.txt");
	while(getline(file, rivi)) {
		if (randomNum ==laskin) {
			sana = rivi;
			break;
		}
		laskin++;
	}
	return sana;
}
int RandomNumero(int valinta) {
	srand(time(NULL));
	int random;
	if (valinta == 1) 
		random=(rand() % (158 + 1 - 1)) + 1;
	if (valinta == 2)
		random = (rand() % (456 + 1 - 159)) + 159;
	if (valinta == 3)
		random = (rand() % (669 + 1 - 457))+457;
	return random;
}
void Hirsipuu(int elamat) {
	switch (elamat) {
	case 0:
		cout << "____________ \n";
		cout << "|   _____  | \n";
		cout << "|   |/  |  | \n";
		cout << "|   |   o  | \n";
		cout << "|   |  /|\ | \n";
		cout << "|  _|__/ \ | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 1:
		cout << "____________ \n";
		cout << "|   _____  | \n";
		cout << "|   |/  |  | \n";
		cout << "|   |   o  | \n";
		cout << "|   |  /|\ | \n";
		cout << "|  _|__/   | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 2:
		cout << "____________ \n";
		cout << "|   _____  | \n";
		cout << "|   |/  |  | \n";
		cout << "|   |   o  | \n";
		cout << "|   |  /|\ | \n";
		cout << "|  _|__    | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 3:
		cout << "____________ \n";
		cout << "|   _____  | \n";
		cout << "|   |/  |  | \n";
		cout << "|   |   o  | \n";
		cout << "|   |  /|  | \n";
		cout << "|  _|__    | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 4:
		cout << "____________ \n";
		cout << "|   _____  | \n";
		cout << "|   |/  |  | \n";
		cout << "|   |   o  | \n";
		cout << "|   |   |  | \n";
		cout << "|  _|__    | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 5:
		cout << "____________ \n";
		cout << "|   _____  | \n";
		cout << "|   |/  |  | \n";
		cout << "|   |   o  | \n";
		cout << "|   |      | \n";
		cout << "|  _|__    | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 6:
		cout << "____________ \n";
		cout << "|   _____  | \n";
		cout << "|   |/     | \n";
		cout << "|   |      | \n";
		cout << "|   |      | \n";
		cout << "|  _|__    | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 7:
		cout << "____________ \n";
		cout << "|          | \n";
		cout << "|   |      | \n";
		cout << "|   |      | \n";
		cout << "|   |      | \n";
		cout << "|  _|__    | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 8:
		cout << "____________ \n";
		cout << "|          | \n";
		cout << "|          | \n";
		cout << "|          | \n";
		cout << "|          | \n";
		cout << "|  ____    | \n";
		cout << "| |    |   | \n";
		cout << "____________ \n";
		break;
	case 9:
		cout << "____________ \n";
		cout << "|          | \n";
		cout << "|          | \n";
		cout << "|          | \n";
		cout << "|          | \n";
		cout << "|          | \n";
		cout << "|          | \n";
		cout << "____________ \n";
	}
}
void tulostaSana(string sana, string kirjain) {
	for (int i = 0; i < sana.size(); i++)
	{
		if (kirjain.find(sana.at(i) != -1))
			cout << sana.at(i) << " ";
		else {
			cout << "_ ";
			voitto = false;
		}
	}
	
}