#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    
    std::cout << "1-100 ertekek duplazasa\n";
    
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek:" << b[i] << "\n";
    }   
    
    std::cout << "Atlag szamitasa: " << std::endl;
    
    int atlag = 0;
    
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    
    delete[] b;
    
    //Akkor se fogok apache netbabokban Javázni :)

    return 0;
}
