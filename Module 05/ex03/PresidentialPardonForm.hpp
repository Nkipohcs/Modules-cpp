#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>

class PresidentialPardonForm : public AForm {
private:
    std::string target;
public:
    PresidentialPardonForm(const std::string& target);
    virtual void execute(const Bureaucrat& executor) const;
};

#endif
