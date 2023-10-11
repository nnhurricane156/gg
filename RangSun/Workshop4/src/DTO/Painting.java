package DTO;

public class Painting extends Item{
    private int height;
    private int width;
    private boolean isWatercolour;
    private boolean isFramed;

    public Painting(int height, int width, boolean isWatercolour, boolean isFramed) {
        this.height = height;
        this.width = width;
        this.isWatercolour = isWatercolour;
        this.isFramed = isFramed;
    }
    public Painting(){}

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getWidth() {
        return width;
    }

    public void setWidth(int width) {
        this.width = width;
    }

    public boolean isWatercolour() {
        return isWatercolour;
    }

    public void setWatercolour(boolean watercolour) {
        isWatercolour = watercolour;
    }

    public boolean isFramed() {
        return isFramed;
    }

    public void setFramed(boolean framed) {
        isFramed = framed;
    }
    public void outputPainting(){
        super.output();
        System.out.println("Height :"+ height);
        System.out.println("Width: "+ width);
        System.out.println("Water Colour: "+ isWatercolour);
        System.out.println("Framed: "+ isFramed);
    }
    public void inputPainting(){
        super.input();
        height = Validation.getInt("Enter height: ",0,Integer.MAX_VALUE);
        width = Validation.getInt("Enter width: ",0,Integer.MAX_VALUE);
        isWatercolour = scanner.nextBoolean();
        isFramed = scanner.nextBoolean();
    }
}
