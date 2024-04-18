// Clase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Masina.h"
#include "ContBancar.h"
#include "Pasare.h"
#include "GameServer.h"


class dateOfBirth
{
private:
    int dayOfBirth;
    int yearOfBirth;
    std::string MonthOfBirth;
public:
    dateOfBirth()
    {
        dayOfBirth = 0;
        yearOfBirth = 0;
        MonthOfBirth = "";
    }
    dateOfBirth(int dayOfBirth, int yearOfBirth, std::string MonthOfBirth)
    {
        this->dayOfBirth = dayOfBirth;
        this->yearOfBirth = yearOfBirth;
        this->MonthOfBirth = MonthOfBirth;
    }
    int calcualteAge()
    {
        std::cout << "Age is " << "To DO" << std::endl;
    }

        void printDateOfBirth()
        {
            std::cout << " Day " << dayOfBirth << " Month: " << MonthOfBirth << " year " << yearOfBirth << std::endl;
        }
};



    class Persoana
    {
    private:
        //atribute
        int varsta;
        std::string Nume;
        dateOfBirth m_date_of_birth;
    public:
        Persoana(std::string Nume, int varsta, int dayOfBirth, int yearOfBirth, std::string MonthOfBirth)
        {
            //operatorul this este ca un pointer catre propria instanta
            this->Nume = Nume;
            this->varsta = varsta;
            m_date_of_birth = dateOfBirth(dayOfBirth, yearOfBirth, MonthOfBirth);
        }
        //metoda
        void printInfo()
        {
            std::cout << "Salut ma cheama " << Nume << " si am " << varsta << "ani\n";
            m_date_of_birth.printDateOfBirth();
        }
};



class myClass 
{

    int my_var;
    std::string my_string;
public:
    myClass() // construtor
    {
        std::cout << "un obiect myClass a fost creat\n";
        my_var = 10;
        my_string = "myClass";
    }
    myClass(int var, std::string input_string)
    {
        std::cout << "un obiect myClass a fost creat\n";
        my_var = var;
        my_string = input_string;
    }

    ~myClass() // destructor
    {
        std::cout << "un obiect myClass a fost distrus\n";
    }

    void printData()
    {
        std::cout << "Val lui myVar este " << my_var << std::endl;
        std::cout << "Val lui my_string este " << my_string << std::endl;
    }

};

int main()
{

    GameServer server_1(5 , 10);
    server_1.printServerInfo();
       






    myClass obj;
    obj.printData();
    // inca un mod de a creea obiecte in C++
    myClass obj2 = myClass(45, "Obiectul2");
    obj2.printData();

    // myClass obj2;
    //obj2 = myClass(45, "Obiectul 2");

    Persoana p1 = Persoana("Voicu",11, 11, 1999, "Novembre");
    p1.printInfo();


    Masina m;
    m.an_fabricatie = 2023;
    m.numar_locuri = 5;
    m.model = "ssangyoung";
    m.printCarInfo();
    m.accelereaza();


    ContBancar c1;
    c1.initCont();
    c1.printInfoCont();
    c1.depunereSuma(1000);
    c1.printInfoCont();

    Pasare pasare;
    pasare.scoateSunet();
}