# 2016년 - 연습문제

### 문제 설명

2016년 1월 1일은 금요일입니다. 2016년 a월 b일은 무슨 요일일까요? 두 수 a ,b를 입력받아 2016년 a월 b일이 무슨 요일인지 리턴하는 함수, solution을 완성하세요. 요일의 이름은 일요일부터 토요일까지 각각 `SUN,MON,TUE,WED,THU,FRI,SAT`입니다. 예를 들어 a=5, b=24라면 5월 24일은 화요일이므로 문자열 "TUE"를 반환하세요.

---

### 제한사항

  - 2016년은 윤년입니다.
  
  - 2016년 a월 b일은 실제로 있는 날입니다. (13월 26일이나 2월 45일같은 날짜는 주어지지 않습니다)

---

### 입출력 예

|   a   |   b   | result |
| :---: | :---: | :----: |
|   5   |  24   | "TUE"  |

---

### 문제 접근

  - 각 월의 일수를 저장하는 `mon` 배열과 요일의 string 리터럴을 저장하는 `day` 배열을 선언 및 초기화

  - 2016년 1월 1일의 요일은 금요일

    - 배열 `day`의 0 번째 인덱스의 값은 `THU`

    - 기준일로부터 지난 총 일수를 저장하는 변수 `dSum`의 초기값은 0

    - `dSum`이 0으로 초기화 된 것은 현재 날짜가 `2015년 12월 31일`임을 의미

  - `mon`배열의 1 번째 인덱스의 값, 즉 2월의 요일 수는 윤년이므로 29일

  - 0 부터 `a-1`까지 for문을 돌리며 `mon[i]`값을 dSum에 더함

    - a == 5 라면, 4월까지의 총 요일수를 더하는 것

  - 더해진 `dSum`에 b값을 더해주면 파라미터로 넘겨받은 타겟 날짜에 대한 총 요일 수가 구해짐

  - `dSum%7`를 인덱스로 배열 `day`에 접근하면 해당 날짜의 요일을 구할 수 있음