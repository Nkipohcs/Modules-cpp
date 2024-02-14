#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>


class Bureaucrat;

class AForm {
protected:
    const std::string name;
    bool isSigned;
    const int gradeRequiredToSign;
    const int gradeRequiredToExecute;
public:
    AForm(const std::string& name, int gradeToSign, int gradeToExecute);
    virtual ~AForm();
    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;
    void beSigned(const Bureaucrat& bureaucrat);
    virtual void execute(const Bureaucrat& executor) const = 0;
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
};

#endif
