#ifndef USUARIO_HPP_INCLUDED
#define USUARIO_HPP_INCLUDED

class Usuario{
private:
  string Nombre;
  int id_usuario;
  float Kilometros;
  string password;
  string direccion;
  int telefono;
  string email;

public:
  Usuario(string,int,float,string,string,int,string);
  void validarPassword(int,string);
  void OutputAsLabel();


}

#endif
