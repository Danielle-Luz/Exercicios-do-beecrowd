import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner (System.in);
        float[] lista= new float[6];
        float soma=0;
        int contador=0;
        int i=0;
        while(i<lista.length){
            lista[i]=input.nextFloat();
            if(lista[i]>0){
                soma+=lista[i];
                contador++;
            }
            if(contador==0 && i==(lista.length-1)){
                continue;
            }else{
                i++;
            }
        }
        DecimalFormat df= new DecimalFormat("0.0");
        System.out.println(contador + " valores positivos");
        System.out.println(df.format(soma/contador));
    }
}