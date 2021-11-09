## Análise da eficiêcia de Algoritmos de Ordenação:jack_o_lantern:

A análise foi feita utilizando a linguagem C envolvendo 1.000,10.000,100.000,1.000.000 valores gerados aleatoriamente através do :diamonds:SRAND(()),
os algoritmos usados são CountingSort,QuickSort e RadixSort.

Foi feito uma alocação dinâmica envolvendo :diamonds:CALLOC(()) para poder suportar 1.000.000 de valores

Utilizou-se da criação de uma biblioteca externa com as funções de ordenação, nomeadas de:   
:pushpin:**countsortlib.h** para o CountingSort  
:pushpin:**quicsort.h** para o Quicksort  
:pushpin:**radsort.h** para o RadixSort



## Tabela de Eficiência em Milisegundos



|Valores             | CountingSort        |      QuickSort      | RadixSort           |
| -------------------| ------------------- | ------------------- | ------------------- |
|  1.000 |  0.023000 |  1.378000 | 0.059000  |
|  10.000|  0.229000 |  127.252000 |  0.667000 |
|  100.000|  1.641000 |  13392.515000 |  6.823000 |
|  1.000.000|  17.432000 |  Undefined |  71.038000 |



QuickSort com 1.000.000 é extremamente inviável, onde há um grande uso de memória e consequentemente um tempo maior de execução, superando todos os outros.


## Tabela de Quantidade de Operações



|Valores             | CountingSort        |      QuickSort      | RadixSort           |
| -------------------| ------------------- | ------------------- | ------------------- |
|  1.000             |  15997              |  1993507237         | 20058  |
|  10.000|  51997 |  1993507240 |  120025 |
|  100.000|  411997 |  Undefined |  1119999 |
|  1.000.000|  4011997 |  Undefined |  10840073 |



Como foi dito o QuickSort é inviável com valores muito altos, por isso sua quanttidade de operações são de difícil noção, ainda mais por causa do uso recursivo da ordenação.


### :computer:Configuração do Notebook


  :small_orange_diamond:Ryzen 5 3500U  
  :small_orange_diamond:12 GB RAM  
  :small_orange_diamond:AMD Radeon™ RX Vega 8  
  :small_orange_diamond:SSD 258 SX6000 Lite  
  
Análise e algoritmos feito por Davi Galdino, estudante de Ciências da Computação no IFG
