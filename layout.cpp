#include "layout.h"
#include <unistd.h>

void showMainMenu() {
        cout << "  ###     ###  #######  #####    #####   " << endl;
        cout << "   ###   ###   ##       ##  ##   ##  ##  " << endl;
        cout << "    ### ###    #####    ##   ##  ####### " << endl;
        cout << "     #####     ##       ##   ##  ##   ## " << endl;
        cout << "      ###      #######  #####    ##   ## " << endl;
        cout << "\n";
        cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
        cout << "弛   WELCOME VEDA HEALTHCARE   弛" << endl;
        cout << "戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛  [1]  堅偌  弛  [2]  遴翕    弛" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛  [3]  餉薯  弛  [4]  褻��    弛" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛         [0]  謙猿           弛" << endl;
        cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
        cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
        cout << "弛  廓�� 殮溘: _               弛" << endl;
        cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
        cout << "\033[A"; // 醴憮蒂 嬪煎 檜翕
        cout << "\033[A";
        cout << "\033[14C"; // 醴憮蒂 '廓�� 殮溘: ' 嬪纂煎 檜翕
}

//夔樂 �飛橉� 雖辦朝 л熱
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

//堅偌 婦葬 詭景蒂 轎溘ж堅, 餌辨濠曖 摹鷗縑 評塭 瞳瞰и 濛機擊 熱чж朝 л熱
bool customerMenu(customerManager& custmanager) {

    int choice; // 詭景 摹鷗й 廓��
    do {
        clearConsole();
        cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
        cout << "弛          堅偌 婦葬          弛" << endl;
        cout << "戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛  [1]  殮溘  弛  [2]  熱薑    弛" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛  [3]  餉薯  弛  [4]  褻��    弛" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛         [0]  謙猿           弛" << endl;
        cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
        cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
        cout << "弛  廓�� 殮溘: _               弛" << endl;
        cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
        cout << "\033[A"; // 醴憮蒂 嬪煎 檜翕
        cout << "\033[A";
        cout << "\033[14C"; // 醴憮蒂 '廓�� 殮溘: ' 嬪纂煎 檜翕

        cin >> choice;

        cout << "\n\n";

        if (choice == 1) { // 1. 堅偌 蹺陛
            custmanager.addCustomer();
        }
        else if (choice == 2) { // 2. 堅偌 薑爾 熱薑
            custmanager.modifyCustomer();
        }
        else if (choice == 3) { // 3. 堅偌 餉薯
            custmanager.deleteCustomer();
        }
        else if (choice == 4) { // 4. 堅偌 褻��
            custmanager.viewCustomer();
        }
        else if (choice == 0) { // main戲煎 給嬴陛晦
            return false;
        }
        else {
            cout << "Invalid choice entered." << endl;
        }
    } while (choice != 0); // 0擊 殮溘ж賊 詭檣詭景煎 給嬴馬.
    return true; // NEW 詭景陛 薑鼻瞳戲煎 謙猿腎雖 彊堅 瑞Щ陛 謙猿脹 唳辦 true蒂 奩��
}

// 遴翕 婦葬 詭景 л熱
bool exerciseMenu(ExerciseManager& manager, customerManager& custmanager) {
    int choice;
    do {
        clearConsole();
        cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
        cout << "弛          遴翕 婦葬          弛" << endl;
        cout << "戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛  [1]  殮溘  弛  [2]  熱薑    弛" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛  [3]  餉薯  弛  [4]  褻��    弛" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛         [0]  謙猿           弛" << endl;
        cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
        cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
        cout << "弛  廓�� 殮溘: _               弛" << endl;
        cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
        cout << "\033[A"; // 醴憮蒂 嬪煎 檜翕
        cout << "\033[A";
        cout << "\033[14C"; // 醴憮蒂 '廓�� 殮溘: ' 嬪纂煎 檜翕

        cin >> choice;

        cout << "\n\n";

        if (choice == 1) {
            int id;
            string type;
            int duration;

            cout << "Customer ID: ";
            cin >> id;

            Customer* cust = custmanager.getCustomerById(id); 
            if (cust == nullptr) {
                cout << "No customer found with ID: " << id << endl;
                continue;
            }

            cout << "Exercise Type: ";
            cin >> type;
            cout << "Exercise Duration (minutes): ";
            cin >> duration;
            manager.addExercise(*cust, type, duration);
        }
        else if (choice == 2) {
            int id;
            string type;
            int duration;

            cout << "ID of Exercise to Modify: ";
            cin >> id; // NEW Customer ID煎 堅偌 褻��

            cout << "New Exercise Type: ";
            cin >> type;
            cout << "New Exercise Duration (minutes): ";
            cin >> duration;

            manager.modifyExercise(id, type, duration);
        }
        else if (choice == 3) {
            int id;
            cout << "Id of Exercise to Delete: ";
            cin >> id;
            manager.deleteExercise(id);
        }
        else if (choice == 4) {
            manager.displayExercises();
            sleep(3); //  NEW clearл熱煎 檣п憮 �飛橉� 雖錶雖嘎煎 3蟾除 轎溘ж晦 嬪п sleep л熱 蹺陛
        }
        else if (choice == 0) {
            return false;
        }
        else {
            cout << "Invalid choice." << endl;
        }
    } while (choice != 0);
    return true; // NEW 詭景陛 薑鼻瞳戲煎 謙猿腎雖 彊堅 瑞Щ陛 謙猿脹 唳辦 true蒂 奩��
}

