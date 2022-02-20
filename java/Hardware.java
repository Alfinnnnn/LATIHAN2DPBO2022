public class Hardware {
    
    private String brand;
    private String model;

    Hardware(){
    }

    //get dan set hardware
    
    public void setBrand(String brand){
        this.brand = brand;
    }

    public String getBrand(){
        return this.brand;
    }

    public void setModel(String model){
        this.model = model;
    }

    public String getModel(){
        return this.model;
    }

}
