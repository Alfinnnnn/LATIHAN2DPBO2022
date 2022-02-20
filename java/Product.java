public class Product extends Hardware{
    
    private int price;
    private int idProduct;

    Product(){
    }

    //get dan set Produk

    public void setPrice(int price){
        this.price = price;
    }

    public int getPrice(){
        return this.price;
    }

    public void setId_Product(int idProduct){
        this.idProduct = idProduct;
    }

    public int getId_Product(){
        return this.idProduct;
    }



}
