from collections import Counter

amigos = int(input())
palpites = input()
erros = input()
palpite_certo = 0
valores_possiveis = []

palpites = palpites.split(" ")
erros = erros.split(" ")

for a in range(0, len(palpites)):
    palpites[a] = int(palpites[a])

for b in range(0, len(erros)):
    erros[b] = int(erros[b])

for c in range(0, amigos):
    valores_possiveis_1 = palpites[c] + (erros[c]*(-1))
    valores_possiveis.append(valores_possiveis_1)
    valores_possiveis_2 = palpites[c] + erros[c]
    valores_possiveis.append(valores_possiveis_2)

valores_possiveis = dict(Counter(valores_possiveis))
for c in valores_possiveis:
    if valores_possiveis[c] == max(valores_possiveis.values()):
       print(c)