#include <iostream>

using namespace std;

int main()
{

    int i,j,x,y,r,e,repeticiones,movi=1;
    string reemplazo;

                                 /*0*/       /*1*/       /*2*/
    string juego[8][3]={/*0*/{"    |    ","    |    ","    |    "},
                        /*1*/{"    |    ","    |    ","    |    "},
                        /*2*/{"    |    ","    |    ","    |    "},
                        /*3*/{"    *    ","    |    ","    |    "},
                        /*4*/{"   %%%   ","    |    ","    |    "},
                        /*5*/{"  $$$$$  ","    |    ","    |    "},
                        /*6*/{" ####### ","    |    ","    |    "},
                        /*7*/{"@@@@@@@@@","    |    ","    |    "}};

    for(i=0;i<8;i++)
        {
            for(j=0;j<3;j++)
            {
                cout << juego[i][j];
            }cout << "\n";
        }
    for(repeticiones=0;repeticiones<32;repeticiones++)
    {
        cout << "\n \n";
        cout << "Cual quieres mover en filas? --> ";
        cin >> x;
        cout << "Cual quieres mover en columnas? --> ";
        cin >> y;

        cout << "Y hacia donde en filas? --> ";
        cin >> r;
        cout << "Y hacia donde encolumnas? --> ";
        cin >> e;

        cout << "\nMovimientos --> " << movi << "\n";


        if(movi<=32)
        {
            cout << "Numero de movimientos maximos --> " << "31\n\n";
            if(r<8 && e<3)
            {
                reemplazo = juego[x][y];
                juego[x][y]={"    |    "};
                juego[r][e] = reemplazo;
                cout << "\a";
            }
            for(i=0;i<8;i++)
            {
                for(j=0;j<3;j++)
                {
                    cout << juego[i][j];
                }cout << "\n";
            }movi++;
        }

        if(movi>31)
        {
            cout << "\nPerdiste hermano\n";
        }


    }

    return 0;
}
