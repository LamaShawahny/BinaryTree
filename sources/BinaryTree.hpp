#pragma once

namespace ariel {
    template<typename T>
    class BinaryTree {
    private:
        struct Node {
            Node *left, *right, *parent;
            T value;

             Node(const T &value , Node *parent = nullptr,Node *lef = nullptr, Node *righ = nullptr) 
             : parent(parent), value(value), left(lef),  right(righ) {};

            };

        Node *root;
    public:
        BinaryTree() : root(nullptr) {}
        
         ~BinaryTree() {}
        
      

        BinaryTree &add_root(const T &val) {
            
            root=new Node(val);
            return *this;
        };

        BinaryTree &add_left(const T &parent, const T &child) { return *this; };

        BinaryTree &add_right(const T &parent, const T &child) { return *this; };

        class preorder {
         public:
            Node* node;
         
            preorder(Node* root):node(root){
            
            };
            preorder():node(nullptr){ };
            T& operator*() {return node->value;}
            preorder& operator++() {
                    return *this;
                }
        
            
            preorder& operator+(int num) {
                              return *this;
            }
        
            bool operator!=(const preorder& other) {return false;}
            preorder* operator->() {return this;}
            int size() {return string(node->value).size();}
        };

        class inorder { 
            public:
            Node* node;
            inorder(Node* root):node(root){

            };
            inorder():node(nullptr){ };
             T& operator*() {return node->value;}
            inorder& operator++(){
                return *this;
            }
            inorder& operator+(int num) {
                return *this;
            }
        
            bool operator!=(const inorder& other) {return false;}
            inorder* operator->() {return this;}
            int size() {return string(node->value).size();}
        };

       
        class postorder { 
            public:
            Node* node;
            postorder(Node* root):node(root){
                
            };
            postorder():node(nullptr){ };
             T& operator*() {return node->value;}
            postorder& operator++(){
                    return *this;
                }
               
            postorder& operator+(int num) {
                return *this;
            }
            
            bool operator!=(const postorder& other) {return false;}
            postorder* operator->() {return this;}
            int size() {return string(node->value).size();}
        };


        preorder begin_preorder() {return preorder(nullptr);}
        inorder begin_inorder() {return inorder(nullptr);}
        postorder begin_postorder() {return postorder(nullptr);}
        
        preorder end_preorder() {return preorder();}
        inorder end_inorder() {return inorder();}

        postorder end_postorder() {return postorder();}
         inorder begin()
        {
            return inorder();
        };
        inorder end()
        {
            return inorder();
        };
        friend std::ostream &operator<<(std::ostream &outs, const BinaryTree<T> &tree) {
            return outs;
        }
       
    };
}