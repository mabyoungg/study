# [이것이 취업을 위한 백엔드 개발이다 with 자바](https://www.yes24.com/Product/Goods/124434554)

---

## 목차
- [1. 백엔드 개발자 취업, 무엇을 어떻게 준비할까?](#1-백엔드-개발자-취업-무엇을-어떻게-준비할까)
  - [1. 백엔드 개발자가 하는 일](#1-백엔드-개발자가-하는-일)
  - [2. 백엔드 개발자가 되는 방법](#2-백엔드-개발자가-되는-방법)
- [2. 백엔드 개발을 위한 필수 기본 지식](#2-백엔드-개발을-위한-필수-기본-지식)
  - [3. 실무에 가장 많이 쓰이는 자바 문법](#3-실무에-가장-많이-쓰이는-자바-문법)
  - [4. 서버와 클라이언트](#4-서버와-클라이언트)
  - [5. API 호출 클라이언트 페이지 만들기](#5-api-호출-클라이언트-페이지-만들기)
  - [6. 백엔드 개발에 필요한 최소한의 HTML 지식](#6-백엔드-개발에-필요한-최소한의-html-지식)
  - [7. 백엔드 서버와 통신하기 위한 최소한의 자바스크립트 지식](#7-백엔드-서버와-통신하기-위한-최소한의-자바스크립트-지식)
  - [8. 서버와 클라이언의 약속, HTTP](#8-서버와-클라이언의-약속-http)
- [3. 과제 테스트를 위한 백엔드 애플리케이션 개발하기](#3-과제-테스트를-위한-백엔드-애플리케이션-개발하기)
  - [9. 상품 관리 애플리케이션 만들기](#9-상품-관리-애플리케이션-만들기)
  - [10. 상품 관리 애플리케이션에 유효성 검사 추가하기](#10-상품-관리-애플리케이션에-유효성-검사-추가하기)
  - [11. 상품 관리 애플리케이션에 데이터베이스 연동하기](#11-상품-관리-애플리케이션에-데이터베이스-연동하기)



---

## 1. 백엔드 개발자 취업, 무엇을 어떻게 준비할까?
### 1. 백엔드 개발자가 하는 일
1) 백엔드 개발이란 무엇인가
   - 웹 개발
     - 인터넷은 물리적으로 연결된 전세계의 네트워크 망, 웹은 HTTP라는 프로토콜을 통해 인터넷에서 데이터를 주고받는 방법
     - 프런트엔드: 사용자들의 눈에 보이는 코드 개발
     - 백엔드: HTTP 요청을 처리하는 서버 개발
   - 백엔드 개발
     - API(Application Programming Interface): 하나의 프로그램 또는 라이브러리를 외부의 다른 곳에서 사용할 수 있도록 해주는 인터페이스
     - API 문서: 프런트엔드 개발자와 서로 어떤 API를 사용하여 통신할지 미리 정의한 문서
     

2) 백엔드 개발자의 역할과 역량
   - 백엔드 개발자의 역할
     - 서비스 개발 5단계: 기획 - 설계 - 개발 - 배포 - 운영
     - 기획 단계: 기획 내용에 대한 가능성과 기술적 조언, 개발 기간에 대한 검토
     - 설계 단계: 개발자가 주도적으로 서비스 개발에 참여
     - 개발 단계: 설계 단계에서 만들어진 문서를 기반으로 실제 프로그램 개발
     - 배포 단계: 프로그램을 서버에 올려 서비스하는 단계
     - 운영 단계: 서비스를 오픈하고 운영하는 단계, CS등을 통해 접수되는 버그 해결
     - 서비스가 한 번 배포된 다음에는 운명만 하면 되는것이 아니라 앞선 다섯 단계를 지속적으로 반복
   - 백엔드 개발자에게 필요한 역량
     - 커뮤니케이션 능력
     - 구현 능력
     - 주도성
     - 풍부한 CS 지식
     - 당연한 것에 의문 품기

---

### 2. 백엔드 개발자가 되는 방법
1) 백엔드 개발 채용 프로세스
   - 서류 전형
     - 원티드, 프로그래머스, 랠릿, 잡플래닛, 사람인
   - 코딩 테스트와 과제 테스트
     - 프로그래머스 코딩 테스트: https://school.programmers.co.kr/learn/challenges
     - 프로그래머스 과제 테스트: https://school.programmers.co.kr/skill_check_assignments


*일렉트론(Electron) - 웹 기술(HTML, CSS, JavaScript)을 사용하여 데스크톱 애플리케이션을 개발할 수 있는 프레임워크*

---

## 2. 백엔드 개발을 위한 필수 기본 지식
### 3. 실무에 가장 많이 쓰이는 자바 문법
2) 자바의 기본 문법 점검하기
   - 조건문: if 문과 else 문
   - 반복문: for 문과 while 문
   - 다형성: 상속과 인터페이스
     - 하나의 객체가 내부적으로 여러 타입을 가질 수 있고, 어떤 타입이 들어 있느냐에 따라 각기 다른 동작을 하는 성질
     - 상속: 부모 클래스의 속성과 메서드를 자식 클래스가 물려받아 재사용하고 확장할 수 있게 하는 객체 지향 프로그래밍 기법
     - 인터페이스: 클래스가 구현해야 할 메서드의 집합을 정의하여 다형성을 제공하고, 서로 다른 클래스 간의 일관된 동작을 보장하는 계약을 의미, 클래스가 어떤 인터페이스를 구현하면 인터페이스에 선언된 메서드를 모두 구현해야 한다.
     - 상속은 단일 상속, 인터페이스는 다중 상속 가능
   - 컬렉션: List
   - 동일성과 동등성
     - 동일성: 두 객체가 메모리 상에서 같은 객체인지를 비교
     - 동등성: 두 객체가 같은 값을 가지고 있는지를 비교
     - `==` 연산자는 두 객체의 동일성을 비교하고, `equals()` 메서드는 두 객체의 동등성을 비교
     - `equals()` 메서드를 오버라이딩하여 동등성을 비교할 수 있다.
     - `hashCode()` 메서드는 객체의 해시코드를 반환, `hashCode()` 메서드를 오버라이딩하여 동일성을 비교할 수 있다.
     - 직접 선언한 클래스에 있는 `equals()` 메서드는 Object 클래스로부터 상속 받은 것이다. 클래스의 동등성을 비교하기에 충분하지 않기 때문에 오버라이딩이 필요하다.
     - HashMap, HashTable, HashSet은 동일한 값을 비교하기 위해 `hashCode()`와 `equals()` 메서드를 모두 사용하기 때문에 두 메서드를 오버라이딩해야 한다.


3) 자바 8 버전 이상의 모던한 자바 문법 다지기
    - 자바 8 버전 이상이 필요한 이유
        - 자바 8 버전의 주요 문법
          - 람다 표현식
          - 스트림 API
          - Optional
    - 람다 표현식
        - 함수형 프로그래밍을 구성하기 위한 함수식, 자바 메소드를 간결한 함수식으로 표현
        - 람다 표현식의 구조: `(매개변수) -> {실행문}`
        - 람다 표현식을 사용하면 코드가 간결해지고, 코드의 가독성이 높아진다.
        - 파라미터 1개, 명령문 1개인 경우 괄호와 중괄호, 세미콜론 생략 가능  
        - 파라미터 1개, 명령문 2개인 경우 괄호 생략 가능
        - 파라미터 2개 이상, 명령문 1개인 경우 괄호 생략 불가능, 중괄호, 세미콜론 생략 가능
        - 파라미터 2개 이상, 명령문 2개 이상인 경우 괄호, 중괄호로 감싸야 한다.
    - 스트림 API
      - 컬렉션에 추가된 메서드의 집합
      - forEach(), filter(), distinct(), map(), collect(), toList() 등의 메서드를 제공
    - Optional
      - null을 직접 다루지 않고, Optional 클래스를 사용하여 null을 다루는 방법
      - Optional 클래스는 null을 다루는 방법을 명확하게 하고, NullPointerException을 방지
      - Optional 클래스의 메서드: of(), ofNullable(), isPresent(), ifPresent(), orElse(), orElseGet(), orElseThrow() 등
      - 안티 패턴: 비효율적이거나 생산적이지 않은 패턴, isPresent() 메서드를 마치 if 문처럼 잘못 사용한 사례 등

    
<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---

### 4. 서버와 클라이언트
1) 서버와 클라이언트의 개념
   - 서버: 클라이언트에게 서비스를 제공하는 컴퓨터
   - 클라이언트: 서버에게 서비스를 요청하는 컴퓨터
   - 트래픽 처리
     - 로드 밸런싱: 부하 분산, 서버에게 들어오는 요청을 여러 대의 서버로 분산하여 처리하는 기술, 일반적으로 네트워크 장비인 스위치를 할당해 처리
     - 캐시: 비용이 큰 작업의 결과를 어딘가에 저장하여 비용이 작은 작업으로 동일한 효과를 내는 것, 캐시 서버에 저장된 데이터를 사용하여 서버의 부하를 줄일 수 있다.


2) 서버와 브라우저
   - DNS 서버 조회: 브라우저가 URL을 입력하면 DNS 서버에게 해당 URL의 IP 주소를 요청, nslookup 명령어로 DNS 서버 조회 가능
   - DNS 요청을 포함해 클라이언트의 모든 요청은 공유기를 통해 라우터를 거친다.
   - 웹 브라우저의 역할
     - 사용자가 도메인 주소를 입력하면 DNS를 통해 IP 주소 변환
     - 사용자의 액션에 따라 웹 애플리케이션 서버로 요청
     - 사용자가 보낸 요청에 대한 응답을 받아 웹 페이지 화면에 렌더링
   - IP 주소: 인터넷에 연결된 모든 컴퓨터에는 고유한 IP 주소가 할당, IP 주소는 32비트로 구성되어 있으며, 4개의 8비트로 구성
     - 공인(public) IP: 인터넷에 연결된 모든 컴퓨터에 할당되는 IP 주소
     - 사설(private) IP: 공인 IP 내부에 존재하는 네트워크 망에는 사설 IP 주소가 할당
     - localhost: 자신의 컴퓨터를 가리키는 IP 주소, IPv4 기준 127.0.0.1 ~ 127.255.255.254
     - IP 주소의 한계: IPv4 주소 체계의 한계로 인해 IP 주소가 부족, IPv6 주소 체계로 확장
       - IPv4: 32비트, 4개의 8비트로 구성, 43억 개, `192.0.0.1`
       - IPv6: 128비트, 8개의 16비트로 구성, 340간 개, `2001:0230:abcd:ffff:0000:0000:ffff:1111`
   - 포트: IP 주소는 컴퓨터를 식별하는 주소, 포트는 컴퓨터 내부에서 프로세스를 식별하는 주소
     - 포트 번호: 0 ~ 65535, 0 ~ 1023은 잘 알려진 포트 번호, 1024 ~ 49151은 등록된 포트 번호, 49152 ~ 65535는 동적 포트 번호
   - 웹 서버와 WAS
     - 웹 서버(Web Server): 정적인 데이터를 제공하는 서버, Ngix, Apache
     - WAS(Web Application Server): 동적인 데이터를 제공하는 서버, JBoss, WebLogic, Undertow
     
    
4) 서버와 기타 클라이언트
   - Postman: API 테스트 도구, 서버에 요청을 보내고 응답을 확인하는 도구
   - curl: 명령어를 사용하여 서버에 요청을 보내고 응답을 확인하는 도구

<details>
<summary> 잘 알려진 포트 표 </summary>

| 포트 번호 | 서비스 이름  | 설명                        |
|-------|---------|---------------------------|
| 20    | FTP 데이터 | 파일 전송 프로토콜(FTP) 데이터 전송 포트 |
| 21    | FTP 제어  | 파일 전송 프로토콜(FTP) 제어 포트     |
| 22    | SSH     | 보안 셸(SSH) 원격 로그인 프로토콜     |
| 23    | Telnet  | 텔넷 원격 로그인 서비스             |
| 25    | SMTP    | 간이 메일 전송 프로토콜(SMTP)       |
| 53    | DNS     | 도메인 이름 시스템(DNS)           |
| 80    | HTTP    | 하이퍼텍스트 전송 프로토콜(HTTP)      |
| 110   | POP3    | 우편 사서함 프로토콜 3(POP3)       |
| 143   | IMAP    | 인터넷 메시지 액세스 프로토콜(IMAP)    |
| 443   | HTTPS   | 보안 하이퍼텍스트 전송 프로토콜(HTTPS)  |

</details>

<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---

### 5. API 호출 클라이언트 페이지 만들기
1) 스프링 부트 애플리케이션 실행하기
   - 스프링 프레임워크와 스프링 부트
     - 의존성 주입(DI, Dependency Injection): 객체 간의 의존 관계를 외부에서 주입하는 방식
     - 제어의 역전(IOC, Inversion Of Control): 객체의 생성과 생명주기를 외부에서 관리하는 방식
     - 관점지향 프로그래밍(AOP, Aspect-Oriented Programming): 흩어진 코드를 한 곳으로 모아 관리하는 방식
     - 비즈니스 로직: 애플리케이션에서 필수적이면서 핵심적인 역할을 하는 코드
     - 스프링: 비즈니스 로직에 최대한 집중할 수 있도록 돕는 프레임워크
     - 스프링 부트: 스프링 프레임워크를 기반으로 만들어진 프레임워크, 설정이 간단하고 빠르게 개발할 수 있는 장점
   - 스프링 이니셜라이저
     - 스프링 부트 프로젝트를 생성할 때 사용하는 도구
     - https://start.spring.io/
     - Maven, Gradle: 라이브러리를 관리하거나 소스코드를 바이너리 코드로 컴파일하는 프로젝트 빌드 도구


2) 컨트롤러 추가하기
   - 컨트롤러의 역할
     - 클라이언트의 요청을 받아 처리하는 역할
     - `@RequestMapping`: 클라이언트의 요청 URL을 매핑하여 처리하는 메서드를 호출, `@RequestMapping(value = "/hello", method = RequestMethod.GET)`, `@GetMapping`, `@PostMapping`, `@PutMapping`, `@DeleteMapping`
   - URL의 구조
     - Uniform Resource Locator, 네트워크상에 존재하는 자원의 위치를 표현하기 위해 사용하는 일련의 문자열 집합
     - `프로토콜://호스트:포트/경로?쿼리스트링`, `http://localhost:8080/hello?name=world`
     - 프로토콜: 통신에 사용되는 규약, http, https
     - 호스트: 자원이 위치한 서버의 도메인 주소
     - 포트: 서버에 접속하기 위한 포트 번호
     - 경로: 서버 내부의 자원의 위치
     - 쿼리스트링: 서버에 전달하는 파라미터
     - `http://user:password@localhost:8080/hello?name=world`, 인증 정보를 포함한 URL, 거의 사용하지 않음
     - port를 명시하지 않은 경우 프로토콜 기본 포트 사용. http: 80, https: 443


3) 정적 리소스 추가하기
   - 소규모 서비스: 정적 리소스를 서버에 포함하여 제공
   - 대규모 서비스: 정적 리소스를 CDN(Content Delivery Network)에 업로드하여 제공


<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---

### 6. 백엔드 개발에 필요한 최소한의 HTML 지식
2) HTML의 구조
   - 싱글톤 태그: 종료 태그가 없는 태그, `<br>`, `<hr>`, `<img>`, `<input>` 등
   - `!DOCTYPE`: 문서의 형식을 정의하는 태그
   - minify: HTML, CSS, JavaScript 등의 코드 내에서 줄바꿈, 공백, 띄어쓰기 생략하여 파일의 용량을 줄임
   - uglify, obfuscation: 코드를 난독화하여 해석을 어렵게 하는 기술
   - HTML 문서를 설명하기 위한 head 태그
     - 인코딩되는 방식과 캐릭터셋 일치, UTF-8 -> utf-8, ANSI -> euc-kr
     - 오픈 그래프: 웹 페이지를 공유할 때 사용되는 메타 태그, 웹 페이지의 정보를 표현
   - HTML: 웹 페이지의 구조를 정의하는 언어
   - CSS: HTML 문서의 스타일을 정의하는 언어
   - JavaScript: HTML 문서의 동작을 정의하는 언어


3) 웹 브라우저와 서버의 상호작용
   - 웹 브라우저가 서버와 상호작용하는 방법
     - URL을 통한 접속
     - form 태그를 사용하여 form 제출
     - XHR을 사용한 AJAX 요청
     - 웹 소켓을 통한 연결
     

4) form 태그로 서버와 상호작용하는 방법
   - enctype: form 데이터를 서버로 전송할 때 사용하는 인코딩 방식, `application/x-www-form-urlencoded`, `multipart/form-data`, `text/plain`


