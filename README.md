## Algorithm: `compactPolynomials()`
   - `newAvail <- 0`
   - For `i <- 0` to `avail - 1`:
     - If `polynomials[i].finish != 0` then:
        - If `i != newAvail` then:
             - `polynomials[newAvail] <- polynomials[i]`
           - `newAvail <- newAvail + 1`


   - `avail <- newAvail`

### Example

**Initial State**:
- `polynomials[0] <- {1, 5}`
- `polynomials[1] <- {2, 0}`
- `polynomials[2] <- {3, 6}`
- `avail <- 3`


