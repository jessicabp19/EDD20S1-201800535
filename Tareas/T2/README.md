# ESPECIFICACIÓN INFORMAL DEL TDA "MONEDA"/"COIN"

## COIN:
>Coin, getName, getCuantity, addCoins, transfer, transferFrom, ViewOwners


## DESCRIPCIÓN:

> Los valores del TDA moneda (o coin) están conformados por un nombre y una cantidad de ellas. Asi mismo, los usuarios se convierten en dueños al recibir una transferencia desde el monedero.


## DESCRIPCIÓN DE LAS OPERACIONES:
> **(MÉTODOS)**
- Coin(nombre: Texto, cantidad: Entero) devuelve (Coin)
    - requerimientos: cantidad>0
    - efecto: devuelve un numero racional.

- getName() devuelve (name)
    - efecto: devuelve el nombre de la moneda.

- getQuantity() devuelve (quantity)
    - efecto: devuelve la cantidad de monedas en existencia.

- addCoins(cantidad: Entero)
    - requerimientos: cantidad>0
    - efecto: añade la cantidad de entrada a las existencias.

- transfer(cantidad: Entero) devuelve (mensaje: Texto)
    - requerimientos: cantidad>0
    - efecto: devuelve un mensaje indicando la finalización de la transacción.

- transferFrom(id1, id2, cantidad: Entero) devuelve (mensaje: Texto)
    - requerimientos: id1, id2 y cantidad > 0. id1 y id2 existentes.
    - efecto: devuelve un mensaje indicando el resultado de la transacción.

- ViewOwner()
    - efecto: muestra a cada dueño por su ID e indica la cantidad de monedas que este posee.