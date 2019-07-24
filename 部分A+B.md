## 问题描述
- A = 3862767， 若Da = 6， 则Pa = 66

```
#include <stdio.h>

int main() {

//    给出A， B， Da， Db；
    long long a;
    int da;
    long long b;
    int db;

    long long pa = 0;
    long long pb = 0;

    long long result;
    scanf("%lld %d %lld %d", &a, &da, &b, &db);

    while (a != 0) {

//        注意这里必须先取余数，如果先取商，就无法判断最后一个数字
        int tmp = a % 10;
        a /= 10;
        if (da == tmp) {
            pa = pa * 10 + da;
        }
    }

    while (b != 0) {

        int tmp = b % 10;
        b /= 10;
        if (db == tmp) {
            pb = pb * 10 + db;
        }
    }

    result = pa + pb;

    printf("%lld\n", result);

    return 0;
}
```

## 注意问题
- 在本题中 pa， pb的值必须要初始化，否则当不满足条件时，二者相加会报错。