#include <iostream>
#include <fstream>


int main(int nargs, char** args)
{
    std::string name;
    std::string s1;
    std::string s2;
    std::string stringin;
    std::string mychar;
    std::string nameout;
    int position;
    std::ifstream filein(name);

    name = args[1];
    s1 = args[2];
    s2 = args[3];

    nameout = name + ".replace";
    std::ofstream fileout(nameout);

   filein.open(name);
    if (filein.is_open())
    {
        while (filein.good())
        {
            std::getline(filein, mychar);
            stringin.append(mychar);
            stringin.append("\n");
        }
    }
    while (stringin[stringin.find(s1)] != '\0')
    {
    position = stringin.find(s1);
    stringin.erase(position, s1.length());
    stringin.insert(position, s2);
    }
    fileout << stringin;
    
}