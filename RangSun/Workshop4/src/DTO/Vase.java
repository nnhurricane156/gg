package DTO;

import java.util.Scanner;

public class Vase extends Item{
    Scanner scanner = new Scanner(System.in);
    private int height;
    private String material;
    public Vase(){
    }
    public Vase(int height, String material) {
        this.height = height;
        this.material = material;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public String getMaterial() {
        return material;
    }

    public void setMaterial(String material) {
        this.material = material;
    }
    public void outputVase(){
        super.output();
        System.out.println("Output height: " + height);
        System.out.println("Output material: "+material);
    }
    public void inputVase(){
        super.input();
        height = Validation.getInt("Enter height: ",0,Integer.MAX_VALUE);
        material = Validation.getString("Enter material: ");
    }
}
