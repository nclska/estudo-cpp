from math import gcd
entrada = map(int, input().split(" ")) 
Y, K = entrada
X = 1
for i in range(K):
    X += gcd(X, Y)
print(X)