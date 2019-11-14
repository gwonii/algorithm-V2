## 체크하기 

* 문자열 자르기 

```c++

    // 매개변수에 문자열, 자를 길이를 넣는다. 
    // 그러면 substr 함수를 이용한다. 
    // 두 개의 인자를 출발 index(좌측), 자를 길이(우측))
    // 한 개의 인자를 출발 index(좌측)  -- 문자열 끝 까지 
    

Pair func_c(string exp, int idx){
    Pair ret;
    ret.first_num = stoi(exp.substr(0, idx));
    ret.second_num = stoi(exp.substr(idx+1));
    return ret;
}

```

