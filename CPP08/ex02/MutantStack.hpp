#include <iostream>
#include <stack>

//No hace falta hacer la clase manualmente ortodoxa ya que hereda los constructores, destructor y operador de asignacion de la clase stack

template <typename T>

class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};