<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---

### 7. 백엔드 서버와 통신하기 위한 최소한의 자바스크립트 지식
1) 자바와 비교하면 배우는 자바스크립트 필수 문법
   - 자바는 컴파일 언어, 자바스크립트는 인터프리터 언어
   - 자바와 비슷한 자바스크립트 문법
     - 변수에 타입이 없다.
     - `let`: 변수, `const`: 상수, `console.log()`: 콘솔에 출력, `alert()`: 경고창 출력
     - `==`: 값만 비교, `===`: 값과 타입 비교
     - 배열의 타입이 존재 하지 않고, 생성 후에도 크기를 자유롭게 변경 가능
     - 함수 선언시 클래스 내부에 선언할 필요가 없다는 점과 반환값, 매개변수의 타입이 없다. `function 함수명(매개변수) {실행문}`
     - 화살표 함수: `const 함수명 = (매개변수) => {실행문}`
   - 함수를 일급 시민으로 취급, 함수에 매개변수로 넘기거나 변수에 대입하는 것이 가능한 존재


2) HTTP 전송 데이터의 형식 JSON
   - JSON: JavaScript Object Notation, 자바스크립트 객체 표기법
   - JSON 형식: `{"key": "value", "key": "value"}`, `{"key": {"key": "value"}}`
   - 데이터 쌍의 왼쪽에 있는 값은 키 값으로 반드시 문자열, 큰따옴표로 감싸야 한다. 오른쪽 값은 문자열, 숫자, 배열, 객체, 불리언, null 등이 가능
   - 키-값 스토어: 키-값 형태로 저장되는 자료구조나 데이터 베이스를 통칭하는 말
   - JSON Formatter: JSON 형식을 보기 좋게 정렬해주는 도구
   - JSON vs XML
     - 데이터의 크기는 JSON이 작아 전송할 때 발생하는 시간이나 비용이 절약
     - 프런트엔드에서 데이터를 파싱하는 속도는 JSON이 빠르다. 서버와 서버 간에 통신하는 경우 XML이 유리할 수 있지만, 일반적으로 JSON 유리
     - 데이터 자체 외에 추가적인 정보를 보내기 위해서는 XML이 유리, 메타데이터 함께 전송, 주석이나 태그에 속성 추가 가능


