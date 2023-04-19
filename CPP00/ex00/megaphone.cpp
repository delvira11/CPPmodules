#include <iostream>

using namespace std;

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
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    while (args[i])
    {
    args[i] = to_upper(args[i]);
    cout << (args[i]);
    i++;
    }
    return (0);
}
