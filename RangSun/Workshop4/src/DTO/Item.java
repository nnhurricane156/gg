package DTO;

import java.util.Scanner;
public class Item {

    protected int value;
    protected String creator;

    Scanner scanner = new Scanner(System.in);
    public Item() {
    }
    public Item(int value, String creator) {
        this.value = value;
        this.creator = creator;
    }

    public int getValue() {
        return value;
    }

    public void setValue(int value) {
        this.value = value;
    }

    public String getCreator() {
        return creator;
    }

    public void setCreator(String creator) {
        this.creator = creator;
    }
    public void output(){
        System.out.println("Output value: " + value);
        System.out.println("Output creator: "+creator);
    }
    public void input(){
        value = Validation.getInt("Enter value>0",0,Integer.MAX_VALUE);
        creator = Validation.getString("Enter creator: ");
    }
}
