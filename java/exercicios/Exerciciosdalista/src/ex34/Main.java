package ex34;
import java.text.NumberFormat;
import java.util.Scanner;

public class Main {
   
   public static void main(String[] args) {
      Scanner    in = new Scanner(System.in);
      Funcionario f = new Funcionario();
      Aliquota  al = new Aliquota();
     
      f.setSalarioBruto(in.nextDouble());
      f.setCategoria(in.nextInt());
      in.close();
     
      double efetiva = al.efetiva(f);
      double inss = f.getSalarioBruto() * efetiva;
      double irrf = al.progressiva(f,inss);
      		 irrf = (f.getSalarioBruto() - inss) * irrf;
     
      NumberFormat nfc = NumberFormat.getCurrencyInstance();
      NumberFormat nfp = NumberFormat.getPercentInstance();
     
      nfc.setMaximumFractionDigits(2);
      nfp.setMaximumFractionDigits(2);
  
      System.out.println("Salario Bruto \t" + nfc.format(f.getSalarioBruto()));
      System.out.println("INSS \t\t" + nfc.format(inss) + " (" + nfp.format(efetiva) + ")");
      System.out.println("Salário (sem INSS) " +  nfc.format(f.getSalarioBruto()-inss));
      System.out.println("IRFF " + nfc.format(irrf) + " (" + nfp.format(al.progressiva(f,inss)) + ")");
      System.out.println("Salário Líquido " + nfc.format(f.salario(inss, irrf)));
   }
}