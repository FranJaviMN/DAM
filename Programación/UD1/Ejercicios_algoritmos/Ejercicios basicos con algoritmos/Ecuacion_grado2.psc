Algoritmo Ecuacion_grado2
	//Definimos las variables para los 3 coeficientes.
	
	Definir valorA Como Real
	Definir valorB Como Real
	Definir valorC como Real
	Definir ecuacion_negativa Como Real	
	Definir ecuacion_positiva Como Real
	
	Escribir "Escribe los 3 valores de los coeficientes: "
	Leer valorA valorB valorC
	
	//Usamos un codicional para descartar valores no validos y solo realiza la ecuación si los valores son validos.
	
	Si valorA <> 0 y raiz(valorB^2-4*valorA*valorC) >= 0 entonces
		ecuacion_negativa = (-valorB)-(raiz(valorB^2-4*valorA*valorC))/2*valorA
		ecuacion_positiva = (-valorB)+(raiz(valorB^2-4*valorA*valorC))/2*valorA
		Escribir "La ecuación negativa da como resultad: ",ecuacion_negativa
		Escribir "La ecuación positiva da como resultad: ",ecuacion_positiva
	SiNo
		Escribir "No se puede hacer la raiz cuadrada, revise los valores introducidos"
	FinSi
	

	
	
FinAlgoritmo