3) 서버와 비동기로 상호작용하기
   - 비동기: 웹 페이지를 리로드하지 않고 데이터를 서버로부터 받아오는 방식
   - AJAX: Asynchronous JavaScript and XML, 비동기적으로 서버와 상호작용하는 기술
     - JSON 전송시 `Content-Type: application/json`으로 설정
   - 직렬화(serialize)는 메모리상에 존재하는 인스턴스를 바이너리 형태나 문자열로 만드는것, 반대의 과정은 역직렬화(deserialize)
   - 동기, 비동기, 블로킹, 논블로킹
     - 동기: 작업을 요청하는 쪽과 작업을 처리하는 쪽이 서로를 인식하고 상태를 동기화하는 것
     - 비동기: 작업을 요청하는 쪽과 작업을 처리하는 쪽이 서로를 인식하지 않고 상태를 동기화하지 않는 것
     - 블로킹: 특정 작업이 완료될 때까지 현재 스레드나 프로세스가 대기하며 다른 작업을 수행할 수 없다.
     - 논블로킹: 요청이 완료되지 않더라도 다른 작업을 계속 수행할 수 있다.


<details>
<summary> readyStats 상태 종류 표 </summary>

| 상태               | 값      | 설명                                                   |
|------------------|--------|------------------------------------------------------|
| UNSENT           | 0      | XMLHttpRequest 객체가 생성되었으나 아직 open() 메서드가 호출되지 않은 상태  |
| OPENED           | 1      | open() 메서드가 성공적으로 호출되었으며, 요청이 초기화된 상태                |
| HEADERS_RECEIVED | 2      | send() 메서드가 호출되었으며, HTTP 응답 헤더와 상태 코드까지만 사용할 수 있는 상태 |
| LOADING          | 3      | HTTP 응답의 body를 다운로드하고 있는 상태                          |
| DONE             | 4      | XHR 객체의 AJAX 요청과 응답이 모두 완료된 상태                       |

