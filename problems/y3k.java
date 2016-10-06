import java.util.Scanner;
import java.util.Calendar;

public class Y3K{

	private static Scanner scn;
	private static Calendar calendar;

	public static int readData(){
		String read = scn.nextLine();
		read = read.replace("\n", "");
		try{
			String [] data = read.split(" ");
			if(data.length == 4){
				int diasAsumar = Integer.parseInt(data[0]);
				int dia = Integer.parseInt(data[1]);
				int mes = Integer.parseInt(data[2]);
				int year = Integer.parseInt(data[3]);
				calendar = calendar.getInstance();
				calendar.set(year, mes, dia);
				System.out.println(calendar.toString());





				return 1;
			}

			
		}catch(Exception e){
			return 0;
		}
		//System.out.println(read);
		return 0;
	}

	public static void main(String args[]){
		scn = new Scanner(System.in);
		while(readData() != 0);
		return;
	}
}


