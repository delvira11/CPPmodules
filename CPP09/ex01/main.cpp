#include "RPN.hpp"


int array_size(std::string line)
{
    int i = 0;
    int size = 0;
    while (line[i] != '\0')
    {
        while (line[i] == ' ' || line[i] == '\t')
            i++;
        while (line[i] != ' ' && line[i] != '\t' && line[i] != '\0')
            i++;
        size++;
    }
    return (size);
}

std::string *string_split(std::string line)
{
    std::string *array = new std::string[array_size(line)];
    int i = 0;
    int x = 0;
    int j = 0;

    while (line[i] != '\0')
    {
        x = 0;
        while (line[i] == ' ' || line[i] == '\t')
            i++;
        while (line[i + x] != ' ' && line[i + x] != '\t' && line[i + x] != '\0')
            x++;
        array[j] = line.substr(i, x);
        j++;
        i += x;
    }
    return (array);
}

int main(int nargs, char **args)
{
    if (nargs != 2)
    {
        std::cout << "This program needs one argument" << std::endl;
        return (0);
    }

    std::string line(args[1]);
    std::string *array = string_split(line);
    for (int i = 0; i < array_size(line) ; i++)
    {
        std::cout << array[i] << std::endl;
    }

    return (0);
}