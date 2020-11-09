;Defining a function to get nth element from the list
(defun getnth (l n) 
    (loop for a from 1 to n
        do (setq l (cdr l)) ;removing first element for n times
    )
    (format t "Element ~D : ~D~%" n (car l))    ;printing nth element
)

;Assigning list to variable
(setq l `(python java c cpp lisp prolog))

;Function call
(getnth l 3)