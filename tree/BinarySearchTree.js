class Node{
    constructor(val){
        this.val=val;
        this.left=null;
        this.right=null;
        
    }
}
class BinarySearchTree{
    constructor(){
        this.root=null;
    }
    BFS(){
        var queue=[];
        var result=[];
        queue.push(this.root);
        while(queue.length){
            var data=queue.shift();
            result.push(data.val);
            if(data.left!=null)queue.push(data.left);
            if(data.right!=null)queue.push(data.right);

        }
        return result;
    }
    find(val){
        if(this.root==null){
            return "NO";
        }
        var current=this.root;

        while(true){
            
            if(current.val<val){
                if(current.right!=null){
                current=current.right;
                if(current.val==val){
                    return "Found";
                }
            }else{
                return "NO";
            }
            }
            
            else if(current.val>val){
                if(current.left!=null){
                current=current.left;
                if(current.val==val){
                    return "Found";
                }
            }else{
                return "NO";
            }
                
            }
        }
    }


    insert(val){
        var node=new Node(val);
        if(this.root==null){
            this.root=node;
            return this;
        }else{
            var current=this.root;
            while(true){
                if(val<current.val){
                    if(current.left==null){
                        current.left=node;
                        return this;
                    }else{
                    current=current.left;
                    }
                }else if(val>current.val){
                    if(current.right==null){
                        current.right=node;
                        return this;
                    }else{
                    current=current.right;
                    }
                }
            }
        }
    }
}
var tree=new BinarySearchTree()
tree.insert(10);
tree.insert(12);
tree.insert(7);
tree.insert(13);
tree.insert(15);
tree.insert(25);

tree.insert(1);
console.log(tree.BFS())
console.log(tree)
//    10
//7        12
//1          13
//             15
//              25