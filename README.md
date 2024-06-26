# concatenar.c
Este código em C lê o conteúdo de dois arquivos de texto e os concatena em um terceiro arquivo. 

### Biblioteca
- stdio.h
- stdlib.h

## Funções

- concatenar
Esta função recebe dois parâmetros base e copiado, que são ponteiros para arquivos.
Utiliza um buffer de 1000 caracteres para ler o conteúdo do arquivo copiado.
Em um loop while, lê cada linha do arquivo copiado e escreve essa linha no arquivo base até o final do arquivo.


- main
Recebe argumentos de linha de comando que representam a quantidade de argumentos e os próprios argumentos, respectivamente.
Declara três ponteiros de arquivo sendo eles arquivoA, arquivoB e arquivoC.
Abre o primeiro arquivo em modo de leitura. Se não conseguir abrir, imprime uma mensagem de erro.
Abre o segundo arquivo em modo de leitura. Se não conseguir abrir, imprime uma mensagem de erro.
Abre/cria o arquivo de resultado em modo de apêndice. Se não conseguir abrir, imprime uma mensagem de erro.
Chama a função concatenar duas vezes, primeiro para concatenar o conteúdo de arquivoA e depois de arquivoB em arquivoC.
Fecha os três arquivos.

#### execução

gcc concatenar.c -o concatena

./concatena

