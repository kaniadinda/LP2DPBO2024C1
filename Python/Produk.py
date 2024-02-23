# library
from Shirt import Shirt

# membuat kelas produk
class Produk(Shirt):
    # konstruktor dengan parameter
    def __init__(self, id, name, brand, price):
        self.id = id
        self.name = name
        self.brand = brand
        self.price = price
    
    # set & get id
    def set_id(self, id):
        self.id = id
    
    def get_id(self):
        return self.id
    
    # set & get nama
    def set_name(self, name):
        self.name = name

    def get_name(self):
        return self.name
    
    # set & get brand
    def set_brand(self, brand):
        self.brand = brand

    def get_brand(self):
        return self.brand
    
    # set & get price
    def set_price(self, price):
        self.price = price
    
    def get_price(self):
        return self.price