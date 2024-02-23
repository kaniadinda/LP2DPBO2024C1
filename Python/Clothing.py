# membuat kelas clothing
class Clothing:
    # konstruktor dengan parameter
    def __init__(self, size, material, gender):
        self.size = size
        self.material = material
        self.gender = gender
    
    # tetapkan size
    def set_size(self, size):
        self.size = size
    
    # get size
    def get_size(self):
        return self.size
    
    # tetapkan material
    def set_material(self, material):
        self.material = material

    # get material
    def get_material(self):
        return self.material
    
    # tetapkan gender
    def set_gender(self, gender):
        self.gender = gender
    
    # get gender
    def get_gender(self):
        return self.gender