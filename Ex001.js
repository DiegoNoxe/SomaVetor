/*Faça um programa que utilize uma função para retorna a soma do vetor: v[1, 2, 3, 9, 2, 0, -1]
*/

function soma(vetor)
{
    let resultado = 0;
    let tam =  vetor.length
    for(let i=0;i<tam; i++)
    {
        resultado += vetor[i];
    }
    return resultado;
};

let v = [1, 2, 3, 9, 2, 0, -1];
console.log(soma(v));