from kendaraan import Kendaraan

class Truck(Kendaraan):
    def __init__(self, brand="", model="", year=0, price=0.0, kapasitas=0, gerbong=False):
        super().__init__(brand, model, year, price)
        self.kapasitas = kapasitas
        self.gerbong = gerbong
    
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas
    
    def set_gerbong(self, gerbong):
        self.gerbong = gerbong
    
    def get_kapasitas(self):
        return self.kapasitas
    
    def get_gerbong(self):
        return self.gerbong
