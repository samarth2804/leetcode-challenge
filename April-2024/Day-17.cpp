# Smallest String Starting From Leaf (leetcode 988) #
# Problem Link: https://leetcode.com/problems/smallest-string-starting-from-leaf/description/


public String help(TreeNode root,String s){
    char ch=(char)('a'+root.val);
    s=ch+s;
    if(root.left!=null && root.right!=null){
        String s1=help(root.left,s);
        String s2=help(root.right,s);
        return (s1.compareTo(s2)<=0 ? s1: s2);
    }
    else if(root.left!=null){
    return help(root.left,s);
    }
    else if(root.right!=null){
    return help(root.right,s);
    }

    return s;
}

public String smallestFromLeaf(TreeNode root) {
    if(root==null) return "";
    return help(root,"");
}