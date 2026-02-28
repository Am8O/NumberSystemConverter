# 🔢 Number System Converter (C++)

A robust C++ command-line tool to perform conversions between decimal numbers and bases **2 through 9**, as well as direct base-to-base conversions.

---

## 🚀 Features

* **Decimal to Base (2–9):** Converts base-10 integers using the repeated division algorithm.
* **Base (2–9) to Decimal:** Converts positional notation back to base-10.
* **Base to Base (2–9):** Bridge conversions (e.g., Base 2 to Base 5) via a decimal intermediary.
* **Input Validation:** Ensures bases remain within the supported $2-9$ range.

---

## 🛠️ How to Run

Follow these steps to get the program running on your local machine:

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/Am8o/NumberSystemConverter.git]
    cd NumberSystemConverter
    ```

2.  **Compile the program:**
    ```bash
    g++ NumberSystemConverter.cpp -o NumberSystemConverter
    ```

3.  **Run the application:**
    ```bash
    ./NumberSystemConverter
    ```

---

## 📝 Algorithm: Decimal to Base
The program follows a specific 7-step mathematical process:
1.  **Start**
2.  **Input** decimal and target base.
3.  **Validate** base is between 2 and 9.
4.  **Divide** decimal by base repeatedly to find remainders.
5.  **Reverse** the sequence of remainders.
6.  **Display** the final result.
7.  **End**



---

## 💡 Example Usage

```text
===== Number System Conversion =====
1. Decimal to Base (2-9)
2. Base (2-9) to Decimal
3. Base to Base (2-9)
4. Exit

Enter your choice: 1
Enter decimal number: 25
Enter target base (2-9): 2
Result:11001
```

---

## 🤝 Contributing

Contributions are what make the open-source community such an amazing place to learn, inspire, and create.

1. Fork the Project  
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)  
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)  
4. Push to the Branch (`git push origin feature/AmazingFeature`)  
5. Open a Pull Request  

---

## 📄 License

Distributed under the MIT License. See `LICENSE` for more information.