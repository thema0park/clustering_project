#!/usr/bin/env python
# coding: utf-8

# In[7]:


import numpy as np
import sys
import os
import copy
import json
from pycparser import c_parser, c_ast, parse_file
import time


# In[8]:


code_sig = []
cluster_name = []
test_tmp = []
class Visitor(c_ast.NodeVisitor):
    def __init__(self):
        pass
    
    def visit_FileAST(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0]
        tmp = '1' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_Assignment(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0]
        #tmp = '2'
        tmp = 'A' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_BinaryOp(self, node):
        global code_sig
        #print(type(node).__name__)
        #print(node.op)
        #tmp = (str(type(node).__name__[0]) + str(node.op))
        #tmp = '3'+str(node.op)
        tmp = 'B' + str(node.op) + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_Compound(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0]+'p'
        #tmp = '4'
        tmp = 'C' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_Constant(self, node):
        global code_sig
        #print(type(node).__name__)
        #print(node.type)
        #tmp = (str(type(node).__name__[0]) + 't' + str(node.type[0]))
        #tmp = '5'+str(node.type[0])
        tmp = 'D1' + str(node.type[0]) + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_Decl(self, node):
        global code_sig
        #print(type(node).__name__)
        #print(node.name)
        #tmp = type(node).__name__[0]
        #tmp = '6'
        tmp = 'D2' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_ExprList(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0]+'l'
        #tmp = '7'
        tmp = 'E' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_FuncDef(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0]+'df'
        #tmp = '9'
        tmp = 'F1' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_FuncDecl(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0]+'dl'
        #tmp = '8'
        tmp = 'F2' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_FuncCall(self, node):
        global code_sig
        #print(type(node).__name__)
        #print(node.name)
        #tmp = type(node).__name__[0]+'ca'
        #tmp = 'a'
        tmp = 'F3' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_For(self, node):
        global code_sig
        #print(type(node).__name__)
        tmp = 'FOR' + '_'
        #tmp = 'b'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_If(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0]
        #tmp = 'c'
        tmp = 'L1' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_IdentifierType(self, node):
        global code_sig
        #print(type(node).__name__)
        #print("IdentifierType is ",node.names)
        #print(node.names[0])
        #tmp = (str(type(node).__name__[0:2]) + 't' + str(node.names[0]))
        #tmp = 'd'+str(node.names[0])
        tmp = 'L2' + str(node.names[0]) + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    """def visit_ID(self, node):
        global code_sig
        print('ID is ',node.name)
        self.generic_visit(node)"""
        
        
    def visit_PtrDecl(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0] + 'd'
        #tmp = 'e'
        tmp = 'P1' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_ParamList(self, node):
        global code_sig
        #print(type(node).__name__)
        #print(node)
        #tmp = type(node).__name__[0] + 'l'
        #tmp = 'f'
        tmp = 'P2' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_Return(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0]
        #tmp = 'g'
        tmp = 'R' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_StructRef(self, node):
        global code_sig
        print(type(node).__name__)
        #tmp = type(node).__name__[0]
        #tmp = 'h'
        tmp = 'S' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_Typedef(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0] + 'd'
        #tmp = 'i'
        tmp = 'T1' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
        
    def visit_TypeDecl(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = type(node).__name__[0] + 'dc'
        #tmp = 'j'
        tmp = 'T2' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)
    
    def visit_UnaryOp(self, node):
        global code_sig
        #print(type(node).__name__)
        #print(node.op)
        #tmp = type(node).__name__[0] + node.op
        #tmp = 'k'+ node.op
        tmp = 'U'+ node.op + '_'
        self.generic_visit(node)
    
    def visit_While(self, node):
        global code_sig
        #print(type(node).__name__)
        #tmp = 'While'
        #tmp = 'l'
        tmp = 'W' + '_'
        self.generic_visit(node)
        code_sig.append(tmp)


# In[18]:


def pre_processing(originalfile_paths):
    # originalfile_path는 "./test_set/" + homework_name + "/" + data + "/source"
    tmp = []
    for i, data in enumerate(originalfile_paths):
        tmp_path = data.split('/')
        name = tmp_path[3]
        tmp.append('//'+ name + '\n')
    #print("pre-processing start..")
    except_list = "include" # < or > or # or "" 존재하면 라인 지우기로 변경할 것.
    # 파일 경로 전달 받음
    for i in range(0,len(originalfile_paths)):
        datas = []
        with open(originalfile_paths[i] + "/main_pre_processing.c", "w", encoding='UTF-8') as f:
            f.write(tmp[i])
        # 원본 파일 내용 변수에 저장
        filepath = originalfile_paths[i]
        with open(filepath+'/main.c', 'r', encoding='UTF-8') as f:
                while True:
                    line = f.readline()
                    #line = f.read()
                    if not line: 
                        break
                    datas.append(line)

        # 헤더파일 포함하는 부분 제거          
        for i in range(0,len(datas)):
            #print(datas[i].find(except_list))
            if datas[i].find(except_list) != -1 :
                datas[i] = ' '
            else:
                pass
        
        # 다시 파일 작성
        with open(filepath + "/main_pre_processing.c", "a", encoding='UTF-8') as f:
            for i in datas:
                f.write(i)
            
    #print("pre-processing done..")


