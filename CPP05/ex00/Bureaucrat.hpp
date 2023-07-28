#include <iostream>
#include <exception>

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
        int                 getGrade();
        void                incrementGrade();
        void                decrementGrade();
        friend std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);

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