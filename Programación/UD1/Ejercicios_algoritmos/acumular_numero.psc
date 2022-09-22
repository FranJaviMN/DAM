Algoritmo acumular_numero
	Definir numero_acumula Como Entero
	Definir parar_bucle Como Caracter
	
	Escribir "Dime un numero: "
	leer numero_acumula
	
	numero_acumula = numero_acumula+1
	Escribir numero_acumula
	
	Escribir "¿Quiere para el bucle? (Parar = Si, No parar = No: "
	Leer parar_bucle
	
	Mientras parar_bucle <> "Si" Hacer
		numero_acumula = numero_acumula+1
		Escribir numero_acumula
		Escribir "¿Quiere para el bucle?: "
		Leer parar_bucle
	Fin Mientras
	
FinAlgoritmo
