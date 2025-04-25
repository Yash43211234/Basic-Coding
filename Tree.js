class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

class Tree {
    constructor() {
        this.root = null;
    }

    buildTree(x) {
        const newNode = new Node(x);

        
        if (this.root === null) {
            this.root = newNode;
            return;
        }

       
        const q = [];
        q.push(this.root);

        while (q.length > 0) {
            let temp = q.shift();

            if (temp.left === null) {
                temp.left = newNode;
                return;
            } else {
                q.push(temp.left);
            }

            if (temp.right === null) {
                temp.right = newNode;
                return;
            } else {
                q.push(temp.right);
            }
        }
    }

    levelOrder() {
        if (!this.root) return;

        const q = [];
        q.push(this.root);

        while (q.length > 0) {
            const node = q.shift();
            process.stdout.write(node.data + " ");

            if (node.left) q.push(node.left);
            if (node.right) q.push(node.right);
        }
    }
}


const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const tree = new Tree();
let inputCount = 0;
let expectedInputs = 0;

console.log("Enter number of nodes: ");

rl.on("line", (line) => {
    if (expectedInputs === 0) {
        expectedInputs = parseInt(line.trim());
        console.log("Enter node values:");
    } else {
        tree.buildTree(parseInt(line.trim()));
        inputCount++;

        if (inputCount === expectedInputs) {
            console.log("Level-order traversal:");
            tree.levelOrder();
            rl.close();
        }
    }
});
