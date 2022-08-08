#include <iostream>
using namespace std;

void cargarMateria(int vMateria[20][3], string vNombreMateria[20], int filas);
int *cargarAlumno(int num1, int num2, int num3, int resultado[]);

void cargarMateria(int vMateria[20][3], string vNombreMateria[20], int filas){

    for(int i=0; i < filas ; i++){
        cout<<"Ingresar numero de materia"<<endl;
        cin>>vMateria[i][0];
        cout<<"Ingresar nombre de materia"<<endl;
        cin>>vNombreMateria[i];
        cout<<vNombreMateria[i];
        cout<<endl<<"Ingresar cantidad de alumnos inscriptos"<<endl;
        cin>>vMateria[i][1];
        cout<<"Ingresar cantidad de profesores"<<endl;
        cin>>vMateria[i][2];
    }
}
int *cargarAlumno(int num1,int num2, int num3, int resultado[]){
    int legajo, dia, mes, numMateria;
    float horas;

    cout<<"Ingresar legajo: "; cin>>legajo;

   while(legajo!=0){

        system("cls");
    cout<<"Ingresar legajo: "; cin>>horas;
   }
///provisorio
    int suma=1;
    int mul=2;
    int div=3;
    resultado[0]=suma;
    resultado[1]=mul;
    resultado[2]=div;

    return resultado;
}

int main(){
    int op, filas=2, puntoA=0, puntoB=0, puntoC=0, num1 = 0, num2 = 0, num3 = 0;

    int vMateria[20][3];
    string vNombreMateria[20];
    do{
        cout<<"1. Cargar datos"<<endl;
        cout<<"2. a"<<endl;
        cout<<"3. b"<<endl;
        cout<<"4. c"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>op;
        switch(op){
            case 1:
                cargarMateria(vMateria, vNombreMateria, filas);
                int *resultado = cargarAlumno(num1, num2, num3, resultado);
                puntoA= resultado[0];
                puntoB= resultado[1];
                puntoC= resultado[2];
            break;
        }
    }while(op!=5);
    system("pause");
    return 0;

}