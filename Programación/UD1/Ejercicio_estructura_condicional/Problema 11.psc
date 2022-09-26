Algoritmo numero_positivo_nulo_negativo
	
	Definir valor_numero Como Entero
	
	Escribir "Dime el numero que quieras: "
	Leer valor_numero
	
	si valor_numero == 0 Entonces
		Escribir "El valor que has introducido es nulo"
	SiNo
		si valor_numero > 0 Entonces
			Escribir "El valor que has introducido es positivo"
		SiNo
			Escribir "El valor que has introducido es negativo"
		FinSi
	FinSi
	
FinAlgoritmo
