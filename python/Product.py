#mengimport Hardware sebagai ortunya (inheritance)
from Hardware import Hardware

class Product(Hardware):
    __Price = 0
    __IdProduct = 0

    def __init__(self, price=0, IdProduct=0):
        self.__Price = price
        self.__IdProduct = IdProduct

    def setPrice(self, Price):
        self.__Price = Price

    def getPrice(self):
        return self.__Price
    
    def setIdProduct(self, IdProduct):
        self.__IdProduct = IdProduct

    def getIdProduct(self):
        return self.__IdProduct

    
