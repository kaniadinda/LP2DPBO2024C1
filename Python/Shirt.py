# library
from Clothing import Clothing

# membuat kelas shirt
class Shirt(Clothing):
    # konstruktor dengan parameter
    def __init__(self, color, sleevetype):
        #set nilainya
        self.color = color
        self.sleevetype = sleevetype
    
    # set & get color
    def set_color(self, color):
        self.color = color
    
    def get_color(self):
        return self.color
    
    # set & get sleevetype
    def set_sleevetype(self, sleevetype):
        self.sleevetype = sleevetype

    def get_sleevetype(self):
        return self.sleevetype