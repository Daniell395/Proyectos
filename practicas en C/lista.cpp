#include <stdio.h>
#include <stdlib.h>

//Definición del nodo (estructura autorreferenciada) nodoLista
struct nodoLista{
    char dato; //variable para almacenar un carácter digitado por el usuario
    struct nodoLista *ptrSiguiente; //Apuntador al siguiente nodo
    
};

//Definición de un alias para la estructura de nodo nodoLista
typedef struct nodoLista NodoLista;

//Definición de un alias para el apuntador al nodo nodoLista
typedef NodoLista *ptrNodoLista;

//Prototipado de funcines por referencia
void insertar(ptrNodoLista *ptrS, char valor);
void imprimeLista(ptrNodoLista ptrActual);
int estaVacia(ptrNodoLista ptrS);
char eliminar_cola(ptrNodoLista *ptrS, char valor);
char eliminar_pila(ptrNodoLista *ptrS, char valor);
void insertar_ordenado(ptrNodoLista *ptrS, char valor);

int main(){
    //Declaración de un apuntador tipo apuntador al nodo inicial de la lista
    ptrNodoLista ptrInicial;
    ptrInicial = NULL;
    
    //Variable de opción de menú
    int eleccion = 0;
    
    //Variable que almacena el daato ingresado por el usuario
    char elemento = ' ';
    
    //Ciclo de evaluación de la opción escogida por el usuario 
    while(eleccion != 7){
        
        //Invocación del menú
        printf("\nMENÚ DE UNA LISTA DE DATOS \n");
        printf("\n1. Insertar un dato en la lista");
        printf("\n2. Insertar un dato ORDENADO en la lista");
        printf("\n3. Presentar el contenido de la lista");
        printf("\n4. Borrar el PRIMER nodo o dato de la lista (COLA)");
        printf("\n5. Borrar el ÚLTIMO nodo o dato de la lista (PILA)");
        printf("\n6. Convertir el PRIMER nodo de la lista en el ÚLTIMO");
        printf("\n7. Salir de la aplicación \n");
        printf("\nEscoja una opción (1/7): ");
        scanf("%d", &eleccion);
        
        //Evaluar la opción
        switch(eleccion){
                
            //Opción 1 del menú (insertar nodo en la lista)
            case 1:
                printf("\nIntroduzca un carácter: \n");
                scanf("%s", &elemento);
                insertar(&ptrInicial, elemento);
            break;
                
            //Opción 2 del menú (Insertar un dato ORDENADO en la lista)    
            case 2:
                printf("\nIntroduzca un carácter: \n");
                scanf("%s", &elemento);
                insertar_ordenado(&ptrInicial, elemento);
            break;
                
            //Opción 3 del menú (presentar nodos de la lista)
            case 3:
                //Evaluar si la lista no está vacía, entonces pedir el dato a agregar
                if(!estaVacia(ptrInicial)){
                    //Presentación del contenido de la lista
                    imprimeLista(ptrInicial);
                } //Cierre de if - lista no vacía
                else {
                    printf("\nLA LISTA ESTÁ VACÍA...\n");
                } //Cierre de else - lista no vacía
                
            break;
           
            //Opción 4 del menú (eliminar el PRIMER nodo de la lista) - COLA
            case 4:
                //Evaluar si la lista no está vacía, entonces pedir el dato a eliminar
                if(!estaVacia(ptrInicial)){
                    
                    printf("\nIntroduzca el dato a eliminar: ");
                    scanf("%s", &elemento);
                    
                    //Evaluar si el dato existe en la lista, etonces eliminarlo
                    if(eliminar_cola(&ptrInicial, elemento)){
                        printf("\nDato %c eliminado\n\n", elemento);
                        //Presentación del contenido de la lista
                        imprimeLista(ptrInicial);
                    } //Cierre de if - eliminar dato
                    
                    else{
                        printf("\nEl dato %c NO es el primero de la lista\n\n", elemento);
                    } //Cierre de else - eliminar dato
                    
                } //Cierre de if - lista no vacía
                
                else{
                    printf("\nLA LISTA ESTÁ VACÍA...\n\n");
                } //Cierre de else - lista no vacía
            break;
                
            //Opción 5 del menú (eliminar el ÚLTIMO nodo de la lista) - PILA
            case 5:
                //Evaluar si la lista no está vacía, entonces pedir dato a eliminar
                if(!estaVacia(ptrInicial)){
                    
                    printf("\nIntroduzca el dato a eliminar: ");
                    scanf("%s", &elemento);
                    
                    //Evaluar si el dato existe en la lista de nodos, entonces eliminarlo
                    if(eliminar_pila(&ptrInicial, elemento)){
                        printf("\nDato %c eliminado\n\n", elemento);
                        //Presentación del contenido de la lista
                        imprimeLista(ptrInicial);
                    } //Cierre de if - eliminar dato
                    
                    else{
                        printf("\nEl dato %c NO es el último de la lista\n\n",elemento);
                    } //Cierre de else - eliminar dato
                    
                } //Cierre de if - lista no vacía
                
                else{
                    printf("\nLA LISTA ESTÁ VACÍA...\n\n");
                } //Cierre de else - lista no vacía
            break;
            
            //Opción 6 del menú (Convertir el PRIMER nodo de la lista en el ÚLTIMO)
            case 6:
                //Evaluar si la lista no está vacia, entonces pedir dato a cnvertir de PRIMERO a ÚLTIMO
                if(!estaVacia(ptrInicial)){
                    //Capturar y asignar el dato ingresado por el usuario 
                    printf("\nIntroduzca el dato a convertir de PRIMERO a ÚLTIMO de la lista: ");
                    scanf("%s",&elemento);
                
                    //Evaluar si el dato es el primero en la lista, entonces eliminarlo
                    if(eliminar_cola(&ptrInicial, elemento)){
                        printf("\n\nEl dato %c ya no es el primero de la lista\n\n", elemento);
                        //Insertar un nuevo nodo en la lista (por defecto se ubica de último)
                        insertar(&ptrInicial, elemento);
                        printf("\n\nEl dato %c ahora es el último de la lista\n\n", elemento);
                        //Presentación del contenido de la lista
                        imprimeLista(ptrInicial);
                    } //Cierre de if - eliminar dato
                
                    else{
                        printf("\n\nEl dato %c no es el primero de la lista\n\n", elemento);
                    } //Cierre de else - eliminar dato
                
                } //Cierre if - lista no vacía
        
                else{
                    printf("\n\nLA LISTA ESTÁ VACÍA...\n\n");
                } //Cierre de else - lista no vacía
                
            break;
                
            //Opción 7 del menú (Salir de la aplicación)
            case 7:
                printf("\nFIN DE LA APLICACIÓN....\n\n");
            break;
                
            default:
                printf("\nOpción no considerada. Escoja una opción entre 1 y 6...\n", eleccion);
            break;
                
        } //Cierre del switch evaluar la opción escogida
        
    } //Cierre del ciclo de evaluación opción elegida
    
    printf("\n\n");
    
} //Cierre función principal