</details>

<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---

### 8. 서버와 클라이언의 약속, HTTP
1) HTTP 트랜잭션
   - 하나의 HTTP 요청과 응답 묶음, 일반적으로 사용되는 트랜잭션이라는 표현은 보통 쪼개질 수 없는 처리를 의미
   - HTTP의 특징
     - HyperText Transfer Protocol, 웹 서버와 웹 클라이언트 간에 데이터를 주고받는 프로토콜
     - HTTP/1.1 버전: 1997년에 발표된 HTTP의 1.1 버전, 지금까지 가장 많이 사용되는 버전
     - HTTP/2 버전: 2015년에 발표된 HTTP의 2 버전, 성능 향상을 위해 개발
     - 클라이언트의 요청으로 HTTP 트랜잭션 시작
     - 상태를 가지지 않는 무상태성
     - 연결을 유지하지 않는 비연결성, 장점은 클라이언트와 서버의 자원을 효율적으로 사용, 단점은 매번 HTTP 트랜잭션마다 연결을 맺고 끊는 과정 추가, 즉 매 연결마다 조금씩 성능상의 손해를 보게 만드는 오버헤드 발생
     - 커넥션을 유지하려는 경우 `Connection: Keep-Alive` 헤더를 사용
     - 사람에게 친화적인 프로토콜
   - HTTP1.1 외의 버전
     - HTTP/1.1: 커넥션에 대한 지속적인 연결 추가
       - 파이프라이닝: 하나의 커넥션을 통해 요청과 응답을 처리
     - HTTP/2: 하나의 커넥션에서 여러 개의 요청을 동시에 다중 처리(Multiplex), HPACK 헤더 압축 방식 사용
       - 서버 푸시: 서버에서 예상되는 요청 미리 클라이언트 전송
       - 다중화: 요청한 순서에 상관없이 응답이 오는 대로 처리
     - HTTP/3: UDP를 사용하여 더 빠른 속도로 데이터 전송, QUIC 프로토콜 사용. TCP의 문제점을 개선하고자 개발된 프로토콜, 핸드쉐이킹 과정이 없고 헤더는 오직 출발지 포트, 목적지 포트, 데이터의 길이, 체크섬 정도만 포함
       - 체크섬: 데이터 전송 시 오류가 발생했는지 검증하기 위한 값
       - TCP의 문제점: 핸드쉐이크 과정이 길어지는 문제, 패킷 손실이 발생하면 재전송을 요청하는데 이 과정이 느림, 패킷의 순서가 바뀌어도 순서대로 처리하는 문제


