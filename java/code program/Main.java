public class Main {
    public static void main(String[] args) {
        // Membuat objek kendaraan
        Mobil mobil = new Mobil("Toyota", "Camry", 2022, 500000000, 4, "Bensin");
        Mobil mobil1 = new Mobil("Mahaya", "Kembric", 2023, 400000, 6, "Solar");
        Motorcycle motor = new Motorcycle("Yamaha", "R15", 2021, 35000000, "Enak", true);
        Motorcycle motor2 = new Motorcycle("Yamaha", "R25", 2022, 35000000, "Yoi", true);
        Motorcycle motor3 = new Motorcycle("Yamaha", "R35", 2025, 35000000, "Sport", true);
        Truck truk = new Truck("Dino", "Butro", 2022, 650000000, 3, true);
        Truck truk1 = new Truck("Hino", "Dutro", 2020, 700000000, 5, true);

        // Membuat showroom
        Showroom myShowroom = new Showroom("Blackjack Showroom", "Bandung");

        myShowroom.addCar(mobil);
        myShowroom.addCar(mobil1);
        myShowroom.addMotorcycle(motor);
        myShowroom.addMotorcycle(motor2);
        myShowroom.addMotorcycle(motor3);
        myShowroom.addTruck(truk);
        myShowroom.addTruck(truk1);

        myShowroom.printAllVehicles();
    }
}
