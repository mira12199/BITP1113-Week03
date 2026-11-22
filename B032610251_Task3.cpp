// Name  : NURUL AMIRAH BINTI MOHD NAZRI      Matric : B032610251
// Lab 3 : UTeM Print Shop
#include <iostream>
#include <iomanip>     
#include <string>
using namespace std;

const double black_and_white_paper = 0.10;   // RM per paper
const double color_paper = 0.50;

int main()
{
    string matric;
    int    TotalPages, blackwhitePages, colorPages, stapledSets, LoosePages, BulkOrder;
    char   binding;
    double total, AvgPerPage, totalWithCombining;
    bool   Combinding;

    // ---- Input ----
    cout << "Enter No. Matric               : ";
    cin >> matric;
    cout << "Number of Black and White Pages:  ";
    cin >> blackwhitePages;
    cout << "Number of Color Pages          : ";
    cin >> colorPages;
    cout << "Comb binding (Y/N)            : ";
    cin >> binding;

    // ---- Process ---
    Combinding = (binding == 'Y') || (binding == 'y');
    total = (blackwhitePages * black_and_white_paper) + (colorPages * color_paper);
    if (Combinding)
    {
        totalWithCombining = total + 2.00;
    }
    else
    {
        totalWithCombining = total;
    }
    TotalPages = blackwhitePages + colorPages;
    stapledSets = TotalPages / 20;
    LoosePages = TotalPages % 20;
    AvgPerPage = totalWithCombining / TotalPages;
    BulkOrder = (TotalPages >= 100);

    // ---- Output ----
    cout << fixed << setprecision(2);
    cout << endl << setfill('=') << setw(32) << "" << setfill(' ') << endl;
    cout << "   UTeM Print Shop - RECEIPT" << endl;
    cout << setfill('=') << setw(32) << "" << setfill(' ') << endl;
    cout << "No. Matric      : " << matric << endl;
    cout << "Total pages     : " << TotalPages << endl;
    cout << "Stapled sets    : " << setw(12) << stapledSets << endl;
    cout << "Loose pages     : " << setw(12) << LoosePages << endl;
    cout << "Total(RM)       : " << setw(12) << totalWithCombining << endl;
    cout << "Avg per page    : " << setw(12) << AvgPerPage << endl;
    cout << "Bulk order(1/0) : " << BulkOrder << endl;
    return 0;
}
