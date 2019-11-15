#!/usr/bin/python3
"""
5-island algorithms
"""


def island_perimeter(grid):
    """cualquier cosa"""
    if grid is None:
        return 0
    limY = len(grid) - 1
    limX = len(grid[0]) - 1
    acumulado = 0
    x = 0
    y = 0
    finish = True
    while finish:
        if grid[y][x] == 1:
            # si encuentra un 1
            if y == 0:
                # si encuentra 1 en el borde o primera iteracion, debe
                # acumular 1 porque no hay nada arriba
                acumulado += 1
            else:
                # si no esta en la primera iteracion pregunte por
                # el item de arriba si es 1
                if grid[y - 1][x] == 0:
                    finish = False
                    finish = True
                    acumulado += 1
            # busca un 0 a la izquierda, si la encuentra acumula 1
            # pero x debe ser diferente de 0, osea que no este en la pared
            if grid[y][x - 1] == 0 and x != 0:
                acumulado += 1
            # busca a la abajo, si encuentra 0 incrementa el acumulado
            if y < limY:
                if grid[y + 1][x] == 0:
                    acumulado += 1
            if grid[y][x + 1] == 0:
                # si encuentra un cero a la derecha del actual, no debe
                # buscar mas, debe bajar una posicion
                # y reset x, para comenzar desde el comienzo a buscar un 1
                # debe aumentar el acumulado por no encontra nada a la derecha
                y += 1
                x = 0
                acumulado += 1
            # si en vez de 0 encuentra 1, debe seguir avanzando en x hasta
            # encontra un 0
            else:
                # incrementa en 1 X
                x += 1
                # si x es mayor que el limite, se debe resetear y bajar un
                # renglon en Y
                if x > limX:
                    x = 0
                    y += 1
                # si Y ya paso el limite entonces ya termino de buscar
                if y > limY:
                    return acumulado
        else:
            # si grid[y][x] no es 1, entonces me muevo a la
            # derecha una posicion
            if x < limX:
                x += 1
            if x == limX:
                x = 0
                y += 1
        if y > limY:
            break
    return acumulado
