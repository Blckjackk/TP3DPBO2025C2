<?php
class Kendaraan {
    protected $brand;
    protected $model;
    protected $year;
    protected $price;

    public function __construct($brand, $model, $year, $price) {
        $this->brand = $brand;
        $this->model = $model;
        $this->year = $year;
        $this->price = $price;
    }

    public function getBrand() {
        return $this->brand;
    }

    public function getModel() {
        return $this->model;
    }

    public function getYear() {
        return $this->year;
    }

    public function getPrice() {
        return $this->price;
    }
}
?>
