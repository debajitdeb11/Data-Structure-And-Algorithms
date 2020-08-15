package Tree.BST.Implementation;

class bstNode {
    int data;
    bstNode left, right;

    bstNode(int data) {
        this.data = data;
        this.left = this.right = null;
    }

    void insert(int key) {
        if (key <= data) {
            if (left == null) {
                left = new bstNode(key);
            } else {
                left.insert(key);
            }
        } else {
            if (right == null) {
                right = new bstNode(data);
            } else {
                right.insert(key);
            }
        }
    }

    boolean contains(int val) {
        if (val == data) {
            return true;
        } else if (val < data) {
            if (left == null) {
                return false;
            } else {
                return left.contains(val);
            }
        } else {
            if (right == null) {
                return false;
            } else {
                return right.contains(val);
            }
        }
    }

    void printInOrder() {
        if (left != null) {
            left.printInOrder();
        }

        System.out.println(data);

        if (right != null) {
            right.printInOrder();
        }
    }

}