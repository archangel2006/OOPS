// 4. Create a class called Musicians to contain three methods string(), wind() and percussion(). Each of these methods should initialize a string array to contain the following instruments:

// veena, guitar, sitar, sarod and mandolin under string()
// flute, clarinet, saxophone, nadhawaram and piccolo under wind()
// tabla, mridangam, bangos, drums and tambour under percussion()

// The base class should also display the contents of the arrays that are initialized using show() method.

// Create a derived class called InsType to contain a method called get() and show().
// The get() method must display Type of instruments to be displayed:
// a. String instruments
// b. Wind instruments
// c. Percussion instruments

// The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to its derived classes.

#include <iostream>
#include <string>
using namespace std;

class Musicians {

    string str_instruments[5] = {"Veena", "Guitar", "Sitar", "Sarod", "Mandolin"};
    string wind_instruments[5] = {"Flute", "Clarinet", "Saxophone", "Nadaswaram", "Piccolo"};
    string perc_instruments[5] =  {"Tabla", "Mridangam", "Bongos", "Drums", "Tambour"};


}