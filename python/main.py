#Mengimport memory sebagai ortunya (inheritance)
from Memory import Memory

class main(Memory):
    list = Memory()

    #memasukkan data

    list.setBrand("Corsair")
    list.setModel("Vegeance")
    list.setIdProduct(82400)
    list.setPrice(934000)
    list.setFreq("2400MHz")
    list.setMemSize("16GB")
    list.setSpCuda("YES")

    #menampilkan data

    print("List Hardware\n")
    print("Brand            : " + str(list.getBrand()))
    print("Model            : " + str(list.getModel()))
    print("Id Product       : " + str(list.getIdProduct()))
    print("Memory Size      : " + str(list.getMemSize()))
    print("Frequency        : " + str(list.getFreq()))
    print("Supporting Cuda  : " + str(list.getSpCuda()))
    print("Harga            : " + str(list.getPrice()))