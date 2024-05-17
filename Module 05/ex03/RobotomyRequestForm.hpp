#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>

class RobotomyRequestForm : public AForm {
private:
    std::string target;
public:
    RobotomyRequestForm(const std::string& target);
    virtual void execute(const Bureaucrat& executor) const;
};

#endif
