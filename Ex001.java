/*Faça um programa que utilize uma função para retorna a soma do vetor: v[1, 2, 3, 9, 2, 0, -1] */

public class Main {
    public static void main(String[] args) {
        int[] v       = {1, 2, 3, 9, 2, 0, -1};
        int resultado = 0;
        for (int j : v) {
            resultado += j;
        }
        System.err.println(resultado);
    }
}