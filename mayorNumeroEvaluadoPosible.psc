Algoritmo mayorNumero
	
	Escribir "Ingrese la cantidad de n�meros a evaluar: "
	Leer cantNumeros
	
	contador <- 1
	
	Mientras (contador <= cantNumeros) Hacer
		
		Escribir "Ingrese un n�mero de 3 cifras: "
		Leer num
		
		//obtenemos la unidad, decena y centena
		unidad <- num mod 10
		decena <- trunc(num/10) mod 10
		centena <- trunc(num/100) mod 10
		
		//calculamos la cifra mayor, variable la cu�l la inicializamos en el menor d�gito posible
		cifraMayor <- 0 
		Si (unidad >= decena y unidad >= centena) Entonces
			cifraMayor <- unidad
		SiNo
			Si (decena >= unidad y decena >= centena) Entonces
				cifraMayor <- decena
			SiNo
				Si (centena >= unidad y centena >= decena) Entonces
					cifraMayor <- centena
				FinSi
			FinSi
		FinSi
		
		//calculamos la cifra menor, variable la cu�l la inicializamos en el mayor d�gito posible
		cifraMenor <- 9 
		Si (unidad <= decena y unidad <= centena) Entonces
			cifraMenor <- unidad
		SiNo
			Si (decena <= unidad y decena <= centena) Entonces
				cifraMenor <- decena
			SiNo
				Si (centena <= unidad y centena <= decena) Entonces
					cifraMenor <- centena
				FinSi
			FinSi
		FinSi
		
		//calculamos la cifra del medio, la cual seria la que sobra
		cifraMedio <- (unidad + decena + centena) - cifraMayor - cifraMenor
		
		//formamos el mayor n�mero posible
		mayorNumeroPosible <- cifraMayor*100 + cifraMedio*10 + cifraMenor
		
		Escribir "El mayor n�mero posible formado con ", num, " es: ", mayorNumeroPosible
		
		contador <- contador + 1
		
	FinMientras
	
FinAlgoritmo
