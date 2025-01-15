import random

# Genera una lista di numeri da 1 a 16
numeri = list(range(1, 17))

# Mescola la lista in modo casuale
random.shuffle(numeri)

# Stampa la lista casuale
for i in range(len(numeri)):
	print(numeri[i])

