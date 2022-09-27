Algoritmo captacion

	//Definimos las variables que necesitamos, en este caso solo 3
	
	Definir num_preguntas_acertadas Como Entero
	Definir num_preguntas Como Entero
	Definir porcentaje Como Entero
	
	Escribir "Dime el numero de preguntas que se han realizado: "
	leer num_preguntas
	
	Escribir "Dime el numero de preguntas que ha acertado: "
	Leer num_preguntas_acertadas

	//Sacamos el porcentaje de acierto con los valores que nos proporciona el usuario.
	
	porcentaje = (num_preguntas_acertadas*100)/num_preguntas
	
	//Generamos la condicion para ver en que nivel esta el usuario.

	si porcentaje >= 90 Entonces
		Escribir "Nivel m�ximo"
	SiNo
		Si porcentaje >= 75 y porcentaje < 90 Entonces
			Escribir "Nivel medio"
		SiNo
			Si porcentaje >= 50 y porcentaje < 75 Entonces
			Escribir "Nivel regular"
		SiNo
			Escribir "Fuera de nivel"
		FinSi
		FinSi
		
	Fin si
FinAlgoritmo
