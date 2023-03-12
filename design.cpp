#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Asset {
    private:
        string name;
        string location;
        string status;
    public:
        Asset(string n, string l, string s) {
            name = n;
            location = l;
            status = s;
        }
        string getName() {
            return name;
        }
        string getLocation() {
            return location;
        }
        string getStatus() {
            return status;
        }
};

class Maintenance {
    private:
        string date;
        string type;
        double cost;
    public:
        Maintenance(string d, string t, double c) {
            date = d;
            type = t;
            cost = c;
        }
        string getDate() {
            return date;
        }
        string getType() {
            return type;
        }
        double getCost() {
            return cost;
        }
};

class Procurement {
    private:
        string vendor;
        string date;
        double cost;
    public:
        Procurement(string v, string d, double c) {
            vendor = v;
            date = d;
            cost = c;
        }
        string getVendor() {
            return vendor;
        }
        string getDate() {
            return date;
        }
        double getCost() {
            return cost;
        }
};

class Disposal {
    private:
        string date;
        string reason;
        double cost;
    public:
        Disposal(string d, string r, double c) {
            date = d;
            reason = r;
            cost = c;
        }
        string getDate() {
            return date;
        }
        string getReason() {
            return reason;
        }
        double getCost() {
            return cost;
        }
};

class User {
    private:
        string username;
        string password;
        int access_level;
    public:
        User(string u, string p, int a) {
            username = u;
            password = p;
            access_level = a;
        }
        string getUsername() {
            return username;
        }
        string getPassword() {
            return password;
        }
        int getAccessLevel() {
            return access_level;
        }
};

int main() {
    // Example usage of the classes
    Asset asset1("Laptop", "Room A", "In Use");
    Maintenance maintenance1("2022-01-01", "Checkup", 50.00);
    Procurement procurement1("Vendor A", "2022-01-01", 500.00);
    Disposal disposal1("2023-01-01", "Obsolete", 100.00);
    User user1("John", "password123", 2);
    
    cout << asset1.getName() << " is located in " << asset1.getLocation() << " and is currently " << asset1.getStatus() << endl;
    cout << "Maintenance performed on " << asset1.getName() << " on " << maintenance1.getDate() << " was of type " << maintenance1.getType() << " and cost " << maintenance1.getCost() << " USD." << endl;
    cout << "Procurement of " << asset1.getName() << " was made from " << procurement1.getVendor() << " on " << procurement1.getDate() << " and cost " << procurement1.getCost() << " USD." << endl;
    cout << asset1.getName() << " was disposed on " << disposal1.getDate() << " because it was " << disposal1.getReason() << " and cost " << disposal1.getCost() << " USD to dispose." << endl;
