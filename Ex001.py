#Faça um programa que utilize uma função para retorna a soma do vetor: v[1, 2, 3, 9, 2, 0, -1]

def soma(vetor):
    end = len(vetor)
    resultado = 0
    for i in range(0, end):
       resultado+=vetor[i]
    return resultado

def somaDois(vetor):
    resultado = sum(vetor)
    return resultado

v = [1,2,3,9,2,0,-1]
print(soma(v))
print("---------------")
print(somaDois(v))