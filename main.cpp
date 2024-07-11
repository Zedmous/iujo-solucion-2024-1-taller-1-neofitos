#include <iostream>
#include <string>
using namespace std;

/*
Funcion que no retorna ningun dato
Tiene 1 parametro:
	Parametro 1: es tipo string de variable llamada mensaje.
su funcion es imprimir un mensaje.
*/
void imprimirMensaje(string mensaje){
	cout << mensaje<< endl;
}

/*
Funcion que no retorna ningun dato, 
Tiene 2 parametros:
	Parametro 1: es tipo string de variable llamada mensaje.
	Parametro 2: es tipo string de variable llamada dato.
su funcion es imprimir una variable de tipo string.
*/
void imprimirString(string mensaje,string dato){
	cout << mensaje<< dato<< endl;
}

/*
Funcion que no retorna ningun dato, 
Tiene 2 parametros:
	Parametro 1: es tipo string de variable llamada mensaje.
	Parametro 2: es tipo int de variable llamada dato.
su funcion es imprimir una variable de tipo int.
*/
void imprimirEntero(string mensaje,int dato){
	cout << mensaje<< dato<< endl;
}

/*
Funcion que no retorna ningun dato, 
Tiene 2 parametros:
	Parametro 1: es tipo string de variable llamada mensaje.
	Parametro 2: es tipo int de variable llamada dato.
su funcion es imprimir una variable de tipo float.
*/
void imprimirFloat(string mensaje,float dato){
	cout << mensaje<< dato<< endl;
}

/*
Funcion que retorna un dato de tipo string, 
Tiene 1 parametro:
	Parametro 1: es tipo string de variable llamada mensaje.
su funcion es leer una variable de tipo string.
*/
string leerString(string mensaje){
	string r="";
	cout << mensaje;//se usa
	cin >> r;
	return r;
}

/*
Funcion que retorna un dato de tipo float, 
Tiene 1 parametro:
	Parametro 1: es tipo string de variable llamada mensaje.
su funcion es leer una variable de tipo float.
*/
float leerFloat(string mensaje){
	float r=0.0;
	cout << mensaje;
	cin >> r;
	return r;
}

/*
Funcion que retorna un dato de tipo int, 
Tiene 1 parametro:
	Parametro 1: es tipo string de variable llamada mensaje.
su funcion es leer una variable de tipo int.
*/
int leerEntero(string mensaje){
	int r=0;
	cout << mensaje;
	cin >> r;
	return r;
}


/*
Funcion que retorna un dato de tipo float, 
Tiene 2 parametros:
	Parametro 1: es tipo float de variable llamada a.
	Parametro 2: es tipo float de variable llamada b.
su funcion es calcular la suma de dos numeros.
*/
float calcularSuma(float a,float b){
	return a+b;
}

int main(int argc, char** argv) {

	imprimirMensaje("----------INICIANDO PROGRAMA----------");
	//declaracion de variables
	string razon_social="";
	string rif_cedula="";
	int resp=1,cont_mayor=0,cont_detal=0;
	while(resp==1){
		rif_cedula=leerString("Ingrese el rif o cedula: ");
		razon_social=leerString("Ingrese la razon social: ");
		int comprar=leerEntero("¿Que desea comprar? : Refrescos:1 , Maltas:2, Ambos:3  ");
		int cantidad_r=0,cantidad_m=0;
		float monto_pagar=0.0;
		if(comprar==1){
			cantidad_r=leerEntero("Ingrese la cantidad de refrescos a comprar: ");
			if(cantidad_r>=6){
				monto_pagar=5*cantidad_r;
				cont_mayor++;//cont_mayor=cont_mayor+1;
			}else{
				monto_pagar=10*cantidad_r;
				cont_detal++;
			}
			imprimirFloat("El monto a pagar para este cliente es de: ",monto_pagar);
		}else if(comprar==2){
			
			cantidad_m=leerEntero("Ingrese la cantidad de maltas a comprar: ");
			if(cantidad_m>=6){
				monto_pagar=7*cantidad_m;
				cont_mayor++;
			}else{
				monto_pagar=12*cantidad_m;
				cont_detal++;//
			}
			imprimirFloat("El monto a pagar para este cliente es de: ",monto_pagar);
		}else{
			cantidad_r=leerEntero("Ingrese la cantidad de refrescos a comprar: ");
			if(cantidad_r>=6){
				monto_pagar=5*cantidad_r;
				cont_mayor++;
			}else{
				monto_pagar=10*cantidad_r;
				cont_detal++;
			}
			cantidad_m=leerEntero("Ingrese la cantidad de maltas a comprar: ");
			if(cantidad_m>=6){
				monto_pagar+=7*cantidad_m;//monto_pagar=monto_pagar+7*cantidad_m
				cont_mayor++;
			}else{
				monto_pagar+=12*cantidad_m;
				cont_detal++;
			}
			imprimirFloat("El monto a pagar para este cliente es de: ",monto_pagar);
		}
		resp=leerEntero("¿Otro cliente desea realizar una compra: si:1 , no:otro caso ");
	}
	imprimirMensaje("----------DATOS ESTADISTICOS----------");
	imprimirEntero("La cantidad de ventas al mayor fueron de: ",cont_mayor);
	imprimirEntero("La cantidad de ventas al detal fueron de: ",cont_detal);
	return 0;
}

