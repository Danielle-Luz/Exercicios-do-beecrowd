function buscaNumeroPrimos(n) {
    let numerosPrimos = [];
    let i = 0;
    while (i <= n) {
        for (let x = 2; x < i; x++) {
            if ((i%x)==0) {
                break;
            } else if (x == (i-1)) {
                numerosPrimos.push(i);
            }
        }
        i++;
    }
    return numerosPrimos;
}