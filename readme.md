# CPF 

UNIVERSIDADE FEDERAL DE SANTA CATARINA 

Prof. Wyllian Bezerra da Silva 

Canal do Prof. Wyllian 

URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA 


## Sobre 
Programa que recebe uma string e verifica se os caracteres correspondem a um CPF válido ou inválido.

1. Cálculo do primeiro dígito verificador (DV):
   O primeiro DV é calculado utilizando os 9 dígitos independentes, atribuindo-se um peso a cada dígito e utilizando um cálculo módulo 11. O peso do primeiro dígito é 10, do segundo é 9, do terceiro é 8, ..., do nono é 2. Um somatório da multiplicação dos pesos pelos dígitos é feito, e o resultado é dividido por 11. Se o resto dessa divisão for menor que 2, o primeiro DV será 0. Caso contrário, o resto dessa divisão será substraído de 11, obtendo o primeiro DV. Exemplo: o CPF 222.333.666-AB, em AB são os DVs deve ser calculado conforme a seguir:

    | Dígito |  2 |  2 |  2 |  3 |  3 |  3 |  6 |  6 |  6 |
    |--------| -- | -- | -- | -- | -- | -- | -- | -- | -- |
    | Peso   | 10 |  9 |  8 |  7 |  6 |  5 |  4 |  3 |  2 | 
    
a. 10*2 + 9*2 + 8*2 + 7*3 + 6*3 + 5*3 + 4*6 + 3*6 + 2*6.

b. O resto da divisão do resultado obtido, i.e., 162 por 11, é 8.

c. Se o resto < 2, o primeiro DV será 0.

d. Caso contrário, subtrai-se o valor do resto de 11, e.g., 11 - 8 = 3. Logo, A = 3.

e. Neste caso, o primeiro DV = 3. Então, o CPF será 222.333.666-3B.
    
2. Cálculo do segundo dígito verificador (DV):
   O cálculo do segundo DV é semelhante ao do primeiro. Entretanto, a diferença consiste nos pesos de cada dígito, os quais são incrementados de 1, e o primeiro DV é incluído no cálculo. Assim, continuando o exemplo, os pesos serão:

    | Dígito |  2 |  2 |  2 |  3 |  3 |  3 |  6 |  6 |  6 | -  | 3  |
    |--------| -- | -- | -- | -- | -- | -- | -- | -- | -- | -- | -- |
    | Peso   | 11 | 10 |  9 |  8 |  7 |  6 |  5 |  4 |  3 | -  |  2 |

    a. 11*2 + 10*2 + 9*2 + 8*3 + 7*3 + 6*3 + 5*6 + 4*6 + 3*6 + 3*2 = 201.
    
    b. O resto da divisão do resultado em (a) por 11, i.e., 201 por 11 resulta em 3.
    
    c. Se o resto < 2, o segundo DV será 0.
    
    d. Caso contrário, subtrai-se o valor do resto de 11, e.g., 11 - 3 = 8. Logo, B = 8.
    
    e. Neste caso, o segundo DV é o número 8. Então, o CPF será 222.333.666-38.

## Requisitos
- SO Linux
- Pacotes: `sudo apt install sox libsox-fmt-all gawk konsole kate` 
    - sox
    - libsox-fmt-all
    - gawk
    - konsole
    - kate

## Instruções
1. Compilação/execução:
  `f=CPF; gcc -o ../bin/$f *.c -Wall; ../bin/./$f; rm ../bin/$f` 
2. Ctrl+C: 
   - Cancel ou Exit.


## Instruções
- Geração dos arquivos de áudio:
  - http://www.fromtexttospeech.com
- BG:
  - https://www.youtube.com/audiolibrary
