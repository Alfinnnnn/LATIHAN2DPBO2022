#mengimport Product sebagai ortunya (inheritance)
from Product import Product

class Memory(Product):
    __freq = ''
    __memSize = ''
    __spCuda = ''

    def __init__(self, freq='', memSize='', spCuda=''):
        self.__freq = freq
        self.__memSize = memSize
        self.__spCuda = spCuda

    def setFreq(self, freq):
        self.__freq = freq
    
    def getFreq(self):
        return self.__freq

    def setMemSize(self, memSize):
        self.__memSize = memSize
    
    def getMemSize(self):
        return self.__memSize

    def setSpCuda(self, spCuda):
        self.__spCuda = spCuda
    
    def getSpCuda(self):
        return self.__spCuda
