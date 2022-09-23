Algoritmo acumular_numero
	//Definimos las variables para el numero que se va a acumular y la tecla o palabra que se debe de usar para parar el bucle.
	
	Definir numero_acumula Como Entero
	Definir parar_bucle Como Caracter
	
	Escribir "Dime un numero: "
	leer numero_acumula
	
	numero_acumula = numero_acumula+1
	Escribir numero_acumula
	
	//Preguntamos si quiere parar el bucle.
	
	Escribir "¿Quiere para el bucle? (Parar = Si, No parar = No: "
	Leer parar_bucle
	
	//Usamos un mientras que la variable "parar_bucle sea distinta de la palabra que vamos a usar para parar el bucle."
	
	Mientras parar_bucle <> "Si" Hacer
		numero_acumula = numero_acumula+1
		Escribir numero_acumula
		Escribir "¿Quiere para el bucle?: "
		Leer parar_bucle
	Fin Mientras
	
FinAlgoritmo
