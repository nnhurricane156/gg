package DTO;

public class BeeColony extends Colony implements Role{
    String type;
    public BeeColony() {
    }
    @Override
    public void createWorker() {
        System.out.println("Worker bees perform all the work of the bees");
    }
    public BeeColony(int size,String place, String type) {
        super(size,place);
        this.type = type;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String toStirng(){
        return "the colony’s type is " +type + ", size is about" + size + ", and the place is" + place;
    }
}