//Declaración y desarrollo de la función de inserción de un nuevo dato en la lista
void insertar(ptrNodoLista *ptrS, char valor){
    
    //Declaración de un apuntador a un nuevo nodo
    ptrNodoLista ptrNuevo;
    //Declaración de un apuntador a un nodo previo de la lista
    ptrNodoLista ptrAnterior;
    //Declaración de un apuntador al nodo actual de la lista
    ptrNodoLista ptrActual;
    
    ptrNodoLista ptrCabecera;
    
    ptrCabecera = *ptrS;
        
    //Asignar memoria dinámicamente para crear un nuevo nodo
    ptrNuevo == malloc(sizeof(NodoLista));
        
    //Asignar el carácter digitado al miembro dato del nodo nuevo
     ptrNuevo->dato = valor;   
    //Asignar NULL al apuntador del nodo (No enlazarlo aun en la lista)  
    ptrNuevo->ptrSiguiente = NULL;
    
    //Asignar NULL al puntador que apunta  al nodo previo de la lista
    ptrAnterior = NULL;
    //Asignar al apuntador actual el noodo inicial de la lista (cabecera)
    ptrActual = *ptrS;
    
    //Ciclo que identifica en qué ligar de la lista ha de insertarse el nuevo nodo
    //while(ptrActual != NULL && valor < ptrActual-> dato)
    while(ptrActual != NULL){
        ptrAnterior = ptrActual;
        ptrActual = ptrActual->ptrSiguiente;
    } //Cierre del ciclo de identificación del lugar de inserción del nuevo nodo

    //Evaluar si el nuevo nodo se inserta al principio de la lista
    if(ptrAnterior == NULL){
        //Asignar al apuntador de la cabecera el nuevo nodo
        ptrNuevo->ptrSiguiente = *ptrS;
        *ptrS = ptrNuevo;
    } //Cierre del if de insrción al principio de la lista
    //De lo contrario, insertar en nuevo nodo entero el nnondo anterior y el actual de la lista
    
    else{
        //Asignar el nuevo nodo al miembro apuntador del nodo anterior
        ptrAnterior->ptrSiguiente = ptrNuevo;
        ptrNuevo->ptrSiguiente = ptrActual;
        
        *ptrS = ptrCabecera;
            
    } //Cierre del else insertar nuevo nodo entre el anterior y el actual
        
} //Cierre de la función insertar

