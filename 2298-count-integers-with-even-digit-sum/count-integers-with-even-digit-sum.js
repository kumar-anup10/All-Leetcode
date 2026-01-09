/**
 * @param {number} num
 * @return {number}
 */
var countEven = function(num) {
    function check(n) {
        let temp = 0;
        while (n > 0) {
            temp += n % 10;
            n = Math.floor(n / 10);
        }
        return temp % 2 === 0;
    }

    let count = 0;
    if (num < 2) return 0;

    for (let i = 1; i <= num; i++) {
        if (check(i)) count++;
    }

    return count;
};