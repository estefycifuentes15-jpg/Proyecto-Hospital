#include "Usuario.h"

Usuario::Usuario() : nombre(""), email(""), clave(""), perfil("") {}

Usuario::Usuario(std::string nnombre, std::string nemail, std::string nclave, std::string nperfil) {
	nombre = nnombre;
	email = nemail;
	clave = nclave;
	perfil = nperfil;
}

Usuario::~Usuario() {}

void Usuario::setNombre(std::string nnombre) { nombre = nnombre; }
std::string Usuario::getNombre() { return nombre; }

void Usuario::setEmail(std::string nemail) { email = nemail; }
std::string Usuario::getEmail() { return email; }

void Usuario::setClave(std::string nclave) { clave = nclave; }
std::string Usuario::getClave() { return clave; }

void Usuario::setPerfil(std::string nperfil) { perfil = nperfil; }
std::string Usuario::getPerfil() { return perfil; }

bool Usuario::verificarUsuario(std::string nemail, std::string nclave) {
	return (nemail == email && nclave == clave);
}