2) HTTP 요청 헤더와 바디
   - HTTP 요청 메서드들
     - GET: 특정 자원에 대한 조회를 요청
     - HEAD: GET 메서드에 대한 요청과 동일한 효과를 내지만, 바디를 제외한 헤더 부분만 응답으로 받음
     - POST: 새로운 자원 생성을 요청, 새로운 자원은 요청 바디에 있는 내용을 바탕으로 생성
     - PUT: 기존에 있던 자원을 요청 바디에 있는 내용으로 변경
     - PATCH: PUT처럼 기존 자원을 변경하지만 해당 자원의 전체를 변경하는 것이 아니라 일부만 변경
     - DELETE: 특정 자원을 제거
     - OPTIONS: 해당 경로에서 어떤 HTTP 요청 메서드를 사용할 수 있는지 확인
     - 안전한 메서드: 대상이 되는 자원의 상태를 변경하지 않는 메서드, GET, HEAD, OPTIONS
     - 멱등한 메서드: 한 번 호출하든 여러 번 호출하든 같은 자원의 상태를 가지는 것, GET, PUT, DELETE
     - GET은 반드시 안전한 메서드여야 한다.
     - PUT, DELETE는 멱등성이 있는 메서드여야 한다.
     - POST가 붙은 기능이 반드시 멱등성이 없어야 한다는 것은 아니다. 요청의 설계와 구현에 따라 POST 요청도 멱등성을 가질 수 있다.
     - HEAD 메서드를 사용하여 Last-Modified 헤더를 확인하여 크롤러 프로그램에 활용하면 불필요한 트래픽 유발을 방지
   - HTTP 요청 바디와 데이터 전달 방식
     - URL를 통한 데이터 전달
       - Query Parameter,  Query String: URL 뒤에 `?`를 붙이고 `key=value` 형태로 데이터를 전달, 여러 개의 쿼리 파라미터를 전달할 때는 `&`로 구분, `?key1=value1&key2=value2`
       - URL 인코딩: URL에 사용할 수 없는 문자를 `%`와 16진수로 변환하여 전달
       - Path Variable: URL 경로에 데이터를 포함하여 전달, `http://localhost:8080/article/{id}`
     - GET 메서드로 데이터를 요청하는 경우에는 요청 바디에 데이터를 넣는 것을 권장 하지 않음.
     - Content-Type: 요청에 들어가면 요청 바디의 데이터 타입을 명시하는 헤더, 응답에 들어가면 응답 바디의 데이터 타입을 명시하는 헤더
       - application/x-www-form-urlencoded: 기본적인 폼 데이터 전송 방식
       - multipart/form-data: 파일을 전송할 때 사용하는 방식
       - application/json: JSON 데이터를 전송할 때 사용하는 방식
       - text/plain: 텍스트 데이터를 전송할 때 사용하는 방식
       - MIME(Multipurpose Internet Mail Extensions): 이메일을 위한 표준 포맷, Content-Type 헤더에 사용되는 데이터 타입을 명시


