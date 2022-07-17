const f = (a) => a.foo && a.bar;
const g = (a) => a.foo || a.bar;

a = {
    foo: true,
    bar: 'Lorem ipsum'
};


// https://twitter.com/seuparada/status/1487764529450733572
console.log(f(a));