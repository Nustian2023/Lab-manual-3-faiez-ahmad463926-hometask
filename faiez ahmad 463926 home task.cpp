/*task no. 1*/
//#include <iostream>
//using namespace std;

//int main() {
//    int x= 0;
//    char province;
//
//    cout << "Enter the province name (p for punjab, s for sindh, k for kPK, b for balochistan): ";
//    cin >> province;
//
//    switch(province) {
//        case 'p':
//           x= 127688922;
//            break;
//        case 's':
//            x= 55696147;
//            break;
//        case 'k':
//            x= 40856097;
//            break;
//        case 'b':
//            x= 14894402;
//            break;
//        default:
//            cout << "Invalid province name entered." << endl;
//            return 0;
//
//    }
//
//    cout << "The total population of the selected province is: " << x << endl;
//
//    return 0;
//}


/*task n. 2*/

//  #include <iostream>
//using namespace std;
//
//int main() {
//    char alphabet;
//    cout << "Enter an alphabet: ";
//    cin >> alphabet;
//
//    switch(alphabet) {
//        case 'a':
//        case 'e':
//        case 'i':
//        case 'o':
//        case 'u':
//        case 'A':
//        case 'E':
//        case 'I':
//        case 'O':
//        case 'U':
//            cout << alphabet << " is a vowel." << endl;
//            break;
//        default:
//            cout << alphabet << " is a consonant." << endl;
//            break;
//    }
//
//    return 0;
//}






/*task no. 3*/


//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//
//    switch(num > 0) {
//        case 1:
//            cout <<"number is positive." << endl;
//            break;
//        case 0:
//            switch(num < 0) {
//                case 1:
//                    cout <<"number is negative." << endl;
//                    break;
//                case 0:
//                    cout <<"number is zero." << endl;
//                    break;
//            }
//            break;
//    }
//
//    return 0;
//}


/*task no.4*/
//#include <iostream>
//using namespace std;
//
//int main() {
//    int age;
//    cout << "Enter the age of the person: ";
//    cin >> age;
//
//    if (age >= 18) {
//        cout << "The person is an adult." << endl;
//    } else if (age >= 13 && age <= 17) {
//        cout << "The person is a teenager." << endl;
//    } else if (age >= 0 && age <= 12) {
//        cout << "The person is a child." << endl;
//    } else {
//        cout << "Invalid age entered." << endl;
//    }
//
//    return 0;
//}






/*task no.5*/
//#include <iostream>
//using namespace std;
//
//int main() {
//    double num1, num2, num3;
//    cout << "Enter three numbers\n: ";
//    cin >> num1 >> num2 >> num3;
//
//    if (num1 >= num2) {
//        if (num1 >= num3) {
//            cout << "The largest number is num1";
//        } else {
//            cout << "The largest number is num3";
//        }
//    } else {
//        if (num2 >= num3) {
//            cout << "The largest number is num2 ";
//        } else {
//            cout << "The largest number is num3 ";
//        }
//    }
//
//    return 0;
//}




/*task 6*/
//#include <iostream>
//using namespace std;
//
//int main() {
//    char alphabet;
//    cout << "Enter an alphabet: ";
//    cin >> alphabet;
//
//    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
//        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
//        cout << "The entered character is a vowel." << endl;
//    } else {
//        cout << "The entered character is a consonant." << endl;
//    }
//
//    return 0;
//}





