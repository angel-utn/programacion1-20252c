Algoritmo sin_titulo
	Escribir 'Materia: '
	Leer M
	Mientras M!=0 Hacer
		ACTUAL = M
		C = 0
		Escribir 'INICIO DE CARGA DE LA MATERIA'
		Mientras M==ACTUAL Hacer
			Escribir 'Legajo: '
			Leer L
			Escribir 'Nota: '
			Leer N
			Si N>=6 Entonces
				C = C+1
			FinSi
			Escribir 'Materia: '
			Leer M
		FinMientras
		Escribir 'FIN DE CARGA DE LA MATERIA'
		Escribir 'La cantida de aprobados son de la materia #',ACTUAL,': ',C
	FinMientras
	Escribir 'FIN DEL PROGRAMA'
FinAlgoritmo
