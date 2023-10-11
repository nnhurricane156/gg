package DTO;

public class Statue extends Item {
    private int weight;
    private String colour;
    public Statue(){
    }
    public Statue(int weight, String colour) {
        this.weight = weight;
        this.colour = colour;
    }
    public int getWeight() {
        return weight;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public String getColour() {
        return colour;
    }

    public void setColour(String colour) {
        this.colour = colour;
    }
    public void outputStatue(){
        super.output();
        System.out.println("Weight: "+ weight);
        System.out.println("Colour: "+ colour);
    }
    public void inputStatue(){
        super.input();
        weight = Validation.getInt("Enter weight: ",0,Integer.MAX_VALUE);
        colour = Validation.getString("Enter Colour: ");
    }
}
