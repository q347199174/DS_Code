/* �շ��������շ�������洢��ʾ */

#ifndef _HUFFMAN_TREE_H_
#define _HUFFMAN_TREE_H_

typedef struct {
	unsigned int weight;	//�ڵ�Ȩ��
	unsigned int parent, lchild, rchild;	//����ڵ�˫�ף����ӣ��Һ���λ��
}HTNode, *HuffmanTree;		//��̬��������洢�շ�����

typedef char * *HuffmanCode;	//��̬��������洢�շ��������

Status HuffmanCoding(HuffmanTree &HT, HuffmanCode &HC, int *w, int n);
Status Select(HuffmanTree HT, int n, int &s1, int &s2);
void max(HuffmanTree HT, int &s1, int &s2, int n);
void get_huffmanCode(HuffmanTree HT, HuffmanCode &HC, int n);
#endif