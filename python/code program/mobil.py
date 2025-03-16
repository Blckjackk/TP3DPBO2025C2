from kendaraan import Kendaraan


class Mobil(Kendaraan):
    def __init__(self, brand="", model="", year=0, price=0.0, doors=0, fuel_type=""):
        super().__init__(brand, model, year, price)
        self.doors = doors
        self.fuel_type = fuel_type

    def set_jumlah_pintu(self, doors):
        self.doors = doors

    def set_fuel_type(self, fuel_type):
        self.fuel_type = fuel_type

    def get_doors(self):
        return self.doors

    def get_fuel_type(self):
        return self.fuel_type
