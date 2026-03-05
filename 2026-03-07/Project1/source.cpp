#include <iostream>
#include <fstream>

class ArrayList {
private:
    int* data;
    int capacity;
    int size;

    void resize() {
        capacity = (capacity == 0) ? 1 : capacity * 2;
        int* newData = new int[capacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    ArrayList() {
        data = nullptr;
        capacity = 0;
        size = 0;
    }

    ArrayList(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;
        data = new int[capacity];
    }

    ~ArrayList() {
        delete[] data;
    }

    void add(int value) {
        if (size >= capacity) {
            resize();
        }
        data[size++] = value;
    }

    int get(int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    void set(int index, int value) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        data[index] = value;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
    }

    int getSize() const {
        return size;
    }

    void print() const {
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    void insert(int index, int value) {
        if (index < 0 || index > size) {
            throw std::out_of_range("Index out of range");
        }
        if (size >= capacity) {
            resize();
        }
        for (int i = size; i > index; i--) {
            data[i] = data[i - 1];
        }
        data[index] = value;
        size++;
    }

    void clear() {
        size = 0;
    }

    bool contains(int value) const {
        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                return true;
            }
        }
        return false;
    }

    void saveToFile(const char* filename) const {
        std::ofstream file(filename, std::ios::binary);
        if (!file.is_open()) {
            throw std::runtime_error("Cannot open file for writing");
        }
        file.write(reinterpret_cast<const char*>(&size), sizeof(size));
        file.write(reinterpret_cast<const char*>(&capacity), sizeof(capacity));
        file.write(reinterpret_cast<const char*>(data), size * sizeof(int));
        file.close();
    }

    void loadFromFile(const char* filename) {
        std::ifstream file(filename, std::ios::binary);
        if (!file.is_open()) {
            throw std::runtime_error("Cannot open file for reading");
        }
        int fileSize, fileCapacity;
        file.read(reinterpret_cast<char*>(&fileSize), sizeof(fileSize));
        file.read(reinterpret_cast<char*>(&fileCapacity), sizeof(fileCapacity));
        delete[] data;
        capacity = fileCapacity;
        size = fileSize;
        data = new int[capacity];
        file.read(reinterpret_cast<char*>(data), size * sizeof(int));
        file.close();
    }
};

int main(int argc, char** argv) {
    try {
        ArrayList list;

        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);
        list.print();

        list.insert(2, 99);
        list.print();

        list.insert(0, 77);
        list.print();

        std::cout << "Contains 99? " << (list.contains(99) ? "Yes" : "No") << std::endl;
        std::cout << "Contains 100? " << (list.contains(100) ? "Yes" : "No") << std::endl;

        list.clear();
        std::cout << "Size after clear: " << list.getSize() << std::endl;

        list.add(1);
        list.add(2);
        list.add(3);
        list.print();

        list.saveToFile("arraylist.bin");

        ArrayList loadedList;
        loadedList.loadFromFile("arraylist.bin");
        loadedList.print();

        loadedList.add(4);
        loadedList.add(5);
        loadedList.print();

        loadedList.insert(2, 99);
        loadedList.print();

    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}