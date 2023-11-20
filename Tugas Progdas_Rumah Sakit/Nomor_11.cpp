// Nomor_11.cpp

#include <iostream>
#include "file.h"
using namespace std;

int main() {
    doctorType doctor("Nabil", "Naufal", "General Practitioner");
    cout << "========================================" << endl;
    cout << "============ Doctor Details ============" << endl;
    cout << "========================================" << endl;
    cout << "** Dr. Name\t: " << doctor.getfName() << " " << doctor.getlName() << endl; 
    cout << "** Specialty\t: " << doctor.getSpec() << endl;
    cout << "========================================" << endl;
    cout << endl;

    dateType DtofBth(10,12,2005);
    dateType admtDt(11,18,2023);
    dateType DschrgDt(11,20,2023);
    patientType patient("Rhizal","Rhomadon", 514719, 18, DtofBth, admtDt, DschrgDt, doctor);
    cout << "========================================" << endl;
    cout << "============ Patient Details ===========" << endl;
    cout << "========================================" << endl;
    cout << "** Patient Name\t: " << patient.getfName() << " " << patient.getlName() << endl;
    cout << "** Patient ID\t: " << patient.getPtID() << endl;
    cout << "** Age\t\t: " << patient.getAge() << endl;
    cout << "** Date Of Birth: ";
    patient.getDoB().printDate();
    cout << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "========================================" << endl;
    cout << "============ Visit Details =============" << endl;
    cout << "========================================" << endl;
    cout << "** Date of Admission: ";
    patient.getAdmtDt().printDate(); 
    cout << "\n** Date of Discharge: ";
    patient.getDschrgDt().printDate(); 
    cout << "\n** Doctor Name      : "<< patient.getPcNm() << endl;
    cout << "=======================================" << endl;
    cout << endl;

    billType patientBill(300,238,127,100);
    cout << "=======================================" << endl;
    cout << "=========== Billing Details ===========" << endl;
    cout << "=======================================" << endl;
    cout << "** Medicine Cost: $ " << patientBill.getMdcnChrg() << endl;
    cout << "** Doctor Fee\t: $ " << patientBill.getDrF() << endl;
    cout << "** Room Charges\t: $ " << patientBill.getRmChrg() << endl; 
    cout << "** Total pay\t: $ " << patientBill.getMdcnChrg() + patientBill.getDrF() + patientBill.getRmChrg() << endl;
    cout << "=======================================" << endl;
    cin.get();
    return 0;
}