# 풀이
스택을 이용했다.  

먼저 문자열로 입력받는다.  

입력받은 문자열의 크기만큼 반복문을 돌린다.  

1. 스택의 크기가 0일 때는 push  
2. 스택의 크기가 0이 아닐 때  
    1) 스택의 탑에 해당하는 원소가 ( 이고 지금 확인하고 있는 원소가 ) 이면 pop  
    2) 스택의 탑에 해당하는 원소가 ( 이고 지금 확인하고 있는 원소가 ) 아니면 지금 확인하고 있는 원소 push  
    3) 스택의 탑에 해당하는 워노가 ) 이면 지금 확인하고 있는 원소 push  

이러한 경우로 if문을 만든다.  

반복문이 끝나면 스택의 크기를 출력한다.  

# 느낀점
스택의 성질을 잘 이용할 수 있는 문제였다.  
