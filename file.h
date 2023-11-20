#include <iostream>
#include <string>
using namespace std;

class personType {
public:
    void print() const {
        cout << fName << " " << lName << endl;
    }
    void setName(string First, string Last) {
        fName = First;
        lName = Last;
    }
    string getfName() const {
        return fName;
    }
    string getlName() const {
        return lName;
    }
    personType(string First = "", string Last = "") {
        fName = First;
        lName = Last;
    }
    
protected:
    string fName;
    string lName;
};

class dateType {
public:
    void setDate(int Month, int Day, int Year) {
        nMnth = Month;
        nDy = Day;
        nYr = Year;
    }
    int getDay() const {
        return nDy;
    }
    int getMonth() const {
        return nMnth;
    }
    int getYear() const {
        return nYr;
    }
    void printDate() const {
        cout << nMnth << "/" << nDy << "/" << nYr << endl;
    }
    dateType(int Month = 1, int Day = 1, int Year = 1900) {
        nMnth = Month;
        nDy = Day;
        nYr = Year;
    }

private:
    int nMnth;
    int nDy;
    int nYr;
};

class doctorType : public personType {
private :
    string Spec;

public:
    doctorType(string First = "", string Last = "", string Spec = "") : personType(First, Last), Spec(Spec) {}
    void setSpec(string Spec) {
        this->Spec = Spec;
    }
    string getSpec() {
        return Spec;
    }
};

class patientType : public personType, public dateType {
private:
    int PatID;
    int Age;
    dateType DtofBth;
    dateType admtDt;
    dateType DschrgDt;
    doctorType Dr;

public:
    patientType(string First, string Last, int PatID, int Age, dateType DtofBth, dateType admtDt, dateType DschrgDt, doctorType Dr)
    : personType(First, Last), PatID(PatID), Age(Age), DtofBth(DtofBth), admtDt(admtDt), DschrgDt(DschrgDt), Dr(Dr) {}

    void setPtID(int ID) {
        PatID = ID;
    }
    int getPtID() {
        return PatID;
    }
    void setAge(int Age) {
        this->Age = Age;
    }
    int getAge() {
        return Age;
    }
    void setDoB(dateType DoB) {
        DtofBth = DoB;
    }
    dateType getDoB() {
        return DtofBth;
    }
    void setAdmtDt(dateType AdmtDt) {
        admtDt = AdmtDt;
    }
    dateType getAdmtDt() {
        return admtDt;
    }
    void setDschrgDt(dateType DschrgDt) {
        this->DschrgDt = DschrgDt;
    }
    dateType getDschrgDt() {
        return DschrgDt;
    }
    void setPcNm(doctorType Dr) {
        this->Dr = Dr;
    }
    string getPcNm() {
        return Dr.getfName() + " " + Dr.getlName();
    }
};

class billType {
private :
    int PatID;
    double MdcnChrg;
    double DrF;
    double RmChrg;

public:
    billType(int PatID = 0, double MdcnChrg = 0, double DrF = 0, double RmChrg = 0)
    : PatID(PatID), MdcnChrg(MdcnChrg), DrF(DrF), RmChrg(RmChrg) {}
    void setMdcnChrg(double MdcnChrg) {
        this -> MdcnChrg = MdcnChrg;
    }
    double getMdcnChrg() const {
        return MdcnChrg;
    }
    void setDrF(double DrF) {
        this->DrF = DrF;
    }
    double getDrF() const {
        return DrF;
    }
    void setRmChrg(double RmChrg) {
        this->RmChrg = RmChrg;
    }
    double getRmChrg() const {
        return RmChrg;
    }
};
