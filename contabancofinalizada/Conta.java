package ContaBanco;


import java.text.SimpleDateFormat;
import java.util.*;


public class Conta {
    private String nome;
    private int conta, 
    			saques;
    private double saldo;
    Scanner entrada = new Scanner(System.in);
    
    //criando arraylist para histórico
    ArrayList <operacao> hist = new ArrayList<operacao>();
    
    operacao h1 = new operacao("Saque",9500,01,01,2017,500000);
    operacao h2 = new operacao("Deposito",45500,01,01,2017,545500);
    operacao h3 = new operacao("Pagamento Cheque",46300,01,01,2017,499200);
    operacao h4 = new operacao("Pagamento Cartão De Débito",54656,01,01,2017,444544);
    
    public void addoperacoes(){
    hist.add(h1);
    hist.add(h2);
    hist.add(h3);
    hist.add(h4);
    }
    

    public Conta(String nome, int conta, double saldo_inicial){
        this.nome=nome;
        this.conta=conta;
        saldo=444544;
    }
    
   	public void imprimeSaldoAnterior(){
		System.out.println(this.saldo);
	}
   	
   	public void extrato(int x){
   		int j,k,l;
   		GregorianCalendar dateA,dateB;
   		
			Collections.sort(hist, new Comparator<operacao>(){
					public int compare(operacao c1, operacao c2) {
							return  Integer.compare(
									c1.getHdata().get(Calendar.DAY_OF_YEAR), 
									c2.getHdata().get(Calendar.DAY_OF_YEAR));
					}
				});
			
   		
		if (x == 1){
   			System.out.println("Estipule o ano e o mes:");
            System.out.print("mês: ");
            k = entrada.nextInt();
            System.out.print("ano: ");
            l = entrada.nextInt();
            dateA = new GregorianCalendar(l,k-1,01);
            dateB = new GregorianCalendar(l,k-1,31);
            extrato(hist,dateA,dateB);
   		} else {
   			if(x==2){
   			System.out.println("Estipule a data inicial:");
            System.out.print("dia: ");
            j = entrada.nextInt();
            System.out.print("mês: ");
            k = entrada.nextInt();
            System.out.print("ano: ");
            l = entrada.nextInt();
   			dateA = new GregorianCalendar(l,k-1,j);
   			System.out.println("Estipule a data final:");
            System.out.print("dia: ");
            j = entrada.nextInt();
            System.out.print("mês: ");
            k = entrada.nextInt();
            System.out.print("ano: ");
            l = entrada.nextInt();
   			dateB = new GregorianCalendar(l,k-1,j);
   			extrato(hist,dateA,dateB);
   			} else{
   				extrato();
   				extrato(hist);
   			}

   		}
   		
   	}

    public void extrato(){
        System.out.println("\tEXTRATO");
        System.out.println("Nome: " + this.nome);
        System.out.println("Número da conta: " + this.conta);
        System.out.printf("Saldo atual: %.2f\n",this.saldo);
        System.out.println("Saques realizados hoje: " + this.saques + "\n");
        //chamar collections.sort sobre hist 
   			}
        
        
	public static void extrato(ArrayList<operacao> historico){
		Iterator<operacao> it = historico.iterator();
		System.out.println("Histórico");
		while (it.hasNext()) {
			operacao aux = it.next();
			System.out.print(aux.getDataHistString() + "\t");
			System.out.print(aux+"\n");
			System.out.println("\n");
		}
	}
    
	public void extrato(ArrayList<operacao> historico, GregorianCalendar dateA, GregorianCalendar dateB){
		int first =0;
		double x = 0;
		Iterator<operacao> it = historico.iterator();
		SimpleDateFormat sdf = new SimpleDateFormat("dd.MM.yyyy");
		System.out.println("Histórico de: "+ sdf.format(dateA.getTime()) + " até: " + sdf.format(dateB.getTime()));
		while (it.hasNext()) {
			operacao aux = it.next();
			if(aux.getHdata().compareTo(dateA) >=0 && aux.getHdata().compareTo(dateB) <= 0){
				if (first ==0){
					if(Objects.equals(aux.getHoperacao(), "Deposito")){
					System.out.println("Saldo Inicial: "+ (aux.getHsaldo()-aux.getHvalor()));
					System.out.println("");
					first++;
					}else{
					System.out.println("Saldo Inicial: "+ (aux.getHsaldo()+aux.getHvalor()));
					System.out.println("");
					first++;
					}
				}
			System.out.print(aux.getDataHistString());
			System.out.print("  " + aux +"\n");
			x = aux.getHsaldo();
			}
			if(it.hasNext() == false){
				System.out.println("");
				System.out.println("Saldo Final: " + x);
			}
		}
	}


