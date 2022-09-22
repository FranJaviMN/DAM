Algoritmo calculo_beneficio
	Definir porcentaje como Real
	Definir pvp_con_aumento Como Real
	Definir pvp_sin_aumento Como Real
	
	Escribir "Dime el beneficio que quieres sacar: "
	Leer porcentaje
	
	Escribir "Dime el precio del producto: "
	Leer pvp_sin_aumento
	
	porcentaje = (porcentaje/100)+1
	
	pvp_con_aumento = porcentaje*pvp_sin_aumento
	
	Escribir "Debes de poner el producto a un precio de ",pvp_con_aumento
	
FinAlgoritmo
