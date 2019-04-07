Algoritmo "VEICULO"

Var
   C,L,K: REAL

Inicio
      ESCREVA("DIGITE QUANTOS KM SÃO: ")
      LEIA(K)
      ESCREVAL("                      ")
      ESCREVA("DIGITE A QUANTIDADE DE LITROS: ")
      LEIA(L)
      ESCREVAL("                      ")
      ESCREVA("DIGITE O CONSUMO MÉDIO: ")
      LEIA(C)

             SE C*L>=K ENTAO
             ESCREVAL("NÃO DEVE REABASTECER")
                          SENAO C*L<K ENTAO
                          ESCREVAL("DEVE ABASTECER")
             FIMSE
    
Fimalgoritmo