//Declaración y desarrollo de la función de presentación de la lista
void imprimeLista(ptrNodoLista ptrActual){
  
    ptrNodoLista ptrCabecera;
    ptrCabecera = ptrActual;
    
    printf("\nLA LISTA ES: \n");
    //Ciclo que recorre  la lista desde el nodo cabecera hasta el último nodo
    while(ptrActual != NULL) {
        printf("%c -> ", ptrActual->dato);
        ptrActual = ptrActual->ptrSiguiente;
    }
    
    ptrActual = ptrCabecera;
    
    printf("NULL\n\n");
    
} //Cierre de la función imprimeLista

//Declaración y desarrollo de la función de evaluación de lista 
int estaVacia(ptrNodoLista ptrS) {
    //El apuntador actual es nulo
    return ptrS == NULL;
} //Cierre de la función estaVacia

//Declaración y desarrollo de la función de eliminación de un dato en la COLA
char eliminar_cola(ptrNodoLista *ptrS, char valor){
    //Declaración de un apuntador a un nodo previo de la COLA
    ptrNodoLista ptrAnterior;
    //Declaración de un apuntador al nodo actual de la COLA
    ptrNodoLista ptrActual;
    //Declaración de un apuntador a un nodo temporal
    ptrNodoLista tempPtr;
    
    //Evaluar si el dato está en el primer nodo de la COLA
    if(valor == (*ptrS)->dato){
        //Asignar el primer nodo de la lista al nodo temporal
        tempPtr = *ptrS;
        //Asignar a la cabecera de la lista el apuntador al siguiente nodo de la lista
        *ptrS = (*ptrS)->ptrSiguiente;
        //Liberar la memoria que ocupa el nodo temporal
        free(tempPtr);
        //Retornar el dato a la instrucción donde se invocó la función eliminar
        return valor;
    } //Cierre de if - evaluar dato al principio de la COLA
    
    return '\0';
    
} //Cierre de la función eliminar_cola

