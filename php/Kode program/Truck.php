<?php
require_once "Kendaraan.php";

class Truck extends Kendaraan {
    private $kapasitas;
    private $gerbong;

    public function __construct($brand, $model, $year, $price, $kapasitas, $gerbong) {
        parent::__construct($brand, $model, $year, $price);
        $this->kapasitas = $kapasitas;
        $this->gerbong = $gerbong;
    }

    public function getKapasitas() {
        return $this->kapasitas;
    }

    public function hasGerbong() {
        return $this->gerbong;
    }
}
?>