// 衝餌 婦葬 詭景 л熱
bool mealMenu(mealmanage& mealmanager, customerManager& custmanager) { // NEW 堅偌婦葬 贗楚蝶 蹺陛
    int choice;
    do {
        clearConsole();
        cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
        cout << "弛          衝欽 婦葬          弛" << endl;
        cout << "戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛  [1]  殮溘  弛  [2]  熱薑    弛" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛  [3]  餉薯  弛  [4]  褻��    弛" << endl;
        cout << "弛                             弛" << endl;
        cout << "弛         [0]  謙猿           弛" << endl;
        cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
        cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
        cout << "弛  廓�� 殮溘: _               弛" << endl;
        cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
        cout << "\033[A"; // 醴憮蒂 嬪煎 檜翕
        cout << "\033[A";
        cout << "\033[14C"; // 醴憮蒂 '廓�� 殮溘: ' 嬪纂煎 檜翕

        cin >> choice;

        cout << "\n\n";

        if (choice == 1) {  // 衝餌 婦葬 殮溘 л熱 ��轎
            int id, totalCalories;
            string name, food;

            cout << "Customer ID: ";
            cin >> id;

            // NEW Customer ID煎 堅偌 褻��
            Customer* cust = custmanager.getCustomerById(id);
            if (cust == nullptr) {
                cout << "No customer found with ID: " << id << endl;
                continue;
            }

            cout << "Food: ";
            cin >> food;
            cout << "Total Calories: ";
            cin >> totalCalories;

            // 堅偌 薑爾煎 meal 蹺陛
            mealmanager.addMeal(*cust, food, totalCalories);
        } 
        else if (choice == 2) {  // 衝餌 婦葬 熱薑 л熱 ��轎
            int id, totalCalories;
            string food;

            cout << "ID of Meal to Modify: ";
            cin >> id; // NEW Customer ID煎 堅偌 褻��

            cout << "New Food: ";
            cin >> food;
            cout << "New Total Calories: ";
            cin >> totalCalories;

            // NEW 偃滌 в萄煎 霜蕾 瞪殖ж罹 欽牖��
            mealmanager.modifyMeal(id, food, totalCalories);
        }
        else if (choice == 3) { // 衝餌婦葬 餉薯 л熱 ��轎
            int id;
            cout << "ID of Meal to Delete: ";
            cin >> id;
            mealmanager.deleteMeal(id);
        }
        else if (choice == 4) { // 盪濰脹 衝餌婦葬 csvだ橾 頂辨 轎溘
            mealmanager.displayMeals();
            sleep(3); //  NEW clearл熱煎 檣п憮 �飛橉� 雖錶雖嘎煎 3蟾除 轎溘ж晦 嬪п sleep л熱 蹺陛
        }
        else if (choice == 0) {
            return false;  // 詭檣 詭景煎 給嬴陛晦 嬪п false 奩��
        }
        else {
            cout << "Invalid choice." << endl;
        }
    } while (choice != 0);

    return true; // NEW 詭景陛 薑鼻瞳戲煎 謙猿腎雖 彊堅 瑞Щ陛 謙猿脹 唳辦 true蒂 奩��
}
