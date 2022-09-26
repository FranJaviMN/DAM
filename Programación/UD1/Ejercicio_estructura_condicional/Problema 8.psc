Algoritmo Promocion
	
	//Definimos las variables que necesitamos
	Definir nota1 Como Real
	Definir nota2 Como Real
	Definir nota3 Como Real
	
	Escribir "Dime las 3 notas del alumno: "
	Leer nota1, nota2, nota3
	
	//Creamos un bucle para que las notas no sean negativas
	
	Mientras nota1 < 0 o nota2 < 0 o nota3 < 0 hacer
		Escribir "Las notas no pueden ser negativas, introduzca las notas correctamente: "
		Leer nota1, nota2, nota3
	FinMientras
	
	//Una vez pasado el bucle, comprobamos si esta promocionado o no.
	
	Si nota1+nota2+nota3 >= 7 Entonces
		Escribir "¡Estas promocionado!"
	SiNo
		Escribir "No estas promocionado."
	FinSi
	
FinAlgoritmo
