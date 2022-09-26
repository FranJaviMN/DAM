Algoritmo calculo_pagar
	
	//Defimos las variables necesarias.
	Definir valor_producto Como Real
	Definir cantidad_producto Como Real
	Definir precio_total Como Real
	
	Escribir "Dime el precio del produdcto: "
	leer valor_producto
	
	Escribir "Dime cuantos productos llevas: "
	leer cantidad_producto
	
	//Calculamos el valor total que se debe de abonar.
	
	precio_total = valor_producto+cantidad_producto
	
	Escribir "El valor total que debe de abonar es de ",precio_total," euros"
	
FinAlgoritmo
