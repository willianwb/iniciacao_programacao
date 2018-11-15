package ContaBanco;
import java.text.SimpleDateFormat;
import java.util.GregorianCalendar;

/**
 * 
 */

/**
 * @author Willian
 *
 */
public class operacao {

	private String hoperacao;
	private double hvalor;
	private GregorianCalendar hdata;
	private double hsaldo;
	//implements comparable 
	//metodo compareto
	
	public operacao(String hoperacao,double hvalor,GregorianCalendar hdata,double hsaldo) {
		super();
		this.hoperacao = hoperacao;
		this.hvalor = hvalor;
		this.hdata = hdata;
		this.hsaldo = hsaldo;
	}
	
	public operacao(String hoperacao, double hvalor, int dia,int mes, int ano, double hsaldo) {
		super();
		this.hoperacao = hoperacao;
		this.hvalor = hvalor;
		hdata = new GregorianCalendar(ano, mes-1, dia);
		this.hsaldo = hsaldo;
	}

	public String getHoperacao() {
		return hoperacao;
	}
	public void setHoperacao(String hoperacao) {
		this.hoperacao = hoperacao;
	}
	public double getHvalor() {
		return hvalor;
	}
	public void setHvalor(double hvalor) {
		this.hvalor = hvalor;
	}
	public GregorianCalendar getHdata() {
		return hdata;
	}
	public void setHdata(GregorianCalendar hdata) {
		this.hdata = hdata;
	}
	public double getHsaldo() {
		return hsaldo;
	}
	public void setHsaldo(double hsaldo) {
		this.hsaldo = hsaldo;
	}
	
	public String getDataHistString() {
        SimpleDateFormat sdf = new SimpleDateFormat("dd.MM.yyyy");
        String shdata = sdf.format(hdata.getTime());
        return shdata;
	}
	

	@Override
	public String toString() {
		return "Operação: " + hoperacao + "  - Valor:" + hvalor;
	}
	
	

}
