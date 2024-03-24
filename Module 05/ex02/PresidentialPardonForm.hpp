#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>
#include "Bureaucrat.hpp" // Assurez-vous d'inclure l'en-tête de Bureaucrat

class PresidentialPardonForm : public AForm {
private:
    std::string target;
public:
    PresidentialPardonForm(); // Déclaration du constructeur sans paramètres
    PresidentialPardonForm(const std::string& target);
    virtual ~PresidentialPardonForm () {}
    virtual void execute(const Bureaucrat& executor) const;
};

#endif
