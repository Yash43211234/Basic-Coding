import java.util.*;

class Node {
    int data;
    Node left, right;

    Node(int x) {
        this.data = x;
        this.left = null;
        this.right = null;
    }
}

class Tree {
    Node root;

    void buildTree(int x) {
        if (root == null) {
            root = new Node(x);
            return;
        }

        Queue<Node> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty()) {
            Node temp = q.poll();

            if (temp.left == null) {
                temp.left = new Node(x);
                return;
            } else {
                q.add(temp.left);
            }

            if (temp.right == null) {
                temp.right = new Node(x);
                return;
            } else {
                q.add(temp.right);
            }
        }
    }

    void levelOrder() {
        if (root == null) return;

        Queue<Node> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty()) {
            Node temp = q.poll();
            System.out.print(temp.data + " ");
            if (temp.left != null) q.add(temp.left);
            if (temp.right != null) q.add(temp.right);
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Tree t = new Tree();
        int n = sc.nextInt();
        while (n-- > 0) {
            int e = sc.nextInt();
            t.buildTree(e);
        }

        // Optional: print the tree
        t.levelOrder();
    }
}
