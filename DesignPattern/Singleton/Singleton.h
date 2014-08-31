#pragma once
class Singleton
{
public:
	Singleton(void);
	virtual ~Singleton(void);

	// static function, interface for global access
	static Singleton* GetInstancePtr();
	static Singleton  GetInstance();

	void Test();

private:
	// static member, the only instance
	static Singleton* m_pStatic; 
};

