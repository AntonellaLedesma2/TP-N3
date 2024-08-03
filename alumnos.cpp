#include <bits/stdc++.h>

using namespace std;

class alumnos{ 
    private :
    string nombre;
    int amount_Of_Weekend_Losed;
    string subjet;
    public :
    alumnos(string _nombre, int _amount_Of_Weekend_Losed, string _subjet);
    void cantAlumnos();
    void cantalumnos();
    
};

alumnos::alumnos(string _nombre, int _amount_Of_Weekend_Losed, string _subjet) {
    nombre = _nombre;
    amount_Of_Weekend_Losed = _amount_Of_Weekend_Losed;
    subjet = _subjet;
}

void alumnos::cantAlumnos() {
  if (subjet == "SI") {
      cout << "SI" << endl;
  }  else {
      cout << "NO" << endl;
  } 
  return;
}

void alumnos::cantalumnos() {
    if (amount_Of_Weekend_Losed < 5) {
        cout << "NO" << endl;
    } else {
        cout << "SI" << endl;
    }
    return;
}

vector<alumnos> alumno;

int main(){
    string nombre;
    cout << "Ingrese su nombre" << endl;
    getline(cin, nombre);
    cout << "Ingrese la cantidad de findes de semana perdidos por la materia" << endl;
    int amount_Of_Weekend_Losed;
    cin >> amount_Of_Weekend_Losed;
    string subjet;
    cout << "La materia le parece util?" << endl;
    cin >> subjet;
    alumnos variable(nombre, amount_Of_Weekend_Losed, subjet);
    variable.cantAlumnos();
    variable.cantalumnos();
    return 0;
}