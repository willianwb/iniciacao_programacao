
package ContaBanco;

import java.util.Scanner;
import java.util.Random;

public class Caixa {


    public static void main(String[] args){
        // Declarando as vari�veis, Scanner e Random
        String nome;
        double inicial;
        @SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
        Random numero = new Random();
        int conta = 1 + numero.nextInt(9999);
        // criando arraylist para extrato
       
       
        //Obtendo os dados iniciais do Cliente
        System.out.println("Cadastrando novo cliente.");
        System.out.print("Entre com seu nome: ");
        nome = entrada.nextLine();

        System.out.print("Entre com o valor inicial depositado na conta: ");
        inicial = entrada.nextDouble();

        //Criando a conta de um cliente
        Conta minhaConta = new Conta(nome, conta, inicial);
        minhaConta.iniciar();
    }
    
    

}