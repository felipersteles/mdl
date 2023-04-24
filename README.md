# Lógica

Importante para compreender o racicionio matemático.

## Lógica proposicional

### Preposição

Uma sentença declarativa que é exclusivamente ou VERDADEFIRA ou FALSA.

- Exemplos:

  `(slz é a capital do maranhão) - (3 + 3 = 5)`

  (slz é a capital do maranhão) -> verdadeira
  (3 + 3 = 5) -> falso

### Sentenças

Um preposição é um conjunto de sentenças.

### Exemplos de Tipos de sentença

- interregoção: `que horas são?`
- ordem: `leia as instruções:`
- exclamação: olá! rs
- sentença aberta: `x + 1 = 3`
- sentença ???: `x + y = z`

### Jogo das proposições

| sentença                        | afirmativo? | preoposição? | é atômica | valor lógico         |
| ------------------------------- | ----------- | ------------ | --------- | -------------------- |
| elefantes sao maiores que ratos | sim         | sim          | sim       | verdadeiro           |
| 39 > 93                         | sim         | sim          | sim       | falso                |
| tchubirubiru                    | sim         | não          |           |                      |
| quem esta ai?                   | não         |              |           |                      |
| esta chovendo                   | sim         | sim          | sim       | `não tem como saber` |

### Conectivos Lógicos

- veja a tabela:

| Símbolo | Operação Lógica     | Significado |
| ------- | ------------------- | ----------- |
| ~       | Negação             | NOT         |
| ^       | Conjunção           | AND         |
| v       | Disjunção           | OR          |
| ⊕       | Disjunção exclusiva | XOR         |
| →       | Implicaçao          | IMPLIES     |
| ↔       | Bicondicional       | IFF         |

### Operadores

- NOT(~):

considerando:

p -> rato gosta de queijo (verdadeira)

q -> a lua é feita de queijo (falsa)

| p   | ~p  |
| --- | --- |
| T   | F   |
| F   | T   |

- AND(^):

| p   | q   | p^q |
| --- | --- | --- |
| t   | t   | t   |
| t   | f   | f   |
| f   | t   | f   |
| f   | f   | f   |

- OR(v):

![or](https://static.significados.com.br/foto/tabela-verdade-disjuncao.png)

- XOR⊕:

| p   | q   | p⊕q |
| --- | --- | --- |
| t   | t   | f   |
| t   | f   | t   |
| f   | t   | t   |
| f   | f   | t   |

- IF(→):

![if](https://static.significados.com.br/foto/tabela-verdade-condicional-ed.png)

- IFF(↔):

![iff](https://static.significados.com.br/foto/tabela-verdade-bicondicional.png)

## Predicados

Aquilo que se atribui a algo. Podendo ser:

- propriedades
- relações

exemplos:

Eu sou um cachorro

- sujeito: eu
- predicado: sou um cachorro

2 é menor que 3

- sujeito: 2
- predicado: é menor que 3

## Funções proposicionais

> x > 3

> x = y + 3

> x + y = z

- são sentenças abertas(sem valor verdade)

Para se tornarem uma função proposicional elas tem de estar desta forma: `p(x)`

> p(x) = x > 3

> p(3) = 3 > 3 = false

> p(5) = 5 > 3 = true

## Quantificadores

### Universal (∀):

Lê-se: `Para todo`

- dominio vazio:

Geralmente assume-se implicitamente que o universo do discurso não é vazio. Porém, se o domimio for vazio, entao `∀xP(x)` é verdadeira para qualquer função proposicional.

- dominio finito:

Exemplo: `todo caranguejo não é peixe`

### Existencial (∃):

- Exemplo:

`ExP(x)` -> Há pelo menos um `x` tal que `P(x)`

## Converso, Contrapositivo e inverso

- IF(→):

| p   | q   | p→q | q→p | ~p→~q | ~q→~p |
| --- | --- | --- | --- | ----- | ----- |
| t   | t   | t   | t   | t     | t     |
| t   | f   | f   | t   | t     | f     |
| f   | t   | t   | f   | f     | t     |
| f   | f   | t   | t   | t     | t     |

exemplo:

> se chover, o time da casa ganha

> se o time da casa não ganha, então não chove (contrapositivo)

> se o time da casa ganha então não chove (converso)

> se não chove, então o time da casa não ganha (inverso)

- IFF(→):

| p   | q   | p→q | q→p | ~p→~q | ~q→~p |
| --- | --- | --- | --- | ----- | ----- |
| t   | t   | t   | t   | t     | t     |
| t   | f   | f   | t   | f     | f     |
| f   | t   | t   | f   | f     | f     |
| f   | f   | t   | t   | t     | t     |

## Tradução de sentanças

Tem como objetivo remover a impresição ou ambiguidades -> fazer uma análise lógica

## Exercicios

Exercicios resolvidos por mim na linguagem C
