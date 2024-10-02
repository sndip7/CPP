Q.  what is smart pointer ?

    Smart pointer manage the lifetime of dynamically allocated
    object automatically , Ensuring that the memory is properly
    Deallocated when it is no longer needed ( when it goes out of scope).

    Smart pointer are pointer like object but the are automatically
    Free the dynamically allocated memory ( when the object is destroyed )

    It is defined in <memory> header file .

Q.  why we need smart pointer ?

    Without smart pointer we have to explicitly release ( delete)
    The dynamically allocated memory . some time we forgot to release
    The resources then it cause to memory leak, dangling pointer 

Q. Advantage of smart pointer ?

    Smart pointer helping prevent memory leak and dangling pointer.
    The programmer does not need to worry about any memory leaks 
    And dangling pointer 

Types of Smart Pointer

1. auto pointer -> not in use
2. unique pointer (unique_ptr)
3. shared pointer ( shared_ptr)
4. weak pointer (weak_ptr)
