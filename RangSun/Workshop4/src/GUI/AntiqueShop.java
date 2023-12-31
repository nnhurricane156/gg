package GUI;

import DTO.*;

import java.util.Scanner;

public class AntiqueShop {
    public static void main(String[] args){
        String[] options={ "Create a Vase" ,"Create a Statue", "Create a Statue", "display the item"};
        Item item = null;
        int choice = 0 ;
        do{
            try{
            choice=Menu.getChoice(options);}
            catch (NumberFormatException e){
                System.out.println("Invalid Value !!!");
            }
            switch (choice) {
                case 1 -> {
                    item = new Vase();
                    ((Vase) item).inputVase();
                }
                case 2 -> {
                    item = new Statue();
                    ((Statue) item).inputStatue();
                }
                case 3 -> {
                    item = new Painting();
                    ((Painting) item).inputPainting();
                }
                case 4 -> {
                    if (item != null) {
                        if (item instanceof Vase)
                            ((Vase) item).outputVase();
                        else if (item instanceof Statue)
                            ((Statue) item).outputStatue();
                        else if (item instanceof Painting)
                            ((Painting) item).outputPainting();
                    } else System.out.println(" you need to create an object");
                }
            }
        }while(choice<=4); }}