    public void sacar(double valor,int dia, int mes, int ano){
        if(saldo >= valor){
            saldo -= valor;
            System.out.println("Sacado: " + valor);
            System.out.println("Novo saldo: " + saldo + "\n");
            hist.add(new operacao("Deposito",valor,dia,mes,ano,saldo));
        } else {
            System.out.println("Saldo insuficiente. Faça um depósito\n");
        }
    }

    public void depositar(double valor,int dia, int mes,int ano)
    {
        saldo += valor;
        System.out.println("Depositado: " + valor);
        System.out.println("Novo saldo: " + saldo + "\n");
        hist.add(new operacao("Deposito",valor,dia,mes,ano,saldo));
    }
    
    public void PagamentoCartaoDebito(double valor,int dia, int mes, int ano){
		imprimeSaldoAnterior();	
		System.out.println("AGUARDE.. PROCESSANDO");
		System.out.println("Pagamento de R$ "+valor + " conta " +conta);
		if ( valor > 0) {
			if (saldo >= valor) {
				saldo = saldo - valor;
				System.out.println("Saldo Disponivel para movimentação é R$ "+ (saldo));
				hist.add(new operacao("Cartão De Débito",valor,dia,mes,ano,saldo));
			} else 
				System.out.println("Saldo Disponivel para movimentação é R$ "+ (saldo));
		} else {
			System.out.println("o valor do saque deve ser positivo");
		}
	 }
    
    public void PagamentoCheque(double valor,int dia, int mes, int ano){
		imprimeSaldoAnterior();	
		System.out.println("AGUARDE.. PROCESSANDO");
		System.out.println("Pagamento de R$ "+valor + " conta " +conta);
		if ( valor > 0) {
			if (saldo >= valor) {
				saldo = saldo - valor;
				System.out.println("Saldo Disponivel para movimentação é R$ "+ (saldo));
				hist.add(new operacao("Cartão De Débito",valor,dia,mes,ano,saldo));
			} else 
				System.out.println("Saldo Disponivel para movimentação é R$ "+ (saldo));
		} else {
			System.out.println("o valor do saque deve ser positivo");
		}
	 }
    
    

    public void iniciar(){
        int opcao;
    	addoperacoes();
        do{
            exibeMenu();
            opcao = entrada.nextInt();
            escolheOpcao(opcao);
        }while(opcao!=6);
    }

    public void exibeMenu(){
        System.out.println("Bem-vindo a sua Conta Corrente! Escolha uma opção do Menu:\n\n"
                + "1. Extrato\n"
                + "2. Sacar\n"
                + "3. Depositar\n"
                + "4. Pagamento Cartão de Débito\n"
                + "5. Pagamento com Cheque\n"
                + "6. Sair\n");

    }

    public void escolheOpcao(int opcao){
        double valor;
        int d, m, an,x;

        switch( opcao ){
            case 1:    
                    System.out.println("Digite opção de extrato\n1.Escolha o Mês\n2.Escolha Período\n3.Completo");
                    x= entrada.nextInt();
                    extrato(x);
                    // tirar extrato pela data
                    break;
            case 2: 
                        System.out.print("Quanto deseja sacar: ");
                        valor = entrada.nextDouble();
                        System.out.print("dia: ");
                        d = entrada.nextInt();
                        System.out.print("mês: ");
                        m = entrada.nextInt();
                        System.out.print("ano: ");
                        an = entrada.nextInt();
                        sacar(valor, d, m, an);
                    break;

            case 3:
                    System.out.print("Quanto deseja depositar: ");
                    valor = entrada.nextDouble();
                    System.out.print("dia: ");
                    d = entrada.nextInt();
                    System.out.print("mês: ");
                    m = entrada.nextInt();
                    System.out.print("ano: ");
                    an = entrada.nextInt();
                    depositar(valor,d,m,an);
                    break;
                    
            case 4:
                System.out.print("Quanto deseja pagar com Cartão: ");
                valor = entrada.nextDouble();
                System.out.print("dia: ");
                d = entrada.nextInt();
                System.out.print("mês: ");
                m = entrada.nextInt();
                System.out.print("ano: ");
                an = entrada.nextInt();
            	PagamentoCartaoDebito(valor,d,m,an);
            	break;
            	
            case 5:
                System.out.print("Quanto deseja pagar com Cheque: ");
                valor = entrada.nextDouble();
                System.out.print("dia: ");
                d = entrada.nextInt();
                System.out.print("mês: ");
                m = entrada.nextInt();
                System.out.print("ano: ");
                an = entrada.nextInt();
            	PagamentoCheque(valor,d,m,an);
            	break;

            case 6: 
                    System.out.println("Sistema encerrado.");
                    break;

            default:
                    System.out.println("Opção inválida");
        }
    }
    
}