# In[19]:


# 코드를 입력받아 ast 생성
def get_ast(originalfile_paths):
    #print("get_ast start..")
    # 헤더 제거
    pre_processing(originalfile_paths)
    clustering = []
    for i in range(0,len(originalfile_paths)):
        filepath = originalfile_paths[i] + "/main_pre_processing.c"
        ast = parse_file(filepath, use_cpp=True,
                cpp_path='cpp',
                cpp_args=r'-I./pycparser-master/utils/fake_libc_include') # 헤더를 포함해 ast로 만들기 위해 사용
        clustering.append(ast)
    #print("get_ast done..")
    return clustering


# In[20]:


# get_ast에서 전달받은 ast를 아래와 같은 조건에 맞춰 변경
# 변수명 모두 동일하게 변경.(해결)
# 변수 값 삭제.(해결)
# for와 while 동일하게 판단.(해결)
def make_signature(tmp, originalfile_paths):
    #print("make_signature start..")
    global code_sig
    filepath = originalfile_paths
    sig = []
    sig2 = []
    v = Visitor()
    for i in range(0,len(tmp)):
        tmp[i] = v.visit(tmp[i])
        sig.append(code_sig)
        sig2.append("".join(sig[i]))
        code_sig = []
        with open(filepath[i] + "/main_pre_processing.c", "a", encoding='UTF-8') as f:
            f.write("/*########code signature#########\n")
            for cnt, data in enumerate(sig2[i]):
                if cnt == 0:
                    pass
                elif cnt%30 == 0:
                    f.write('\n')
                else:
                    f.write(data)
            f.write("\n###############################*/\n//$//\n")
    #print("make_signature done..")
    return sig2


# In[12]:


# 각 솔루션에 대해서 편집 거리를 계산.
# 이를 통해 학생들의 솔루션 별 유사도 산출.
# 편집 거리가 클 수록 답안지와 학생의 답이 거리가 멀다는 뜻
# Original_if_if (조금 빠름)
def edit_distance(s1, s2):
    if len(s2) is 0:
        return len(s1)
    d = range(len(s1) + 1)
    # d 가 이전에 계산된 거리
    # d_new가 새롭게 계산하는 거리
    for i2, c2 in enumerate(s2):
        d_new = [i2+1]
        for i1, c1 in enumerate(s1):
            if c1 == c2:
                d_new.append(d[i1])
            else:
                tmp = d[i1]
                if tmp > d[i1+1]:
                    tmp = d[i1+1]
                if tmp > d_new[-1]:
                    tmp = d_new[-1]
                d_new.append(tmp+1)
        d = d_new
    return d[-1]
"""def edit_distance(s1, s2):
    return lev(s1,s2)"""


# In[13]:


# distance_matrix는 들어가야함 -> 군집 안의 개체와 새로운 개체간 edit_distance를 비교해서 
# threshold 보다 작으면 군집에 추가해야하기 때문에
def merge(cluster, distance_matrix, threshold, index_i, index_j):
    search_cluster = [False for i in range(len(cluster))]
    cnt = 0
    flag1, flag2 = False, False
    for x in range(len(cluster)):
        if index_i in cluster[x]:
            flag1 = True
        elif index_j in cluster[x]:
            flag2 = True
    if flag1 == True and flag2 == True:
        return cluster
    
    for x in range(len(cluster)):
        flag1, flag2 = False, False
        # 각 군집에 index_i와 index_j가 있다면 추가할 필요가 없으니 return cluster
        if index_i in cluster[x] and index_j in cluster[x]:
            #print("둘 다 있음.\n추가 안함")
            return cluster
        # 각 군집에 index_i가 있다면,
        # 군집 안의 개체들과 index_j와 edit_distance를 threshold와 비교한다.
        # 하나라도 threshold보다 크다면 추가하지 않는다.
        if index_i in cluster[x]:
            #print(x," 번째 클러스터에 ",index_i,"가 있음")
            for z in range(len(cluster[x])):
                #print(cluster[x][z], index_j, "간의 편집거리는 ", distance_matrix[cluster[x][z]][index_j])
                # 군집 내의 개체(복수)와 신규 개체(단일)간 edit distance를 테이블에서 꺼내와 threshold를 모두 비교합니다.
                # 그 이후, 하나라도 threshold가 크다면 해당 군집에 신규 개체를 추가하지 않습니다.
                if distance_matrix[cluster[x][z]][index_j] >= threshold :
                    #print("설정한 임계값보다 크기 때문에 클러스터에 추가하지 않습니다.")
                    break
                # 모든 edit distance가 threshold보다 작다면 해당 군집을 신규 개체에 추가합니다.
                else:
                    #print("클러스터에 추가합니다.")
                    cluster[x].append(index_j)
                    return cluster
        elif index_j in cluster[x]:
            #print(x," 번째 클러스터에 ",index_j,"가 있음")
            # 군집 내의 개체(복수)와 신규 개체(단일)간 edit distance를 테이블에서 꺼내와 threshold를 모두 비교합니다.
            # 그 이후, 하나라도 threshold가 크다면 해당 군집에 신규 개체를 추가하지 않습니다.
            for z in range(len(cluster[x])):
                #print(cluster[x][z], index_i, "간의 편집거리는 ", distance_matrix[cluster[x][z]][index_i])
                if distance_matrix[cluster[x][z]][index_i] >= threshold :
                    #print("설정한 임계값보다 크기 때문에 클러스터에 추가하지 않습니다.")
                    break
                # 모든 edit distance가 threshold보다 작다면 해당 군집을 신규 개체에 추가합니다.
                else:
                    #print("클러스터에 추가합니다.")
                    cluster[x].append(index_i)
                    return cluster
        
        if flag1 == False and index_i not in cluster[x]:
            #print("index_i가 없음")
            flag1 = True
        if flag2 == False and index_j not in cluster[x]:
            #print("index_j가 없음")
            flag2 = True
                
        if flag1 == True and flag2 == True:
            search_cluster[x] = True
    
    #print(search_cluster)
    for x in search_cluster:
        if x == False:
            break
        else :
            cnt += 1
    # 둘 다 기존 클러스터에서 검색되지 않으면 새로운 클러스터 형성
    if cnt == len(cluster):
        #print("새로운 클러스터 생성")
        cluster.append([index_i, index_j])
    return cluster


