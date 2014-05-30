/*

  Producto
  --------------------------------------------------------------------------------
 -nombre:String
 -valor: Double
 -cantidad:int
 -------------------------------------------------------------------------------
 +ingresar(nombre:String,valor:Double,cantidad:int):boolean
 +buscar(nombre:String):Producto
 +eliminar(nombre:String):boolean
 +listar():Collection<Producto>
------------------------------------------------------------------------------




 */
/*Instrucciones: Los estudiantes de manera grupal desarrollan un trabajo en el cual se tiene en cuenta las siguientes instrucciones:
El supermercado Exitazo, Ltda. está en vía de crecimiento, pues la alta demanda de sus clientes le ha llevado a ampliar su local. Por ello, necesita crear un aplicativo que le permita introducir nuevos productos (teniendo en cuenta que el producto tiene nombre, valor y cantidad), buscarlos, eliminarlos y listarlos en orden alfabético. Este aplicativo será de gran utilidad en la organización y desarrollo de su proyecto de expansión.

Simule que es Ud. y su equipo de trabajo son contratados para ayudar en dicho proyecto y se les pide desarrollar el pseudo-código de un programa utilizando pilas, colas o árboles que permitan que el aplicativo supla la necesidad del cliente.
Se debe entregar junto al pseudo-código también un ejemplo con el cual se explique la utilización de las colas, pilas y árboles.
Al finalizar la actividad se debe co-evaluar a sus compañeros de equipo  enviado un correo a la facilitadora SIN COPIA A NINGÚN COMPAÑERO con la siguiente información:
Asunto: Co-evaluación equipo X
Contenido del mensaje: En esta sección el estudiante coloca el nombre de sus compañeros seguido de una evaluación cualitativa (textual del desempeño del compañero en el equipo) teniendo en cuenta participación a tiempo en el desarrollo de la actividad y la participación adecuada, completa y correcta para lograr tanto el desarrollo de la actividad como la sustentación, al final de la evaluación cualitativa se define la evaluación cuantitativa (Un valor entre 0 - 5).
En el mensaje debe evaluar a todos sus compañeros de equipo.
Criterios de valoración : Trabajo en equipo 30%, co-evaluación 10%, presentación de la temática de manera clara, creativa y completa 20%, referencias bibliográficas 5%, entrega a tiempo 5%, sustentación 30%.
Tiempo de realización:5 horas
Medio y fecha de entrega: 9 de Junio
Porcentaje: dentro del 30% de nota final.*/


/*
 *Librerias
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *Variables Constantes
 */



/*
 *Variables Globales
 */

char *nombre;
double valor;
int cantidad;


/*
 *Estructuras
 */
struct _Producto{
  char *nombre;
  double valor;
  int cantidad;
};
struct _ListaProductos {
  struct _Producto *producto;
  struct _ListaProductos *siguiente;
  struct _ListaProductos *anterior;
  
};

struct _ListaProductos *lista_productos;

/*
 *Prototipos
 */



/*
 *Funciones
 */
int ingresar(char *nombre,double valor,int cantidad){
   
 }

Producto *buscar(char *nombre){
  
}

int eliminar(char *nombre){
  
}

void listar(void){
  
}

/*
 *Funcion principal
 */
int main(int argc, char *argv[])
{
  printf("%d",argc);
  printf("%s",*argv);
  
  return 0;
}

/*
 *Configuracion
 */
/*
  gcc -Wall '/home/juangocc/Escritorio/Aleisy -proyecto 2/codigo.c' -o '/home/juangocc/Escritorio/Aleisy -proyecto 2/codigo'
  '/home/juangocc/Escritorio/Aleisy -proyecto 2/codigo'
*/
