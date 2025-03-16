<?php
require_once "Kendaraan.php";

class Mobil extends Kendaraan {
    private $doors;
    private $fuelType;

    public function __construct($brand, $model, $year, $price, $doors, $fuelType) {
        parent::__construct($brand, $model, $year, $price);
        $this->doors = $doors;
        $this->fuelType = $fuelType;
    }

    public function getDoors() {
        return $this->doors;
    }

    public function getFuelType() {
        return $this->fuelType;
    }
}
?>
