package GUI;

import java.util.Scanner;

public class Menu {
    public static <T> int getChoice(T[] options) throws NumberFormatException{
        for(int i=0;i < options.length;i++){
            System.out.println((i+1)+"_" + options[i] );
        }
        System.out.println("Choose 1.."+ options.length+ ": ");
        Scanner scanner = new Scanner(System.in);
        return Integer.parseInt(scanner.nextLine());
    }
}