3) HTTP 응답 헤더와 바디
   - Content-Length: 응답 헤더를 제외한 응답 바디에 포함된 데이터 크기
   - HTTP 응답 상태 코드: 클라이언트가 보낸 HTTP 요청이 서버에서 어떻게 처리되었는지에 대한 정보
     - 1xx: 정보성 상태 코드, 요청을 받았으나 무언가 게속되는 상태
     - 2xx: 성공, 요청을 성공적으로 수신, 이해, 수락한 상태
     - 3xx: 리다이렉션 완료, 요청을 서버에서 처리하지 않고 다른 곳으로 유도, 리다이렉트되는 경우 2번의 HTTP 트랜잭션 발생
     - 4xx: 클라이언트 오류, 요청에 잘못된 구문이 포함되어 있거나 어떤 이유에 의해 수행할 수 없는 상태
     - 5xx: 서버 오류, 서버에서 요청을 처리하는 과정에서 문제가 발생한 상태


<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---

## 3. 과제 테스트를 위한 백엔드 애플리케이션 개발하기
### 9. 상품 관리 애플리케이션 만들기
2) 데이터 구조 정의하기
   - 데이터부터 정의하는 것은 자칫 데이터 중심적인 설계가 될 수 있다는 단점, 데이터를 너무 이른 시기에 정의하여 객체지향 패러다임에서 이야기하는 객체 간의 협력에 초첨을 맞추지 않고, 각 데이터끼리 고립시켜 버리는 결과를 초래
   - 기본 타입(Primitive type)은 null을 허용하지 않는다. null을 허용하려면 래퍼 클래스를 사용
   - 박싱과 언박싱 과정이 불필요하게 반복되면 애플리케이션 성능 저하


