# 새로 알게 된 점  
iterator는 컨테이너 원소에 접근할 수 있는 포인터와 같은 객체라고 알게 되었다.  

vector<int>::iterator (변수명)은 *연산자를 오버로딩해서 마치 포인터처럼 동작하게 하는 것이다.  

# 풀이  
대칭 차집합을 구해주는 함수를 이용했다.  
algorithm에 있는 set_symmetric_difference()함수를 사용함    
주의할 점으로는 대칭 차집합을 구할 원소들을 정렬하고 사용해야 한다.  

vector<int>::iterator 변수 = set_symmetric_difference()
(안에 매개변수 넣고)를 한다.
그 결과를 resize()해주면 끝난다.  

# 느낀점  
원래는 erase 함수 두 번씩 써서 지우면서 하려 했는데, 편한 방법이 있었다.  
