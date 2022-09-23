Algoritmo convertir_peseta_euro
	//DEFINIMOS LAS VARIABLES QUE NECESITAMOS.
	Definir pesetas Como Real
	Definir valor_euro Como Real
	
	//Buscamos el valor del euro en pesetas.
	
	valor_euro = 0.006
	
	//Ejecutamos la multiplicación necesario
	Escribir "Indica una cantidad de pesetas: "
	leer pesetas
	Escribir "Tiene ", pesetas*valor_euro, " euros."
	
FinAlgoritmo
