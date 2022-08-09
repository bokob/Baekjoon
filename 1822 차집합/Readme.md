# 풀이  
차집합을 구해주는 함수를 이용했다.  
algorithm에 있는 set_difference()함수를 사용함    
주의할 점으로는 차집합을 구할 원소들을 정렬하고 사용해야 한다.  

vector<int>::iterator 변수 = set_difference()
(안에 매개변수 넣고)를 한다.
그 결과를 resize()해주면 끝난다.  

# 느낀점  
저번에 풀었던 대칭 차집합과 똑같았다.  
algorithm에 있는 함수를 써버렸다.  
원래는 erase 함수써서 지우면서 하려 했는데, 편한 방법이 있었다.  
