Sample in C++ Illustrating Dynamic Connectivity

Quick-Find:

Checks if ``p`` and ``q`` are connected by checking the index ``p`` and ``x`` in the array and 
comparing the value. If they are equal, then they are connected.

Union(x, y) will replace the value of array[x] with the value of array[y]


.. code-block:: 

    int id[N]
    for (int i = 0; i < id.size(); i++) {
        id[i] = i;
    }
    print id
     _____________________________
    |  0  |  1  |  2  |  3  |  4  |
    |-----|-----|-----|-----|-----|
    |  0  |  1  |  2  |  3  |  4  |
     -----------------------------

    union(2, 4)
     _____________________________
    |  0  |  1  |  2  |  3  |  4  |
    |-----|-----|-----|-----|-----|
    |  0  |  1  |  4  |  3  |  4  |
     -----------------------------

    union(2, 1)
     _____________________________
    |  0  |  1  |  2  |  3  |  4  |
    |-----|-----|-----|-----|-----|
    |  0  |  1  |  1  |  3  |  1  |
     -----------------------------

    union(0, 3)
     _____________________________
    |  0  |  1  |  2  |  3  |  4  |
    |-----|-----|-----|-----|-----|
    |  3  |  1  |  1  |  3  |  1  |
     -----------------------------



