public class Main {
    public static void main(String[] args){

        Memory list = new Memory();

        //menginput data

        list.setBrand("Corsair");
        list.setModel("Vegeance");
        list.setId_Product(82400);
        list.setPrice(934000);
        list.setFreq("2400MHz");
        list.setMem_size("16GB");
        list.setSp_cuda("YES");

        //Menampilkan data
        System.out.println("List Hardware\n");

        System.out.println("Brand            : " + list.getBrand());
        System.out.println("Model            : " + list.getModel());
        System.out.println("Id Product       : " + list.getBrand());
        System.out.println("Memory Size      : " + list.getMem_size());
        System.out.println("Frequency        : " + list.getFreq());
        System.out.println("Supporting Cuda  : " + list.getSp_cuda());
        System.out.println("Harga            : " + list.getPrice());

        


    }
}
