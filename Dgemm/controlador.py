import subprocess
import os
import time

def executar_versao(versao, n):
    # Define o caminho completo para os executáveis
    if versao == 'dgemm1':
        executavel = os.path.join(os.getcwd(), 'multiplica_dgemm1.exe')
    elif versao == 'dgemm2':
        executavel = os.path.join(os.getcwd(), 'multiplica_dgemm2.exe')
    else:
        print(f"Versão {versao} não reconhecida.")
        return

    # Exibe a mensagem de multiplicação para a versão
    print(f"Multiplicando com {versao}, n = {n}...")

    # Registra o tempo de início
    start_time = time.time()

    try:
        # Executa o subprocesso com o caminho completo e passando apenas o argumento n
        subprocess.run([executavel, str(n)], check=True)
    except subprocess.CalledProcessError as e:
        print(f"Erro ao executar o programa: {e}")
        return

    # Calcula o tempo de execução
    end_time = time.time()
    execution_time = end_time - start_time

    # Exibe o tempo de execução
    print(f"Tempo de execucao: {execution_time:.6f} segundos")

def main():
    if len(os.sys.argv) != 2:
        print("Uso: python controlador.py <tamanho das matrizes (n)>")
        return

    n = int(os.sys.argv[1])  # Tamanho da matriz (n)

    # Executa a versão dgemm1
    executar_versao('dgemm1', n)

    # Executa a versão dgemm2
    executar_versao('dgemm2', n)

if __name__ == "__main__":
    main()
