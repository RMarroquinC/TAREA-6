#include <iostream>
using namespace std;
//M?todos y Funciones = Ejecutan una porcion de c?digos seg?n sea solicitado (N cantidad de veces segun sean solicitado)
//M?todo = no retorna un tipo de dato.
//Funci?n = retorna un tipo de dato determinado


//FUNCION QUE SUMA DOS VALORES
/*int suma(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}*/


//FUNCION QUE RESTA DOS VALORES
/*int resta(int num1,int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}*/



/*int suma1(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
} 

int suma2(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
*/

//METODO
/*void suma(int num1, int num2){
	int resultado=0;
	resultado = num1 + num2;
	cout<<resultado<<endl;
}*/

//METODO Y ENVIO DE PARAMETROS POR VALOR
/*void suma(int num1,int num2){
	int resultado=0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}*/


//METODO Y ENVIO DE PARAMETROS POR REFERENCIA
   void suma(int &num1,int &num2){
	int resultado=0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}


main(){
	
	/*cout<<suma(10,20)<<endl;
	cout<<suma(50,70)<<endl;
	cout<<suma(90,10)<<endl;*/
	
	/*cout<<resta(10,20)<<endl;
	cout<<resta(50,70)<<endl;
	cout<<resta(90,10)<<endl;*/
	
	/*cout<<suma1(10,20)<<endl;
	cout<<suma2(10,20,40)<<endl;*/
	
	/*suma(10,20);*/	
	
	
	int a=10, b=20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	system("pause");
}