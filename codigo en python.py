import random
import time

# Función que generará los números aleatorios
def Generador():
    print("Ya se ha generado el arreglo de números aleatorios.")

# Función para imprimir los números aleatorios
def Impresion(arr):
    print("Numeros aleatorios sin ordenar:")
    for num in arr:
        print(num, end=" ")
    print()

def Busqueda():
    print("Busqueda")

# Función que hará el ordenamiento del arreglo
def Ordenamiento(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

# Función que ejemplifica la búsqueda del arreglo resultado del ordenamiento
def Ejemplifica():
    print("La búsqueda del número está en:")

# Función que calcula el tiempo de ejecución de las opciones
def Calculo():
    print("El tiempo de ejecución es:")

n = int(input("Ingrese el tamaño de 1000 números aleatorios: "))
if n <= 0 or n >= 1001:
    print("El tamaño debe ser de 1000.")
    exit()

arreglo = [random.randint(1, 1000) for _ in range(n)]

print("Numeros antes de ordenar:")
for num in arreglo:
    print(num, end=" ")
print()

opcion = int(input("\nSelecciona la opción que deseas realizar:\n"
                   "1. Generar un arreglo de números aleatorios\n"
                   "2. Imprimir el arreglo de números aleatorios\n"
                   "3. Hacer una búsqueda secuencial del arreglo de números aleatorios\n"
                   "4. Ordenar el arreglo de números aleatorios\n"
                   "5. Ejemplificar la búsqueda del arreglo resultante de la opción 4\n"
                   "6. Calcular el tiempo de ejecución de las opciones 1 - 5\n"
                   "7. Salir\n"))

if opcion == 1:
    Generador()
elif opcion == 2:
    Impresion(arreglo)
elif opcion == 3:
    Busqueda()
elif opcion == 4:
    Ordenamiento(arreglo)
elif opcion == 5:
    Ejemplifica()
elif opcion == 6:
    Calculo()
else:
    print("Ingrese una opción válida del 1 al 6, por favor.")

print("Lista ordenada:")
for num in arreglo:
    print(num, end=" ")
print()
