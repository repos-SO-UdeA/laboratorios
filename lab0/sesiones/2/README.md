# Práctica de laboratorio manejo básico del GNU Compiler Collection (GCC)

## Conceptos previos

## 1. Generando el ejecutable en un solo paso (se eliminan los archivos intermedios)

>  
> ``` gcc archivoFuente –o nombreEjecutable -Wall```
>
> Dónde:
> * **archivoFuente**: Archivo de extensión **.c** que será compilado y enlazado.
> * **nombreEjecutable**: Nombre del ejecutable generado tras la ejecución del comando.
> * **-Wall**: Esta opción activa todos las advertencias más comunes ¡se recomienda usar siempre esta opción!. Por defecto GCC no produce advertencias a menos que estén activadas. Las advertencias del compilador son una ayuda esencial detectando problemas al programar en lenguaje C.
>
> La anterior forma de uso del comando gcc, suele ser la más sencilla para compilar y enlazar un archivo fuente (archivo 
> **.c**) de modo que se genera un ejecutable con nombre dado  por **nombreEjecutable**. 

## 2. Generando el ejecutable mediante compilacion por pasos 

El proceso de obtener un archivo ejecutable (entendible por la máquina) a partir de un archivo fuente (escrito en lenguaje de programación y entendido por el programador) involucra 4 etapas, las cuales son principalmente:
1. Pre-procesamiento.
2. Compilación.
3. Ensamblado.
4. Enlazado.

La siguiente tabla resume los comandos aplicados anteriormente:

| Paso | Acción            | Comando                                     | 
|------|-------------------|---------------------------------------------|
| 1    | Pre-procesamiento | gcc -E archivoFuente <-o archivoResultante> | 
| 2    | Compilación       | gcc -S archivoFuente <-o archivoResultante> |
| 3    | Ensamblado        | gcc -c archivoFuente <-o archivoResultante> | 
| 4    | Enlazado          | gcc archivoObjeto <-o ejecutable>           |

Todo en un solo paso (generando el archivo ejecutable y dejando los archivos intermedios)

## 3. Generando el ejecutable en un solo paso (sin eliminar archivos intermedios)

Cuando se ejecuta el comando ```gcc``` con la opción ```-save-temps``` los archivos intermedios resultantes de cada uno de los pasos no son eliminados, la forma como se ejecuta este comando es la siguiente:

``` gcc -save-temps archivoFuente <–o nombreEjecutable>```

## 4. Otras opciones con el gcc
A continuación mostramos algunas de las opciones más habituales al usar gcc (algunas ya vistas):

| Opción | Descripción            |
|------|-------------------|
| ```-help``` | Indica a gcc que muestre su salida de ayuda (muy reducida).|
| ```-o <file>``` | El archivo ejecutable generado por gcc es por defecto a.out. Mediante este modificador, le especificamos el nombre del ejecutable.|
| ```-Wall``` | No omite la detección de ninguna advertencia (warning).|
| ```-g``` | Incluye en el binario información necesaria para utilizar un depurador posteriormente.|
| ```-O <nivel>``` | Indica a gcc que utilice optimizaciones en el código. Los niveles posibles van desde 0 (no optimizar) hasta 3 (optimización máxima). Utilizar el optimizador aumenta el tiempo de compilación, pero suele generar programas que se  ejecutan más rápido.|
| ```-E```| Sólo realiza la fase del preprocesador, no compila, ni ensambla, ni enlaza.|
| ```-S``` | Preprocesa y compila, pero no ensambla ni enlaza.|
| ```-c``` | Preprocesa, compila y ensambla, pero no enlaza.|
| ```-I <dir>``` | Especifica un directorio adicional donde gcc debe buscar los archivos de cabecera indicados en el código fuente.|
| ```-L <dir>``` | Especifica un directorio adicional donde gcc debe buscar las librerías necesarias en el proceso de enlazado.|
| ```-l<library>``` | Especifica el nombre de una librería adicional que deberá ser utilizada en el proceso de enlazado.|

La colección completa de modificadores a utilizar con gcc se encuentra en su página de manual, **man gcc**, o también si esta muy embalado puede llamar a nuestro santo favorito **google**.

## Ejercicios de refuerzo

1. **Compilando una primera aplicación**: En el editor de textos (ojala emacs) codifique el siguiente código fuente:

```C 
#include <stdio.h>

int main()
{
    printf( "Mr. Anderson, welcome back!!!\n" )
    return 0;
}
```  
2. Guarde el archivo fuente en una ruta adecuada (por ejemplo, /home/**user**/SO/labs) con el nombre de hola_mundo.c
3. Compile el programa usando GCC y los parámetros adecuados para generar un ejecutable llamado ejecutable.
4. Si hay errores, volver al código y corregirlos. De lo contrario ejecute el programa. 

> Nota: El código anterior también se encuentra disponible online en el siguiente [link](https://goo.gl/yjRZaZ)

2. **Análisis de código**: En el siguiente [video](https://www.youtube.com/watch?v=jl4r7u7IfJY) se explica el paso de parametros por linea de comandos. El código analizado, tomado del siguiente [enlace](http://bluefever.net/Downloads/BeginC/ch51.c) se muestra a continuación:

```C
#include "stdio.h"
#include "string.h"

// Codigo tomado de: http://bluefever.net/Downloads/BeginC/ch51.c

int main(int argc, char *argv[]) {
  printf("\nmain() : argc : %d \n", argc);
  int index = 0;
  for(index = 0; index < argc; ++index) {
    // printf("main() : argv[%d] : %s\n",index,argv[index]);
    if( strncmp( argv[index], "debug", 5) == 0 ) {
      printf("main() : PROGRAM DEBUG MODE\n");
    } else if ( strncmp( argv[index], "-file", 5) == 0 ) {
      printf("main() : PROGRAM READ FILENAME : %s\n", argv[index + 1]);
    }
  }
  printf("\nmain(): Program Quit\n");
  return 0;
}
```
Responda las siguientes preguntas:
* ¿Que hacen los parametros argc y argv?
* ¿Como se usa el programa? (Observe el video).

3. **Análisis de código**: Codifique el siguiente archivo fuente:

```C
#include <stdio.h>
#include <stdlib.h>
#define N 20

int edad_en_meses(int);

int main(int argc, char *argv[])
{
  int edad = atoi(argv[1]);
  int meses = edad_en_meses(edad);
  printf("Edad %d \n", meses);
  return 0;
}

int edad_en_meses(int anios){
  int mes = anios * 12;
  return mes;
}
```

Para entender el codigo anterior y como usarlo vea el siguiente [video](https://www.youtube.com/watch?v=IhQp6eTkmaQ&list=PLlTZ99qnw3zIeOKP8YfMxaKt0GDhAKtHu&index=7) y responda las siguientes preguntas:
*. ¿Que hace la funcion atoi?
*. Ademas de atoi existen otras funciones que permitan convertir cadenas de caracteres a numeros reales ¿cuales?.
*. Existen funciones que convierten valores numericos a cadenas de caracteres  ¿cuales?

