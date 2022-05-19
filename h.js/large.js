const array = [1, 5, 45, 4];

function arrFunc(array) {
    let large = array[0];
    for (let i = 0; i < array.length; i++) {
        if (large < array[i]) {
            large = array[i];
        }
    }
    return large;
}

const result = arrFunc(array);
console.log(result);