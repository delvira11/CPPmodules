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
        bool                getFilled() const;
        int                 getGrade_sign();
        int                 getGrade_exec() const;
        friend std::ostream& operator<<(std::ostream& os, AForm& copy);
        void                beSigned(Bureaucrat &bureaucrat);

        virtual void    execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class FormNotSigned : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};