3) 상품 추가 구현 및 프로젝트 구조 잡기
   - 경로 이름은 일관성 있게 작성, 복수형 추천
   - HTTP 메시지 컨버터: HTTP 요청에 포함된 메시지를 변환, 스프링에서 자동으로 등록, 별도의 HTTP 메시지 컨버터를 정의하고 등록하여 사용 가능
   - 레이어드 아키텍처: 소프트웨어 설계 방법론, 하나의 소프트웨어를 여러 개의 계층으로 나누어 각 계층이 책임과 역할을 구분하여 여러가지 제약을 두는 설계 방법, 계층화된 구조를 가지는 설계 방법 총칭
     - `DDD` 도메인 주도 설계
     - 표현 계층: 사용자의 요청을 받아 응답하는 계층, 컨트롤러
     - 응용 계층: 사용자의 요청을 처리하는 비즈니스 로직을 호출하고 조정하는 계층, 서비스
     - 도메인 계층: 비즈니스 로직을 수행하는 계층, 엔티티
     - 인프라스트럭처 계층: 데이터베이스나 외부와의 연동을 처리하는 계층, 레포지토리
   - `CopyOnWriteArrayList`: 멀티 스레드 환경에서 사용할 수 있는 리스트, 읽기 작업이 많은 환경에서 사용, Thread Safety
   - `AtomicLong`: 멀티 스레드 환경에서 사용할 수 있는 long 타입, Thread Safety


4) DTO와 getter, setter
   - DTO(Data Transfer Object): 데이터를 전송하기 위한 객체, 데이터베이스에서 데이터를 얻어 서비스로 보내거나 서비스에서 데이터를 클라이언트로 보낼 때 사용
   - 도메인 객체이면서 id를 가지는 존재를 Entity, id를 가지지 않는 존재를 Value Object라고 한다.
   - ModelMapper: 객체 간의 매핑을 쉽게 해주는 라이브러리, 기본 설정은 매개변수가 없는 생성자로 인스턴스를 생성한 후 setter로 값을 초기화하여 변환한다.
     - setter 없이 변환 가능하도록 설정
     - `modelMapper.getConfiguration().setFieldAccessLevel(Configuration.AccessLevel.PRIVATE).setFieldMatchingEnabled(true);` 
   - getter, setter가 반드시 필요한 경우가 아니라면 사용하지 않는 것이 좋다. 객체지향의 캡슐화를 위반하는 행위
   - DTO는 레이어드 아키텍쳐 내에서 도메인 계층의 변화가 클라이언트에게 전파되지 않도록 제한
   - 레이어드 아키텍쳐에서 반드시 지켜야 하는 두 가지 의존성 방향
     - 도메인 계층은 다른 계층에 의존하지 않아야 한다.
     - 다른 모든 계층은 인프라스트럭처 계층에 의존하지 않아야 한다.
   - record: 자바 14부터 추가된 기능, DTO를 쉽게 만들 수 있도록 도와주는 기능, getter, equals, hashCode, toString 메서드를 자동으로 생성, setter는 없음
     - `public record ProductDto(String name, long price) {}`


5) 상품 조회/수정/삭제 구현하기
   - 소프트 딜리트: 데이터를 삭제하는 것이 아니라 삭제 플래그를 설정하여 데이터를 삭제한 것처럼 보이게 하는 방법, 서비스 요구사항에 따라 원상 복구, 법적 근거에 의해 삭제를 유예시켜야 하는 경우 사용


<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---

### 10. 상품 관리 애플리케이션에 유효성 검사 추가하기
1) 도메인 객체 및 컨트롤러 유효성 검사 추가하기
   - 도메인 지식은 도메인 객체 밖으로 빠져 나가지 않는 것이 좋다.
   - 도메인의 지식이라고 할 수 있을 만한 유효성에 대한 검사는 도메인 객체, 그 외의 도메인 지식과 무관하게 데이터 그 자체가 유효한지 아닌지를 검사할 때는 DTO
   - `@Valid`: 유효성 검사를 수행하는 애노테이션, Controller가 아닌 다른 계층에서 사용하기 위해서는 `@Validated` 추가, MethodArgumentNotValidException 예외 발생
   - `@Validated`: 그룹을 지정하여 유효성 검사를 수행하는 애노테이션, ConstraintViolationException 예외 발생
   - `@NotNull`: null 불가, 빈 문자열, 띄어쓰기만 있는 문자열 허용
   - `@NotEmpty`: null, 빈 문자열 불가, 띄어쓰기만 있는 문자열 허용
   - `@NotBlank`: null, 빈 문자열, 띄어쓰기만 있는 문자열 불가


