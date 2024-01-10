#include <iostream>
#include "orders.h"
using namespace std;

class controller {
private:
    cleaning_service current_service;
public:
    controller() {
    }
    void execute() {
        int run = 1;
        while (run) {
            menu();
            int var = 0;
            while (var < 1 || var > 8) {
                cout << "Ââåäèòå íîìåð êîìàíäû: ";
                cin >> var;
            }
            if (var == 8) {
                run = 0;
            }
            if (var == 1) {
                current_service.print();
            }
            if (var == 2) {
                current_service.addRc();
                cout << "˜˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜!";
            }
            if (var == 3) {
                current_service.print();
                cout << "˜˜˜˜˜˜˜ ˜˜˜˜˜ ˜˜˜˜˜˜, ˜˜˜˜˜˜˜ ˜˜˜˜ ˜˜˜˜˜˜˜:\n";
                int n;
                cin >> n;
                current_service.deleteRc(n);
            }
            if (var == 4) {
                current_service.saveToFile(true);
                cout << "˜˜˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜!" << endl;
            }
            if (var == 5) {
                current_service.saveToFile(false);
            }
            if (var == 6) {
                current_service.loadFile();
                cout << "˜˜˜˜˜˜ ˜˜ ˜˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜!" << endl;
            }
            if (var == 7) {
                cout << "˜˜˜˜˜˜˜˜ ˜˜˜˜˜, ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜˜˜˜:" << endl;
                int choose= 0;
                while (choose < 1 || choose>current_service.getN() + 1) {
                    current_service.print();
                    cout << "[" << current_service.getN() + 1 << "] " << "˜˜˜˜˜˜." << endl;
                    cin >> choose;

                }
                current_service.changeRecord(choose);
                cout << "˜˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜˜˜!" << endl;
            }
        }
    }

    void menu() {
        cout << "Êîìàíäû: " << endl;
        cout << "[1] Âûâåñòè âñå çàêàçû." << endl;
        cout << "[2] Äîáàâèòü íîâûé çàêàç."<< endl;
        cout << "[3] Óäàëèòü âûáðàííûé çàêàç." << endl;
        cout << "[4] Ñîõðàíèòü òåêóùèå çàêàçû â ôàéë." << endl;
        cout << "[5] Ïåðåçàïèñàòü òåêóùèé ôàéë ñ çàêàçàìè íà íîâûé." << endl;
        cout << "[6] Çàãðóçèòü çàêàçû èç ôàéëà." << endl;
        cout << "[7] Èçìåíèòü âûáðàííûé çàêàç." << endl;
        cout << "[8] Âûõîä èç ïðîãðàììû." << endl;
    }
};