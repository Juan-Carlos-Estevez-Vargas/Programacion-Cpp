/*Escriba una función nombrada calc_años() que tenga un parámetro entero que represente
 el número total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados 
 año, mes y día. La función debe calcular el año, mes y día actual para el número dado 
 de días que se le transmitan. Usando las referencias, la función deberá alterar en 
 forma directa los argumentos respectivos en la función que llama. Para este problema 
 suponga que cada año tiene 365 días y cada mes tiene 30 días.*/
 #include<iostream>
 #include<conio.h>
 
 // 21/05/2009
 // 3456
 
 using namespace std;
 
 void calc_anios(int, int &anio, int &mes, int &dia);
 
 int main() {
 	system("color A3");
 	int numeroDias = 0;
 	int anio = 0;
 	int mes = 0;
 	int dia = 0;
 	
 	cout << "Ingrese el número de días que han transcurrido " << endl;
 	cin >> numeroDias;
 	
 	calc_anios(numeroDias, anio, mes, dia);
 	
 	cout << "Usted se encuentra en la fecha " << dia << "/" << mes << "/" << anio + 2000 << endl;
 	
 	return 0;
 }
 
void calc_anios(int dias, int &year, int &month, int &day) {
	// dias = 3456
	year = dias / 365; // 9
	dias %= 365; // 171
	
	month = dias / 30; // 5
	day = dias %= 30; // 21
}


