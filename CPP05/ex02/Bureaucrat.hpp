#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
    private:
        std::string const   name;
        int                 grade;
    public:
        // Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat &copy);
        Bureaucrat &operator=(Bureaucrat &copy);
        ~Bureaucrat();


        std::string const   getName();
        int                 getGrade() const;
        void                incrementGrade();
        void                decrementGrade();
        friend std::ostream& operator<<(std::ostream& os, Bureaucrat& copy);

        void                signForm(AForm &form);

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