package DTO;

public class FPTUniversity extends University implements Role{

    @Override
    public void createWorker() {
        System.out.println("providing human resources");
    }
    String address;

    public FPTUniversity() {
    }

    public FPTUniversity(int size,String name, String address) {
        super(size,name);
        this.address = address;
    }


    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }
    public String toString(){
        return "FPTU has four campuses Hanoi,HCM, DaNang, CanTho, QuyNhon";
    }
}
//    FPTU has four campuses Hanoi,HCM, DaNang, CanTho, QuyNhon
