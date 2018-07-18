#include <iostream>
#include <vector>

using namespace std;


template <class T>
void pobierz_dane(vector <T> &v)    //funkcja pobierajaca od uzytkownika liczby
{

    T liczba;
    int ilosc;
    cout<<"Podaj ilosc wprowadzanych liczb: "<<endl;
    cin>>ilosc;
    for (int i = 0; i < ilosc; i++)
    {
        cout<<"Podaj "<<i + 1<<" liczbe: ";
        cin>>liczba;
        v.push_back(liczba);    //metoda push_back dodaje liczbe na koniec pojemnika

    }
}
template <class T>
void wyswietl_dane(vector <T> &v)   //funkcja wyswietla elemnty pojemnika za pomca petli for
{
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
}

template <class T>
void posortuj_dane(vector <T> &v)
{
    T bufor;    //zmienna do ktorej tymczasowo przypisuje sie liczbe
    int j;
    for (int i = 1; i < v.size(); i++)
    {
         bufor = v[i];  //przypisanie elementu do zmiennej bufor
         for (int j = i - 1; j >= 0 && bufor < v[j]; j--)
         {
            v[j + 1] = v[j];    //zamiana miejsc
            v[j] = bufor;
         }
    }
}

int main()
{
    vector <int> vecInt;
    vector <long> vecLong;
    vector <float> vecFloat;
    vector <double> vecDouble;

    cout<<"VECTOR Z TYPEM INT"<<endl;
    pobierz_dane(vecInt);
    cout<<"Podane liczby: "<<endl;
    wyswietl_dane(vecInt);
    posortuj_dane(vecInt);
    cout<<endl;
    cout<<"Liczby po sortowaniu: "<<endl;
    wyswietl_dane(vecInt);
    cout<<endl;

    cout<<"VECTOR Z TYPEM LONG"<<endl;
    pobierz_dane(vecLong);
    cout<<"Podane liczby: "<<endl;
    wyswietl_dane(vecLong);
    posortuj_dane(vecLong);
    cout<<endl;
    cout<<"Liczby po sortowaniu: "<<endl;
    wyswietl_dane(vecLong);
    cout<<endl;

    cout<<"VECTOR Z TYPEM FLOAT"<<endl;
    pobierz_dane(vecFloat);
    cout<<"Podane liczby: "<<endl;
    wyswietl_dane(vecFloat);
    posortuj_dane(vecFloat);
    cout<<endl;
    cout<<"Liczby po sortowaniu: "<<endl;
    wyswietl_dane(vecFloat);
    cout<<endl;

    cout<<"VECTOR Z TYPEM DOUBLE"<<endl;
    pobierz_dane(vecDouble);
    cout<<"Podane liczby: "<<endl;
    wyswietl_dane(vecDouble);
    posortuj_dane(vecDouble);
    cout<<endl;
    cout<<"Liczby po sortowaniu: "<<endl;
    wyswietl_dane(vecDouble);


    return 0;
}
