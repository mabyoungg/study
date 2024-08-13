# [모두를 위한 컴퓨터 과학 (CS50 2019)](https://www.boostcourse.org/cs112)

---

## 목차
- [1. 컴퓨팅 사고](#1-컴퓨팅-사고)
- [2. C언어](#2-c언어)

---

### 1. 컴퓨팅 사고
1) 2진법
   - 2진법은 0과 1로 이루어진 숫자 체계
   - 비트(bit) : 2진법에서 하나의 자릿수를 표현하는 단위
   - 바이트(byte) : 8비트를 의미
   - 2진법 체계(Birany)
<div style="margin-left: 40px;">

| 단위             | 정의         |
|----------------|------------|
| bit            | 0 또는 1     |
| byte           | 8 bits     |
| Kibibyte (KiB) | 1024 bytes |
| Mebibyte (MiB) | 1024 KiB   | 
| Gibibyte (GiB) | 1024 MiB   |
| Tebibyte (TiB) | 1024 GiB   |

   *10진법 체계(Decimal)에서는 kilobyte (kB) = 1000 bytes 등으로 정의*

</div>

2) 정보의 표현
   - ASCII (아스키코드/American Standard Code for Information Interchange)
      - 7비트로 표현되는 문자 인코딩 체계
      - 128개의 문자를 표현
      - 0 ~ 127까지의 숫자로 표현
      - 0 ~ 31, 127번은 제어문자(Control Characters)로 사용
      - 32 ~ 126번은 출력 가능한 문자
      - 97번은 소문자 'a', 65번은 대문자 'A'로 표현
      - 소문자는 같은 대문자 글자보다 항상 2<sup>5</sup> 만큼 큼
      - 확장 ASCII는 8번째 비트를 추가하여 총 256개의 문자를 표현
   - Unicode (유니코드)
      - 전 세계의 모든 문자를 컴퓨터에서 일관되게 표현하고 다룰 수 있도록 설계된 산업 표준
      - 100만개 이상의 문자를 나타낼 수 있는 문자 인코딩 표준
   - RGB (Red, Green, Blue)
      - 색을 표현하는 방법
      - 0 ~ 255까지의 숫자로 표현
      - 0은 해당 색의 최소, 255는 해당 색의 최대
      - (255, 0, 0)은 빨간색, (0, 255, 0)은 초록색, (0, 0, 255)은 파란색

