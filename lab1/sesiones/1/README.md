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

## 2. Ejercicios de repaso

### 2.1. Estructuras de programación

1. El propietario de Harry’s Car Sales paga a cada vendedor una comisión basada en sus ventas trimestrales. Los rangos de ventas y las correspondientes tasas son mostrades en la tabla que aparece a continuación:

| Ventas trimestrales ($) | Comisión |
|---|---|
| 0 - 20000 |  Multiplicar las ventas por 5% |
|  20001-50000 | Multiplicar la ventas sobre 20000 por 7% y entonces agregue 1000 al resultado |
|  50001 o mas | Multiplicar la ventas sobre 50000 por 10% y entonces agregue 3100 al resultado  | 

Teniendo en cuenta lo anterior lleve a cabo las siguientes tareas:
* Comprenda el problema y realice casos de obteniendo las comisiones para los siguientes valores de ventas: 20000, 20001, 30000, 50000, 50001, 75000, y –3.
* Codifique el algoritmo en C de modo que permita el calculo de las comisiones. Lleve a cabo las pruebas con los casos de test elegidos en el item anterior.

2. Escriba un programa en C para desplegar la tabla de multiplicación desde 1 hasta N.

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

3. Escriba un programa en C para imprimir la siguiente secuencia (dado el numero de renglones):

```
1
01
101
0101
10101
```

### 2.2. Funciones

**Nota**: Los siguientes programas deben ser resueltos empleando funciones.

1. Escriba una función llamada múltiplo que tome dos enteros y determine si el segundo es múltiplo del primero. La función deberá tomar dos argumentos enteros y devolver 1 si el segundo es un múltiplo del primero y 0 si no. Luego, utilice esta función en un programa que acepte como entrada una serie de pares de enteros.

2. Escribir un programa que lea dos números **x** y **n** y en una función, calcule la suma de la progresión geométrica: 

```
1 + x + x^2 + x^3 + x^4 + ⋯ + x^n
```

3. Escriba un programa en C para encontrar la suma de las series: 

```
1 - x^2/2! + x^4/4! - ...
```

Test data:
```
Valor de entrada de x: 2
Numero de terminos: 5
```

Salida esperada:

```
suma: -0.415873
```

4. Dado el siguiente código fuente:

```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () { 
  int N, M, cant, i, aleatorio;
  printf("Digite la cantidad de números que desea generar: ");
  scanf("%d",&cant);
  printf("Digite los limites (primero el superior, luego el inferior): ");
  scanf("%d%d",&N,&M);
  srand(time(NULL)); // Inicializacion del generador
  for(i = 0; i < cant; i ++) { 
    aleatorio = rand()%(N-M+1)+M; //Genera un numero entre M y N
    printf("%d ", aleatorio);
  } 
  printf("\n", aleatorio);
  system("PAUSE");
  return 0;
}
```

a. Compile y ejecute el código fuente anteriormente mostrado. ¿Qué es lo que hacen las funciones  srand() y rand()? (Los singientes enlaces pueden serle de utilidad: [1](http://www.chuidiang.org/clinux/funciones/rand.php) y [2](http://arantxa.ii.uam.es/~swerc/ole/ejemplos/crandom.html))

b. Escriba una función que genere un número aleatorio entre a y b. **Ayuda**: Use las funciones **srand()** y **rand()** anteriormente mencionadas.

c. Realice un programa que invocando la función anteriormente creada, funcione de manera similar al programa analizado en el punto a.

4. Escriba una función que tome un valor entero y devuelva el número con sus dígitos en reversa. Por ejemplo, dado el numero 7631, la función deberá devolver 1367.

5. Las computadoras están jugando un papel creciente en la educación. Escriba un programa que ayudaría a un alumno de escuela primaria a aprender a multiplicar. Utilice rand() para producir dos enteros positivos de un dígito. A continuación debería imprimir una pregunta coma la siguiente:

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
