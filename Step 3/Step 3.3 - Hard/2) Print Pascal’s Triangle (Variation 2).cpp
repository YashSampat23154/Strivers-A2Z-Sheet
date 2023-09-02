// https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

void pascalTriangle(int n) {
    long long ans = 1;
    cout << ans << " "; // printing 1st element

    //Printing the rest of the part:
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;
}