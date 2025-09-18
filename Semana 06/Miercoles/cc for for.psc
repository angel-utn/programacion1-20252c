Algoritmo sin_titulo
	Para I<-1 Hasta 4 Con Paso 1 Hacer
		C = 0
		Escribir 'INICIO DE CARGA DE LA MATERIA'
		Para J<-1 Hasta 4 Con Paso 1 Hacer
			Escribir 'Materia: '
			Leer M
			Escribir 'Legajo: '
			Leer L
			Escribir 'Nota: '
			Leer N
			Si N>=6 Entonces
				C = C+1
			FinSi
		FinPara
		Escribir 'FIN DE CARGA DE LA MATERIA'
		Escribir 'La cantida de aprobados son: ',C
	FinPara
	Escribir 'FIN DEL PROGRAMA'
FinAlgoritmo
