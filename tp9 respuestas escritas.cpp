1. ¿Que es el encapsulamiento? ¿Cuales son los niveles de acceso a miembros de la clase?

El encapsulamiento es una caracteristica fundamental de la programacion orientada a objetos que consiste en ocultar los detalles internos de una clase y proteger sus datos del acceso directo desde el exterior. Esto se logra haciendo que los atributos sean privados y que solo puedan ser accedidos o modificados mediante metodos publicos, como los getters y setters. De esta forma se garantiza la seguridad de los datos, se reduce el acoplamiento y se mejora la organizacion del codigo.

En C++ existen tres niveles de acceso a los miembros de una clase:

* **public:** los miembros pueden ser accedidos desde cualquier parte del programa.
* **private:** los miembros solo pueden ser accedidos desde otros metodos de la misma clase. Es el nivel por defecto.
* **protected:** los miembros pueden ser accedidos desde la misma clase y tambien desde clases derivadas (heredadas).

---

2. ¿Que son los getters y setters? ¿Cual es su proposito principal? ¿Cuando es conveniente usarlos?

Los getters y setters son metodos que se utilizan para acceder y modificar los valores de los atributos privados de una clase.

* Un **getter** devuelve el valor actual de un atributo.
* Un **setter** permite asignar o modificar el valor de un atributo.

El proposito principal de estos metodos es permitir el acceso controlado a los datos internos de una clase. Gracias a ellos se puede validar la informacion antes de modificarla, proteger los datos de modificaciones incorrectas y mantener la integridad de los objetos.

Es conveniente usarlos cuando los atributos son privados o protegidos, es decir, cuando no se desea que sean accesibles directamente desde fuera de la clase. De esta forma se logra un mejor control sobre la manipulacion de los datos.

---

3. ¿Cual es la diferencia entre un constructor y un destructor? ¿Cuando se ejecutan cada uno?

Un constructor es un metodo especial que se ejecuta automaticamente al momento de crear un objeto. Su funcion es inicializar los atributos del objeto y prepararlo para su uso.
Un destructor es un metodo especial que se ejecuta automaticamente cuando un objeto se destruye, es decir, cuando termina su ciclo de vida. Su funcion es liberar los recursos que el objeto utilizo durante su existencia, como memoria, archivos o conexiones.

El constructor y el destructor se diferencian en varios aspectos:

* El constructor tiene el mismo nombre de la clase, mientras que el destructor tiene el mismo nombre precedido por el caracter "~".
* El constructor puede recibir parametros, pero el destructor no.
* Puede haber varios constructores (sobrecarga), pero solo puede existir un destructor.
* El constructor se ejecuta al crear el objeto, mientras que el destructor se ejecuta al eliminarlo.

---

4. Cuadro comparativo entre constructores y destructores

| Caracteristica       | Constructor                             | Destructor                                   |
| -------------------- | --------------------------------------- | -------------------------------------------- |
| Nombre               | Igual al nombre de la clase             | Igual al nombre de la clase con el prefijo ~ |
| Momento de ejecucion | Se ejecuta al crear el objeto           | Se ejecuta al destruir el objeto             |
| Llamado              | Automatico                              | Automatico                                   |
| Retorno              | No devuelve valores                     | No devuelve valores                          |
| Parametros           | Puede tener parametros                  | No puede tener parametros                    |
| Cantidad por clase   | Puede haber varios (sobrecarga)         | Solo puede haber uno                         |
| Finalidad            | Inicializar atributos o asignar memoria | Liberar recursos o cerrar archivos           |
| Ejemplo              | `MiClase();`                            | `~MiClase();`                                |

---

5. Diferencia entre definir una funcion miembro completamente dentro de la clase o definirla despues fuera de la clase

En C++, una funcion miembro (metodo) puede definirse dentro del cuerpo de la clase o fuera de ella utilizando el operador de resolucion de ambito `::`.

Si se define dentro de la clase, el compilador la considera automaticamente una funcion **inline**, lo que significa que su codigo se inserta directamente en el lugar donde se llama. Esto puede mejorar la velocidad de ejecucion en funciones pequenas.
Si se define fuera de la clase, la funcion es una funcion normal (no inline) y su codigo se mantiene separado, lo que mejora la legibilidad y la organizacion, sobre todo en clases grandes.

Cuadro comparativo:

| Criterio             | Definida dentro de la clase                                   | Definida fuera de la clase                                |
| -------------------- | ------------------------------------------------------------- | --------------------------------------------------------- |
| Palabra clave usada  | No necesita operador `::`                                     | Requiere el operador `::`                                 |
| Tipo de funcion      | Se considera inline                                           | Funcion normal (no inline)                                |
| Ubicacion del codigo | Dentro del cuerpo de la clase                                 | Fuera del cuerpo de la clase                              |
| Ventajas             | Codigo mas simple, ejecucion mas rapida en funciones pequenas | Mejor organizacion y legibilidad en clases grandes        |
| Desventajas          | Puede generar codigo mas grande si se usa muchas veces        | Requiere mas lineas y archivos separados                  |
| Cuando usar          | Para metodos muy cortos o simples                             | Para metodos largos o que se deben separar del encabezado |

