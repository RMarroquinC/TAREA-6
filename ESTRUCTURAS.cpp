#include <iostream>
using namespace std;
//Estructuras struct (una forma de agrupar varias variables relacionadas en un solo lugar.)

/*struct Estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
};*/

//PUNTEROS
struct Estudiante{
	int *codigo;
	string *nombre;
	int **nota;
};

main(){
	Estudiante estudiante;
	/*for (int i=0; i<4; i++){
	 cout<<"___________________________"<<endl;
	 cout<<"Ingrese Codigo: ";
 	 cin>>estudiante.codigo[i];
	 cin.ignore();
	 cout<<"Ingrese Nombre Completo: ";
	 getline(cin,estudiante.nombre[i]);
	 cout<<"Ingrese Nota: ";
	 cin>>estudiante.nota[i];
    }
	
	for (int i=0; i<4; i++){
	 cout<<"___________________________"<<endl;
	 cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
	 cout<<"Nombre Completo: "<<estudiante.nombre[i]<<endl;
	 cout<<"Nota: "<<estudiante.nota[i]<<endl;
    }*/
	
	
	int fila= 0, columna=0;
	cout<<"Cuantos estudiantes desea agregar: ";
	cin>>fila;
	cout<<"Cuantas notas por estudiante desea agregar: ";
	cin>>columna;
	
	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];
	estudiante.nota = new int*[fila];
	
	for (int i=0; i<fila; i++){
		estudiante.nota[i]= new int [columna];
	}
	
	cout<<"__________________________Ingreso de notas_________________________"<<endl;
	for (int i=0; i<fila; i++){
		cout<<"Codigo["<<i<<"]: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<"]: "<<endl;
		getline(cin,estudiante.nombre[i]);
		for(int ii=0; ii<columna; ii++){
			cout<<"Ingrese Nota["<<ii<<"]: "<<endl;
			cin>>*(*(estudiante.nota+i)+ii);
		}
		cout<<"_______________________________________________________________"<<endl;
	}
	A
	cout<<"_________________________Mostrar datos_____________________________";
	
	for (int i=0; i<fila; i++){
		cout<<"Codigo["<<i<<"]: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<"]: "<<estudiante.nombre[i]<<endl;
		for(int ii=0; ii<columna; ii++){
			cout<<"Ingrese Nota["<<ii<<"]: "<<*(*(estudiante.nota+i)+ii);
		}
		cout<<"_______________________________________________________________";
	}
	system("pause");
}