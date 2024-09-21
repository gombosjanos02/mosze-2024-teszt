#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hibás konstans név
    std::cout << '1-100 ertekek duplazasa'; //hiányzó ;
    for (int i = 0; i; i++) //hibás for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:";
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) //, ; helyett
    {
        atlag += b[i];
    } //hiányzó ;
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Szia Jani!" << std::endl;
    return 0;
}
