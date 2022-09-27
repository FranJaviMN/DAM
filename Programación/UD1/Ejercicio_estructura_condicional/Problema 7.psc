Algoritmo calculo_4_numeros

	//Definimos las variables, en este caso los dos numero que necesitamos
	
	Definir numero1 Como Real
	Definir numero2 Como Real
	
	Escribir "Dime los dos numeros: "
	Leer numero1, numero2
	
	//Creamos una condición donde, si el numero 1 es mayor al 2 se hace una cosa, de lo contrario otra

	si numero1 > numero2 Entonces
		Escribir "Su suma es de ",numero1+numero2
		Escribir "Su diferencia es de ",numero1-numero2
	Sino
		Escribir "La multiplicacion de los numeros es de: ",numero1*numero2
		Escribir "La division es de: ",numero1/numero2
	FinSi
	
	
FinAlgoritmo
