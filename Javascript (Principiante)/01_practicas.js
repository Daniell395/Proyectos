/**
 * console.log("hola mundo");
 *
 *  el tipico hola mundo por consola
 */

/** tipos de datos (numerico)*/
console.log(27);
console.log(29.36);
//cgl 

/**
 *
 * console.log("object", 'object', ´object´);
 */

/** tipos de datos estructurados */

//objetos clave-valor
console.log({
  nombre: "Daniel",
  edad: 22,
  genero: "masculino",
  ciudades: ["Bogota", "Medellin", "Cali"],
});
// objetos dentro de objetos

//array
console.log(["Mexico", "Colombia", "Panama"]);

/** variables 
 * 
 * 3 formas de definir variables
 * 
 * var
 * let
 * const
 *
*/

// 1. Var (global)
var nombre = 'Daniel'

var persona ={
  nombre: "Daniel",
  edad: 22,
  genero: "masculino",
  ciudades: ["Bogota", "Medellin", "Cali"],
}
// se puede declaran multiples objetos

var ciudad;
console.log(ciudad); // retorna undefined


//2. let (especifico)

{
  let saludo = 'hola,  bienvenido'
  // funciona solo dentro del bloque de codigo
  console.log(saludo);

}


//3. const - siempre toca definirla

const PI = 3.1416; // no se puede cambiar a futuro
console.log(PI);

var nombres = 'Daniel Lemos'
var saludos = `hola, soy ${nombres  }`;

/** operaciones de asignacion  +,-,*,/,%,**(exponencial) x=1, x=3, -> x+=y */

console.log(x);