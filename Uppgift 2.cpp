#include <iostream>

using namespace std;

int main()
{
    //Variabler
    int Antalsekunder;

    int timmar;
    int minuter;
    int sekunder;

    int Kvarsekunder;

    //Hänvisar till användaren att ange antal sekunder och sedan lagrar siffran i programmet.
    cout << "Skriv in antal sekunder: ";
    cin >> Antalsekunder;

    //beräkning på antal sekunder till timmar, minuter, sekunder med divison och modulos.
    timmar = Antalsekunder / 3600;
    Kvarsekunder = Antalsekunder % 3600;
    minuter = Kvarsekunder / 60;
    Kvarsekunder = Kvarsekunder % 60;
    sekunder = Kvarsekunder;

    //Ger resultatet till användaren.
    cout<<"Tiden är: "<<timmar<<" timmar, "<<minuter<<" minuter, "<<sekunder<<", sekunder";




    return 0;
}
