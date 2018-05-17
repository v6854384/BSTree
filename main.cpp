#include<iostream>
#include<locale>
using namespace std;

struct Node { //создаем структуру
    int data; //поле для информации
    Node *left; //указатель на левую ветку
    Node *right; //указатель на правую ветку
};

class BSTree { //создаем класс дерево
    private: //параметр с начальной информацией, который недоступен для редактирования
        Node *root; 
    public: //публичные данные
        BSTree() { root = nullptr; } //объявляем переменную, тип которой структура дерево
        void add(Node *&root, int data) { //функция записи элемента в бинароное дерево
            if (root == nullptr) { //если дерева не существует
                root = new Node { data, nullptr, nullptr }; //выдеояем память под первый аргумент
            }
            if (data < root->data) {  //сранвниваем элементы
                if (root->left = nullptr) { //если меньше и  слева ничего нет
                        root->left = new Node { data, nullptr, nullptr }; //то создаем слева элемент, имеющий текущую информацию и не имеющий разветлений
                }
                else add(root->left, data); //иначе с помощью рекурсии переходим на ветку ниже и заного проделываем оперцию add
            }
            if (data > root->data) { //здесь все то же самое, если элемент больше начального
                if (root->right = nullptr) {
                        root->right = new Node { data, nullptr, nullptr };
                }   
                else add(root->right, data);
            }
        }
        void insert(int data) { add (root, data); } //создание дерева
        void delete_tree(Node *&data) { //удаление дерева
            if (data != nullptr) { //поиск не пустых узлов
                delete_tree(data->left); //удаление всех элементов с помощью рекрсии                       
                delete_tree(data->right); //
                delete data;
                data = nullptr;
            }
        }
        ~BSTree() {
            delete_tree(root); //полное удаление дерева
        }
};


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
    BSTree tree; //создаем пустое дерево класса дерево
    for (int i=1; i<argc; i++) { 
        tree.insert(atoi(argv[i])); //заполнение дерева элементами
    };
    int choice = 0;
    while (true) {
        menu();
        cin >> choice;
        switch (choice) {
            case 1:
            break;
            case 2:
            break;
            case 3:
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
            return 0;
            default: cout << " Неверная команда " << endl;
        }
    }
}
