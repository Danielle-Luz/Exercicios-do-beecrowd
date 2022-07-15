function palindromo(palavra) {
    let atras = "";
    let letras = palavra.split("");
    for (let i = (letras.length-1); i >= 0; i--) {
        atras+=letras[i];
    }
    if(atras == palavra) {
        return "SIM, SOU UM PALÍNDROMO";
    } else {
        return "INFELIZMENTE, NÃO SOU UM PALÍNDROMO";
    }
}