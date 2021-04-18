# Code_Clustering
요약
- 학생들이 제출한 코드를 Abstract Syntax Tree로 변환하고, 이를 통해 Edit distance를 계산하여 유사도를 측정한다.
- 이를 파일로 저장하고, nodejs에서 계층적 클러스터링을 통해 군집화 함으로써 학생들의 솔루션을 분류하는 것을 목표로한다.

# 클러스터링을 지원하는 언어
- c
- c++
- java
- python

# 실행 환경
- python 3.x
- node js 15.5

# 사용된 외부 라이브러리
## python
- clang
- libclang
- javalang

## node.js
- express
- ejs

## 각 테스트 코드가 다음과 같이 저장되어 있다고 가정한다.
- code_path = ${PATH}/[task_name]/[user_name]/source/solution_file.[c/cpp/java/py]

# 실행 방법(Python)
python3 Compute_edit_distance.py [code_path]

# 실행 결과(Python)
- 각각의 코드에 대해서 계산된 edit distance가 사용자 별로 매핑된다. 
- Compute_edit_distance.py와 같은 경로에 task_name 폴더 내부에 edit_distance.json 파일로 저장된다.

# 실행 방법(node.js)
- node server.js [json_path] [threshold]

# 실행 결과(node.js)
- 계산된 edit_distance로부터 threshold에 따른 군집화 결과를 웹페이지에 표시해준다.
- ajax를 사용하기 때문에 슬라이드바 값을 조절하면 실시간으로 군집화 결과가 갱신되는 것을 볼 수 있다.
