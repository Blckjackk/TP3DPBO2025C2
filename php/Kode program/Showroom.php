<?php
require_once "Mobil.php";
require_once "Motorcycle.php";
require_once "Truck.php";

class Showroom {
    private $nama;
    private $lokasi;
    private $cars = [];
    private $motorcycles = [];
    private $trucks = [];

    public function __construct($nama, $lokasi) {
        $this->nama = $nama;
        $this->lokasi = $lokasi;
    }

    public function getNama() {
        return $this->nama;
    }

    public function getLokasi() {
        return $this->lokasi;
    }

    public function addCar(Mobil $mobil) {
        $this->cars[] = $mobil;
    }

    public function addMotorcycle(Motorcycle $motor) {
        $this->motorcycles[] = $motor;
    }

    public function addTruck(Truck $truck) {
        $this->trucks[] = $truck;
    }

    // Tambahkan getter untuk mengakses kendaraan
    public function getCars() {
        return $this->cars;
    }

    public function getMotorcycles() {
        return $this->motorcycles;
    }

    public function getTrucks() {
        return $this->trucks;
    }

    public function printAllVehicles() {
        echo "<h2>Daftar Kendaraan di {$this->nama}</h2>";

        foreach ($this->cars as $car) {
            echo "<p>Mobil: {$car->getBrand()} {$car->getModel()} - Rp " . number_format($car->getPrice(), 0, ',', '.') . "</p>";
        }
        foreach ($this->motorcycles as $motor) {
            echo "<p>Motor: {$motor->getBrand()} {$motor->getModel()} - Rp " . number_format($motor->getPrice(), 0, ',', '.') . "</p>";
        }
        foreach ($this->trucks as $truck) {
            echo "<p>Truk: {$truck->getBrand()} {$truck->getModel()} - Rp " . number_format($truck->getPrice(), 0, ',', '.') . "</p>";
        }
    }
}
?>
