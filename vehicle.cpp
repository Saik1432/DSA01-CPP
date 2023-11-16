#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(const std::string& mk, const std::string& mdl, int yr)
        : make(mk), model(mdl), year(yr) {}
    const std::string& getMake() const {
        return make;
    }

    void setMake(const std::string& mk) {
        make = mk;
    }
    const std::string& getModel() const {
        return model;
    }

    void setModel(const std::string& mdl) {
        model = mdl;
    }
    int getYear() const {
        return year;
    }

    void setYear(int yr) {
        year = yr;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    Car(const std::string& mk, const std::string& mdl, int yr, int seats, const std::string& fuel)
        : Vehicle(mk, mdl, yr), seatingCapacity(seats), fuelType(fuel) {}
    int getSeatingCapacity() const {
        return seatingCapacity;
    }

    void setSeatingCapacity(int seats) {
        seatingCapacity = seats;
    }
    const std::string& getFuelType() const {
        return fuelType;
    }

    void setFuelType(const std::string& fuel) {
        fuelType = fuel;
    }
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(const std::string& mk, const std::string& mdl, int yr, double payload, double towing)
        : Vehicle(mk, mdl, yr), payloadCapacity(payload), towingCapacity(towing) {}
    double getPayloadCapacity() const {
        return payloadCapacity;
    }

    void setPayloadCapacity(double payload) {
        payloadCapacity = payload;
    }
    double getTowingCapacity() const {
        return towingCapacity;
    }

    void setTowingCapacity(double towing) {
        towingCapacity = towing;
    }
};

int main() {
    Car car("Toyota", "Camry", 2022, 5, "Gasoline");
    Truck truck("Ford", "F-150", 2022, 2000.0, 8000.0);
    std::cout << "Car Make: " << car.getMake() << std::endl;
    std::cout << "Car Model: " << car.getModel() << std::endl;
    std::cout << "Car Year: " << car.getYear() << std::endl;
    std::cout << "Car Seating Capacity: " << car.getSeatingCapacity() << std::endl;
    std::cout << "Car Fuel Type: " << car.getFuelType() << std::endl;

    std::cout << "Truck Make: " << truck.getMake() << std::endl;
    std::cout << "Truck Model: " << truck.getModel() << std::endl;
    std::cout << "Truck Year: " << truck.getYear() << std::endl;
    std::cout << "Truck Payload Capacity: " << truck.getPayloadCapacity() << " lbs" << std::endl;
    std::cout << "Truck Towing Capacity: " << truck.getTowingCapacity() << " lbs" << std::endl;

    return 0;
}

