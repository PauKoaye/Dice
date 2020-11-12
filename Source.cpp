#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

int nrzar,numar,numarpc,rezultat,rezultatpc,jetoane=50,jetoanep,jetoanea,con; 


int main()
{
	cout << "Bine ai venit!"<< "\n";
	 
	

		while (jetoane > 0)
		{
			cout << "Ai " << jetoane << " de jetoane in cont." << "\n";

			cout << "Alege numarul de jetoane pe care vrei sa le pariezi: ";

			cin >> jetoanep;

			jetoane -= jetoanep;

			cout << "Introdu de la tastatura numarul de zaruri cu care vrei sa arunci: "; //se specifica numarul de zaruri aruncate

			cin >> nrzar;

			if (nrzar <= 0)
			{	//se verifica daca numarul introdus  este negaitiv sau egal cu 0

				cout << "\n" << "Numarul introdus este invalid. " << "\n"; // in acest caz programul afiseaza "Numarul introdus este invalid" si se opreste fortat

				return 0;
			}

			numar = nrzar * 6; //numarul maxim generat de functia rand devine 6 inmultit cu numarul de zaruri 
			numarpc = numar;

			srand(time(NULL));  //declararea functiei rand



			rezultat = rand() % numar + 1; //+1 deoarece numarul minim pe un zar este 1 
										   //iar minimul functiei rand este 0


			rezultatpc = rand() % numarpc + 1;





			if (rezultat > rezultatpc)
			{				//Se compara rezultatele pentru a stabili castigatorul

				jetoane += jetoanep * 2;

				cout << "\n" << "Felicitari, ai castigat! Ai obtinut " << rezultat << " iar oponentul tau " << rezultatpc << "." << "\n";


			}
			if (rezultat == rezultatpc)
			{

				jetoane += jetoanep;

				cout << "\n" << "Tu si oponentul tau ati obtinut " << rezultat << "." << "\n";

			}


			if (rezultat < rezultatpc)

				cout << "\n" << "Nu ai avut noroc de data asta. Oponentul tau a obtinut " << rezultatpc << " iar tu " << rezultat << ". Mult noroc data viitoare!" << "\n";



			if (jetoane == 0)
			{
				cout <<"\n"<< "Ai ramas fara jetoane. " << "\n" << "Daca vrei sa mai introduci jetoane introdu tasta 1, daca vrei sa te opresti aici introdu tasta 2. " ;

				cin >> con;

				if (con == 1) 
				{

					cout << "Introdu de la tastatura numarul de jetoane pe care vrei sa le adaugi: ";

					
					cin >> jetoanea;

					jetoane += jetoanea;
				}
			}

		}


		return 0;
}
