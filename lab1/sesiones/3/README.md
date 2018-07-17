# Laboratorio de estructuras y archivos

> **Objetivos**
> * XXXX

## 1. Ejercicios de programación.

1. **Números complejos**: Diseñar e implementar, por medio de un menú, los siguientes procedimientos para la manipulación de complejos:
   * Leer un complejo de teclado.
   * Mostrar un complejo por pantalla.
   * La magnitud de un complejo.
   * El opuesto de un complejo (inverso aditivo)
   * El conjugado de un complejO.
   * La suma de dos complejos.
   * La diferencia de dos complejos.
   * El producto de dos complejos.
   * La división de dos complejos.


Estructura del número complejo puede ser como la mostrada a continuación:

```
typedef struct {
  float real;
  float imag;
}complejo;
```
**Nota**: El programa deberá ser realizado de manera modular.

2. **Gestión de una colección de CDs**: De cada CD almacenar los siguientes datos:
   * Código (cadena de caracteres con, a lo sumo, 10 caracteres).
   * El título (una cadena con, a lo sumo, 80 caracteres).
   * El intérprete (una cadena con, a lo sumo, 40 caracteres).
   * La duración (en minutos y segundos – cree otra estructura para este campo).
   * El año de publicación.
   
   El programa permitirá, por medio de un menú, efectuar las siguientes acciones:
   * Añadir un CD a la base de datos.
   * Listar toda la base de datos.
   * Listar los CDs de un intérprete.
   * Suprimir un CD dado su código.
   * Salir

**Nota**: Para este ejercicio emplee listas enlazadas. Si lo desea puede basarse en la que se tiene en el siguiente [enlace](listas_enlazadas.ipynb) realizando las modificaciones que sean pertinentes o tambien puede buscar en internet y acomodar el algoritmo encontrado a las necesidades de este problema. Recuerde, lo importante es que entienda el concepto y no se le arrugue cuando se enfrente con código C ajeno.

 3. **Manejo de archivos**: Hacer un programa que permita obtener las siguientes estadisticas de un archivo de texto:
   * Numero de caracteres del archivo.
   * Numero de lineas.
   * Numero de palabras (cada palabra es separada por un whitespace o una nueva linea).
   * Numero de whitespaces (caracteres espacio ' ' o tab '\n')
   * Numero de letras en mayuscula.
   * Numero de letras en minuscula.
   * Numero de digitos.

El ejecutable (compilelo como textstats) debera complir los siguientes requerimientos:
* **R1**: Recibir argumentos de entrada por linea de comandos. Cada uno de los argumentos sera un archivo el nombre de un archivo de entrada. Por ejemplo, suponga que tiene un archivo llamado texto1.txt, de modo que la invocación del ejecutable será ```./textstats texto1.txt```. Asi mismo se espera una salida como la siguiente.

```
./textstats texto1.txt
Obteniendo estadisticas...
- texto1.txt --> generando reporte texto1_stats.txt
Estadisticas culminadas
```
* **R2**: Suponiendo que el archivo de entrada texto1.txt tuviera un contenido como el mostrado a continuación.

```
1234 56
hello this is a word
Finally this line !
```

El archivo generado (texto1_stats.txt) deberá tener un contenido como el siguiente:

```
chars: 49
words: 11
lines: 3
whitespaces: 8
uppercase: 1
lowercase: 30
digits: 6
```

El nombre del archivo de texto asociado a las estadisticas, deberá contener el nombre del archivo antes de la extención seguido por la cadena stats.txt. Asi, si el archivo se llamara file.dat, el archivo generado asociado a las estadisticas seria file_stats.dat

* **R3**: Se pueden pasar varios archivos de texto de diferentes extenciones. A continuación se muestra un caso de uso y la respectiva salida del programa:

```
./textstats texto1.txt texto2.dat
Obteniendo estadisticas...
- texto1.txt --> generando reporte texto1_stats.txt
- texto2.dat --> generando reporte texto2_stats.txt
Estadisticas culminadas
```
* **R4**: En caso de pasar como argumentos un archivo inexistente, el programa debera mostrar un mensaje que indique que no se pudieron obtener las estadisticas de dicho archivo, a continuación se muestra un caso de test:

```
./textstats texto1.txt texto2.dat
Obteniendo estadisticas...
- texto1.txt --> generando reporte texto1_stats.txt
- texto2.dat --> ERROR: No se pueden generar estadisticas (archivo no disponible)
Estadisticas culminadas
```

* **R5**: Si pasa como argumento la opcion -h o --help el programa debera desplegar una ayuda que indique su modo de uso.

* **R6**: Si no se pasan argumentos el programa debe mostrar indicar el error y la forma de uso adecuado.


--------------------------------


9. **Punto 7 - Cadenas**: https://github.com/remzi-arpacidusseau/ostep-projects/tree/master/initial-utilities
(empleando la notacion puntero -- zip - unzip)

10. **Punto 8 - Archivos**: https://github.com/remzi-arpacidusseau/ostep-projects/tree/master/initial-utilities
(sort -- zip - unzip)

http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2010/Projects/p1.html

http://pages.cs.wisc.edu/~remzi/Classes/537/Spring2009/Projects/p1.html


https://www-s.acm.illinois.edu/webmonkeys/book/c_guide/


## Enlaces de utilidad
* http://csweb.cs.wfu.edu/~fulp/CSC112/codeStyle.html
* https://overiq.com/c-programming/101/the-malloc-function-in-c/
* https://www.geeksforgeeks.org/void-pointer-c/
