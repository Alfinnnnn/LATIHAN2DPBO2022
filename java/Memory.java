public class Memory extends Product{

    private String freq;
    private String memSize;
    private String spCuda;

    Memory(){
    }

    //get dan set Memory

    public void setFreq(String freq){
        this.freq = freq;
    }

    public String getFreq(){
        return this.freq;
    }

    public void setMem_size(String memSize){
        this.memSize = memSize;
    }

    public String getMem_size(){
        return this.memSize;
    }

    public void setSp_cuda(String spCuda){
        this.spCuda = spCuda;
    }

    public String getSp_cuda(){
        return this.spCuda;
    }

}