2) 전역 예외 핸들러 추가하기
   - `@RestControllerAdvice`: 전역 예외 처리를 위한 애노테이션, `@ExceptionHandler`: 예외를 처리하는 메서드에 추가
   - 예외 처리 전략
     - Checkend Exception: 런타임 시점에서 발생하는 예외, try-catch 문 강제되는 예외,  Exception 클래스 상속받는 예외
     - Unchecked Exception: 런타임 시점에서 발생하는 예외, 예외 처리를 강제하지 않는 방법, RuntimeException 클래스 상속받는 예외
     - 직접 정의할 예외는 Unchecked Exception으로 정의 추천, 실제로 예외 상황이 발생하면 개발자가 try-catch 문으로 예외를 처리할 수 있는 방법이 없는 경우가 대부분


3) HTTP 응답 상태 코드와 바디
   - 응답 헤더와 응답 바디에 넣은 상태코드 일치, 상태코드와 응답 바디의 내용이 일치하지 않으면 클라이언트가 해당 요쳥이 실패했다는 것으로 간주하고 처리할 수 있는 별도의 메커니즘에 문제가 생김.
   - 응답 바디는 클라이언트가 요청한 데이터를 포함, 요구 사항이 없다면 불필요하다. 요청 실패시 응답 바디에 실패 관련 정보를 포함하여 전달하면 클라이언트가 실패 이유를 파악, 커뮤니케이션 비용 절감.
   - 최대한 응답 바디 일관성 있게 작성, 네이버, 카카오 Open API 참고


<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---

### 11. 상품 관리 애플리케이션에 데이터베이스 연동하기
1) 데이터베이스를 사용하는 웹 애플리케이션
   - 트랜잭션: 어떤 변경 사항이 모두 실행되거나 모두 실행되지 않은 상태로 만드는 것
     - ACID
       - 원자성(Atomicity): 모두 실행하거나 모두 실행하지 않은 특성
       - 일관성(Consistency): 트랜잭션이 실행된 후에도 데이터베이스가 일관된 상태로 유지되는 특성
       - 독립성(Isolation): 여러 트랜잭션이 동시에 실행되더라도 각 트랜잭션은 서로 영향을 주지 않는 특성
       - 지속성(Durability): 트랜잭션이 성공적으로 실행되면 그 결과가 영구적으로 저장되는 특성
     - 무결성: 데이터베이스에 저장된 데이터가 정확하고 일관된 상태로 유지되는 것


2) 데이터베이스 다뤄 보기
   - MySQL에서는 데이터베이스와 스키마의 의미가 동일, `CREATE DATABASE, CREATE SCHEMA` 둘 다 사용 가능
   - `--character-set-server=utf8mb4`: 데이터베이스의 문자셋을 utf8mb4로 설정
   - `--collation-server=utf8mb4_general_ci` : 데이터베이스의 콜레이션을 utf8mb4_general_ci로 설정
   - 실무에서는 최댓값과 최솟값 제약조건의 경우 대부분 자바 코드상에서만 유효성 검사


3) 상품 추가 기능 구현하기
   - 커넥션 풀: 데이터베이스와 연결된 커넥션을 미리 만들어 두고 풀에 저장해 두었다가 필요할 때 커넥션을 빌려주고 사용이 끝나면 다시 풀에 반환하는 방식
   - 커넥션 풀은 처음 사용되는 시점에 생성되기 때문에, 커넥션 풀을 초기화 해주지 않는다면 애플리케이션 시작 후 처음 받는 요청은 커넥션 풀이 생성되는 시간만큼 지연되어 클라이언트가 응답을 느리게 받게 될 수 있다. ApplicationRunner를 통해 스프링 부트 시작시 커넥션 풀 초기화 가능.


4) 상품 조회/수정/삭제 구현하기
   - NamedParameterJdbcTemplate: JDBC Template을 확장한 클래스, 파라미터를 이름으로 바인딩하여 사용
     - query, queryForObject 메서드는 SQL 쿼리 전송 후 그 결과로 특정 클래스의 인스턴스
     - update 메서드는 SQL 쿼리 전송 후 영향을 받은 행의 개수를 int 반환, int 값을 통해 수정 및 삭제의 성공 여부 판단 가능


<details>
<summary> 기술면접 TIP </summary>

[private repository](https://github.com/mabyoungg/study-private/blob/main/backend/book/this-is-the-backend-development-for-job-with-java/README.md)

</details>

---