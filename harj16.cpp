#include <iostream>
using namespace std;
struct LISTA {
	char etun[20];
	char sukun[20];
	float koulumatka;
	char osoite[30];
	char postinro[30];
	int kengannumero;
};
int main()
{
	LISTA lista1;
	cout << "Anna etu- ja sukunimesi"<<endl;
	cin >> lista1.etun>>ws>>lista1.sukun;
	cout << "kuinka pitkä koulumatka sinulla on(kilometreinä)?"<<endl;
	cin >>lista1.koulumatka;
	cout << "Mikä on osoitteesi?"<<endl;
	cin>>ws;
	cin.getline(lista1.osoite,29);
	cout <<"Entä postinumerosi?"<<endl;
	cin>>ws;
	cin.getline(lista1.postinro,29);
	cout<<"Ja kengännumerosi?"<<endl;
	cin >> lista1.kengannumero;
	cout<<"Tietosi"<<endl<<lista1.etun<<" "<<lista1.sukun<<endl;
	cout<<"Koulumatkan pituus "<<lista1.koulumatka<<" km"<<endl<<lista1.osoite;
	cout<<endl<<lista1.postinro<<endl<<"Kengannumerosi "<<lista1.kengannumero<<endl;
	return 0;
}