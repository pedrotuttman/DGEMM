import subprocess
import time

def executar_dgemm(executavel, n):
    inicio = time.time()
    subprocess.run([executavel, str(n)])
    fim = time.time()
    print(f"Tempo de execução ({executavel}, n={n}): {fim - inicio:.4f} segundos")