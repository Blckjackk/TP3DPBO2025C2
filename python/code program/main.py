from mobil import Mobil
from motor import Motorcycle
from truck import Truck
from showroom import Showroom

def main():
    # Membuat objek kendaraan
    mobil = Mobil("Toyota", "Camry", 2022, 500000000, 4, "Bensin")
    mobil1 = Mobil("Mahaya", "Kembric", 2023, 400000, 6, "Solar")
    motor = Motorcycle("Yamaha", "R15", 2021, 35000000, "Enak", True)
    motor2 = Motorcycle("Yamaha", "R25", 2022, 35000000, "Yoi", True)
    motor3 = Motorcycle("Yamaha", "R35", 2025, 35000000, "Sport", True)
    truk = Truck("Dino", "Butro", 2022, 650000000, 3, True)
    truk1 = Truck("Hino", "Dutro", 2020, 700000000, 5, True)

    # Membuat showroom
    my_showroom = Showroom("Blackjack Showroom", "Bandung")
    print(f"Isi showroom: {my_showroom.get_nama()}")

    # Menambahkan kendaraan ke showroom
    my_showroom.add_car(mobil)
    my_showroom.add_car(mobil1)
    my_showroom.add_motorcycle(motor)
    my_showroom.add_motorcycle(motor2)
    my_showroom.add_motorcycle(motor3)
    my_showroom.add_truck(truk)
    my_showroom.add_truck(truk1)

    print(f"Isi showroom: {my_showroom.get_nama()}")
    my_showroom.print_all_vehicles()

if __name__ == "__main__":
    main()
