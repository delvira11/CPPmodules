#include <iostream>
#include "Bureaucrat.hpp"


class AForm
{
    private:
        std::string const   name;
        bool                filled;
        int const           grade_sign;
        int const           grade_exec;

    public:
        AForm(std::string const name, int grade_sign, int grade_exec);
        AForm(AForm &copy);
        AForm &operator=(AForm &copy);
        ~AForm();

        std::string const   getName();
        bool                getFilled();
        int                 getGrade_sign();
        int                 getGrade_exec();
        friend std::ostream& operator<<(std::ostream& os, AForm& copy);
        void                beSigned(Bureaucrat &bureaucrat);


    class GradeTooHighException : public std::exception
    {
        public:
            const char *what();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what();
    };
};