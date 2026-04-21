/*전체 구조

네 프로젝트는 크게 보면 이런 구조야.

MObject : 가장 기본이 되는 부모 클래스
MDataObject : 데이터 계열 중간 부모 클래스
MDoc : 실제 데이터 저장 클래스
MView : 저장된 데이터를 출력하는 클래스
main() : 프로그램 시작점

*관계를 그림처럼 보면
* 
MObject
 ├─ MDataObject
 │   └─ MDoc
 └─ MView

 ///////////////////////////////////////////////////////////////////////
 1. MObject 역할

모든 객체의 가장 기본 부모 역할이야.

헤더
class MObject
{
public:
    virtual int Update();
};

-의미
virtual은 자식 클래스에서 같은 이름으로 다시 만들 수 있다는 뜻이야.
지금은 Update()가 특별한 기능은 없고, 기본 틀만 있는 상태야

cpp
int MObject::Update()
{
    int result = 0;
    return result;
}
지금은 그냥 0을 돌려주는 기본 함수야.

////////////////////////////////////////////////////////////////////////////
2. MDataObject 역할

MObject를 상속받는 데이터 계열용 중간 클래스야.

헤더
class MDataObject : public MObject
{
public:
    MDataObject();
};
의미

현재 상태에서는 생성자만 있고 실질 기능은 거의 없어.
하지만 구조상 MDoc가 바로 MObject를 상속받지 않고,
한 단계 중간 부모를 두는 형태야.

즉,

MObject : 최상위 부모
MDataObject : 데이터 관련 부모
MDoc : 실제 데이터 클래스


/////////////////////////////////////////////////////

3. MDoc

이 클래스가 가장 중요해.
실제로 구구단에 사용할 숫자들(단) 을 저장하는 역할을 해.

예를 들어:

doc.Add(3);
doc.Add(5);
doc.Add(2);

이렇게 하면
3단, 5단, 2단을 저장해두는 거야.


MDoc의 멤버 변수

int m_GuGuArray[MAX_GUGU_ARRAY];
int m_count;
m_GuGuArray

구구단 숫자들을 저장하는 배열이야.

m_count: 현재 배열에 몇 개 들어 있는지 저장해.

생성자 MDoc::MDoc()

MDoc::MDoc()
{
    m_count = 0;

    for (int i = 0; i < MAX_GUGU_ARRAY; ++i)
    {
        m_GuGuArray[i] = 0;
    }
}
역할

객체가 만들어질 때 자동으로 실행돼.
생성자가 실행돼서

1. 현재 개수 m_count = 0
2. 배열 전체를 0으로 초기화

즉, 빈 창고를 만드는 거라고 보면 돼


Add(int _value)

int MDoc::Add(int _value)
{
    int count = 0;

    if (m_count < 0 || m_count >= MAX_GUGU_ARRAY)
    {
        count = m_count;
        return count;
    }
    else
    {
        m_GuGuArray[m_count] = _value;
        m_count += 1;

        printf("m_GuGuArray[%d] m_Count[%d]\n", m_GuGuArray[m_count - 1], m_count);
    }

    count = m_count;
    return count;
}
역할 : 배열에 단 값을 하나 추가하는 함수야.
//////////////////////////////////////////////////////////////
GetArrayValueByIndex(int _index)

int MDoc::GetArrayValueByIndex(int _index)
{
    if (_index < 0 || _index >= m_count)
    {
        return -1;
    }

    return m_GuGuArray[_index];
}
역할

특정 위치의 값을 꺼내오는 함수야.

예:

GetArrayValueByIndex(0) → 3
GetArrayValueByIndex(1) → 5
GetArrayValueByIndex(2) → 2

즉, 저장해둔 단 값을 하나씩 꺼낼 수 있게 해.
*/