# Laboratorio de introducción al lenguaje C

> **Objetivos**
> * Reforzar los conceptos discutidos en el laboratorio.
> * Ir ganando experiencia en la resolución de problemas empleando lenguaje C. 

## 1. Ejemplos de repaso

A modo de repaso se mostraran algunos ejercicios resueltos que implican el uso de programacion modular. Puede descargarlos, compilarlos y ejecutarlos.

1. Hacer un programa que calcule el máximo de 2 números.

**Solucion**: [ejemplo1_sol.c](ejemplo1_sol.c)

2. Hacer un programa que diga si un numero es cuadrado perfecto.

**Solucion**: [ejemplo2_sol.c](ejemplo2_sol.c)

3. Hacer un programa que permita calcular el área de diferentes figuras geométricas.

**Solucion**: [ejemplo3_sol.c](ejemplo3_sol.c)

4. Hacer una función que solicite 2 números, genere 10 números aleatorios entre estos 2
números y cuente la cantidad de números pares.

**Solucion**: [ejemplo4_sol.c](ejemplo4_sol.c)

5. Realizar un programa que calcule el valor de la función seno usando la serie equivalente para
ello. Los valores de entrada son x y el número de términos. A continuación se muestra la serie
equivalente:

**Solucion**: [ejemplo5_sol.c](ejemplo5_sol.c)

## 2. Ejemplos de repaso

### 2.1. Estructuras de programación

1. Escriba un programa en C para desplegar la tabla de multiplicación desde 1 hasta N.

Test de entrada:

```
Numero final (empezando de 1): 8
```
Salida esperada:

```
Tabla de multiplicación desde 1 hasta 8:

1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
```

2. Escriba un programa en C para imprimir la siguiente secuencia (dado el numero de renglones):

```
1
01
101
0101
10101
```

### 2.2. Funciones

**Nota**: Los siguientes programas deben ser resueltos empleando funciones.

1. Escriba un programa en C para encontrar la suma de las series [ 1-X^2/2!+X^4/4!- ...]:

Test data:
```
Valor de entrada de x: 2
Numero de terminos: 5
```

Salida esperada:

```
suma: -0.415873
```

2. Las computadoras están jugando un papel creciente en la educación. Escriba un programa que ayudaría a un alumno de escuela primaria a aprender a multiplicar. Utilice rand() para producir dos enteros positivos de un dígito. A continuación debería imprimir una pregunta coma la siguiente:

```
¿Cuánto es 6 veces 7?
```

A continuación el alumno escribe la respuesta. Su programa verifica la respuesta del alumno. Si es correcta imprime **"Muy bien!"** y a continuación solicita otra multiplicación. Si la respuesta es incorrecta imprimirá **"No. Por favor intenta nuevamente"** y a continuación permitirá que el alumno vuelva a intentar con la misma pregunta de forma repetida hasta que al final la conteste correctamente. El programa debe indicarle al alumno una forma de terminar la ejecución.

**Ayuda**: Use las funciones ```srand()``` y ```rand()``` para simular el lanzamiento de para crear una función que permita generar un numero entre dos limites datos. Los singientes enlaces pueden serle de utilidad:
* http://www.chuidiang.org/clinux/funciones/rand.php)
* http://arantxa.ii.uam.es/~swerc/ole/ejemplos/crandom.html

## 3. Referencias

* https://github.com/malmhaug/C_AbsBegin
* https://github.com/mindfullofit/CSCI320/tree/master/rewritten_code
