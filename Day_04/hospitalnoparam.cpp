#include <iostream>
#include <string>
using namespace std;

class Patient {

public:

    int getAppointmentNumber() {
        return 1;
    }

    int getRoomNumber() {
        return 234;
    }

    string getMedication() {
        return "Paracetamol";
    }

    string getDischargeDate() {
        return "08-08-2024";
    }

    string getDoctorName() {
        return "Dr. Rahul Prasad";
    }

    bool doctorAvailable()
    {
        int n;
        cout<<"Enter the appointment number between 1-20:"<<endl;
        cin>>n;
        switch(n) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
                cout << "The doctor " << getDoctorName() << " is available for appointment number " << n << "." << endl;
                return true;
            default:
                cout << "The doctor " << getDoctorName() << " is not available for appointment number " << n << "." << endl;
                return false;
        }
    }

    string fees() {
        return "fees is 234";
    }

};

int main() {
    Patient patient;

    cout << "The appointment number is: " << patient.getAppointmentNumber() << endl;
    cout << "The room number is: " << patient.getRoomNumber() << endl;
    cout << "The medication recommended is: " << patient.getMedication() << endl;
    cout << "The discharge date is: " << patient.getDischargeDate() << endl;
    cout << "The doctor's name is: " << patient.getDoctorName() << endl;
    bool check = patient.doctorAvailable();
    if(bool==true){
    cout<<"the fees for the patient is :"<<patient.fess()<<endl;
    }
    return 0;
}