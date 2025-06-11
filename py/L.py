from math import log, ceil
qubits = log(int(input()) * 1000000 * 8,2)
print(f"{ceil(qubits)}")