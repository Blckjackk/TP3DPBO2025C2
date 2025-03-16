class Showroom:
    def __init__(self, nama, lokasi):
        self.nama = nama
        self.lokasi = lokasi
        self.trucks = []
        self.motorcycles = []
        self.cars = []

    # Getter methods
    def get_nama(self):
        return self.nama

    def get_lokasi(self):
        return self.lokasi

    def get_trucks(self):
        return self.trucks

    def get_motorcycles(self):
        return self.motorcycles

    def get_cars(self):
        return self.cars

    # Setter methods
    def set_nama(self, nama):
        self.nama = nama

    def set_lokasi(self, lokasi):
        self.lokasi = lokasi

    # Methods to add vehicles
    def add_truck(self, truck):
        self.trucks.append(truck)

    def add_motorcycle(self, motorcycle):
        self.motorcycles.append(motorcycle)

    def add_car(self, car):
        self.cars.append(car)

    # Print motorcycles
    def print_motorcycles(self):
        print(f"Daftar Motor di Showroom {self.nama}:")
        if not self.motorcycles:
            print("Tidak ada motor di showroom.")
            return
        for i, motor in enumerate(self.motorcycles, 1):
            print(f"Motor {i}:")
            print(f"Brand: {motor.get_brand()}")
            print(f"Model: {motor.get_model()}")
            print(f"Year: {motor.get_year()}")
            print(f"Price: {motor.get_price()}")
            print(f"Type: {motor.get_type()}")
            print(f"Has Windshield: {'Yes' if motor.get_has_windshield() else 'No'}")
            print("--------------------")

    # Print trucks
    def print_trucks(self):
        print(f"Daftar Truk di Showroom {self.nama}:")
        if not self.trucks:
            print("Tidak ada truk di showroom.")
            return
        for i, truck in enumerate(self.trucks, 1):
            print(f"Truk #{i}:")
            print(f"Brand: {truck.get_brand()}")
            print(f"Model: {truck.get_model()}")
            print(f"Year: {truck.get_year()}")
            print(f"Price: {truck.get_price()}")
            print(f"Kapasitas: {truck.get_kapasitas()} ton")
            print(f"Gerbong: {'Yes' if truck.get_gerbong() else 'No'}")
            print("--------------------")

    # Print cars
    def print_cars(self):
        print(f"Daftar Mobil di Showroom {self.nama}:")
        if not self.cars:
            print("Tidak ada mobil di showroom.")
            return
        for i, car in enumerate(self.cars, 1):
            print(f"Mobil #{i}:")
            print(f"Brand: {car.get_brand()}")
            print(f"Model: {car.get_model()}")
            print(f"Year: {car.get_year()}")
            print(f"Price: {car.get_price()}")
            print(f"Doors: {car.get_doors()}")
            print(f"Fuel Type: {car.get_fuel_type()}")
            print("--------------------")

    # Print all vehicles in showroom
    def print_all_vehicles(self):
        print(f"Showroom: {self.nama} | Lokasi: {self.lokasi}")
        print("=================================")
        self.print_motorcycles()
        print()
        self.print_trucks()
        print()
        self.print_cars()
        print("=================================")

    # Destructor
    def __del__(self):
        print(f"Showroom {self.nama} dihapus")
