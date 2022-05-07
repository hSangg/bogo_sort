const isSorted = (a, n) => {
  while (--n >= 1) if (a[n] < a[n - 1]) return false;

  return true;
};

const suffle = (a) => {
  for (let i = 0; i < a.length; i++) {
    const randomIndex = Math.floor(Math.random() * a.length);

    let temp = a[i];
    a[i] = a[randomIndex];
    a[randomIndex] = temp;
  }
};

const bogoSort = (a, n) => {
  while (!isSorted(a, n)) suffle(a);
};

const a = [10, 6, 3, 5, 6, 3, 5, 3, 2, 4];
bogoSort(a, a.length);

a.forEach((x) => console.log(x));
