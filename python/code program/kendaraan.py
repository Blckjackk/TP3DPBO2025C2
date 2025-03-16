class Kendaraan:
    def __init__(self, brand="", model="", year=0, price=0.0):
        self.brand = brand
        self.model = model
        self.year = year
        self.price = price

    # Setter methods
    def set_brand(self, brand):
        self.brand = brand
    
    def set_model(self, model):
        self.model = model
    
    def set_year(self, year):
        self.year = year
    
    def set_price(self, price):
        self.price = price

    # Getter methods
    def get_brand(self):
        return self.brand
    
    def get_model(self):
        return self.model
    
    def get_year(self):
        return self.year
    
    def get_price(self):
        return self.price

    # Destructor (not commonly used in Python)
    def __del__(self):
        pass
