import sys
from executa_dgemm import executar_dgemm

if len(sys.argv) < 2:
    print("Uso: python controlador_dgemm456.py <tamanho_da_matriz>")
    sys.exit(1)

try:
    n = int(sys.argv[1])
except ValueError:
    print("Erro: o tamanho da matriz deve ser um número inteiro.")
    sys.exit(1)

executaveis = [
    "multiplica_dgemm4.exe",
    "multiplica_dgemm5.exe",
    "multiplica_dgemm6.exe"
]

for exe in executaveis:
    executar_dgemm(exe, n)