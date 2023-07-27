#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = copy.target;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
    this->target = copy.target;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGrade_exec())
    {
        throw AForm::GradeTooLowException();
    }
    else if (this->getFilled() == false)
    {
        throw AForm::FormNotSigned();
    }
    else
    {
    std::string filename;

    filename = this->target + "_shrubbery ";
    std::ofstream outfile(filename.c_str());
    if (outfile.is_open()) 
    {
        outfile << "       _-_" << std::endl;
        outfile << "    /~~   ~~\\" << std::endl;
        outfile << " /~~         ~~\\" << std::endl;
        outfile << "{               }" << std::endl;
        outfile << "    ~  \\ //  ~" << std::endl;
        outfile << "_- -   | | _- _" << std::endl;
        outfile << "  _ -  | |   -_" << std::endl;
        outfile << "      // \\" << std::endl;
        outfile.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }
    }
}