<div style="margin-left: 50px;">
   <details>
      <summary>아스키코드 표</summary>

   | 2진수 (Binary)  | 10진수 (Dec) | 16진수 (Hex) | 문자 (Character) | 설명 (Description) |
   |---------------|------------|------------|----------------|---------------------|
   | 00000000      | 0          | 00         | NUL            | Null character      |
   | 00000001      | 1          | 01         | SOH            | Start of Header     |
   | 00000010      | 2          | 02         | STX            | Start of Text       |
   | 00000011      | 3          | 03         | ETX            | End of Text         |
   | 00000100      | 4          | 04         | EOT            | End of Transmission |
   | 00000101      | 5          | 05         | ENQ            | Enquiry             |
   | 00000110      | 6          | 06         | ACK            | Acknowledgment      |
   | 00000111      | 7          | 07         | BEL            | Bell                |
   | 00001000      | 8          | 08         | BS             | Backspace           |
   | 00001001      | 9          | 09         | HT             | Horizontal Tab      |
   | 00001010      | 10         | 0A         | LF             | Line Feed (New Line) |
   | 00001011      | 11         | 0B         | VT             | Vertical Tab        |
   | 00001100      | 12         | 0C         | FF             | Form Feed (New Page) |
   | 00001101      | 13         | 0D         | CR             | Carriage Return     |
   | 00001110      | 14         | 0E         | SO             | Shift Out           |
   | 00001111      | 15         | 0F         | SI             | Shift In            |
   | 00010000      | 16         | 10         | DLE            | Data Link Escape    |
   | 00010001      | 17         | 11         | DC1            | Device Control 1    |
   | 00010010      | 18         | 12         | DC2            | Device Control 2    |
   | 00010011      | 19         | 13         | DC3            | Device Control 3    |
   | 00010100      | 20         | 14         | DC4            | Device Control 4    |
   | 00010101      | 21         | 15         | NAK            | Negative Acknowledgment |
   | 00010110      | 22         | 16         | SYN            | Synchronous Idle    |
   | 00010111      | 23         | 17         | ETB            | End of Transmission Block |
   | 00011000      | 24         | 18         | CAN            | Cancel              |
   | 00011001      | 25         | 19         | EM             | End of Medium       |
   | 00011010      | 26         | 1A         | SUB            | Substitute          |
   | 00011011      | 27         | 1B         | ESC            | Escape              |
   | 00011100      | 28         | 1C         | FS             | File Separator      |
   | 00011101      | 29         | 1D         | GS             | Group Separator     |
   | 00011110      | 30         | 1E         | RS             | Record Separator    |
   | 00011111      | 31         | 1F         | US             | Unit Separator      |
   | 00100000      | 32         | 20         | (Space)        | Space               |
   | 00100001      | 33         | 21         | !              | Exclamation mark    |
   | 00100010      | 34         | 22         | "              | Double quote        |
   | 00100011      | 35         | 23         | #              | Number sign         |
   | 00100100      | 36         | 24         | $              | Dollar sign         |
   | 00100101      | 37         | 25         | %              | Percent sign        |
   | 00100110      | 38         | 26         | &              | Ampersand           |
   | 00100111      | 39         | 27         | '              | Single quote        |
   | 00101000      | 40         | 28         | (              | Left parenthesis    |
   | 00101001      | 41         | 29         | )              | Right parenthesis   |
   | 00101010      | 42         | 2A         | *              | Asterisk            |
   | 00101011      | 43         | 2B         | +              | Plus sign           |
   | 00101100      | 44         | 2C         | ,              | Comma               |
   | 00101101      | 45         | 2D         | -              | Hyphen-minus        |
   | 00101110      | 46         | 2E         | .              | Period              |
   | 00101111      | 47         | 2F         | /              | Slash               |
   | 00110000      | 48         | 30         | 0              | Digit 0             |
   | 00110001      | 49         | 31         | 1              | Digit 1             |
   | 00110010      | 50         | 32         | 2              | Digit 2             |
   | 00110011      | 51         | 33         | 3              | Digit 3             |
   | 00110100      | 52         | 34         | 4              | Digit 4             |
   | 00110101      | 53         | 35         | 5              | Digit 5             |
   | 00110110      | 54         | 36         | 6              | Digit 6             |
   | 00110111      | 55         | 37         | 7              | Digit 7             |
   | 00111000      | 56         | 38         | 8              | Digit 8             |
   | 00111001      | 57         | 39         | 9              | Digit 9             |
   | 00111010      | 58         | 3A         | :              | Colon               |
   | 00111011      | 59         | 3B         | ;              | Semicolon           |
   | 00111100      | 60         | 3C         | <              | Less-than sign      |
   | 00111101      | 61         | 3D         | =              | Equals sign         |
   | 00111110      | 62         | 3E         | >              | Greater-than sign   |
   | 00111111      | 63         | 3F         | ?              | Question mark       |
   | 01000000      | 64         | 40         | @              | At sign             |
   | 01000001      | 65         | 41         | A              | Uppercase A         |
   | 01000010      | 66         | 42         | B              | Uppercase B         |
   | 01000011      | 67         | 43         | C              | Uppercase C         |
   | 01000100      | 68         | 44         | D              | Uppercase D         |
   | 01000101      | 69         | 45         | E              | Uppercase E         |
   | 01000110      | 70         | 46         | F              | Uppercase F         |
   | 01000111      | 71         | 47         | G              | Uppercase G         |
   | 01001000      | 72         | 48         | H              | Uppercase H         |
   | 01001001      | 73         | 49         | I              | Uppercase I         |
   | 01001010      | 74         | 4A         | J              | Uppercase J         |
   | 01001011      | 75         | 4B         | K              | Uppercase K         |
   | 01001100      | 76         | 4C         | L              | Uppercase L         |
   | 01001101      | 77         | 4D         | M              | Uppercase M         |
   | 01001110      | 78         | 4E         | N              | Uppercase N         |
   | 01001111      | 79         | 4F         | O              | Uppercase O         |
   | 01010000      | 80         | 50         | P              | Uppercase P         |
   | 01010001      | 81         | 51         | Q              | Uppercase Q         |
   | 01010010      | 82         | 52         | R              | Uppercase R         |
   | 01010011      | 83         | 53         | S              | Uppercase S         |
   | 01010100      | 84         | 54         | T              | Uppercase T         |
   | 01010101      | 85         | 55         | U              | Uppercase U         |
   | 01010110      | 86         | 56         | V              | Uppercase V         |
   | 01010111      | 87         | 57         | W              | Uppercase W         |
   | 01011000      | 88         | 58         | X              | Uppercase X         |
   | 01011001      | 89         | 59         | Y              | Uppercase Y         |
   | 01011010      | 90         | 5A         | Z              | Uppercase Z         |
   | 01011011      | 91         | 5B         | [              | Left square bracket |
   | 01011100      | 92         | 5C         | \              | Backslash           |
   | 01011101      | 93         | 5D         | ]              | Right square bracket |
   | 01011110      | 94         | 5E         | ^              | Caret (Circumflex accent) |
   | 01011111      | 95         | 5F         | _              | Underscore          |
   | 01100000      | 96         | 60         | `              | Grave accent        |
   | 01100001      | 97         | 61         | a              | Lowercase a         |
   | 01100010      | 98         | 62         | b              | Lowercase b         |
   | 01100011      | 99         | 63         | c              | Lowercase c         |
   | 01100100      | 100        | 64         | d              | Lowercase d         |
   | 01100101      | 101        | 65         | e              | Lowercase e         |
   | 01100110      | 102        | 66         | f              | Lowercase f         |
   | 01100111      | 103        | 67         | g              | Lowercase g         |
   | 01101000      | 104        | 68         | h              | Lowercase h         |
   | 01101001      | 105        | 69         | i              | Lowercase i         |
   | 01101010      | 106        | 6A         | j              | Lowercase j         |
   | 01101011      | 107        | 6B         | k              | Lowercase k         |
   | 01101100      | 108        | 6C         | l              | Lowercase l         |
   | 01101101      | 109        | 6D         | m              | Lowercase m         |
   | 01101110      | 110        | 6E         | n              | Lowercase n         |
   | 01101111      | 111        | 6F         | o              | Lowercase o         |
   | 01110000      | 112        | 70         | p              | Lowercase p         |
   | 01110001      | 113        | 71         | q              | Lowercase q         |
   | 01110010      | 114        | 72         | r              | Lowercase r         |
   | 01110011      | 115        | 73         | s              | Lowercase s         |
   | 01110100      | 116        | 74         | t              | Lowercase t         |
   | 01110101      | 117        | 75         | u              | Lowercase u         |
   | 01110110      | 118        | 76         | v              | Lowercase v         |
   | 01110111      | 119        | 77         | w              | Lowercase w         |
   | 01111000      | 120        | 78         | x              | Lowercase x         |
   | 01111001      | 121        | 79         | y              | Lowercase y         |
   | 01111010      | 122        | 7A         | z              | Lowercase z         |
   | 01111011      | 123        | 7B         | {              | Left curly brace    |
   | 01111100      | 124        | 7C         | \|             | Vertical bar        |
   | 01111101      | 125        | 7D         | }              | Right curly brace   |
   | 01111110      | 126        | 7E         | ~              | Tilde               |
   | 01111111      | 127        | 7F         | DEL            | Delete              |

   </details>
</div>

3) 알고리즘 (Algorithm)
    - 입력값을 출력값의 형태로 바꾸기 위해 어떤 명령들이 수행되어야 하는지에 대한 규칙들의 순서적 나열
    - 정확성 : 알고리즘이 올바른 결과를 내는지 평가하는 척도
    - 효율성 : 알고리즘의 성능을 평가하는 척도
    - 의사코드 (Pseudo code) : 컴퓨터가 수행할 작업을 프로그램 언어가 아니라 사람이 사용하는 언어로 알고리즘의 논리적 절차를 작성한 코드
   

4) 스크래치: 기초
    - MIT에서 개발한 블록형 프로그래밍 언어
    - 블록을 조립하여 프로그램을 만들 수 있음
    - 알고리즘을 구성하는 요소로는 함수, 조건, 불리언 표현, 루프 등이 있음
   

5) 스크래치: 심화
   - 변수 : 데이터를 저장하는 공간
   - 조건문 : 조건에 따라 다른 명령을 수행

---

### 2. C언어
1) C 기초
   - C는 아주 오래되고 전통적인 순수 텍스트 기반 프로그래밍 언어 
   - 소스코드: 사람이 작성한 프로그램 코드
   - 머신코드: 컴퓨터가 이해할 수 있는 0과 1로 이루어진 코드
   - 컴파일러 (Compiler) : 소스 코드를 머신 코드(기계어)로 번역하는 프로그램
   - `clang -o hello hello.c` : hello.c 파일을 컴파일하여 hello라는 이름의 실행 파일을 생성
   - `./hello` : hello 실행 파일을 실행
   - 리눅스 파일 시스템 명령어: `ls, rm, cp, mv, mkdir, rmdir` 등
   - `ls` 명령어 입력 후 파일명에 `*` 붙어 있으면 실행파일
   - `hello, world` 출력 C 프로그램 구조
     ```c
     #include <stdio.h>
     
     int main(void)
     {
         printf("hello, world\n");
     }
      ```
     
2) 문자열
   -  [CS50 라이브러리](https://github.com/cs50/libcs50) 활용한 string 입력, 출력
   - `-l`: 컴파일 시에 라이브러리를 링크하는 옵션
   - `make`: 소스 코드를 자동으로 컴파일하고 빌드하여 실행 파일을 생성하는 도구


3) 조건문과 루프
   - 조건문: 특정 코드가 특정 상황에서만 실행되도록 하는 구문
   - if, else if, else, while, for, switch 등의 조건문과 루프 사용
   - 삼항 연산자: `(a > b) ? a : b;`
   - 코드를 간결하게 만들어 효율적으로 코딩, 적은 메모리, CPU를 사용해서 수행하는지 중요

---