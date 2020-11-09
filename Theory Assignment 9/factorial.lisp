;defining a function for calculating factorial
(defun factorial (n)
    (if (= n 0)
        1   ;recursion breaking condition
        (* n (factorial (- n 1)))   ;recursion
    ) 
)

;declaring input variable
(defvar n)

;taking input from user
(setq n (read))

;printing factorial
(format t "~D! = ~D~%" n (factorial n))