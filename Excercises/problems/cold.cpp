#include <iostream>

using namespace std;

int main() {
    float field[8][8];

    float initial_temp = 10.0f;

    float north_heat = 70;
    float east_heat = 80;
    float south_heat = 60;
    float west_heat = 90;

    int minutes = 2;

    int report_coord_x = 2;
    int report_coord_y = 2;

    cout << "Initial Field Temp: ";
    cin >> initial_temp;
    
    cout << "North side heat: ";
    cin >> north_heat;
    cout << "East side heat: ";
    cin >> east_heat;
    cout << "South side heat: ";
    cin >> south_heat;
    cout << "West side heat: ";
    cin >> west_heat;

    cout << "Minutes to run: ";
    cin >> minutes;

    cout << "Reporting Coordinate X: ";
    cin >> report_coord_x;
    cout << "Reporting Coordinate Y: ";
    cin >> report_coord_y;

    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            field[x][y] = initial_temp;
        }
    }

    for (int i = 0; i < minutes; i++) {
        float new_field[8][8];

        for (int y = 0; y < 8; y++) {
            for (int x = 0; x < 8; x++) {
                float average_temp = 0;

                if (x == 0) {
                    average_temp += west_heat;
                    average_temp += field[x + 1][y];
                } else if (x == 7) {
                    average_temp += east_heat;
                    average_temp += field[x - 1][y];
                } else {
                    average_temp += field[x + 1][y];
                    average_temp += field[x - 1][y];
                }

                if (y == 0) {
                    average_temp += north_heat;
                    average_temp += field[x][y + 1];
                } else if ( y == 7) {
                    average_temp += south_heat;
                    average_temp += field[x][y - 1];
                } else {
                    average_temp += field[x][y - 1];
                    average_temp += field[x][y + 1];
                }

                new_field[x][y] = average_temp / 4.0f;
            }
        }

        for (int x = 0; x < 8; x++) {
            for (int y = 0; y < 8; y++) {
                field[x][y] = new_field[x][y];
            }
        }
    }

    /*for(int y=0;y<8;y++)
	{
		for(int x=0;x<8;x++)
		{
			cout<<"\t"<<field[x][y];
		}
		cout<<endl;
	} */   

    cout << field[report_coord_x - 1][report_coord_y - 1] << endl;

    return 0;
}