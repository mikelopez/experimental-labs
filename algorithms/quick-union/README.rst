Quick Union
===========

C++ Sample Quick Union - Lazy Approach

An array of ``N`` elements will represent "roots" of trees.
Each entry of the array will contain the reference to its parent root ID


.. code-block::

             0       1       2       3       4       5       6       7  
  id[]   |   0   |   1   |   2   |   3   |   4   |   5   |   6   |   7   |


Find: Checks if ``p`` and ``q`` have the same root value

Union: To merge components containing p and q, set the id of p's root to 
the id of q's


Sample output in Python
-----------------------

.. code-block:: 
    
    Index   Root
    0   0
    1   1
    2   2
    3   3
    4   4
    5   5
    6   6
    7   7
    8   8
    9   9


    RUNNING UNION(4, 3) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 4....
        The ROOT is 4
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 3....
        The ROOT is 3
    -------------------------------
    i = 4, j = 3 -- set id[i] = j
    set id[4] = 3
    -------------------------------
    Index   Root
    0   0
    1   1
    2   2
    3   3
    4   3
    5   5
    6   6
    7   7
    8   8
    9   9


    RUNNING UNION(3, 8) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 3....
        The ROOT is 3
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 8....
        The ROOT is 8
    -------------------------------
    i = 3, j = 8 -- set id[i] = j
    set id[3] = 8
    -------------------------------
    Index   Root
    0   0
    1   1
    2   2
    3   8
    4   3
    5   5
    6   6
    7   7
    8   8
    9   9


    RUNNING UNION(6, 5) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 6....
        The ROOT is 6
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 5....
        The ROOT is 5
    -------------------------------
    i = 6, j = 5 -- set id[i] = j
    set id[6] = 5
    -------------------------------
    Index   Root
    0   0
    1   1
    2   2
    3   8
    4   3
    5   5
    6   5
    7   7
    8   8
    9   9


    RUNNING UNION(9, 4) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 9....
        The ROOT is 9
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 4....
                - n is not id[n] ( 3 ) 
                - n is now set to id[n] ( 3 ) 
                - n is not id[n] ( 8 ) 
                - n is now set to id[n] ( 8 ) 
        The ROOT is 8
    -------------------------------
    i = 9, j = 8 -- set id[i] = j
    set id[9] = 8
    -------------------------------
    Index   Root
    0   0
    1   1
    2   2
    3   8
    4   3
    5   5
    6   5
    7   7
    8   8
    9   8


    RUNNING UNION(2, 1) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 2....
        The ROOT is 2
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 1....
        The ROOT is 1
    -------------------------------
    i = 2, j = 1 -- set id[i] = j
    set id[2] = 1
    -------------------------------
    Index   Root
    0   0
    1   1
    2   1
    3   8
    4   3
    5   5
    6   5
    7   7
    8   8
    9   8


    RUNNING UNION(5, 0) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 5....
        The ROOT is 5
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 0....
        The ROOT is 0
    -------------------------------
    i = 5, j = 0 -- set id[i] = j
    set id[5] = 0
    -------------------------------
    Index   Root
    0   0
    1   1
    2   1
    3   8
    4   3
    5   0
    6   5
    7   7
    8   8
    9   8


    RUNNING UNION(7, 2) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 7....
        The ROOT is 7
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 2....
                - n is not id[n] ( 1 ) 
                - n is now set to id[n] ( 1 ) 
        The ROOT is 1
    -------------------------------
    i = 7, j = 1 -- set id[i] = j
    set id[7] = 1
    -------------------------------
    Index   Root
    0   0
    1   1
    2   1
    3   8
    4   3
    5   0
    6   5
    7   1
    8   8
    9   8


    RUNNING UNION(6, 1) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 6....
                - n is not id[n] ( 5 ) 
                - n is now set to id[n] ( 5 ) 
                - n is not id[n] ( 0 ) 
                - n is now set to id[n] ( 0 ) 
        The ROOT is 0
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 1....
        The ROOT is 1
    -------------------------------
    i = 0, j = 1 -- set id[i] = j
    set id[0] = 1
    -------------------------------
    Index   Root
    0   1
    1   1
    2   1
    3   8
    4   3
    5   0
    6   5
    7   1
    8   8
    9   8


    RUNNING UNION(7, 3) 
        - UNION() value of i becomes value of root(p)
            - Checking root for 7....
                - n is not id[n] ( 1 ) 
                - n is now set to id[n] ( 1 ) 
        The ROOT is 1
        - UNION() value of i becomes value of root(q) %s
            - Checking root for 3....
                - n is not id[n] ( 8 ) 
                - n is now set to id[n] ( 8 ) 
        The ROOT is 8
    -------------------------------
    i = 1, j = 8 -- set id[i] = j
    set id[1] = 8
    -------------------------------
    Index   Root
    0   1
    1   8
    2   1
    3   8
    4   3
    5   0
    6   5
    7   1
    8   8
    9   8
