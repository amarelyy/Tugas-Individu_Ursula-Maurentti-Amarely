# Ursula Maurentti Amarely
# 24/533008/TK/59050

# Brief Description
This program is called "Strange Printer", simulates a printer with 2 specific constraints:
1. The printer can only print a sequence of the same character each time.
2. At each turn, the printer can print new characters starting from and ending at any place and will cover the original existing characters.

## _**Deskripsi Singkat**_
_Program ini bernama "Strange Printer", yang mensimulasikan sebuah printer dengan dua syarat utama:_
1. _Printer hanya dapat mencetak rangkaian karakter yang sama pada setiap giliran._
2. _Pada setiap giliran, printer dapat mencetak karakter baru yang dimulai dan diakhiri di posisi mana pun, dan akan menimpa karakter yang sudah ada di rentang tersebut._

# Reference
The original reference can be found throughout this link: https://youtu.be/dBtekOl0ofE?si=50DOY9BXO7NvXjyp
Initially, the reference video only includes the main algorithm to solve the given problem. In this code, I added some improvements such as:
1. Making the program user-interactive, allowing them to give their own inputs.
2. Added input validation to handle missing values and non-alphabetical inputs.
3. Ensured that for every invalid or incomplete inputs cause the program to terminate with a clear error message.
   
## _Referensi_
_Referensi asli dapat diakses melalui tautan berikut: https://youtu.be/dBtekOl0ofE?si=50DOY9BXO7NvXjyp_
_Pada video referensi tersebut hanya membahas cara pengerjaan algoritma utama untuk menyelesaikan permasalahan yang diberikan._
_Dalam kode ini, saya menambahkan beberapa fitur baru, seperti:_
1. _Menjadikan program interaktif agar pengguna dapat memberikan input sendiri._
2. _Menambahkan validasi input untuk menangani nilai kosong dan input yang bukan huruf._
3. _Memastikan bahwa setiap input yang tidak valid atau tidak lengkap akan menyebabkan program berhenti dengan pesan kesalahan yang jelas._

# Program Flow
How the program works:
1. The user is asked how many words they want to print.
2. Then the user will be asked to enter the word or words (following the initial input).
3. The program can only read alphabetical characters. If the user only inputs symbols and numbers, then the program will terminate. But if the user inputs a combination of characters that includes alphabet, the program will ignore the non-alphabetical characters.
4. For each valid word, the program returns the minimum number of turns required for the printer to print it.
## _Alur Program_
_Cara kerja program:_
1. _Pengguna diminta untuk memasukkan berapa banyak kata yang ingin dicetak._
2. _Selanjutnya, pengguna akan diminta untuk memasukkan kata atau beberapa kata (sesuai dengan jumlah yang dimasukkan sebelumnya)._
3. _Program hanya dapat membaca karakter alfabet, jika pengguna hanya memasukkan simbol dan angka, maka program akan berhenti. Namun, jika pengguna memasukkan kombinasi karakter yang mengandung huruf, program akan mengabaikan karakter non-alfabet tersebut._
4. _Untuk setiap kata yang valid, program akan menampilkan jumlah minimum giliran yang diperlukan oleh printer untuk mencetak kata tersebut._

### Example 1
**Input:**
How many words would you like to print? (max. 6 words):
3
Enter your words here!:
1. hello
2. aaabbb
3. abbbac

**Output:**
Successfully printing! Results:
1. 4
2. 2
3. 3

### Example 2
**Input:**
How many words would you like to print? (max. 6 words):
2
Enter your words here!:
1. abaaab
2. 123%$#

**Output:**
The word you entered has no letters.

### Example 3
**Input:**
How many words would you like to print? (max. 6 words):
0

**Output:**
Enter valid amount!
