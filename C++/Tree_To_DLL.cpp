void rec(Node*root,Node*&head,Node*&prev){   simple just we use node* ....and like we use & for address.
        if(root==NULL)return;
        
        rec(root->left,head,prev);  //inorder traversal
        
        if(prev==NULL){
            head=root;      //first case for storing head;
        }
        else{
            root->left=prev;          imagine last left node. 
            prev->right=root;
        }
        prev=root;      //advancing pref node
        
        rec(root->right,head,prev);
    }
    Node * bToDLL(Node *root)
    {
        // your code here
        Node*prev=NULL,*head=NULL;   //creeating two pointers
        rec(root,head,prev);      passing by address
        return head;
        
    }