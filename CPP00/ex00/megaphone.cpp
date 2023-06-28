#include <iostream>

char *to_upper(char *str)
{
    int i = 0;
    char *new_str;

    new_str = str;
    while (str[i] != '\0')
    {
       if (str[i] >= 'a' && str[i] <= 'z')
       {
            new_str[i] = str[i] - 32;
       }
       else
            new_str[i] = str[i];
        i++;
    }
    return (new_str);
}

int main(int nargs, char **args)
{
    int i = 1;

    if (nargs == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    while (args[i])
    {
    args[i] = to_upper(args[i]);
    std::cout << (args[i]) << std::endl;
    i++;
    }
    return (0);
}