# In[21]:


# 2020-12-30 merge함수 추가.
#def cluster(name, threshold):
def cluster(name):
    start = time.time()
    # 제출된 코드를 읽기 위한 경로 생성.
    homework_name = name
    file_path = "./test_set/"+homework_name
    file_names = os.listdir(file_path)
    tmp = []
    for num, data in enumerate(file_names):
        originalfile_path = "./test_set/" + homework_name + "/" + data + "/source"
        tmp.append(originalfile_path) # 제출된 솔루션을 읽기 위한 경로들
    #tmp = tmp[:1] # 일부만 테스트하고 싶다면 이곳의 주석을 지운다.
    
    # 논문 코드 시작
    cluster = []
    sig = []
    sig = get_ast(tmp)
    # signature 추가하기 위해 tmp 파라미터 추가
    sig = make_signature(sig, tmp)
    Q = []
    # edit_distance가 계산 X -> 아래 코드 시작
    if os.path.exists('./' + 'solution_edit_distance/' + homework_name + '.json') == False:
        # 메모리 사이즈를 행렬 형태로 미리 잡고
        Q = np.zeros((len(sig),len(sig)))
        # 모든 코드들에 대해 편집거리 계산.
        # 2차원 Array로 저장.
        for i in range(0,len(sig)):
            for j in range(i+1,len(sig)):
                print(file_names[i],"와",file_names[j],"의 편집거리를 계산합니다.")
                dist = edit_distance(sig[i], sig[j]) # 편집거리 계산.
                print("계산 결과는 ", dist)
                Q[i][j] = dist
                Q[j][i] = dist

        # distance 계산 종료. -> json으로 저장. -> 자바스크립트에서 읽어와야하기 때문에
        Q_tmp = Q.tolist()
        data = {}
        data['data'] = []
        for i in range(len(Q)):
            data['data'].append(Q_tmp[i])
        with open('./' + 'solution_edit_distance/' + homework_name + '.json', 'w') as outfile:
            json.dump(data, outfile, indent=4)
        print(homework_name,"time :", (time.time() - start)/60)
        
        # 제출된 파일명 저장.
        tmp = {}
        for i, file_name in enumerate(file_names):
            tmp[i] = file_name
        mapping = tmp;
        with open('./' + 'solution_name/' + homework_name + '.json', 'w') as outfile:
            json.dump(mapping, outfile, indent=4)
        
    # edit_distance가 계산 O -> 아래 코드 시작
    else:
        # 웹 소켓으로 시작 신호를 보내주거나하는 방식으로 편집거리 계산이 필요없음을 알려준다.
        print("이미 관련 편집거리가 json으로 저장돼 있습니다.")


# In[16]:


if __name__ == "__main__":
    file_path = "./test_set"
    file_names = os.listdir(file_path) # 실제 폴더명을 가져온다.
    dic = {0: 'a'}
    # 실제 폴더명을 사전형으로 저장.
    for i,name in enumerate(file_names):
        dic[i] = name
    print("과제 번호를 넣어주세요.\n0.원천관 화장실 찾기\n1.전가산기\n2.마방진\n3.암호문 만들기\n4.피자 조각 찾기 \n5.Run-length Encoding\n6.요일 알아보기\n7.팔달관 후문 흔적찾기\n")
    num = input("번호 입력 :")
    # 웹에서 슬라이드바 조절하면 해당 값이 소켓통신이든 어떤 통신을 통해 threshold에 저장.
    #threshold = input("Threshold를 설정해주세요.")
    #이것도 웹에서 전송하는 형태로 수정.
    homework_name = dic[int(num)]
    # 따라서, main문에서는 아래 함수 호출 이외에 코드가 없으리라 예상됨.
    #cluster(homework_name, threshold)
    cluster(homework_name)


# In[ ]:




