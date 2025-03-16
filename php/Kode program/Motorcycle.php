<?php
require_once "Kendaraan.php";

class Motorcycle extends Kendaraan {
    private $type;
    private $hasWindshield;

    public function __construct($brand, $model, $year, $price, $type, $hasWindshield) {
        parent::__construct($brand, $model, $year, $price);
        $this->type = $type;
        $this->hasWindshield = $hasWindshield;
    }

    public function getType() {
        return $this->type;
    }

    public function hasWindshield() {
        return $this->hasWindshield;
    }
}
?>
