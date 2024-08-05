## Algorithm: `compactPolynomials{`
   - `newAvail <- 0`
   - For `i <- 0` to `avail - 1`:
     - If `polynomials[i].finish != 0` then:
        - If `i != newAvail` then:
             - `polynomials[newAvail] <- polynomials[i]`
           - `newAvail <- newAvail + 1`


   - `avail <- newAvail`
}


