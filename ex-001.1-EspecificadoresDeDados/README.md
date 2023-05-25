## Especificadores em C

  Para imprimir dados na tela com printf precisamos especificar o tipo de dado que irá estar dentro da variável

  Lista dos principais Especificadores:
    
     1. '%d' ou '%i': usado para inteiros com sinal (tipo 'int').
     2. '%u': usado para inteiros sem sinal (tipo 'unsigned int').
     3. '%f': usado para números de ponto flutuante de dupla precisão simples (tipo 'float').
     4. '%lf': usado para números de ponto flutuante de dupla precisão (tipo 'double').
     5. '%c': usado para caracteres (tipo 'char').
     6. '%s': usado para strings (arrays de caracteres).
     7. '%p': usado para ponteiros (endereços de memória).
     8. '%x' ou '%X': usado para inteiros em formato dexadecimal.
     9. '%o': usado para inteiros em formato octal.
    10. '%e' ou 'E': usado para números de ponto flutuante em notação científica.
    11. '%g' ou '%G': usado para para números de ponto flutuante em formato compacto (notação científica ou decimal).
    12. '%%': usado para imprimir o caractere '%' literal.

## Exemplos 

      #include <stdio.h>

      int main(){
          int integerVal = 42;
          unsigned int unsignedVal = 123;
          float floatVal = 3.14159;
          double doubleVal = 2.71828;
          char charVal = 'A';
          char stringVal[] = "Hello World";
          void* ponterVal = &integerVal;

          printf("Integer: $d\n", integerVal);
          printf("Unsigned Integer: %u\n", unsignedVal);
          printf("Float: %f\n", floatVal);
          printf("Double: $lf\n", doubleVal);
          printf("Character: %c\n", charVal);
          printf("String: %s\n", stringVal);
          printf(Pointer: %p\n", pointerVal);
          printf("Hexadecimal: %x\n", integerVal);
          printf("Octal: %o\n", integerVal);
          printf("Scientific Notation: %e\n", doubleVal);
          printf("Compact format: %g\n", floatVal);
          printf("Percent Sign: %%\n");

          return 0;

      }
