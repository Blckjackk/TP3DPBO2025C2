from kendaraan import Kendaraan

class Motorcycle(Kendaraan):
    def __init__(self, brand="", model="", year=0, price=0.0, type_="", has_windshield=False):
        super().__init__(brand, model, year, price)
        self.type = type_
        self.has_windshield = has_windshield

    def set_type(self, type_):
        self.type = type_

    def set_has_windshield(self, has_windshield):
        self.has_windshield = has_windshield

    def get_type(self):
        return self.type

    def get_has_windshield(self):
        return self.has_windshield
