#include "CStake.h"
#include "CRandom.h"
#include "CQueue.h"


int main()
{
    CQueue queue;
    queue.apply_size(6);

    CRandom randGen;
    int num = randGen.getRandomInt(1, 99999);

    std::cout << "随机生成的数字是: " << num << std::endl;

    while (num > 0)
    {
        int digit = num % 10;
        if (queue.push(digit) == -1)
        {
            break; // Stack overflow
        }
        num /= 10;
    }

    std::cout << "是" << queue.getLen() << "位数" << std::endl;
    std::cout << "各位数字逆序输出: ";
    while (queue.getLen() > 0)
    {
        int digit = queue.pop();
        if (digit != -1)
        {
            std::cout << digit << " ";
        }
    }
    std::cout << std::endl;

    return 0;

}

