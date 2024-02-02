# 0x1A. C - Hash tables

## Resouces
- [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
- [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)

## Learning Objectives
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Tasks

### Task 0: >>> ht = {}
Write a function that creates a hash table.

- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
	- where `size` is the size of the array
- Returns a pointer to the newly created hash table
- If something went wrong, your function should return `NULL`

### Task 1: djb2
Write a hash function implementing the djb2 algorithm.

- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
- You are allowed to copy and paste the function from [this page](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

### Task 2: key -> index
Write a function that gives you the index of a key.

- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
	- where `key` is the key
	- and size is the size of the array of the hash table
- This function should use the `hash_djb2` function that you wrote earlier
- Returns the index at which the key/value pair should be stored in the array of the hash table
- You will have to use this hash function for all the next tasks

### Task 3: >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.

- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
	- Where `ht` is the hash table you want to add or update the key/value to
	- `key` is the `key`. `key` can not be an empty string
	- and `value` is the `value` associated with the key. `value` must be duplicated. `value` can be an empty string
- Returns: `1` if it succeeded, `0` otherwise
- In case of collision, add the new node at the beginning of the list

If you want to test for collisions, here are some strings that collide using the djb2 algorithm:

**hetairas** collides with **mentioner**
**heliotropes** collides with **neurospora**
**depravement** collides with **serafins**
**stylist** collides with **subgenera**
**joyful** collides with **synaphea**
**redescribed** collides with **urites**
**dram** collides with **vivency**

### Task 4: >>> ht['betty']
Write a function that retrieves a value associated with a key.

- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
	- where `ht` is the hash table you want to look into
	- and `key` is the key you are looking for
- Returns the value associated with the element, or `NULL` if `key` couldn't be found

### Task 5: >>> print(ht)
Write a function that prints a hash table.

- Prototype: `void hash_table_print(const hash_table_t *ht);`
	- where ht is the hash table
- You should print the key/value in the order that they appear in the array of hash table
	- Order: array, list
- Format: see example
- If `ht` is NULL, don't print anything

### Task 6: >>> del ht
Write a function that deletes a hash table.

- Prototype: `void hash_table_delete(hash_table_t *ht);`
	- where `ht` is the hash table

### Task 7: $ht['Betty'] = 'Cool' **advanced**
In PHP, hash tables are ordered. Wait... WAT? How is this even possible?
[Dog saying whaaaat](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240201%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240201T232718Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=0ff91a001fb16781cf3869ac9470db2b2303a0f6dcdf1db9a646e0d6e0525ad4)

**Before you continue,** please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?

For this task, please:

- Read [PHP Internals Book: HashTable](https://www.phpinternalsbook.com/php5/hashtables/basic_structure.html)
- Use the same hash function
- Use these data structures:...

Rewrite the previous functions using these data structures:

- `shash_table_t *shash_table_create(unsigned long int size);`
- `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
	- The key/value pair should be inserted in the sorted list at the right place
	- Note that here we do not want to do exactly like `PHP`: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.
- `char *shash_table_get(const shash_table_t *ht, const char *key);`
- `void shash_table_print(const shash_table_t *ht);`
	- Should print the hash table using the sorted linked list
- `void shash_table_print_rev(const shash_table_t *ht);`
	- Should print the hash tables key/value pairs in reverse order using the sorted linked list
- `void shash_table_delete(shash_table_t *ht);`
- You are allowed to have more than 5 functions in your file
[PHP Mascot](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/253/php.png)
