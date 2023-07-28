#include <iostream>
#include "Bureaucrat.hpp"


class Form
{
    private:
        std::string const   name;
        bool                filled;
        int const           grade_sign;
        int const           grade_exec;

    public:
        Form(std::string const name);
        Form(Form &copy);
        Form &operator=(Form &copy);
        ~Form();

        std::string const   getName();
        bool                getFilled();
        int                 getGrade_sign();
        int                 getGrade_exec();
        friend std::ostream& operator<<(std::ostream& os, Form& copy);
        void                beSigned(Bureaucrat &bureaucrat);


    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
};