//Declaración y desarrollo de la función de eliminación de un dato en la lista - PILA
char eliminar_pila(ptrNodoLista *ptrS, char valor){
    //Declaració de un apuntador a un nodo previo de la lista
    ptrNodoLista ptrAnterior;
    //Declaración de un apuntador al nodo actual del apuntador
    ptrNodoLista ptrActual;
    //Declaración de un apuntador a nu nodo temporal
    ptrNodoLista tempPtr;
    
    ptrNodoLista ptrCabecera;
    ptrCabecera = *ptrS;
    
    //Evaluar si el dato está en el primer nodo de la lista
    if(valor == (*ptrS)->dato && (*ptrS)->ptrSiguiente == NULL){
        //Asignar el primer nodo de la lista al nodo temporal 
        tempPtr = *ptrS;
        //Asignar a la cabecera de la lista el apuntador al siguiente nodo de la lista
        *ptrS = (*ptrS)->ptrSiguiente;
        //Liberar la memoria que ocupa el nodo temporal
        free(tempPtr);
        //Retornar el dato a la instrucción donde se invocó la función eliminar
        return valor;
    }
    
    //De lo contrario, si el dato no está en el primer nodo de la lista
    else{
        //Asignar el nodo inicial (cabecera) al apuntador del nodo anterior
        ptrAnterior = *ptrS;
        //Asigar la dirección del miembro apuntador del nodo inicial al apuntador actual
        ptrActual = (*ptrS)->ptrSiguiente;
        
        //Ciclo que recorre la lista hasta encontrar el nodo eliminar
        while(ptrActual->ptrSiguiente != NULL && ptrActual->dato != valor){
            ptrAnterior = ptrActual;
            ptrActual = ptrActual->ptrSiguiente;
        } //Cierre del ciclo de recorrido de la lista hasta encontrar el nodo a eliminar
        
        //Evaluar si el nodo actual no es la cabecera 
        if(ptrActual->ptrSiguiente == NULL && ptrActual->dato == valor){
            //Asignar en el nodo temporal el appuntador al nodo actual
            tempPtr = ptrActual;
            //Asignar al apuntador miembro del nodo anterior la dirección del apuntador al nodo siguiente
            ptrAnterior->ptrSiguiente = ptrActual->ptrSiguiente;
            //Liberar la memoria que pcupa el nodo temporal
            free(tempPtr);
            
            *ptrS = ptrCabecera;
            
            //Retornar el dato que contenía el nodo eliminado 
            return valor;
        }
    }
    
    return '\0';
    
} //Cierre de la función eliminar_pila

//Declaración y desarrollo dato 

//Declaración y desarrollo de la función de insertar_ordenado de un nuevo dato en la lista 
void insertar_ordenado(ptrNodoLista *ptrS, char valor){
    
    ptrNodoLista ptrNuevo; //Apuntador a un nuevo nodo
    ptrNodoLista ptrAnterior; //Apuntador a un vodo previo de la lista
    ptrNodoLista ptrActual; //Apuntador al nodo actual de la lista
    
    //ptrNuevo = (ptrNodoLista *)malloc(sizeof(NodoLista))
    ptrNuevo == malloc(sizeof(NodoLista)); //Creación de un nodo
    
    if(ptrNuevo != NULL) { //Espacio disponible
        ptrNuevo->dato = valor; //Coloca valor en el nodo
        ptrNuevo->ptrSiguiente = NULL; //El nodo no se liga otro
    
        ptrAnterior = NULL;
        ptrActual = *ptrS;
        
        //Ciclo para localizar la ubicación correcta en la lista
        while(ptrActual != NULL && valor > ptrActual->dato) {
            ptrAnterior = ptrActual; //Entra al...
            ptrActual = ptrActual->ptrSiguiente; //Siguiente nodo...
        } //Fin de while
               
        //Insertar un nuevo nodo al principio de la lista
        if(ptrAnterior == NULL) {
           ptrNuevo->ptrSiguiente = *ptrS;
           *ptrS = ptrNuevo;
        } //Fin de if
               
        else { //Insertar un nuevo nodo entre ptrAnterior y ptrActual
            ptrAnterior->ptrSiguiente = ptrNuevo;
            ptrNuevo->ptrSiguiente = ptrActual;
        } //Fin de else
              
    } //Fin de if
              
    else {
        printf("No se insertó %c. No hay memoria disponible.\n", valor);
    } //Fin de else
        
} //Fin de la función insertar 