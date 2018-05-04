#include <fstream>
#include "bstree.hpp"
#include <string>
using namespace std;
using namespace BSTree;

void menu(){
    cout << "Выберете одну из операций:" << endl;
    cout << "1. Вывести дерево на экран" << endl;
    cout << "2. Вывести список узлов дерева" << endl;
    cout << "3. Добавить узел в дерево" << endl;
    cout << "4. Удалить узел из дерева" << endl;
    cout << "5. Сохранить дерево в файл" << endl;
    cout << "6. Загрузить дерево из файла" << endl;
    cout << "7. Проверить наличие узла" << endl;
    cout << "8. Завершить работу программы" << endl;
}

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Russian");
    BSTree tree;
    for (int i=1; i<argc; i++) { 
        tree.add(atoi(argv[i]));
    };
    int value = 0;
    int choice = 0;
    string answer; 
    while (true) {
        menu();
        cin >> choice;
        switch (choice) {
            case 1:
              cout << tree << endl;
            break;
            case 2:
            break;
            case 3:
              cin >> value;
              tree->insert(value);
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            break;
            case 8:
              cout << "Вы уверены?(yes/no)" << endl;
			        cin >> answer;
			        if ((answer == "y") && (answer == "yes") && (answer == "Y") && (answer == "Yes") && (answer == "YES"))
				      cout << "Завершение программы" << endl;
			        return 0;
		          default:
			        cerr << "Ошибка" << endl;
              return 0;
              default: cout << " Неверная команда " << endl;
        }
    }
delete tree;
return 0;
}
