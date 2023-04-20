#include <iostream>
using namespace std;
void MetricConversor(){
    int choice, unity;
    float result;
    system("cls");
    cout << "---Menu---" << endl << "Especifique la conversion: " << endl << "1- Metros a KM" << endl << "2- CM a Metros" << endl << "3- KM a Millas"<< endl
    << "4- Metros a Yardas" << endl << "5- Yardas a Pies" << endl << "6- CM a Pulgadas" << endl << "7- Metros a Pies" << endl;
    cin >> choice;
    system("cls");
    switch (choice)
    {
    case 1:
        cout << "Introduzca la cantidad de metros" << endl;
        cin >> unity;
        result = (float)unity/1000;
        cout << "Los " << unity << "m son " << result << "km." << endl;
        break;
    case 2:
        cout << "Introduzca la cantidad de centimetros" << endl;
        cin >> unity;
        result = (float)unity/100;
        cout << "Los " << unity << "cm son " << result << "m." << endl;
        break;
    case 3:
        cout << "Introduzca la cantidad de kilometros" << endl;
        cin >> unity;
        result = (float)unity/0.621;
        cout << "Los " << unity << "km son " << result << " millas." << endl;
        break;
    case 4:
        cout << "Introduzca la cantidad de metros" << endl;
        cin >> unity;
        result = (float)unity/1.094;
        cout << "Los " << unity << "m son " << result << " yardas." << endl;
        break;
    case 5:
        cout << "Introduzca la cantidad de yardas" << endl;
        cin >> unity;
        result = (float)unity/3;
        cout << "Los " << unity << " yardas son " << result << " pies." << endl;
        break;
    case 6:
        cout << "Introduzca la cantidad de centimetros" << endl;
        cin >> unity;
        result = (float)unity/2.54;
        cout << "Los " << unity << "cm son " << result << " pulgadas." << endl;
        break;
    case 7:
        cout << "Introduzca la cantidad de metros" << endl;
        cin >> unity;
        result = (float)unity/3.281;
        cout << "Los " << unity << "m son " << result << " pies." << endl;
        break;
    default:
        cout << "No se logro encontrar la opcion" << endl;
        break;
    }
}
void WeightConversor(){
    int choice, unity;
    float result;
    system("cls");
    cout << "---Menu---" << endl << "1 - Gramos a kilogramos" << endl << "2 - Miligramo a gramo" << endl << "3 - Kilogramo a libra" << endl << "4 - Kilogramos a onza" << endl << "5 - Onza a libra" << endl << "6 - Libra a Onza" << endl;
    cin >> choice;
    system("cls");
    switch (choice)
    {
        case 1:
            cout << "Introduzca la cantidad de gramos" << endl;
            cin >> unity;
            result = (float)unity / 1000;
            cout << "La cantidad de kilogramos que son " << unity << " gramos son " << result << "kg." << endl;
            break;
        case 2:
            cout << "Introduzca la cantidad de miligramos" << endl;
            cin >> unity;
            result = (float)unity / 1000;
            cout << "La cantidad de gramos que son " << unity << " miligramos son " << result << "g." << endl;
            break;
        case 3:
            cout << "Introduzca la cantidad de kilogramos" << endl;
            cin >> unity;
            result = (float)unity * 2.20462;
            cout << "La cantidad de libras que son " << unity << "kg son " << result << "lbs." << endl;
            break;
        case 4:
            cout << "Introduzca la cantidad de kilogramos" << endl;
            cin >> unity;
            result = (float)unity * 35.274;
            cout << "La cantidad de onzas que son " << unity << "kg son " << result << "oz." << endl;
            break;
        case 5:
            cout << "Introduzca la cantidad de onzas" << endl;
            cin >> unity;
            result = (float)unity * 0.0625;
            cout << "La cantidad de libras que son " << unity << "oz son " << result << "lbs." << endl;
            break;
        case 6:
            cout << "Introduzca la cantidad de onzas" << endl;
            cin >> unity;
            result = (float)unity * 16;
            cout << "La cantidad de onzas que son " << unity << "lbs son " << result << "oz." << endl;
            break;
        default:
            cout << "No se reconoce esa opcion." << endl;
            break;
    }
}
void LiterConversor(){
    int choice, unity;
    float result;
    system("cls");
    cout << "---Menu---" << endl << "1 - Mililitros a litros" << endl << "2 - Litro a onza liquida (EEUU)" << endl << "3 - Litro a metro cubico" << endl << "4 - Litro a galon estadounidense" << endl << "5 - Metro cubico a litro" << endl << "6 - Galon estadounidense a litros" << endl;
    cin >> choice;
    system("cls");
    switch (choice)
    {
    case 1:
        cout << "Introduzca la cantidad de mililitros" << endl;
        cin >> unity;
        result = (float)unity * 1000;
        cout << "La cantidad de litros que son " << unity << " mililitros son " << result << "lts." << endl;
        break;
    case 2:
        cout << "Introduzca la cantidad de litros" << endl;
        cin >> unity;
        result = (float)unity * 33.814;
        cout << "La cantidad de onzas liquidas que son " << unity << " litros son " << result << "mlts." << endl;
        break;
    case 3:
        cout << "Introduzca la cantidad de litros" << endl;
        cin >> unity;
        result = (float)unity / 1000;
        cout << "La cantidad de metros cubicos que son " << unity << " litros son " << result << " metros cubicos." << endl;
        break;
    case 4:
        cout << "Introduzca la cantidad de litros" << endl;
        cin >> unity;
        result = (float)unity * 0.264172;
        cout << "La cantidad de galones que son " << unity << " litros son " << result << " galones." << endl;
        break;
    case 5:
        cout << "Introduzca la cantidad de metros cubicos" << endl;
        cin >> unity;
        result = (float)unity * 1000;
        cout << "La cantidad de litros que son " << unity << " metros cubicos son " << result << "lts." << endl;
        break;
    case 6:
        cout << "Introduzca la cantidad de galon estadounidense" << endl;
        cin >> unity;
        result = (float)unity * 3.785;
        cout << "La cantidad de galones que son " << unity << " litros son " << result << "lts." << endl;
        break;
    default:
        cout << "No se reconoce esa opcion." << endl;
        break;
    }
}
int main()
{
    int choice;
    do
    {
        system("cls");
        cout << "---Menu---" << endl << "1- Conversor metrico" << endl << "2- Conversor de peso" << endl << "3- Conversor de litros" << endl << "4- Salir" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            MetricConversor();
            system("pause");
            break;
        case 2:
            WeightConversor();
            system("pause");
            break;
        case 3:
            LiterConversor();
            system("pause");
            break;
        case 4:
            break;
        default:
            cout << "No se logro encontrar la opcion" << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}