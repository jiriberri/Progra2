//Nombre:
//TP N°:
//EJ N°:
//Comentarios:
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class Fecha
{
  private:
    int dia;
    int mes;
    int anio;
    bool esbisiesto(int);
    void NumeroSerieaFecha(int);
  public:
    Fecha(int d=0,int m=0,int a=0);
    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAnio(){return anio;}
    void setDia(int d){dia=d;}
    void setMes(int m){mes=m;};
    void setAnio(int a){anio=a;}
    void MostrarFecha();
    void MostrarFechaTexto();
    int NumeroSerie();
    bool operator >(Fecha &);
    bool operator ==(Fecha &);
    Fecha operator+(int);
    int operator -(Fecha &);
    void operator +=(int);
    friend istream & operator>>(istream &, Fecha &);
    friend ostream & operator<<(ostream &, Fecha &);
};

class Empleado {
private:
    int dni, cargo;
    char nombre[10], apellido[10], email[30], domicilio[30];
    Fecha fechaNacimiento;

public:
    //constructor
    Empleado(int d=0){
        dni=d;
    };
    //sets()
    void setDni(int d){
        dni=d;
    }
    void setNombre(char *n){
        strcpy(nombre, n);
    }
    void setApellido(char *n){
        strcpy(apellido, n);
    }
    void setDomicilio(char *n){
        strcpy(domicilio, n);
    }
    void setEmail(char *n){
        strcpy(email, n);
    }
    void setFechaNacimiento(Fecha f){
        fechaNacimiento=f;
    }
    void setCargo(int c){
        cargo=c;
    }
    //gets()
    int getDni(){
        return dni;
    }
    const char *getNombre(){
        return nombre;
    }
    const char *getApellido(){
        return apellido;
    }
    const char *getDomicilio(){
        return domicilio;
    }
    const char *getEmail(){
        return email;
    }
    Fecha getFechaNacimiento(){
        return fechaNacimiento;
    }
    int getCargo(){
        return cargo;
    }
};

int main(void) {

	return 0;
}
