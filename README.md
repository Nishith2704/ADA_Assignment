## Algorithm: `compactPolynomials`

### Purpose

The `compactPolynomials` function removes polynomials with a `finish` value of 0 from the `polynomials` array and shifts the valid polynomials to the beginning of the array.

### Detailed Steps

1. **Initialize `newAvail`**:
   - Set `newAvail` to 0. This variable will track the position in the array where the next valid polynomial should be placed.

2. **Iterate Through the Array**:
   - Loop through each polynomial in the `polynomials` array using an index `i` ranging from 0 to `avail - 1`.

3. **Check Polynomial Validity**:
   - For each polynomial at index `i`, check if its `finish` value is not zero (`polynomials[i].finish != 0`).
     - If the polynomial is valid:
       - **Move Valid Polynomial**:
         - If `i` is not equal to `newAvail`, update `polynomials[newAvail]` with the polynomial at index `i`. This operation moves the valid polynomial to the `newAvail` index.
       - **Increment `newAvail`**:
         - Increase the `newAvail` index by 1 to prepare for the next valid polynomial.

4. **Update Available Count**:
   - After the loop, set `avail` to `newAvail`. This updates the count of valid polynomials in the array to reflect the number of valid polynomials after compaction.

### Example

Assume the following initial state of `polynomials` and `avail`:

```c
polynomials[0] = {1, 5}
polynomials[1] = {2, 0}
polynomials[2] = {3, 6}
avail = 3
