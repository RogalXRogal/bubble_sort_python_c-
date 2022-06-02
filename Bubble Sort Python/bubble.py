import time


def sortowanie_babelkowe(lista):
    n = len(lista)

    while n > 1:
        zamien = False
        for l in range(0, n-1):
            if lista[l] > lista[l+1]:
                lista[l], lista[l+1] = lista[l+1], lista[l]
                zamien = True        
        n -= 1
        if zamien == False: break
   
    
    return lista
        
nazwy_plików = []
zawartość = []

pliczki = [
    "plik1",
    "plik2",
    "plik3",
    "plik4",
    "plik5",
    "plik6",
    "plik7",
    "plik8",
    "plik9",
    "plik10",
    "plik11",
    "plik12",
    "plik13",
    "plik14",
    "plik15",
    "plik16",
    "plik17",
    "plik18",
    ]

nazwy_plików.append("liczby_losowe_100k.txt")
nazwy_plików.append("liczby_losowe_10k.txt")
nazwy_plików.append("liczby_losowe_1k.txt")
nazwy_plików.append("liczby_malejace_100k.txt")
nazwy_plików.append("liczby_losowe_10k.txt")
nazwy_plików.append("liczby_losowe_1k.txt")
nazwy_plików.append("liczby_malejaco_rosnacy_100k.txt")
nazwy_plików.append("liczby_malejaco_rosnacy_10k.txt")
nazwy_plików.append("liczby_malejaco_rosnacy_1k.txt")
nazwy_plików.append("liczby_rosnace_100k.txt")
nazwy_plików.append("liczby_rosnace_10k.txt")
nazwy_plików.append("liczby_rosnace_1k.txt")
nazwy_plików.append("liczby_rosnaco_malejacy_100k.txt")
nazwy_plików.append("liczby_rosnaco_malejacy_10k.txt")
nazwy_plików.append("liczby_rosnaco_malejacy_1k.txt")
nazwy_plików.append("liczby_stale_100k.txt")
nazwy_plików.append("liczby_stale_10k.txt")
nazwy_plików.append("liczby_stale_1k.txt")



i = 0

for i in range (18):

    pliczki[i] = open(nazwy_plików[i], "r").read()

    lines = pliczki[i].split("\n")

    for line in lines:
        zawartość.append(int(line))


    start = time.time()
    sortowanie_babelkowe(zawartość)
    stop = time.time()

    t = stop - start

    print ("Czas wykonania pliku: ")
    print (nazwy_plików[i])
    print (t)
