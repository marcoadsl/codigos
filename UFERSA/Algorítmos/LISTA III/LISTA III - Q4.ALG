Algoritmo "LISTA III - Q4"
Var

n1, n2, resultado: inteiro

Inicio

      escreval("Digite dois n�meros para efetuar a divis�o")
      leia(n1)
      leia(n2)
      
      resultado <- n1%n2

      se resultado=0 entao
         escreval(n1,"/",n2,"=",resultado)
         escreval("� Divis�vel")

         senao
              se n2=0 entao
                 escreval("Esta divis�o � indefinida")
              senao
                   escreval("N�o � divis�vel")
              fimse
      fimse
Fimalgoritmo