## Algorithm: `compactPolynomials`

1. **Initialize**:
   - `newAvail <- 0`

2. **Iterate Through Array**:
   - For `i <- 0` to `avail - 1`:
     - **Check Validity**:
       - If `polynomials[i].finish != 0` then:
         - **Move Valid Polynomial**:
           - If `i != newAvail` then:
             - `polynomials[newAvail] <- polynomials[i]`
         - **Increment `newAvail`**:
           - `newAvail <- newAvail + 1`

3. **Update Available Count**:
   - `avail <- newAvail`

### Example

**Initial State**:
- `polynomials[0] <- {1, 5}`
- `polynomials[1] <- {2, 0}`
- `polynomials[2] <- {3, 6}`
- `avail <- 3`

**Execution**:

1. **Initialize**:
   - `newAvail <- 0`

2. **Iteration**:
   - **For `i <- 0`**:
     - `polynomials[0].finish != 0` (Valid)
       - `i == newAvail` (0 == 0)
       - No change needed
       - `newAvail <- newAvail + 1` (1)
   - **For `i <- 1`**:
     - `polynomials[1].finish == 0` (Invalid)
       - No action needed
   - **For `i <- 2`**:
     - `polynomials[2].finish != 0` (Valid)
       - `i != newAvail` (2 != 1)
       - `polynomials[1] <- polynomials[2]`
       - `newAvail <- newAvail + 1` (2)

3. **Update Available Count**:
   - `avail <- newAvail` (2)

**Final State**:
- `polynomials[0] <- {1, 5}`
- `polynomials[1] <- {3, 6}`
- `avail <- 2`
