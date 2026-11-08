# Cálculo de una factura - La Tienda

**Estudiante:** Junior Ivón José Jean
**Matrícula:** 2026-1655
**Asignatura:** Lógica de Programación
**Profesor:** Gamalier Reyes del Carmen
**Tema:** Funciones y procedimientos

## Descripción
Programa en C++ que pide la cantidad y el precio de un producto, calcula el total de la venta y aplica un 10% de descuento si el total supera RD$5,000.

## Funciones utilizadas
- **calcularTotalPagar(cantidad, precio):** función que multiplica la cantidad por el precio y aplica el 10% de descuento si el total supera 5,000. Retorna el total a pagar.
- **mostrarTotal(totalPagar):** procedimiento (`void`) que muestra en pantalla el total a pagar. No retorna ningún valor.

## Entrada
- Cantidad del producto.
- Precio del producto.

## Proceso
1. En `main()` se piden la cantidad y el precio.
2. Se llama a `calcularTotalPagar` y se guarda el valor que retorna.
3. Ese valor se pasa al procedimiento `mostrarTotal`.

## Salida
- Total a pagar, con dos decimales.

## Capturas de ejecución

**Prueba 1 – Sin descuento (2 × 1,000 = 2,000.00):**

![Prueba 1](factura1.png)

**Prueba 2 – Con descuento (4 × 1,500 = 5,400.00):**

![Prueba 2](factura2.png)
