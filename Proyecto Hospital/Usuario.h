#pragma once
#include <string>
using namespace std;

class Usuario
{
private:
    string nombre; // nombre para saludo
    string email;  // correo para login
    string clave;
    string perfil;

public:
    Usuario();
    Usuario(string nnombre, string nemail, string nclave, string nperfil);
    ~Usuario();
    void setNombre(string nnombre);
    string getNombre();
    void setEmail(string nemail);
    string getEmail();
    void setClave(string nclave);
    string getClave();
    void setPerfil(string nperfil);
    string getPerfil();
    bool verificarUsuario(string nemail, string nclave);
};


