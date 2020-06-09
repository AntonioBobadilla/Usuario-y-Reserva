#include "Usuario.hpp"

Usuario::Usuario(string nombre,int id,float km,string pass,string dir,int tel,string correo){
  Nombre = nombre;
  id_usuario = id;
  Kilometros = km;
  password = pass;
  direccion = dir;
  telefono = tel;
  email = correo;
}
void Usuario::validarPassword(int id, string pass){
  //
}

  void Usuario::OutputAsLabel(){
    //
  }
