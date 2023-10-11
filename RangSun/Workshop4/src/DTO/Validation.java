package DTO;

import java.util.Scanner;

public class Validation{
    static Scanner sc = new Scanner(System.in);
    public static int getInt(String msg, double min, double max) {
        while (true) {
            System.out.println(msg);
            try {
                int n = Integer.parseInt(sc.nextLine());
                if (min <= n && n <= max)
                    return n;
            } catch (NumberFormatException ex) {
                System.out.println("Wrong format");
            }
        }
    }
    public static String getString(String msg){
        while (true){
            System.out.println(msg);
            try {
                String txt = sc.nextLine();
                if(txt != null)
                    return txt;
            } catch (NullPointerException ex){
                System.out.println("Wrong format");
            }
        }
    }
}
