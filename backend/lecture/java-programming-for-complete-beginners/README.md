# [Java Programming for Complete Beginners](https://www.udemy.com/course/java-programming-tutorial-for-beginners/)

---

## 목차
- [변수 이름 규칙](#변수-이름-규칙)
- [변수 타입](#변수-타입)
- [매개변수 vs 인자](#매개변수-vs-인자)
- [JVM vs JRE vs JDK](#jvm-vs-jre-vs-jdk)
- [Class vs Object](#class-vs-object)
- [오버로딩 vs 오버라이딩](#오버로딩-vs-오버라이딩)
- [캡슐화](#캡슐화)

---

### 변수, 메서드 이름 규칙
1. 알파벳, 숫자, $, _ 만 가능
2. 숫자, 키워드(int 등)로 시작 불가능
3. 카멜 케이스

---

### 변수 타입
#### 정수형
byte - 8 bits - 128 to 127   
short - 16 bits - 32,768 to 32,767   
int - 32 bits - 2,147,483,648 to 2,147,483,647   
long - 64 bits - 9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
#### 실수형
float - 32 bits - 1.4e-045 to 3.4e+038   
double - 64 bits - 4.9e-324 to 1.8e+308
#### 문자형
char - 16 bits - 0 to 65,536  
#### 논리형
boolean - 1 bit - true or false

---

### 매개변수 vs 인자
- 매개변수: 메서드 정의 시 사용하는 변수
- 인자: 메서드 호출 시 전달하는 값

---

### JVM vs JRE vs JDK
#### JVM
- Java Virtual Machine
- Java Byte Code를 실행하는 가상 머신
- Java Byte Code를 실행하면서 JIT 컴파일러를 통해 기계어로 변환
- 플랫폼에 독립적

#### JRE
- Java Runtime Environment
- Java 프로그램을 실행하는 환경
- JVM + Libraries + Other Components

#### JDK
- Java Development Kit
- Java 프로그램을 개발하는 환경
- JRE + Java Compiler + Debuggers

---

### Class vs Object
- Class: 객체를 만들기 위한 설계도
- Object: Class를 이용해 만들어진 실체

---

### 오버로딩 vs 오버라이딩
- 오버로딩: 같은 이름의 메서드를 여러개 정의하는 것
- 오버라이딩: 상위 클래스의 메서드를 하위 클래스에서 재정의하는 것

---

### 캡슐화
- 데이터와 메서드를 하나로 묶어 외부로부터 보호하는 것
- 메서드를 통해 검증된 데이터만 클래스 내부에 저장