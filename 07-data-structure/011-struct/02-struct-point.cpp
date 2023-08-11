/** Point 구조체
 * 구조체를 기반으로 정렬하는 연산,
 * 그리고 초기값 설정이 필요하다면 다음과 같은 형태로 구조체를 정의
 */
struct Point {
  // 구조체의 멤버변수 y, x를 정의
  int y, x;

  // y, x를 받아 멤버변수를 생성한다라는 의미
  Point(int y, int x) : y(y), x(x) {}

  // 초기값 설정 부분
  // 만약 y, x가 정해지지 않은 경우 기본값으로 -1, -1를 설정한다는 의미
  Point() {
    y = -1;
    x = -1;
  }

  // 연산자(operator) 오버로딩입니다.
  // 이는 말 그대로 연산자를 오버로딩(하위 클래스에서 재정의)하는 것이죠.
  // 연산자는 <, >, 등이 있고 이를 오버로딩한다는 것
  bool operator<(const Point &a) const {
    if (x == a.x)
      return y < a.y;
    return x < a.x;
  }
};