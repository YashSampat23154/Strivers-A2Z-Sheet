// https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}