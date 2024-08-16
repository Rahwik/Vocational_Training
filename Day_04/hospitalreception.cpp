#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int appointmentNumber;
    int roomNumber;
    string medication;
    string dischargeDate;
    string doctorName;
    string diagnosis;
    string treatmentPlan;

public:
    // Constructor
    Patient(int appointmentNumber, int roomNumber, string medication, string dischargeDate, string doctorName, string diagnosis, string treatmentPlan) {
        this->appointmentNumber = appointmentNumber;
        this->roomNumber = roomNumber;
        this->medication = medication;
        this->dischargeDate = dischargeDate;
        this->doctorName = doctorName;
    }

    // Getters
    int getAppointmentNumber() {
        return appointmentNumber;
    }

    int getRoomNumber() {
        return roomNumber;
    }

    string getMedication() {
        return medication;
    }

    string getDischargeDate() {
        return dischargeDate;
    }

    string getDoctorName() {
        return doctorName;
    }

    // Setters
    void setAppointmentNumber(int appointmentNumber) {
        this->appointmentNumber = appointmentNumber;
    }

    void setRoomNumber(int roomNumber) {
        this->roomNumber = roomNumber;
    }

    void setMedication(string medication) {
        this->medication = medication;
    }

    void setDischargeDate(string dischargeDate) {
        this->dischargeDate = dischargeDate;
    }

    void setDoctorName(string doctorName) {
        this->doctorName = doctorName;
    }
};

int main() {
    Patient patient(1, 101, "Paracetamol", "08-08-2024", "Dr. Rahul", "Fever", "Rest and hydration");

    cout << "Appointment Number: " << patient.getAppointmentNumber() << endl;
    cout << "Room Number: " << patient.getRoomNumber() << endl;
    cout << "Medication: " << patient.getMedication() << endl;
    cout << "Discharge Date: " << patient.getDischargeDate() << endl;
    cout << "Doctor Name: " << patient.getDoctorName() << endl;

    return 0;
}