#include "nituml.types.0.h"
const struct types resolution_table_standard__NativeArray__nit__Prod = {
0, /* dummy */
{
&type_nit__Prod, /* E: Prod */
&type_standard__NativeArray__nit__Prod, /* NativeArray[E]: NativeArray[Prod] */
&type_standard__Array__nit__Prod, /* Array[E]: Array[Prod] */
}
};
/* runtime type ArrayIterator[Prod] */
const struct type type_standard__array__ArrayIterator__nit__Prod = {
-1, /*CAST DEAD*/
"ArrayIterator[Prod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__Prod,
2,
{
0, /* Object */
626, /* ArrayIterator[Prod] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__Prod = {
0, /* dummy */
{
&type_standard__Array__nit__Prod, /* Array[E]: Array[Prod] */
&type_standard__AbstractArrayRead__nit__Prod, /* AbstractArrayRead[E]: AbstractArrayRead[Prod] */
}
};
/* runtime type HashMapKeys[MClass, MClassType] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MClass__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MClass__nit__MClassType,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
162, /* Collection[MClass] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1576, /* HashMapKeys[MClass, MClassType] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MClass__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__nit__MClassType, /* HashMap[K, V]: HashMap[MClass, MClassType] */
&type_nit__MClass, /* K: MClass */
&type_nit__MClass, /* E: MClass */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__MapKeysIterator__nit__MClass__nit__MClassType, /* MapKeysIterator[K, V]: MapKeysIterator[MClass, MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* E: MClass */
}
};
/* runtime type HashMapValues[MClass, MClassType] */
const struct type type_standard__hash_collection__HashMapValues__nit__MClass__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MClass__nit__MClassType,
9,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
163, /* Collection[MClassType] */
168, /* Collection[MType] */
219, /* Collection[Object] */
254, /* Collection[nullable MType] */
1829, /* HashMapValues[MClass, MClassType] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MClass__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__nit__MClassType, /* HashMap[K, V]: HashMap[MClass, MClassType] */
&type_nit__MClassType, /* V: MClassType */
&type_nit__MClassType, /* E: MClassType */
&type_standard__Collection__nit__MClassType, /* Collection[E]: Collection[MClassType] */
&type_standard__Array__nit__MClassType, /* Array[E]: Array[MClassType] */
&type_standard__MapValuesIterator__nit__MClass__nit__MClassType, /* MapValuesIterator[K, V]: MapValuesIterator[MClass, MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassType, /* E: MClassType */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, MClassType]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType = {
627,
"NativeArray[nullable HashMapNode[MClass, MClassType]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType,
2,
{
0, /* Object */
627, /* NativeArray[nullable HashMapNode[MClass, MClassType]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType, /* E: nullable HashMapNode[MClass, MClassType] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, MClassType]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MClass, MClassType]] not a live type) */
}
};
/* runtime type HashMapIterator[MClass, MClassType] */
const struct type type_standard__HashMapIterator__nit__MClass__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MClass__nit__MClassType,
3,
{
0, /* Object */
391, /* MapIterator[MClass, MClassType] */
1338, /* HashMapIterator[MClass, MClassType] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MClass__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__nit__MClassType, /* HashMap[K, V]: HashMap[MClass, MClassType] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType, /* nullable HashMapNode[K, V]: nullable HashMapNode[MClass, MClassType] */
}
};
/* runtime type HashMapNode[MClass, MClassType] */
const struct type type_standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType = {
1339,
"HashMapNode[MClass, MClassType]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType,
3,
{
0, /* Object */
187, /* nullable HashMapNode[MClass, MClassType] */
1339, /* HashMapNode[MClass, MClassType] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType = {
0, /* dummy */
{
&type_nit__MClassType, /* V: MClassType */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType, /* nullable N: nullable HashMapNode[MClass, MClassType] */
}
};
/* runtime type ArrayMapKeys[MClass, AType] */
const struct type type_standard__array__ArrayMapKeys__nit__MClass__nit__AType = {
-1, /*CAST DEAD*/
"ArrayMapKeys[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayMapKeys__nit__MClass__nit__AType,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
162, /* Collection[MClass] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1577, /* ArrayMapKeys[MClass, AType] */
},
};
const struct types resolution_table_standard__array__ArrayMapKeys__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__ArrayMap__nit__MClass__nit__AType, /* ArrayMap[K, E]: ArrayMap[MClass, AType] */
&type_nit__MClass, /* K: MClass */
&type_nit__MClass, /* E: MClass */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__MapKeysIterator__nit__MClass__nit__AType, /* MapKeysIterator[K, E]: MapKeysIterator[MClass, AType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* E: MClass */
}
};
/* runtime type ArrayMapValues[MClass, AType] */
const struct type type_standard__array__ArrayMapValues__nit__MClass__nit__AType = {
-1, /*CAST DEAD*/
"ArrayMapValues[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayMapValues__nit__MClass__nit__AType,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
250, /* Collection[AType] */
-1, /* empty */
236, /* Collection[Prod] */
219, /* Collection[Object] */
1773, /* ArrayMapValues[MClass, AType] */
},
};
const struct types resolution_table_standard__array__ArrayMapValues__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__ArrayMap__nit__MClass__nit__AType, /* ArrayMap[K, E]: ArrayMap[MClass, AType] */
&type_standard__MapValuesIterator__nit__MClass__nit__AType, /* MapValuesIterator[K, E]: MapValuesIterator[MClass, AType] */
&type_nit__AType, /* E: AType */
&type_standard__Collection__nit__AType, /* Collection[E]: Collection[AType] */
&type_standard__Array__nit__AType, /* Array[E]: Array[AType] */
&type_nit__AType, /* E: AType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__AType, /* E: AType */
}
};
/* runtime type Array[Couple[MClass, AType]] */
const struct type type_standard__Array__standard__Couple__nit__MClass__nit__AType = {
1864,
"Array[Couple[MClass, AType]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Couple__nit__MClass__nit__AType,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
256, /* Collection[Couple[MClass, AType]] */
332, /* AbstractArrayRead[Couple[MClass, AType]] */
466, /* AbstractArray[Couple[MClass, AType]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1864, /* Array[Couple[MClass, AType]] */
},
};
const struct types resolution_table_standard__Array__standard__Couple__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__Collection__standard__Couple__nit__MClass__nit__AType, /* Collection[E]: Collection[Couple[MClass, AType]] */
&type_standard__Array__standard__Couple__nit__MClass__nit__AType, /* Array[E]: Array[Couple[MClass, AType]] */
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__Collection__standard__Couple__nit__MClass__nit__AType, /* Collection[E]: Collection[Couple[MClass, AType]] */
&type_standard__Array__standard__Couple__nit__MClass__nit__AType, /* Array[E]: Array[Couple[MClass, AType]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Couple[MClass, AType]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Couple[MClass, AType]] not a live type) */
&type_standard__Collection__standard__Couple__nit__MClass__nit__AType, /* Collection[E]: Collection[Couple[MClass, AType]] */
NULL, /* empty (RandQueue[E]: RandQueue[Couple[MClass, AType]] not a live type) */
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__Collection__standard__Couple__nit__MClass__nit__AType, /* Collection[E]: Collection[Couple[MClass, AType]] */
&type_standard__Array__standard__Couple__nit__MClass__nit__AType, /* Array[E]: Array[Couple[MClass, AType]] */
&type_standard__NativeArray__standard__Couple__nit__MClass__nit__AType, /* NativeArray[E]: NativeArray[Couple[MClass, AType]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Couple[MClass, AType]] not a live type) */
&type_standard__Array__standard__Couple__nit__MClass__nit__AType, /* SELF: Array[Couple[MClass, AType]] */
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__Collection__standard__Couple__nit__MClass__nit__AType, /* Collection[E]: Collection[Couple[MClass, AType]] */
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__Array__standard__Couple__nit__MClass__nit__AType, /* Array[E]: Array[Couple[MClass, AType]] */
&type_standard__AbstractArray__standard__Couple__nit__MClass__nit__AType, /* AbstractArray[E]: AbstractArray[Couple[MClass, AType]] */
&type_standard__array__ArrayIterator__standard__Couple__nit__MClass__nit__AType, /* ArrayIterator[E]: ArrayIterator[Couple[MClass, AType]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Couple[MClass, AType]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Couple[MClass, AType]] not a live type) */
}
};
/* runtime type CoupleMapIterator[MClass, AType] */
const struct type type_standard__abstract_collection__CoupleMapIterator__nit__MClass__nit__AType = {
-1, /*CAST DEAD*/
"CoupleMapIterator[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__abstract_collection__CoupleMapIterator__nit__MClass__nit__AType,
3,
{
0, /* Object */
392, /* MapIterator[MClass, AType] */
1340, /* CoupleMapIterator[MClass, AType] */
},
};
const struct types resolution_table_standard__abstract_collection__CoupleMapIterator__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__Iterator__standard__Couple__nit__MClass__nit__AType, /* Iterator[Couple[K, V]]: Iterator[Couple[MClass, AType]] */
}
};
/* runtime type Couple[MClass, AType] */
const struct type type_standard__Couple__nit__MClass__nit__AType = {
628,
"Couple[MClass, AType]", /* class_name_string */
1,
0,
&resolution_table_standard__Couple__nit__MClass__nit__AType,
2,
{
0, /* Object */
628, /* Couple[MClass, AType] */
},
};
const struct types resolution_table_standard__Couple__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_nit__MClass, /* F: MClass */
&type_nit__AType, /* S: AType */
}
};
/* runtime type NativeArray[AMethPropdef] */
const struct type type_standard__NativeArray__nit__AMethPropdef = {
1774,
"NativeArray[AMethPropdef]", /* class_name_string */
4,
0,
&resolution_table_standard__NativeArray__nit__AMethPropdef,
5,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1607, /* NativeArray[APropdef] */
1774, /* NativeArray[AMethPropdef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AMethPropdef = {
0, /* dummy */
{
&type_nit__AMethPropdef, /* E: AMethPropdef */
&type_standard__NativeArray__nit__AMethPropdef, /* NativeArray[E]: NativeArray[AMethPropdef] */
&type_standard__Array__nit__AMethPropdef, /* Array[E]: Array[AMethPropdef] */
}
};
/* runtime type ArrayIterator[AMethPropdef] */
const struct type type_standard__array__ArrayIterator__nit__AMethPropdef = {
-1, /*CAST DEAD*/
"ArrayIterator[AMethPropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AMethPropdef,
2,
{
0, /* Object */
629, /* ArrayIterator[AMethPropdef] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AMethPropdef = {
0, /* dummy */
{
&type_standard__Array__nit__AMethPropdef, /* Array[E]: Array[AMethPropdef] */
&type_standard__AbstractArrayRead__nit__AMethPropdef, /* AbstractArrayRead[E]: AbstractArrayRead[AMethPropdef] */
}
};
/* runtime type NativeArray[MType] */
const struct type type_standard__NativeArray__nit__MType = {
1578,
"NativeArray[MType]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__MType,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
663, /* NativeArray[nullable MType] */
1578, /* NativeArray[MType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MType = {
0, /* dummy */
{
&type_nit__MType, /* E: MType */
&type_standard__NativeArray__nit__MType, /* NativeArray[E]: NativeArray[MType] */
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
}
};
/* runtime type ArrayIterator[MType] */
const struct type type_standard__array__ArrayIterator__nit__MType = {
630,
"ArrayIterator[MType]", /* class_name_string */
1,
0,
&resolution_table_standard__array__ArrayIterator__nit__MType,
2,
{
0, /* Object */
630, /* ArrayIterator[MType] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
&type_standard__AbstractArrayRead__nit__MType, /* AbstractArrayRead[E]: AbstractArrayRead[MType] */
}
};
/* runtime type HashMapKeys[MModule, Set[MClassDef]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClassDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClassDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1579, /* HashMapKeys[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef, /* HashMap[K, V]: HashMap[MModule, Set[MClassDef]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClassDef, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, Set[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, Set[MClassDef]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClassDef = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClassDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
272, /* Collection[Set[MClassDef]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1580, /* HashMapValues[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef, /* HashMap[K, V]: HashMap[MModule, Set[MClassDef]] */
&type_standard__Set__nit__MClassDef, /* V: Set[MClassDef] */
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__Collection__standard__Set__nit__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
&type_standard__Array__standard__Set__nit__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClassDef, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, Set[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef = {
631,
"NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef,
2,
{
0, /* Object */
631, /* NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef, /* E: nullable HashMapNode[MModule, Set[MClassDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, Set[MClassDef]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, Set[MClassDef]] */
const struct type type_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClassDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClassDef,
3,
{
0, /* Object */
393, /* MapIterator[MModule, Set[MClassDef]] */
1341, /* HashMapIterator[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef, /* HashMap[K, V]: HashMap[MModule, Set[MClassDef]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, Set[MClassDef]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClassDef]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef = {
1342,
"HashMapNode[MModule, Set[MClassDef]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef,
3,
{
0, /* Object */
188, /* nullable HashMapNode[MModule, Set[MClassDef]] */
1342, /* HashMapNode[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Set__nit__MClassDef, /* V: Set[MClassDef] */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef, /* nullable N: nullable HashMapNode[MModule, Set[MClassDef]] */
}
};
/* runtime type HashMapKeys[MModule, Set[MClass]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClass = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClass,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1581, /* HashMapKeys[MModule, Set[MClass]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClass, /* HashMap[K, V]: HashMap[MModule, Set[MClass]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClass, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, Set[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, Set[MClass]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClass = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClass,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
273, /* Collection[Set[MClass]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1582, /* HashMapValues[MModule, Set[MClass]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClass, /* HashMap[K, V]: HashMap[MModule, Set[MClass]] */
&type_standard__Set__nit__MClass, /* V: Set[MClass] */
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__Collection__standard__Set__nit__MClass, /* Collection[E]: Collection[Set[MClass]] */
&type_standard__Array__standard__Set__nit__MClass, /* Array[E]: Array[Set[MClass]] */
&type_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClass, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, Set[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass = {
632,
"NativeArray[nullable HashMapNode[MModule, Set[MClass]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass,
2,
{
0, /* Object */
632, /* NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass, /* E: nullable HashMapNode[MModule, Set[MClass]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, Set[MClass]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, Set[MClass]] */
const struct type type_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClass = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClass,
3,
{
0, /* Object */
394, /* MapIterator[MModule, Set[MClass]] */
1343, /* HashMapIterator[MModule, Set[MClass]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClass, /* HashMap[K, V]: HashMap[MModule, Set[MClass]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, Set[MClass]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClass]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass = {
1344,
"HashMapNode[MModule, Set[MClass]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass,
3,
{
0, /* Object */
189, /* nullable HashMapNode[MModule, Set[MClass]] */
1344, /* HashMapNode[MModule, Set[MClass]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__Set__nit__MClass, /* V: Set[MClass] */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass, /* nullable N: nullable HashMapNode[MModule, Set[MClass]] */
}
};
/* runtime type HashMapKeys[MModule, Set[MClassType]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClassType,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1583, /* HashMapKeys[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassType, /* HashMap[K, V]: HashMap[MModule, Set[MClassType]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClassType, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, Set[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, Set[MClassType]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClassType,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
274, /* Collection[Set[MClassType]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1584, /* HashMapValues[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassType, /* HashMap[K, V]: HashMap[MModule, Set[MClassType]] */
&type_standard__Set__nit__MClassType, /* V: Set[MClassType] */
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__Collection__standard__Set__nit__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
&type_standard__Array__standard__Set__nit__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClassType, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, Set[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType = {
633,
"NativeArray[nullable HashMapNode[MModule, Set[MClassType]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType,
2,
{
0, /* Object */
633, /* NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType, /* E: nullable HashMapNode[MModule, Set[MClassType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, Set[MClassType]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, Set[MClassType]] */
const struct type type_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClassType,
3,
{
0, /* Object */
395, /* MapIterator[MModule, Set[MClassType]] */
1345, /* HashMapIterator[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassType, /* HashMap[K, V]: HashMap[MModule, Set[MClassType]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, Set[MClassType]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClassType]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType = {
1346,
"HashMapNode[MModule, Set[MClassType]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType,
3,
{
0, /* Object */
190, /* nullable HashMapNode[MModule, Set[MClassType]] */
1346, /* HashMapNode[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__Set__nit__MClassType, /* V: Set[MClassType] */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType, /* nullable N: nullable HashMapNode[MModule, Set[MClassType]] */
}
};
/* runtime type NativeArray[ReduceAction] */
const struct type type_standard__NativeArray__nit__parser_work__ReduceAction = {
1347,
"NativeArray[ReduceAction]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__parser_work__ReduceAction,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1347, /* NativeArray[ReduceAction] */
},
};
const struct types resolution_table_standard__NativeArray__nit__parser_work__ReduceAction = {
0, /* dummy */
{
&type_nit__parser_work__ReduceAction, /* E: ReduceAction */
&type_standard__NativeArray__nit__parser_work__ReduceAction, /* NativeArray[E]: NativeArray[ReduceAction] */
&type_standard__Array__nit__parser_work__ReduceAction, /* Array[E]: Array[ReduceAction] */
}
};
/* runtime type ArrayIterator[ReduceAction] */
const struct type type_standard__array__ArrayIterator__nit__parser_work__ReduceAction = {
-1, /*CAST DEAD*/
"ArrayIterator[ReduceAction]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__parser_work__ReduceAction,
2,
{
0, /* Object */
634, /* ArrayIterator[ReduceAction] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__parser_work__ReduceAction = {
0, /* dummy */
{
&type_standard__Array__nit__parser_work__ReduceAction, /* Array[E]: Array[ReduceAction] */
&type_standard__AbstractArrayRead__nit__parser_work__ReduceAction, /* AbstractArrayRead[E]: AbstractArrayRead[ReduceAction] */
}
};
/* runtime type Array[TComment] */
const struct type type_standard__Array__nit__TComment = {
1905,
"Array[TComment]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__TComment,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
240, /* Collection[TComment] */
252, /* Collection[Token] */
333, /* AbstractArrayRead[TComment] */
219, /* Collection[Object] */
344, /* AbstractArrayRead[Token] */
467, /* AbstractArray[TComment] */
291, /* AbstractArrayRead[Object] */
478, /* AbstractArray[Token] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1866, /* Array[Token] */
1905, /* Array[TComment] */
},
};
const struct types resolution_table_standard__Array__nit__TComment = {
0, /* dummy */
{
&type_nit__TComment, /* E: TComment */
&type_nit__TComment, /* E: TComment */
&type_nit__TComment, /* E: TComment */
&type_standard__Collection__nit__TComment, /* Collection[E]: Collection[TComment] */
&type_standard__Array__nit__TComment, /* Array[E]: Array[TComment] */
&type_nit__TComment, /* E: TComment */
&type_standard__Collection__nit__TComment, /* Collection[E]: Collection[TComment] */
&type_standard__Array__nit__TComment, /* Array[E]: Array[TComment] */
NULL, /* empty (LifoQueue[E]: LifoQueue[TComment] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[TComment] not a live type) */
&type_standard__Collection__nit__TComment, /* Collection[E]: Collection[TComment] */
NULL, /* empty (RandQueue[E]: RandQueue[TComment] not a live type) */
&type_nit__TComment, /* E: TComment */
&type_standard__Collection__nit__TComment, /* Collection[E]: Collection[TComment] */
&type_standard__Array__nit__TComment, /* Array[E]: Array[TComment] */
&type_standard__NativeArray__nit__TComment, /* NativeArray[E]: NativeArray[TComment] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[TComment] not a live type) */
&type_standard__Array__nit__TComment, /* SELF: Array[TComment] */
&type_nit__TComment, /* E: TComment */
&type_standard__Collection__nit__TComment, /* Collection[E]: Collection[TComment] */
&type_nit__TComment, /* E: TComment */
&type_standard__Array__nit__TComment, /* Array[E]: Array[TComment] */
&type_standard__AbstractArray__nit__TComment, /* AbstractArray[E]: AbstractArray[TComment] */
&type_standard__array__ArrayIterator__nit__TComment, /* ArrayIterator[E]: ArrayIterator[TComment] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[TComment] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[TComment] not a live type) */
}
};
/* runtime type NativeArray[AClassdef] */
const struct type type_standard__NativeArray__nit__AClassdef = {
1585,
"NativeArray[AClassdef]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__AClassdef,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1585, /* NativeArray[AClassdef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AClassdef = {
0, /* dummy */
{
&type_nit__AClassdef, /* E: AClassdef */
&type_standard__NativeArray__nit__AClassdef, /* NativeArray[E]: NativeArray[AClassdef] */
&type_standard__Array__nit__AClassdef, /* Array[E]: Array[AClassdef] */
}
};
/* runtime type ArrayIterator[AClassdef] */
const struct type type_standard__array__ArrayIterator__nit__AClassdef = {
-1, /*CAST DEAD*/
"ArrayIterator[AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AClassdef,
2,
{
0, /* Object */
635, /* ArrayIterator[AClassdef] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AClassdef = {
0, /* dummy */
{
&type_standard__Array__nit__AClassdef, /* Array[E]: Array[AClassdef] */
&type_standard__AbstractArrayRead__nit__AClassdef, /* AbstractArrayRead[E]: AbstractArrayRead[AClassdef] */
}
};
/* runtime type Array[AFormaldef] */
const struct type type_standard__Array__nit__AFormaldef = {
1906,
"Array[AFormaldef]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__AFormaldef,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
241, /* Collection[AFormaldef] */
334, /* AbstractArrayRead[AFormaldef] */
236, /* Collection[Prod] */
219, /* Collection[Object] */
468, /* AbstractArray[AFormaldef] */
312, /* AbstractArrayRead[Prod] */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
446, /* AbstractArray[Prod] */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1858, /* Array[Prod] */
1906, /* Array[AFormaldef] */
},
};
const struct types resolution_table_standard__Array__nit__AFormaldef = {
0, /* dummy */
{
&type_nit__AFormaldef, /* E: AFormaldef */
&type_nit__AFormaldef, /* E: AFormaldef */
&type_nit__AFormaldef, /* E: AFormaldef */
&type_standard__Collection__nit__AFormaldef, /* Collection[E]: Collection[AFormaldef] */
&type_standard__Array__nit__AFormaldef, /* Array[E]: Array[AFormaldef] */
&type_nit__AFormaldef, /* E: AFormaldef */
&type_standard__Collection__nit__AFormaldef, /* Collection[E]: Collection[AFormaldef] */
&type_standard__Array__nit__AFormaldef, /* Array[E]: Array[AFormaldef] */
NULL, /* empty (LifoQueue[E]: LifoQueue[AFormaldef] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[AFormaldef] not a live type) */
&type_standard__Collection__nit__AFormaldef, /* Collection[E]: Collection[AFormaldef] */
NULL, /* empty (RandQueue[E]: RandQueue[AFormaldef] not a live type) */
&type_nit__AFormaldef, /* E: AFormaldef */
&type_standard__Collection__nit__AFormaldef, /* Collection[E]: Collection[AFormaldef] */
&type_standard__Array__nit__AFormaldef, /* Array[E]: Array[AFormaldef] */
&type_standard__NativeArray__nit__AFormaldef, /* NativeArray[E]: NativeArray[AFormaldef] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[AFormaldef] not a live type) */
&type_standard__Array__nit__AFormaldef, /* SELF: Array[AFormaldef] */
&type_nit__AFormaldef, /* E: AFormaldef */
&type_standard__Collection__nit__AFormaldef, /* Collection[E]: Collection[AFormaldef] */
&type_nit__AFormaldef, /* E: AFormaldef */
&type_standard__Array__nit__AFormaldef, /* Array[E]: Array[AFormaldef] */
&type_standard__AbstractArray__nit__AFormaldef, /* AbstractArray[E]: AbstractArray[AFormaldef] */
&type_standard__array__ArrayIterator__nit__AFormaldef, /* ArrayIterator[E]: ArrayIterator[AFormaldef] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[AFormaldef] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[AFormaldef] not a live type) */
}
};
/* runtime type NativeArray[ASuperPropdef] */
const struct type type_standard__NativeArray__nit__ASuperPropdef = {
1775,
"NativeArray[ASuperPropdef]", /* class_name_string */
4,
0,
&resolution_table_standard__NativeArray__nit__ASuperPropdef,
5,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1607, /* NativeArray[APropdef] */
1775, /* NativeArray[ASuperPropdef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__ASuperPropdef = {
0, /* dummy */
{
&type_nit__ASuperPropdef, /* E: ASuperPropdef */
&type_standard__NativeArray__nit__ASuperPropdef, /* NativeArray[E]: NativeArray[ASuperPropdef] */
&type_standard__Array__nit__ASuperPropdef, /* Array[E]: Array[ASuperPropdef] */
}
};
/* runtime type ArrayIterator[ASuperPropdef] */
const struct type type_standard__array__ArrayIterator__nit__ASuperPropdef = {
-1, /*CAST DEAD*/
"ArrayIterator[ASuperPropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__ASuperPropdef,
2,
{
0, /* Object */
636, /* ArrayIterator[ASuperPropdef] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__ASuperPropdef = {
0, /* dummy */
{
&type_standard__Array__nit__ASuperPropdef, /* Array[E]: Array[ASuperPropdef] */
&type_standard__AbstractArrayRead__nit__ASuperPropdef, /* AbstractArrayRead[E]: AbstractArrayRead[ASuperPropdef] */
}
};
/* runtime type Array[MMethodDef] */
const struct type type_standard__Array__nit__MMethodDef = {
1907,
"Array[MMethodDef]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__MMethodDef,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
235, /* Collection[MPropDef] */
257, /* Collection[MMethodDef] */
311, /* AbstractArrayRead[MPropDef] */
219, /* Collection[Object] */
335, /* AbstractArrayRead[MMethodDef] */
445, /* AbstractArray[MPropDef] */
291, /* AbstractArrayRead[Object] */
469, /* AbstractArray[MMethodDef] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1857, /* Array[MPropDef] */
1907, /* Array[MMethodDef] */
},
};
const struct types resolution_table_standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_nit__MMethodDef, /* E: MMethodDef */
&type_nit__MMethodDef, /* E: MMethodDef */
&type_nit__MMethodDef, /* E: MMethodDef */
&type_standard__Collection__nit__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_standard__Array__nit__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_nit__MMethodDef, /* E: MMethodDef */
&type_standard__Collection__nit__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_standard__Array__nit__MMethodDef, /* Array[E]: Array[MMethodDef] */
NULL, /* empty (LifoQueue[E]: LifoQueue[MMethodDef] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[MMethodDef] not a live type) */
&type_standard__Collection__nit__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
NULL, /* empty (RandQueue[E]: RandQueue[MMethodDef] not a live type) */
&type_nit__MMethodDef, /* E: MMethodDef */
&type_standard__Collection__nit__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_standard__Array__nit__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_standard__NativeArray__nit__MMethodDef, /* NativeArray[E]: NativeArray[MMethodDef] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[MMethodDef] not a live type) */
&type_standard__Array__nit__MMethodDef, /* SELF: Array[MMethodDef] */
&type_nit__MMethodDef, /* E: MMethodDef */
&type_standard__Collection__nit__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_nit__MMethodDef, /* E: MMethodDef */
&type_standard__Array__nit__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_standard__AbstractArray__nit__MMethodDef, /* AbstractArray[E]: AbstractArray[MMethodDef] */
&type_standard__array__ArrayIterator__nit__MMethodDef, /* ArrayIterator[E]: ArrayIterator[MMethodDef] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[MMethodDef] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[MMethodDef] not a live type) */
}
};
/* runtime type HashMap2[MModule, MType, Array[MMethodDef]] */
const struct type type_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MMethodDef = {
-1, /*CAST DEAD*/
"HashMap2[MModule, MType, Array[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MMethodDef,
2,
{
0, /* Object */
637, /* HashMap2[MModule, MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K1, HashMap[K2, V]]: HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_nit__MModule, /* K1: MModule */
&type_nit__MType, /* K2: MType */
&type_standard__Array__nit__MMethodDef, /* V: Array[MMethodDef] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K2, V]: HashMap[MType, Array[MMethodDef]] */
}
};
/* runtime type NativeArray[MParameter] */
const struct type type_standard__NativeArray__nit__MParameter = {
1348,
"NativeArray[MParameter]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__MParameter,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1348, /* NativeArray[MParameter] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MParameter = {
0, /* dummy */
{
&type_nit__MParameter, /* E: MParameter */
&type_standard__NativeArray__nit__MParameter, /* NativeArray[E]: NativeArray[MParameter] */
&type_standard__Array__nit__MParameter, /* Array[E]: Array[MParameter] */
}
};
/* runtime type ArrayIterator[MParameter] */
const struct type type_standard__array__ArrayIterator__nit__MParameter = {
-1, /*CAST DEAD*/
"ArrayIterator[MParameter]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MParameter,
2,
{
0, /* Object */
638, /* ArrayIterator[MParameter] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MParameter = {
0, /* dummy */
{
&type_standard__Array__nit__MParameter, /* Array[E]: Array[MParameter] */
&type_standard__AbstractArrayRead__nit__MParameter, /* AbstractArrayRead[E]: AbstractArrayRead[MParameter] */
}
};
/* runtime type Array[Scope] */
const struct type type_standard__Array__nit__scope__Scope = {
1865,
"Array[Scope]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__scope__Scope,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
244, /* Collection[Scope] */
336, /* AbstractArrayRead[Scope] */
470, /* AbstractArray[Scope] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1865, /* Array[Scope] */
},
};
const struct types resolution_table_standard__Array__nit__scope__Scope = {
0, /* dummy */
{
&type_nit__scope__Scope, /* E: Scope */
&type_nit__scope__Scope, /* E: Scope */
&type_nit__scope__Scope, /* E: Scope */
&type_standard__Collection__nit__scope__Scope, /* Collection[E]: Collection[Scope] */
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
&type_nit__scope__Scope, /* E: Scope */
&type_standard__Collection__nit__scope__Scope, /* Collection[E]: Collection[Scope] */
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Scope] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Scope] not a live type) */
&type_standard__Collection__nit__scope__Scope, /* Collection[E]: Collection[Scope] */
NULL, /* empty (RandQueue[E]: RandQueue[Scope] not a live type) */
&type_nit__scope__Scope, /* E: Scope */
&type_standard__Collection__nit__scope__Scope, /* Collection[E]: Collection[Scope] */
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
&type_standard__NativeArray__nit__scope__Scope, /* NativeArray[E]: NativeArray[Scope] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Scope] not a live type) */
&type_standard__Array__nit__scope__Scope, /* SELF: Array[Scope] */
&type_nit__scope__Scope, /* E: Scope */
&type_standard__Collection__nit__scope__Scope, /* Collection[E]: Collection[Scope] */
&type_nit__scope__Scope, /* E: Scope */
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
&type_standard__AbstractArray__nit__scope__Scope, /* AbstractArray[E]: AbstractArray[Scope] */
&type_standard__array__ArrayIterator__nit__scope__Scope, /* ArrayIterator[E]: ArrayIterator[Scope] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Scope] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Scope] not a live type) */
}
};
/* runtime type ListNode[Scope] */
const struct type type_standard__list__ListNode__nit__scope__Scope = {
1830,
"ListNode[Scope]", /* class_name_string */
7,
0,
&resolution_table_standard__list__ListNode__nit__scope__Scope,
8,
{
0, /* Object */
423, /* nullable ListNode[Scope] */
510, /* Container[Scope] */
244, /* Collection[Scope] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1830, /* ListNode[Scope] */
},
};
const struct types resolution_table_standard__list__ListNode__nit__scope__Scope = {
0, /* dummy */
{
&type_nullable__standard__list__ListNode__nit__scope__Scope, /* nullable ListNode[E]: nullable ListNode[Scope] */
&type_nit__scope__Scope, /* E: Scope */
&type_nit__scope__Scope, /* E: Scope */
&type_standard__Collection__nit__scope__Scope, /* Collection[E]: Collection[Scope] */
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
&type_standard__abstract_collection__ContainerIterator__nit__scope__Scope, /* ContainerIterator[E]: ContainerIterator[Scope] */
}
};
/* runtime type ListIterator[Scope] */
const struct type type_standard__ListIterator__nit__scope__Scope = {
-1, /*CAST DEAD*/
"ListIterator[Scope]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__ListIterator__nit__scope__Scope,
2,
{
0, /* Object */
639, /* ListIterator[Scope] */
},
};
const struct types resolution_table_standard__ListIterator__nit__scope__Scope = {
0, /* dummy */
{
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
&type_nit__scope__Scope, /* E: Scope */
&type_standard__List__nit__scope__Scope, /* List[E]: List[Scope] */
&type_nullable__standard__list__ListNode__nit__scope__Scope, /* nullable ListNode[E]: nullable ListNode[Scope] */
}
};
/* runtime type NativeArray[FlowContext] */
const struct type type_standard__NativeArray__nit__FlowContext = {
1349,
"NativeArray[FlowContext]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__FlowContext,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1349, /* NativeArray[FlowContext] */
},
};
const struct types resolution_table_standard__NativeArray__nit__FlowContext = {
0, /* dummy */
{
&type_nit__FlowContext, /* E: FlowContext */
&type_standard__NativeArray__nit__FlowContext, /* NativeArray[E]: NativeArray[FlowContext] */
&type_standard__Array__nit__FlowContext, /* Array[E]: Array[FlowContext] */
}
};
/* runtime type ArrayIterator[FlowContext] */
const struct type type_standard__array__ArrayIterator__nit__FlowContext = {
-1, /*CAST DEAD*/
"ArrayIterator[FlowContext]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__FlowContext,
2,
{
0, /* Object */
640, /* ArrayIterator[FlowContext] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__FlowContext = {
0, /* dummy */
{
&type_standard__Array__nit__FlowContext, /* Array[E]: Array[FlowContext] */
&type_standard__AbstractArrayRead__nit__FlowContext, /* AbstractArrayRead[E]: AbstractArrayRead[FlowContext] */
}
};
/* runtime type HashSetIterator[Variable] */
const struct type type_standard__hash_collection__HashSetIterator__nit__Variable = {
-1, /*CAST DEAD*/
"HashSetIterator[Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashSetIterator__nit__Variable,
2,
{
0, /* Object */
641, /* HashSetIterator[Variable] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetIterator__nit__Variable = {
0, /* dummy */
{
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
&type_standard__HashSet__nit__Variable, /* HashSet[E]: HashSet[Variable] */
&type_nullable__standard__hash_collection__HashSetNode__nit__Variable, /* nullable HashSetNode[E]: nullable HashSetNode[Variable] */
}
};
/* runtime type NativeArray[nullable HashSetNode[Variable]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Variable = {
642,
"NativeArray[nullable HashSetNode[Variable]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Variable,
2,
{
0, /* Object */
642, /* NativeArray[nullable HashSetNode[Variable]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Variable = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashSetNode__nit__Variable, /* E: nullable HashSetNode[Variable] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Variable, /* NativeArray[E]: NativeArray[nullable HashSetNode[Variable]] */
NULL, /* empty (Array[E]: Array[nullable HashSetNode[Variable]] not a live type) */
}
};
/* runtime type HashSetNode[Variable] */
const struct type type_standard__hash_collection__HashSetNode__nit__Variable = {
1350,
"HashSetNode[Variable]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashSetNode__nit__Variable,
3,
{
0, /* Object */
191, /* nullable HashSetNode[Variable] */
1350, /* HashSetNode[Variable] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetNode__nit__Variable = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__Variable, /* K: Variable */
&type_nullable__standard__hash_collection__HashSetNode__nit__Variable, /* nullable N: nullable HashSetNode[Variable] */
}
};
/* runtime type HashMapKeys[Variable, nullable MType] */
const struct type type_standard__hash_collection__HashMapKeys__nit__Variable__nullable__nit__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[Variable, nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__Variable__nullable__nit__MType,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
160, /* Collection[Variable] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1586, /* HashMapKeys[Variable, nullable MType] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__Variable__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__HashMap__nit__Variable__nullable__nit__MType, /* HashMap[K, V]: HashMap[Variable, nullable MType] */
&type_nit__Variable, /* K: Variable */
&type_nit__Variable, /* E: Variable */
&type_standard__Collection__nit__Variable, /* Collection[E]: Collection[Variable] */
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
&type_standard__MapKeysIterator__nit__Variable__nullable__nit__MType, /* MapKeysIterator[K, V]: MapKeysIterator[Variable, nullable MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__Variable, /* E: Variable */
}
};
/* runtime type HashMapValues[Variable, nullable MType] */
const struct type type_standard__hash_collection__HashMapValues__nit__Variable__nullable__nit__MType = {
-1, /*CAST DEAD*/
"HashMapValues[Variable, nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__Variable__nullable__nit__MType,
9,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
254, /* Collection[nullable MType] */
1351, /* HashMapValues[Variable, nullable MType] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__Variable__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__HashMap__nit__Variable__nullable__nit__MType, /* HashMap[K, V]: HashMap[Variable, nullable MType] */
&type_nullable__nit__MType, /* V: nullable MType */
&type_nullable__nit__MType, /* E: nullable MType */
&type_standard__Collection__nullable__nit__MType, /* Collection[E]: Collection[nullable MType] */
&type_standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable MType] */
&type_standard__MapValuesIterator__nit__Variable__nullable__nit__MType, /* MapValuesIterator[K, V]: MapValuesIterator[Variable, nullable MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable__nit__MType, /* E: nullable MType */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, nullable MType]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType = {
643,
"NativeArray[nullable HashMapNode[Variable, nullable MType]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType,
2,
{
0, /* Object */
643, /* NativeArray[nullable HashMapNode[Variable, nullable MType]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType, /* E: nullable HashMapNode[Variable, nullable MType] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[Variable, nullable MType]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[Variable, nullable MType]] not a live type) */
}
};
/* runtime type HashMapIterator[Variable, nullable MType] */
const struct type type_standard__HashMapIterator__nit__Variable__nullable__nit__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[Variable, nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__Variable__nullable__nit__MType,
3,
{
0, /* Object */
396, /* MapIterator[Variable, nullable MType] */
1352, /* HashMapIterator[Variable, nullable MType] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__Variable__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__HashMap__nit__Variable__nullable__nit__MType, /* HashMap[K, V]: HashMap[Variable, nullable MType] */
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType, /* nullable HashMapNode[K, V]: nullable HashMapNode[Variable, nullable MType] */
}
};
/* runtime type HashMapNode[Variable, nullable MType] */
const struct type type_standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType = {
1353,
"HashMapNode[Variable, nullable MType]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType,
3,
{
0, /* Object */
192, /* nullable HashMapNode[Variable, nullable MType] */
1353, /* HashMapNode[Variable, nullable MType] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__nit__MType, /* V: nullable MType */
&type_nit__Variable, /* K: Variable */
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType, /* nullable N: nullable HashMapNode[Variable, nullable MType] */
}
};
/* runtime type HashMapKeys[Variable, nullable Array[nullable MType]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[Variable, nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__Variable__nullable__standard__Array__nullable__nit__MType,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
160, /* Collection[Variable] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1587, /* HashMapKeys[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__HashMap__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* HashMap[K, V]: HashMap[Variable, nullable Array[nullable MType]] */
&type_nit__Variable, /* K: Variable */
&type_nit__Variable, /* E: Variable */
&type_standard__Collection__nit__Variable, /* Collection[E]: Collection[Variable] */
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
&type_standard__MapKeysIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* MapKeysIterator[K, V]: MapKeysIterator[Variable, nullable Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__Variable, /* E: Variable */
}
};
/* runtime type HashMapValues[Variable, nullable Array[nullable MType]] */
const struct type type_standard__hash_collection__HashMapValues__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
-1, /*CAST DEAD*/
"HashMapValues[Variable, nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__Variable__nullable__standard__Array__nullable__nit__MType,
6,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
275, /* Collection[nullable Array[nullable MType]] */
1354, /* HashMapValues[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__HashMap__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* HashMap[K, V]: HashMap[Variable, nullable Array[nullable MType]] */
&type_nullable__standard__Array__nullable__nit__MType, /* V: nullable Array[nullable MType] */
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_standard__Collection__nullable__standard__Array__nullable__nit__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_standard__MapValuesIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* MapValuesIterator[K, V]: MapValuesIterator[Variable, nullable Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
644,
"NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType,
2,
{
0, /* Object */
644, /* NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* E: nullable HashMapNode[Variable, nullable Array[nullable MType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[Variable, nullable Array[nullable MType]]] not a live type) */
}
};
/* runtime type HashMapIterator[Variable, nullable Array[nullable MType]] */
const struct type type_standard__HashMapIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[Variable, nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType,
3,
{
0, /* Object */
397, /* MapIterator[Variable, nullable Array[nullable MType]] */
1355, /* HashMapIterator[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__HashMap__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* HashMap[K, V]: HashMap[Variable, nullable Array[nullable MType]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* nullable HashMapNode[K, V]: nullable HashMapNode[Variable, nullable Array[nullable MType]] */
}
};
/* runtime type HashMapNode[Variable, nullable Array[nullable MType]] */
const struct type type_standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
1356,
"HashMapNode[Variable, nullable Array[nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType,
3,
{
0, /* Object */
193, /* nullable HashMapNode[Variable, nullable Array[nullable MType]] */
1356, /* HashMapNode[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__standard__Array__nullable__nit__MType, /* V: nullable Array[nullable MType] */
&type_nit__Variable, /* K: Variable */
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* nullable N: nullable HashMapNode[Variable, nullable Array[nullable MType]] */
}
};
/* runtime type NativeArray[CallSite] */
const struct type type_standard__NativeArray__nit__CallSite = {
1357,
"NativeArray[CallSite]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__CallSite,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1357, /* NativeArray[CallSite] */
},
};
const struct types resolution_table_standard__NativeArray__nit__CallSite = {
0, /* dummy */
{
&type_nit__CallSite, /* E: CallSite */
&type_standard__NativeArray__nit__CallSite, /* NativeArray[E]: NativeArray[CallSite] */
&type_standard__Array__nit__CallSite, /* Array[E]: Array[CallSite] */
}
};
/* runtime type ArrayIterator[CallSite] */
const struct type type_standard__array__ArrayIterator__nit__CallSite = {
-1, /*CAST DEAD*/
"ArrayIterator[CallSite]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__CallSite,
2,
{
0, /* Object */
645, /* ArrayIterator[CallSite] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__CallSite = {
0, /* dummy */
{
&type_standard__Array__nit__CallSite, /* Array[E]: Array[CallSite] */
&type_standard__AbstractArrayRead__nit__CallSite, /* AbstractArrayRead[E]: AbstractArrayRead[CallSite] */
}
};
/* runtime type HashSetIterator[MClassDef] */
const struct type type_standard__hash_collection__HashSetIterator__nit__MClassDef = {
-1, /*CAST DEAD*/
"HashSetIterator[MClassDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashSetIterator__nit__MClassDef,
2,
{
0, /* Object */
646, /* HashSetIterator[MClassDef] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetIterator__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Array__nit__MClassDef, /* Array[E]: Array[MClassDef] */
&type_standard__HashSet__nit__MClassDef, /* HashSet[E]: HashSet[MClassDef] */
&type_nullable__standard__hash_collection__HashSetNode__nit__MClassDef, /* nullable HashSetNode[E]: nullable HashSetNode[MClassDef] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MClassDef]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClassDef = {
647,
"NativeArray[nullable HashSetNode[MClassDef]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClassDef,
2,
{
0, /* Object */
647, /* NativeArray[nullable HashSetNode[MClassDef]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClassDef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashSetNode__nit__MClassDef, /* E: nullable HashSetNode[MClassDef] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClassDef, /* NativeArray[E]: NativeArray[nullable HashSetNode[MClassDef]] */
NULL, /* empty (Array[E]: Array[nullable HashSetNode[MClassDef]] not a live type) */
}
};
/* runtime type HashSetNode[MClassDef] */
const struct type type_standard__hash_collection__HashSetNode__nit__MClassDef = {
1358,
"HashSetNode[MClassDef]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashSetNode__nit__MClassDef,
3,
{
0, /* Object */
194, /* nullable HashSetNode[MClassDef] */
1358, /* HashSetNode[MClassDef] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetNode__nit__MClassDef = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__MClassDef, /* K: MClassDef */
&type_nullable__standard__hash_collection__HashSetNode__nit__MClassDef, /* nullable N: nullable HashSetNode[MClassDef] */
}
};
/* runtime type Array[AExternCodeBlock] */
const struct type type_standard__Array__nit__AExternCodeBlock = {
1908,
"Array[AExternCodeBlock]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__AExternCodeBlock,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
247, /* Collection[AExternCodeBlock] */
337, /* AbstractArrayRead[AExternCodeBlock] */
236, /* Collection[Prod] */
219, /* Collection[Object] */
471, /* AbstractArray[AExternCodeBlock] */
312, /* AbstractArrayRead[Prod] */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
446, /* AbstractArray[Prod] */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1858, /* Array[Prod] */
1908, /* Array[AExternCodeBlock] */
},
};
const struct types resolution_table_standard__Array__nit__AExternCodeBlock = {
0, /* dummy */
{
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_standard__Collection__nit__AExternCodeBlock, /* Collection[E]: Collection[AExternCodeBlock] */
&type_standard__Array__nit__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_standard__Collection__nit__AExternCodeBlock, /* Collection[E]: Collection[AExternCodeBlock] */
&type_standard__Array__nit__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
NULL, /* empty (LifoQueue[E]: LifoQueue[AExternCodeBlock] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[AExternCodeBlock] not a live type) */
&type_standard__Collection__nit__AExternCodeBlock, /* Collection[E]: Collection[AExternCodeBlock] */
NULL, /* empty (RandQueue[E]: RandQueue[AExternCodeBlock] not a live type) */
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_standard__Collection__nit__AExternCodeBlock, /* Collection[E]: Collection[AExternCodeBlock] */
&type_standard__Array__nit__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
&type_standard__NativeArray__nit__AExternCodeBlock, /* NativeArray[E]: NativeArray[AExternCodeBlock] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[AExternCodeBlock] not a live type) */
&type_standard__Array__nit__AExternCodeBlock, /* SELF: Array[AExternCodeBlock] */
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_standard__Collection__nit__AExternCodeBlock, /* Collection[E]: Collection[AExternCodeBlock] */
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_standard__Array__nit__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
&type_standard__AbstractArray__nit__AExternCodeBlock, /* AbstractArray[E]: AbstractArray[AExternCodeBlock] */
&type_standard__array__ArrayIterator__nit__AExternCodeBlock, /* ArrayIterator[E]: ArrayIterator[AExternCodeBlock] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[AExternCodeBlock] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[AExternCodeBlock] not a live type) */
}
};
/* runtime type HashMapKeys[MClass, AClassdef] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MClass__nit__AClassdef = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MClass__nit__AClassdef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
162, /* Collection[MClass] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1588, /* HashMapKeys[MClass, AClassdef] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MClass__nit__AClassdef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__nit__AClassdef, /* HashMap[K, V]: HashMap[MClass, AClassdef] */
&type_nit__MClass, /* K: MClass */
&type_nit__MClass, /* E: MClass */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__MapKeysIterator__nit__MClass__nit__AClassdef, /* MapKeysIterator[K, V]: MapKeysIterator[MClass, AClassdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* E: MClass */
}
};
/* runtime type HashMapValues[MClass, AClassdef] */
const struct type type_standard__hash_collection__HashMapValues__nit__MClass__nit__AClassdef = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MClass__nit__AClassdef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
232, /* Collection[AClassdef] */
236, /* Collection[Prod] */
219, /* Collection[Object] */
1776, /* HashMapValues[MClass, AClassdef] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MClass__nit__AClassdef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__nit__AClassdef, /* HashMap[K, V]: HashMap[MClass, AClassdef] */
&type_nit__AClassdef, /* V: AClassdef */
&type_nit__AClassdef, /* E: AClassdef */
&type_standard__Collection__nit__AClassdef, /* Collection[E]: Collection[AClassdef] */
&type_standard__Array__nit__AClassdef, /* Array[E]: Array[AClassdef] */
&type_standard__MapValuesIterator__nit__MClass__nit__AClassdef, /* MapValuesIterator[K, V]: MapValuesIterator[MClass, AClassdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__AClassdef, /* E: AClassdef */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, AClassdef]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef = {
648,
"NativeArray[nullable HashMapNode[MClass, AClassdef]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef,
2,
{
0, /* Object */
648, /* NativeArray[nullable HashMapNode[MClass, AClassdef]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef, /* E: nullable HashMapNode[MClass, AClassdef] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, AClassdef]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MClass, AClassdef]] not a live type) */
}
};
/* runtime type HashMapIterator[MClass, AClassdef] */
const struct type type_standard__HashMapIterator__nit__MClass__nit__AClassdef = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MClass__nit__AClassdef,
3,
{
0, /* Object */
398, /* MapIterator[MClass, AClassdef] */
1359, /* HashMapIterator[MClass, AClassdef] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MClass__nit__AClassdef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__nit__AClassdef, /* HashMap[K, V]: HashMap[MClass, AClassdef] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef, /* nullable HashMapNode[K, V]: nullable HashMapNode[MClass, AClassdef] */
}
};
/* runtime type HashMapNode[MClass, AClassdef] */
const struct type type_standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef = {
1360,
"HashMapNode[MClass, AClassdef]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef,
3,
{
0, /* Object */
195, /* nullable HashMapNode[MClass, AClassdef] */
1360, /* HashMapNode[MClass, AClassdef] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef = {
0, /* dummy */
{
&type_nit__AClassdef, /* V: AClassdef */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef, /* nullable N: nullable HashMapNode[MClass, AClassdef] */
}
};
/* runtime type Array[AParam] */
const struct type type_standard__Array__nit__AParam = {
1909,
"Array[AParam]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__AParam,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
248, /* Collection[AParam] */
338, /* AbstractArrayRead[AParam] */
236, /* Collection[Prod] */
219, /* Collection[Object] */
472, /* AbstractArray[AParam] */
312, /* AbstractArrayRead[Prod] */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
446, /* AbstractArray[Prod] */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1858, /* Array[Prod] */
1909, /* Array[AParam] */
},
};
const struct types resolution_table_standard__Array__nit__AParam = {
0, /* dummy */
{
&type_nit__AParam, /* E: AParam */
&type_nit__AParam, /* E: AParam */
&type_nit__AParam, /* E: AParam */
&type_standard__Collection__nit__AParam, /* Collection[E]: Collection[AParam] */
&type_standard__Array__nit__AParam, /* Array[E]: Array[AParam] */
&type_nit__AParam, /* E: AParam */
&type_standard__Collection__nit__AParam, /* Collection[E]: Collection[AParam] */
&type_standard__Array__nit__AParam, /* Array[E]: Array[AParam] */
NULL, /* empty (LifoQueue[E]: LifoQueue[AParam] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[AParam] not a live type) */
&type_standard__Collection__nit__AParam, /* Collection[E]: Collection[AParam] */
NULL, /* empty (RandQueue[E]: RandQueue[AParam] not a live type) */
&type_nit__AParam, /* E: AParam */
&type_standard__Collection__nit__AParam, /* Collection[E]: Collection[AParam] */
&type_standard__Array__nit__AParam, /* Array[E]: Array[AParam] */
&type_standard__NativeArray__nit__AParam, /* NativeArray[E]: NativeArray[AParam] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[AParam] not a live type) */
&type_standard__Array__nit__AParam, /* SELF: Array[AParam] */
&type_nit__AParam, /* E: AParam */
&type_standard__Collection__nit__AParam, /* Collection[E]: Collection[AParam] */
&type_nit__AParam, /* E: AParam */
&type_standard__Array__nit__AParam, /* Array[E]: Array[AParam] */
&type_standard__AbstractArray__nit__AParam, /* AbstractArray[E]: AbstractArray[AParam] */
&type_standard__array__ArrayIterator__nit__AParam, /* ArrayIterator[E]: ArrayIterator[AParam] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[AParam] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[AParam] not a live type) */
}
};
/* runtime type Array[AExternCall] */
const struct type type_standard__Array__nit__AExternCall = {
1910,
"Array[AExternCall]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__AExternCall,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
249, /* Collection[AExternCall] */
339, /* AbstractArrayRead[AExternCall] */
236, /* Collection[Prod] */
219, /* Collection[Object] */
473, /* AbstractArray[AExternCall] */
312, /* AbstractArrayRead[Prod] */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
446, /* AbstractArray[Prod] */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1858, /* Array[Prod] */
1910, /* Array[AExternCall] */
},
};
const struct types resolution_table_standard__Array__nit__AExternCall = {
0, /* dummy */
{
&type_nit__AExternCall, /* E: AExternCall */
&type_nit__AExternCall, /* E: AExternCall */
&type_nit__AExternCall, /* E: AExternCall */
&type_standard__Collection__nit__AExternCall, /* Collection[E]: Collection[AExternCall] */
&type_standard__Array__nit__AExternCall, /* Array[E]: Array[AExternCall] */
&type_nit__AExternCall, /* E: AExternCall */
&type_standard__Collection__nit__AExternCall, /* Collection[E]: Collection[AExternCall] */
&type_standard__Array__nit__AExternCall, /* Array[E]: Array[AExternCall] */
NULL, /* empty (LifoQueue[E]: LifoQueue[AExternCall] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[AExternCall] not a live type) */
&type_standard__Collection__nit__AExternCall, /* Collection[E]: Collection[AExternCall] */
NULL, /* empty (RandQueue[E]: RandQueue[AExternCall] not a live type) */
&type_nit__AExternCall, /* E: AExternCall */
&type_standard__Collection__nit__AExternCall, /* Collection[E]: Collection[AExternCall] */
&type_standard__Array__nit__AExternCall, /* Array[E]: Array[AExternCall] */
&type_standard__NativeArray__nit__AExternCall, /* NativeArray[E]: NativeArray[AExternCall] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[AExternCall] not a live type) */
&type_standard__Array__nit__AExternCall, /* SELF: Array[AExternCall] */
&type_nit__AExternCall, /* E: AExternCall */
&type_standard__Collection__nit__AExternCall, /* Collection[E]: Collection[AExternCall] */
&type_nit__AExternCall, /* E: AExternCall */
&type_standard__Array__nit__AExternCall, /* Array[E]: Array[AExternCall] */
&type_standard__AbstractArray__nit__AExternCall, /* AbstractArray[E]: AbstractArray[AExternCall] */
&type_standard__array__ArrayIterator__nit__AExternCall, /* ArrayIterator[E]: ArrayIterator[AExternCall] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[AExternCall] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[AExternCall] not a live type) */
}
};
/* runtime type Array[AType] */
const struct type type_standard__Array__nit__AType = {
1911,
"Array[AType]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__AType,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
250, /* Collection[AType] */
340, /* AbstractArrayRead[AType] */
236, /* Collection[Prod] */
219, /* Collection[Object] */
474, /* AbstractArray[AType] */
312, /* AbstractArrayRead[Prod] */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
446, /* AbstractArray[Prod] */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1858, /* Array[Prod] */
1911, /* Array[AType] */
},
};
const struct types resolution_table_standard__Array__nit__AType = {
0, /* dummy */
{
&type_nit__AType, /* E: AType */
&type_nit__AType, /* E: AType */
&type_nit__AType, /* E: AType */
&type_standard__Collection__nit__AType, /* Collection[E]: Collection[AType] */
&type_standard__Array__nit__AType, /* Array[E]: Array[AType] */
&type_nit__AType, /* E: AType */
&type_standard__Collection__nit__AType, /* Collection[E]: Collection[AType] */
&type_standard__Array__nit__AType, /* Array[E]: Array[AType] */
NULL, /* empty (LifoQueue[E]: LifoQueue[AType] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[AType] not a live type) */
&type_standard__Collection__nit__AType, /* Collection[E]: Collection[AType] */
NULL, /* empty (RandQueue[E]: RandQueue[AType] not a live type) */
&type_nit__AType, /* E: AType */
&type_standard__Collection__nit__AType, /* Collection[E]: Collection[AType] */
&type_standard__Array__nit__AType, /* Array[E]: Array[AType] */
&type_standard__NativeArray__nit__AType, /* NativeArray[E]: NativeArray[AType] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[AType] not a live type) */
&type_standard__Array__nit__AType, /* SELF: Array[AType] */
&type_nit__AType, /* E: AType */
&type_standard__Collection__nit__AType, /* Collection[E]: Collection[AType] */
&type_nit__AType, /* E: AType */
&type_standard__Array__nit__AType, /* Array[E]: Array[AType] */
&type_standard__AbstractArray__nit__AType, /* AbstractArray[E]: AbstractArray[AType] */
&type_standard__array__ArrayIterator__nit__AType, /* ArrayIterator[E]: ArrayIterator[AType] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[AType] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[AType] not a live type) */
}
};
/* runtime type HashSetIterator[MClass] */
const struct type type_standard__hash_collection__HashSetIterator__nit__MClass = {
-1, /*CAST DEAD*/
"HashSetIterator[MClass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashSetIterator__nit__MClass,
2,
{
0, /* Object */
649, /* HashSetIterator[MClass] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetIterator__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__HashSet__nit__MClass, /* HashSet[E]: HashSet[MClass] */
&type_nullable__standard__hash_collection__HashSetNode__nit__MClass, /* nullable HashSetNode[E]: nullable HashSetNode[MClass] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MClass]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClass = {
650,
"NativeArray[nullable HashSetNode[MClass]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClass,
2,
{
0, /* Object */
650, /* NativeArray[nullable HashSetNode[MClass]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClass = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashSetNode__nit__MClass, /* E: nullable HashSetNode[MClass] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClass, /* NativeArray[E]: NativeArray[nullable HashSetNode[MClass]] */
NULL, /* empty (Array[E]: Array[nullable HashSetNode[MClass]] not a live type) */
}
};
/* runtime type HashSetNode[MClass] */
const struct type type_standard__hash_collection__HashSetNode__nit__MClass = {
1361,
"HashSetNode[MClass]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashSetNode__nit__MClass,
3,
{
0, /* Object */
196, /* nullable HashSetNode[MClass] */
1361, /* HashSetNode[MClass] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetNode__nit__MClass = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashSetNode__nit__MClass, /* nullable N: nullable HashSetNode[MClass] */
}
};
/* runtime type HashMapKeys[String, Variable] */
const struct type type_standard__hash_collection__HashMapKeys__standard__String__nit__Variable = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__standard__String__nit__Variable,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
158, /* Collection[String] */
-1, /* empty */
225, /* Collection[Writable] */
219, /* Collection[Object] */
1777, /* HashMapKeys[String, Variable] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__standard__String__nit__Variable = {
0, /* dummy */
{
&type_standard__HashMap__standard__String__nit__Variable, /* HashMap[K, V]: HashMap[String, Variable] */
&type_standard__String, /* K: String */
&type_standard__String, /* E: String */
&type_standard__Collection__standard__String, /* Collection[E]: Collection[String] */
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapKeysIterator__standard__String__nit__Variable, /* MapKeysIterator[K, V]: MapKeysIterator[String, Variable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* E: String */
}
};
/* runtime type HashMapValues[String, Variable] */
const struct type type_standard__hash_collection__HashMapValues__standard__String__nit__Variable = {
-1, /*CAST DEAD*/
"HashMapValues[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__standard__String__nit__Variable,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
160, /* Collection[Variable] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1589, /* HashMapValues[String, Variable] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__standard__String__nit__Variable = {
0, /* dummy */
{
&type_standard__HashMap__standard__String__nit__Variable, /* HashMap[K, V]: HashMap[String, Variable] */
&type_nit__Variable, /* V: Variable */
&type_nit__Variable, /* E: Variable */
&type_standard__Collection__nit__Variable, /* Collection[E]: Collection[Variable] */
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
&type_standard__MapValuesIterator__standard__String__nit__Variable, /* MapValuesIterator[K, V]: MapValuesIterator[String, Variable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__Variable, /* E: Variable */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, Variable]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable = {
651,
"NativeArray[nullable HashMapNode[String, Variable]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable,
2,
{
0, /* Object */
651, /* NativeArray[nullable HashMapNode[String, Variable]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable, /* E: nullable HashMapNode[String, Variable] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, Variable]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[String, Variable]] not a live type) */
}
};
/* runtime type HashMapIterator[String, Variable] */
const struct type type_standard__HashMapIterator__standard__String__nit__Variable = {
-1, /*CAST DEAD*/
"HashMapIterator[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__standard__String__nit__Variable,
3,
{
0, /* Object */
399, /* MapIterator[String, Variable] */
1362, /* HashMapIterator[String, Variable] */
},
};
const struct types resolution_table_standard__HashMapIterator__standard__String__nit__Variable = {
0, /* dummy */
{
&type_standard__HashMap__standard__String__nit__Variable, /* HashMap[K, V]: HashMap[String, Variable] */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable, /* nullable HashMapNode[K, V]: nullable HashMapNode[String, Variable] */
}
};
/* runtime type HashMapNode[String, Variable] */
const struct type type_standard__hash_collection__HashMapNode__standard__String__nit__Variable = {
1363,
"HashMapNode[String, Variable]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__standard__String__nit__Variable,
3,
{
0, /* Object */
197, /* nullable HashMapNode[String, Variable] */
1363, /* HashMapNode[String, Variable] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__standard__String__nit__Variable = {
0, /* dummy */
{
&type_nit__Variable, /* V: Variable */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable, /* nullable N: nullable HashMapNode[String, Variable] */
}
};
/* runtime type HashSetIterator[MClassType] */
const struct type type_standard__hash_collection__HashSetIterator__nit__MClassType = {
-1, /*CAST DEAD*/
"HashSetIterator[MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashSetIterator__nit__MClassType,
2,
{
0, /* Object */
652, /* HashSetIterator[MClassType] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetIterator__nit__MClassType = {
0, /* dummy */
{
&type_standard__Array__nit__MClassType, /* Array[E]: Array[MClassType] */
&type_standard__HashSet__nit__MClassType, /* HashSet[E]: HashSet[MClassType] */
&type_nullable__standard__hash_collection__HashSetNode__nit__MClassType, /* nullable HashSetNode[E]: nullable HashSetNode[MClassType] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MClassType]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClassType = {
653,
"NativeArray[nullable HashSetNode[MClassType]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClassType,
2,
{
0, /* Object */
653, /* NativeArray[nullable HashSetNode[MClassType]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClassType = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashSetNode__nit__MClassType, /* E: nullable HashSetNode[MClassType] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MClassType, /* NativeArray[E]: NativeArray[nullable HashSetNode[MClassType]] */
NULL, /* empty (Array[E]: Array[nullable HashSetNode[MClassType]] not a live type) */
}
};
/* runtime type HashSetNode[MClassType] */
const struct type type_standard__hash_collection__HashSetNode__nit__MClassType = {
1364,
"HashSetNode[MClassType]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashSetNode__nit__MClassType,
3,
{
0, /* Object */
198, /* nullable HashSetNode[MClassType] */
1364, /* HashSetNode[MClassType] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetNode__nit__MClassType = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__MClassType, /* K: MClassType */
&type_nullable__standard__hash_collection__HashSetNode__nit__MClassType, /* nullable N: nullable HashSetNode[MClassType] */
}
};
/* runtime type HashSetIterator[MProperty] */
const struct type type_standard__hash_collection__HashSetIterator__nit__MProperty = {
-1, /*CAST DEAD*/
"HashSetIterator[MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashSetIterator__nit__MProperty,
2,
{
0, /* Object */
654, /* HashSetIterator[MProperty] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetIterator__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__nit__MProperty, /* Array[E]: Array[MProperty] */
&type_standard__HashSet__nit__MProperty, /* HashSet[E]: HashSet[MProperty] */
&type_nullable__standard__hash_collection__HashSetNode__nit__MProperty, /* nullable HashSetNode[E]: nullable HashSetNode[MProperty] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MProperty]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MProperty = {
655,
"NativeArray[nullable HashSetNode[MProperty]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MProperty,
2,
{
0, /* Object */
655, /* NativeArray[nullable HashSetNode[MProperty]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MProperty = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashSetNode__nit__MProperty, /* E: nullable HashSetNode[MProperty] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MProperty, /* NativeArray[E]: NativeArray[nullable HashSetNode[MProperty]] */
NULL, /* empty (Array[E]: Array[nullable HashSetNode[MProperty]] not a live type) */
}
};
/* runtime type HashSetNode[MProperty] */
const struct type type_standard__hash_collection__HashSetNode__nit__MProperty = {
1365,
"HashSetNode[MProperty]", /* class_name_string */
3,
0,
&resolution_table_standard__hash_collection__HashSetNode__nit__MProperty,
4,
{
0, /* Object */
199, /* nullable HashSetNode[MProperty] */
-1, /* empty */
1365, /* HashSetNode[MProperty] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetNode__nit__MProperty = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__MProperty, /* K: MProperty */
&type_nullable__standard__hash_collection__HashSetNode__nit__MProperty, /* nullable N: nullable HashSetNode[MProperty] */
}
};
/* runtime type Array[MMethod] */
const struct type type_standard__Array__nit__MMethod = {
1922,
"Array[MMethod]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__MMethod,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
164, /* Collection[MProperty] */
165, /* Collection[MMethod] */
284, /* Collection[nullable MProperty] */
219, /* Collection[Object] */
299, /* AbstractArrayRead[MProperty] */
341, /* AbstractArrayRead[MMethod] */
291, /* AbstractArrayRead[Object] */
369, /* AbstractArrayRead[nullable MProperty] */
433, /* AbstractArray[MProperty] */
475, /* AbstractArray[MMethod] */
503, /* AbstractArray[nullable MProperty] */
425, /* AbstractArray[Object] */
1842, /* Array[nullable MProperty] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1895, /* Array[MProperty] */
1922, /* Array[MMethod] */
},
};
const struct types resolution_table_standard__Array__nit__MMethod = {
0, /* dummy */
{
&type_nit__MMethod, /* E: MMethod */
&type_nit__MMethod, /* E: MMethod */
&type_nit__MMethod, /* E: MMethod */
&type_standard__Collection__nit__MMethod, /* Collection[E]: Collection[MMethod] */
&type_standard__Array__nit__MMethod, /* Array[E]: Array[MMethod] */
&type_nit__MMethod, /* E: MMethod */
&type_standard__Collection__nit__MMethod, /* Collection[E]: Collection[MMethod] */
&type_standard__Array__nit__MMethod, /* Array[E]: Array[MMethod] */
NULL, /* empty (LifoQueue[E]: LifoQueue[MMethod] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[MMethod] not a live type) */
&type_standard__Collection__nit__MMethod, /* Collection[E]: Collection[MMethod] */
NULL, /* empty (RandQueue[E]: RandQueue[MMethod] not a live type) */
&type_nit__MMethod, /* E: MMethod */
&type_standard__Collection__nit__MMethod, /* Collection[E]: Collection[MMethod] */
&type_standard__Array__nit__MMethod, /* Array[E]: Array[MMethod] */
&type_standard__NativeArray__nit__MMethod, /* NativeArray[E]: NativeArray[MMethod] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[MMethod] not a live type) */
&type_standard__Array__nit__MMethod, /* SELF: Array[MMethod] */
&type_nit__MMethod, /* E: MMethod */
&type_standard__Collection__nit__MMethod, /* Collection[E]: Collection[MMethod] */
&type_nit__MMethod, /* E: MMethod */
&type_standard__Array__nit__MMethod, /* Array[E]: Array[MMethod] */
&type_standard__AbstractArray__nit__MMethod, /* AbstractArray[E]: AbstractArray[MMethod] */
&type_standard__array__ArrayIterator__nit__MMethod, /* ArrayIterator[E]: ArrayIterator[MMethod] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[MMethod] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[MMethod] not a live type) */
}
};
/* runtime type HashSetIterator[MMethod] */
const struct type type_standard__hash_collection__HashSetIterator__nit__MMethod = {
-1, /*CAST DEAD*/
"HashSetIterator[MMethod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashSetIterator__nit__MMethod,
2,
{
0, /* Object */
656, /* HashSetIterator[MMethod] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetIterator__nit__MMethod = {
0, /* dummy */
{
&type_standard__Array__nit__MMethod, /* Array[E]: Array[MMethod] */
&type_standard__HashSet__nit__MMethod, /* HashSet[E]: HashSet[MMethod] */
&type_nullable__standard__hash_collection__HashSetNode__nit__MMethod, /* nullable HashSetNode[E]: nullable HashSetNode[MMethod] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MMethod]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MMethod = {
1366,
"NativeArray[nullable HashSetNode[MMethod]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MMethod,
3,
{
0, /* Object */
655, /* NativeArray[nullable HashSetNode[MProperty]] */
1366, /* NativeArray[nullable HashSetNode[MMethod]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MMethod = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashSetNode__nit__MMethod, /* E: nullable HashSetNode[MMethod] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MMethod, /* NativeArray[E]: NativeArray[nullable HashSetNode[MMethod]] */
NULL, /* empty (Array[E]: Array[nullable HashSetNode[MMethod]] not a live type) */
}
};
/* runtime type HashSetNode[MMethod] */
const struct type type_standard__hash_collection__HashSetNode__nit__MMethod = {
1778,
"HashSetNode[MMethod]", /* class_name_string */
4,
0,
&resolution_table_standard__hash_collection__HashSetNode__nit__MMethod,
5,
{
0, /* Object */
199, /* nullable HashSetNode[MProperty] */
200, /* nullable HashSetNode[MMethod] */
1365, /* HashSetNode[MProperty] */
1778, /* HashSetNode[MMethod] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetNode__nit__MMethod = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__MMethod, /* K: MMethod */
&type_nullable__standard__hash_collection__HashSetNode__nit__MMethod, /* nullable N: nullable HashSetNode[MMethod] */
}
};
/* runtime type Array[MAttributeDef] */
const struct type type_standard__Array__nit__MAttributeDef = {
1912,
"Array[MAttributeDef]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__MAttributeDef,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
235, /* Collection[MPropDef] */
258, /* Collection[MAttributeDef] */
311, /* AbstractArrayRead[MPropDef] */
219, /* Collection[Object] */
342, /* AbstractArrayRead[MAttributeDef] */
445, /* AbstractArray[MPropDef] */
291, /* AbstractArrayRead[Object] */
476, /* AbstractArray[MAttributeDef] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1857, /* Array[MPropDef] */
1912, /* Array[MAttributeDef] */
},
};
const struct types resolution_table_standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_standard__Collection__nit__MAttributeDef, /* Collection[E]: Collection[MAttributeDef] */
&type_standard__Array__nit__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_standard__Collection__nit__MAttributeDef, /* Collection[E]: Collection[MAttributeDef] */
&type_standard__Array__nit__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
NULL, /* empty (LifoQueue[E]: LifoQueue[MAttributeDef] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[MAttributeDef] not a live type) */
&type_standard__Collection__nit__MAttributeDef, /* Collection[E]: Collection[MAttributeDef] */
NULL, /* empty (RandQueue[E]: RandQueue[MAttributeDef] not a live type) */
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_standard__Collection__nit__MAttributeDef, /* Collection[E]: Collection[MAttributeDef] */
&type_standard__Array__nit__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
&type_standard__NativeArray__nit__MAttributeDef, /* NativeArray[E]: NativeArray[MAttributeDef] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[MAttributeDef] not a live type) */
&type_standard__Array__nit__MAttributeDef, /* SELF: Array[MAttributeDef] */
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_standard__Collection__nit__MAttributeDef, /* Collection[E]: Collection[MAttributeDef] */
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_standard__Array__nit__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
&type_standard__AbstractArray__nit__MAttributeDef, /* AbstractArray[E]: AbstractArray[MAttributeDef] */
&type_standard__array__ArrayIterator__nit__MAttributeDef, /* ArrayIterator[E]: ArrayIterator[MAttributeDef] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[MAttributeDef] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[MAttributeDef] not a live type) */
}
};
/* runtime type HashMap2[MModule, MType, Array[MAttributeDef]] */
const struct type type_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MAttributeDef = {
-1, /*CAST DEAD*/
"HashMap2[MModule, MType, Array[MAttributeDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MAttributeDef,
2,
{
0, /* Object */
657, /* HashMap2[MModule, MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K1, HashMap[K2, V]]: HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_nit__MModule, /* K1: MModule */
&type_nit__MType, /* K2: MType */
&type_standard__Array__nit__MAttributeDef, /* V: Array[MAttributeDef] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K2, V]: HashMap[MType, Array[MAttributeDef]] */
}
};
/* runtime type Array[MVirtualTypeDef] */
const struct type type_standard__Array__nit__MVirtualTypeDef = {
1913,
"Array[MVirtualTypeDef]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__MVirtualTypeDef,
22,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
235, /* Collection[MPropDef] */
259, /* Collection[MVirtualTypeDef] */
311, /* AbstractArrayRead[MPropDef] */
219, /* Collection[Object] */
343, /* AbstractArrayRead[MVirtualTypeDef] */
445, /* AbstractArray[MPropDef] */
291, /* AbstractArrayRead[Object] */
477, /* AbstractArray[MVirtualTypeDef] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1857, /* Array[MPropDef] */
1913, /* Array[MVirtualTypeDef] */
},
};
const struct types resolution_table_standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_standard__Collection__nit__MVirtualTypeDef, /* Collection[E]: Collection[MVirtualTypeDef] */
&type_standard__Array__nit__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_standard__Collection__nit__MVirtualTypeDef, /* Collection[E]: Collection[MVirtualTypeDef] */
&type_standard__Array__nit__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
NULL, /* empty (LifoQueue[E]: LifoQueue[MVirtualTypeDef] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[MVirtualTypeDef] not a live type) */
&type_standard__Collection__nit__MVirtualTypeDef, /* Collection[E]: Collection[MVirtualTypeDef] */
NULL, /* empty (RandQueue[E]: RandQueue[MVirtualTypeDef] not a live type) */
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_standard__Collection__nit__MVirtualTypeDef, /* Collection[E]: Collection[MVirtualTypeDef] */
&type_standard__Array__nit__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
&type_standard__NativeArray__nit__MVirtualTypeDef, /* NativeArray[E]: NativeArray[MVirtualTypeDef] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[MVirtualTypeDef] not a live type) */
&type_standard__Array__nit__MVirtualTypeDef, /* SELF: Array[MVirtualTypeDef] */
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_standard__Collection__nit__MVirtualTypeDef, /* Collection[E]: Collection[MVirtualTypeDef] */
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_standard__Array__nit__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
&type_standard__AbstractArray__nit__MVirtualTypeDef, /* AbstractArray[E]: AbstractArray[MVirtualTypeDef] */
&type_standard__array__ArrayIterator__nit__MVirtualTypeDef, /* ArrayIterator[E]: ArrayIterator[MVirtualTypeDef] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[MVirtualTypeDef] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[MVirtualTypeDef] not a live type) */
}
};
/* runtime type HashMap2[MModule, MType, Array[MVirtualTypeDef]] */
const struct type type_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MVirtualTypeDef = {
-1, /*CAST DEAD*/
"HashMap2[MModule, MType, Array[MVirtualTypeDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MVirtualTypeDef,
2,
{
0, /* Object */
658, /* HashMap2[MModule, MType, Array[MVirtualTypeDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMap[K1, HashMap[K2, V]]: HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_nit__MModule, /* K1: MModule */
&type_nit__MType, /* K2: MType */
&type_standard__Array__nit__MVirtualTypeDef, /* V: Array[MVirtualTypeDef] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMap[K2, V]: HashMap[MType, Array[MVirtualTypeDef]] */
}
};
/* runtime type NativeArray[MVirtualType] */
const struct type type_standard__NativeArray__nit__MVirtualType = {
1779,
"NativeArray[MVirtualType]", /* class_name_string */
4,
0,
&resolution_table_standard__NativeArray__nit__MVirtualType,
5,
{
0, /* Object */
521, /* NativeArray[Object] */
663, /* NativeArray[nullable MType] */
1578, /* NativeArray[MType] */
1779, /* NativeArray[MVirtualType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MVirtualType = {
0, /* dummy */
{
&type_nit__MVirtualType, /* E: MVirtualType */
&type_standard__NativeArray__nit__MVirtualType, /* NativeArray[E]: NativeArray[MVirtualType] */
&type_standard__Array__nit__MVirtualType, /* Array[E]: Array[MVirtualType] */
}
};
/* runtime type ArrayIterator[MVirtualType] */
const struct type type_standard__array__ArrayIterator__nit__MVirtualType = {
-1, /*CAST DEAD*/
"ArrayIterator[MVirtualType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MVirtualType,
3,
{
0, /* Object */
630, /* ArrayIterator[MType] */
1367, /* ArrayIterator[MVirtualType] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MVirtualType = {
0, /* dummy */
{
&type_standard__Array__nit__MVirtualType, /* Array[E]: Array[MVirtualType] */
&type_standard__AbstractArrayRead__nit__MVirtualType, /* AbstractArrayRead[E]: AbstractArrayRead[MVirtualType] */
}
};
/* runtime type NativeArray[Variable] */
const struct type type_standard__NativeArray__nit__Variable = {
1368,
"NativeArray[Variable]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__Variable,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1368, /* NativeArray[Variable] */
},
};
const struct types resolution_table_standard__NativeArray__nit__Variable = {
0, /* dummy */
{
&type_nit__Variable, /* E: Variable */
&type_standard__NativeArray__nit__Variable, /* NativeArray[E]: NativeArray[Variable] */
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
}
};
/* runtime type ArrayIterator[Variable] */
const struct type type_standard__array__ArrayIterator__nit__Variable = {
-1, /*CAST DEAD*/
"ArrayIterator[Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__Variable,
2,
{
0, /* Object */
659, /* ArrayIterator[Variable] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__Variable = {
0, /* dummy */
{
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
&type_standard__AbstractArrayRead__nit__Variable, /* AbstractArrayRead[E]: AbstractArrayRead[Variable] */
}
};
/* runtime type HashMap[MClass, POSetElement[MClass]] */
const struct type type_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass = {
1369,
"HashMap[MClass, POSetElement[MClass]]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1369, /* HashMap[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__poset__POSetElement__nit__MClass, /* HashMapIterator[K, V]: HashMapIterator[MClass, POSetElement[MClass]] */
&type_poset__POSetElement__nit__MClass, /* V: POSetElement[MClass] */
&type_standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* HashMapNode[K, V]: HashMapNode[MClass, POSetElement[MClass]] */
&type_standard__hash_collection__HashMapKeys__nit__MClass__poset__POSetElement__nit__MClass, /* HashMapKeys[K, V]: HashMapKeys[MClass, POSetElement[MClass]] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[MClass] not a live type) */
&type_standard__hash_collection__HashMapValues__nit__MClass__poset__POSetElement__nit__MClass, /* HashMapValues[K, V]: HashMapValues[MClass, POSetElement[MClass]] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[POSetElement[MClass]] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[MClass, POSetElement[MClass]] not a live type) */
&type_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass, /* HashMap[K, V]: HashMap[MClass, POSetElement[MClass]] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* nullable N: nullable HashMapNode[MClass, POSetElement[MClass]] */
NULL, /* empty (nullable K: nullable MClass not a live type) */
&type_nit__MClass, /* K: MClass */
&type_standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* N: HashMapNode[MClass, POSetElement[MClass]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
&type_nit__MClass, /* K: MClass */
&type_poset__POSetElement__nit__MClass, /* V: POSetElement[MClass] */
}
};
/* runtime type POSetElement[MClass] */
const struct type type_poset__POSetElement__nit__MClass = {
660,
"POSetElement[MClass]", /* class_name_string */
1,
0,
&resolution_table_poset__POSetElement__nit__MClass,
2,
{
0, /* Object */
660, /* POSetElement[MClass] */
},
};
const struct types resolution_table_poset__POSetElement__nit__MClass = {
0, /* dummy */
{
&type_standard__HashSet__nit__MClass, /* HashSet[E]: HashSet[MClass] */
&type_poset__POSet__nit__MClass, /* POSet[E]: POSet[MClass] */
&type_nit__MClass, /* E: MClass */
}
};
/* runtime type Array[Token] */
const struct type type_standard__Array__nit__Token = {
1866,
"Array[Token]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__Token,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
-1, /* empty */
252, /* Collection[Token] */
-1, /* empty */
219, /* Collection[Object] */
344, /* AbstractArrayRead[Token] */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
478, /* AbstractArray[Token] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1866, /* Array[Token] */
},
};
const struct types resolution_table_standard__Array__nit__Token = {
0, /* dummy */
{
&type_nit__Token, /* E: Token */
&type_nit__Token, /* E: Token */
&type_nit__Token, /* E: Token */
&type_standard__Collection__nit__Token, /* Collection[E]: Collection[Token] */
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
&type_nit__Token, /* E: Token */
&type_standard__Collection__nit__Token, /* Collection[E]: Collection[Token] */
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Token] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Token] not a live type) */
&type_standard__Collection__nit__Token, /* Collection[E]: Collection[Token] */
NULL, /* empty (RandQueue[E]: RandQueue[Token] not a live type) */
&type_nit__Token, /* E: Token */
&type_standard__Collection__nit__Token, /* Collection[E]: Collection[Token] */
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
&type_standard__NativeArray__nit__Token, /* NativeArray[E]: NativeArray[Token] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Token] not a live type) */
&type_standard__Array__nit__Token, /* SELF: Array[Token] */
&type_nit__Token, /* E: Token */
&type_standard__Collection__nit__Token, /* Collection[E]: Collection[Token] */
&type_nit__Token, /* E: Token */
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
&type_standard__AbstractArray__nit__Token, /* AbstractArray[E]: AbstractArray[Token] */
&type_standard__array__ArrayIterator__nit__Token, /* ArrayIterator[E]: ArrayIterator[Token] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Token] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Token] not a live type) */
}
};
/* runtime type ListNode[Token] */
const struct type type_standard__list__ListNode__nit__Token = {
1831,
"ListNode[Token]", /* class_name_string */
7,
0,
&resolution_table_standard__list__ListNode__nit__Token,
8,
{
0, /* Object */
424, /* nullable ListNode[Token] */
511, /* Container[Token] */
-1, /* empty */
252, /* Collection[Token] */
-1, /* empty */
219, /* Collection[Object] */
1831, /* ListNode[Token] */
},
};
const struct types resolution_table_standard__list__ListNode__nit__Token = {
0, /* dummy */
{
&type_nullable__standard__list__ListNode__nit__Token, /* nullable ListNode[E]: nullable ListNode[Token] */
&type_nit__Token, /* E: Token */
&type_nit__Token, /* E: Token */
&type_standard__Collection__nit__Token, /* Collection[E]: Collection[Token] */
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
&type_standard__abstract_collection__ContainerIterator__nit__Token, /* ContainerIterator[E]: ContainerIterator[Token] */
}
};
/* runtime type ListIterator[Token] */
const struct type type_standard__ListIterator__nit__Token = {
-1, /*CAST DEAD*/
"ListIterator[Token]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__ListIterator__nit__Token,
2,
{
0, /* Object */
661, /* ListIterator[Token] */
},
};
const struct types resolution_table_standard__ListIterator__nit__Token = {
0, /* dummy */
{
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
&type_nit__Token, /* E: Token */
&type_standard__List__nit__Token, /* List[E]: List[Token] */
&type_nullable__standard__list__ListNode__nit__Token, /* nullable ListNode[E]: nullable ListNode[Token] */
}
};
/* runtime type NativeArray[AEscapeExpr] */
const struct type type_standard__NativeArray__nit__AEscapeExpr = {
1780,
"NativeArray[AEscapeExpr]", /* class_name_string */
4,
0,
&resolution_table_standard__NativeArray__nit__AEscapeExpr,
5,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1590, /* NativeArray[AExpr] */
1780, /* NativeArray[AEscapeExpr] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AEscapeExpr = {
0, /* dummy */
{
&type_nit__AEscapeExpr, /* E: AEscapeExpr */
&type_standard__NativeArray__nit__AEscapeExpr, /* NativeArray[E]: NativeArray[AEscapeExpr] */
&type_standard__Array__nit__AEscapeExpr, /* Array[E]: Array[AEscapeExpr] */
}
};
/* runtime type ArrayIterator[AEscapeExpr] */
const struct type type_standard__array__ArrayIterator__nit__AEscapeExpr = {
-1, /*CAST DEAD*/
"ArrayIterator[AEscapeExpr]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AEscapeExpr,
2,
{
0, /* Object */
662, /* ArrayIterator[AEscapeExpr] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AEscapeExpr = {
0, /* dummy */
{
&type_standard__Array__nit__AEscapeExpr, /* Array[E]: Array[AEscapeExpr] */
&type_standard__AbstractArrayRead__nit__AEscapeExpr, /* AbstractArrayRead[E]: AbstractArrayRead[AEscapeExpr] */
}
};
/* runtime type NativeArray[nullable MType] */
const struct type type_standard__NativeArray__nullable__nit__MType = {
663,
"NativeArray[nullable MType]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nullable__nit__MType,
3,
{
0, /* Object */
-1, /* empty */
663, /* NativeArray[nullable MType] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__nit__MType, /* E: nullable MType */
&type_standard__NativeArray__nullable__nit__MType, /* NativeArray[E]: NativeArray[nullable MType] */
&type_standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable MType] */
}
};
/* runtime type ArrayIterator[nullable MType] */
const struct type type_standard__array__ArrayIterator__nullable__nit__MType = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nullable__nit__MType,
2,
{
0, /* Object */
664, /* ArrayIterator[nullable MType] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable MType] */
&type_standard__AbstractArrayRead__nullable__nit__MType, /* AbstractArrayRead[E]: AbstractArrayRead[nullable MType] */
}
};
/* runtime type ArraySetIterator[MType] */
const struct type type_standard__array__ArraySetIterator__nit__MType = {
-1, /*CAST DEAD*/
"ArraySetIterator[MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArraySetIterator__nit__MType,
2,
{
0, /* Object */
665, /* ArraySetIterator[MType] */
},
};
const struct types resolution_table_standard__array__ArraySetIterator__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
&type_standard__array__ArrayIterator__nit__MType, /* ArrayIterator[E]: ArrayIterator[MType] */
}
};
/* runtime type NativeArray[AExpr] */
const struct type type_standard__NativeArray__nit__AExpr = {
1590,
"NativeArray[AExpr]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__AExpr,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1590, /* NativeArray[AExpr] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AExpr = {
0, /* dummy */
{
&type_nit__AExpr, /* E: AExpr */
&type_standard__NativeArray__nit__AExpr, /* NativeArray[E]: NativeArray[AExpr] */
&type_standard__Array__nit__AExpr, /* Array[E]: Array[AExpr] */
}
};
/* runtime type ArrayIterator[AExpr] */
const struct type type_standard__array__ArrayIterator__nit__AExpr = {
-1, /*CAST DEAD*/
"ArrayIterator[AExpr]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AExpr,
2,
{
0, /* Object */
666, /* ArrayIterator[AExpr] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AExpr = {
0, /* dummy */
{
&type_standard__Array__nit__AExpr, /* Array[E]: Array[AExpr] */
&type_standard__AbstractArrayRead__nit__AExpr, /* AbstractArrayRead[E]: AbstractArrayRead[AExpr] */
}
};
/* runtime type NativeArray[Char] */
const struct type type_standard__NativeArray__standard__Char = {
1370,
"NativeArray[Char]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Char,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1370, /* NativeArray[Char] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Char = {
0, /* dummy */
{
&type_standard__Char, /* E: Char */
&type_standard__NativeArray__standard__Char, /* NativeArray[E]: NativeArray[Char] */
&type_standard__Array__standard__Char, /* Array[E]: Array[Char] */
}
};
/* runtime type ArrayIterator[Char] */
const struct type type_standard__array__ArrayIterator__standard__Char = {
-1, /*CAST DEAD*/
"ArrayIterator[Char]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Char,
2,
{
0, /* Object */
667, /* ArrayIterator[Char] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Char = {
0, /* dummy */
{
&type_standard__Array__standard__Char, /* Array[E]: Array[Char] */
&type_standard__AbstractArrayRead__standard__Char, /* AbstractArrayRead[E]: AbstractArrayRead[Char] */
}
};
/* runtime type Array[SourceFile] */
const struct type type_standard__Array__nit__SourceFile = {
1867,
"Array[SourceFile]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__SourceFile,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
260, /* Collection[SourceFile] */
345, /* AbstractArrayRead[SourceFile] */
479, /* AbstractArray[SourceFile] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1867, /* Array[SourceFile] */
},
};
const struct types resolution_table_standard__Array__nit__SourceFile = {
0, /* dummy */
{
&type_nit__SourceFile, /* E: SourceFile */
&type_nit__SourceFile, /* E: SourceFile */
&type_nit__SourceFile, /* E: SourceFile */
&type_standard__Collection__nit__SourceFile, /* Collection[E]: Collection[SourceFile] */
&type_standard__Array__nit__SourceFile, /* Array[E]: Array[SourceFile] */
&type_nit__SourceFile, /* E: SourceFile */
&type_standard__Collection__nit__SourceFile, /* Collection[E]: Collection[SourceFile] */
&type_standard__Array__nit__SourceFile, /* Array[E]: Array[SourceFile] */
NULL, /* empty (LifoQueue[E]: LifoQueue[SourceFile] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[SourceFile] not a live type) */
&type_standard__Collection__nit__SourceFile, /* Collection[E]: Collection[SourceFile] */
NULL, /* empty (RandQueue[E]: RandQueue[SourceFile] not a live type) */
&type_nit__SourceFile, /* E: SourceFile */
&type_standard__Collection__nit__SourceFile, /* Collection[E]: Collection[SourceFile] */
&type_standard__Array__nit__SourceFile, /* Array[E]: Array[SourceFile] */
&type_standard__NativeArray__nit__SourceFile, /* NativeArray[E]: NativeArray[SourceFile] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[SourceFile] not a live type) */
&type_standard__Array__nit__SourceFile, /* SELF: Array[SourceFile] */
&type_nit__SourceFile, /* E: SourceFile */
&type_standard__Collection__nit__SourceFile, /* Collection[E]: Collection[SourceFile] */
&type_nit__SourceFile, /* E: SourceFile */
&type_standard__Array__nit__SourceFile, /* Array[E]: Array[SourceFile] */
&type_standard__AbstractArray__nit__SourceFile, /* AbstractArray[E]: AbstractArray[SourceFile] */
&type_standard__array__ArrayIterator__nit__SourceFile, /* ArrayIterator[E]: ArrayIterator[SourceFile] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[SourceFile] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[SourceFile] not a live type) */
}
};
/* runtime type MapKeysIterator[SourceFile, Array[String]] */
const struct type type_standard__MapKeysIterator__nit__SourceFile__standard__Array__standard__String = {
-1, /*CAST DEAD*/
"MapKeysIterator[SourceFile, Array[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__SourceFile__standard__Array__standard__String,
2,
{
0, /* Object */
668, /* MapKeysIterator[SourceFile, Array[String]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__SourceFile__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__nit__SourceFile, /* Array[E]: Array[SourceFile] */
&type_standard__MapIterator__nit__SourceFile__standard__Array__standard__String, /* MapIterator[K, V]: MapIterator[SourceFile, Array[String]] */
}
};
/* runtime type Array[Array[String]] */
const struct type type_standard__Array__standard__Array__standard__String = {
1868,
"Array[Array[String]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Array__standard__String,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
261, /* Collection[Array[String]] */
346, /* AbstractArrayRead[Array[String]] */
480, /* AbstractArray[Array[String]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1868, /* Array[Array[String]] */
},
};
const struct types resolution_table_standard__Array__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__Collection__standard__Array__standard__String, /* Collection[E]: Collection[Array[String]] */
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__Collection__standard__Array__standard__String, /* Collection[E]: Collection[Array[String]] */
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Array[String]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Array[String]] not a live type) */
&type_standard__Collection__standard__Array__standard__String, /* Collection[E]: Collection[Array[String]] */
NULL, /* empty (RandQueue[E]: RandQueue[Array[String]] not a live type) */
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__Collection__standard__Array__standard__String, /* Collection[E]: Collection[Array[String]] */
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
&type_standard__NativeArray__standard__Array__standard__String, /* NativeArray[E]: NativeArray[Array[String]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Array[String]] not a live type) */
&type_standard__Array__standard__Array__standard__String, /* SELF: Array[Array[String]] */
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__Collection__standard__Array__standard__String, /* Collection[E]: Collection[Array[String]] */
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
&type_standard__AbstractArray__standard__Array__standard__String, /* AbstractArray[E]: AbstractArray[Array[String]] */
&type_standard__array__ArrayIterator__standard__Array__standard__String, /* ArrayIterator[E]: ArrayIterator[Array[String]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Array[String]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Array[String]] not a live type) */
}
};
/* runtime type MapValuesIterator[SourceFile, Array[String]] */
const struct type type_standard__MapValuesIterator__nit__SourceFile__standard__Array__standard__String = {
-1, /*CAST DEAD*/
"MapValuesIterator[SourceFile, Array[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__SourceFile__standard__Array__standard__String,
2,
{
0, /* Object */
669, /* MapValuesIterator[SourceFile, Array[String]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__SourceFile__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
&type_standard__MapIterator__nit__SourceFile__standard__Array__standard__String, /* MapIterator[K, V]: MapIterator[SourceFile, Array[String]] */
}
};
/* runtime type MapKeysIterator[String, Option] */
const struct type type_standard__MapKeysIterator__standard__String__opts__Option = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__opts__Option,
2,
{
0, /* Object */
670, /* MapKeysIterator[String, Option] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__opts__Option = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__opts__Option, /* MapIterator[K, V]: MapIterator[String, Option] */
}
};
/* runtime type MapValuesIterator[String, Option] */
const struct type type_standard__MapValuesIterator__standard__String__opts__Option = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__opts__Option,
2,
{
0, /* Object */
671, /* MapValuesIterator[String, Option] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__opts__Option = {
0, /* dummy */
{
&type_standard__Array__opts__Option, /* Array[E]: Array[Option] */
&type_standard__MapIterator__standard__String__opts__Option, /* MapIterator[K, V]: MapIterator[String, Option] */
}
};
/* runtime type HashMapKeys[Phase, POSetElement[Phase]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__Phase__poset__POSetElement__nit__Phase = {
-1, /*CAST DEAD*/
"HashMapKeys[Phase, POSetElement[Phase]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__Phase__poset__POSetElement__nit__Phase,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
166, /* Collection[Phase] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1591, /* HashMapKeys[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__Phase__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_standard__HashMap__nit__Phase__poset__POSetElement__nit__Phase, /* HashMap[K, V]: HashMap[Phase, POSetElement[Phase]] */
&type_nit__Phase, /* K: Phase */
&type_nit__Phase, /* E: Phase */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_standard__Array__nit__Phase, /* Array[E]: Array[Phase] */
&type_standard__MapKeysIterator__nit__Phase__poset__POSetElement__nit__Phase, /* MapKeysIterator[K, V]: MapKeysIterator[Phase, POSetElement[Phase]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__Phase, /* E: Phase */
}
};
/* runtime type HashMapValues[Phase, POSetElement[Phase]] */
const struct type type_standard__hash_collection__HashMapValues__nit__Phase__poset__POSetElement__nit__Phase = {
-1, /*CAST DEAD*/
"HashMapValues[Phase, POSetElement[Phase]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__Phase__poset__POSetElement__nit__Phase,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
276, /* Collection[POSetElement[Phase]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1592, /* HashMapValues[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__Phase__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_standard__HashMap__nit__Phase__poset__POSetElement__nit__Phase, /* HashMap[K, V]: HashMap[Phase, POSetElement[Phase]] */
&type_poset__POSetElement__nit__Phase, /* V: POSetElement[Phase] */
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_standard__Collection__poset__POSetElement__nit__Phase, /* Collection[E]: Collection[POSetElement[Phase]] */
&type_standard__Array__poset__POSetElement__nit__Phase, /* Array[E]: Array[POSetElement[Phase]] */
&type_standard__MapValuesIterator__nit__Phase__poset__POSetElement__nit__Phase, /* MapValuesIterator[K, V]: MapValuesIterator[Phase, POSetElement[Phase]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase = {
672,
"NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase,
2,
{
0, /* Object */
672, /* NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase, /* E: nullable HashMapNode[Phase, POSetElement[Phase]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase, /* NativeArray[E]: NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[Phase, POSetElement[Phase]]] not a live type) */
}
};
/* runtime type HashMapIterator[Phase, POSetElement[Phase]] */
const struct type type_standard__HashMapIterator__nit__Phase__poset__POSetElement__nit__Phase = {
-1, /*CAST DEAD*/
"HashMapIterator[Phase, POSetElement[Phase]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__Phase__poset__POSetElement__nit__Phase,
3,
{
0, /* Object */
400, /* MapIterator[Phase, POSetElement[Phase]] */
1371, /* HashMapIterator[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__Phase__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_standard__HashMap__nit__Phase__poset__POSetElement__nit__Phase, /* HashMap[K, V]: HashMap[Phase, POSetElement[Phase]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase, /* nullable HashMapNode[K, V]: nullable HashMapNode[Phase, POSetElement[Phase]] */
}
};
/* runtime type HashMapNode[Phase, POSetElement[Phase]] */
const struct type type_standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase = {
1372,
"HashMapNode[Phase, POSetElement[Phase]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase,
3,
{
0, /* Object */
201, /* nullable HashMapNode[Phase, POSetElement[Phase]] */
1372, /* HashMapNode[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_poset__POSetElement__nit__Phase, /* V: POSetElement[Phase] */
&type_nit__Phase, /* K: Phase */
&type_nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase, /* nullable N: nullable HashMapNode[Phase, POSetElement[Phase]] */
}
};
/* runtime type HashSet[Phase] */
const struct type type_standard__HashSet__nit__Phase = {
1781,
"HashSet[Phase]", /* class_name_string */
7,
0,
&resolution_table_standard__HashSet__nit__Phase,
8,
{
0, /* Object */
5, /* Set[Object] */
-1, /* empty */
166, /* Collection[Phase] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1781, /* HashSet[Phase] */
},
};
const struct types resolution_table_standard__HashSet__nit__Phase = {
0, /* dummy */
{
&type_nit__Phase, /* E: Phase */
&type_standard__hash_collection__HashSetNode__nit__Phase, /* HashSetNode[E]: HashSetNode[Phase] */
&type_nit__Phase, /* E: Phase */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_standard__Array__nit__Phase, /* Array[E]: Array[Phase] */
&type_standard__hash_collection__HashSetIterator__nit__Phase, /* HashSetIterator[E]: HashSetIterator[Phase] */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_standard__HashSet__nit__Phase, /* HashSet[E]: HashSet[Phase] */
&type_nit__Phase, /* E: Phase */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
NULL, /* empty (RandQueue[E]: RandQueue[Phase] not a live type) */
&type_nit__Phase, /* E: Phase */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashSetNode[Phase]] not a live type) */
&type_nullable__standard__hash_collection__HashSetNode__nit__Phase, /* nullable N: nullable HashSetNode[Phase] */
NULL, /* empty (nullable K: nullable Phase not a live type) */
&type_nit__Phase, /* K: Phase */
&type_standard__hash_collection__HashSetNode__nit__Phase, /* N: HashSetNode[Phase] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Phase, /* NativeArray[nullable N]: NativeArray[nullable HashSetNode[Phase]] */
NULL, /* empty (Set[E]: Set[Phase] not a live type) */
}
};
/* runtime type HashMapKeys[MModule, Array[String]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__standard__Array__standard__String = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, Array[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__Array__standard__String,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1593, /* HashMapKeys[MModule, Array[String]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Array__standard__String, /* HashMap[K, V]: HashMap[MModule, Array[String]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__standard__Array__standard__String, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, Array[String]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, Array[String]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__standard__Array__standard__String = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, Array[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__Array__standard__String,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
261, /* Collection[Array[String]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1594, /* HashMapValues[MModule, Array[String]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Array__standard__String, /* HashMap[K, V]: HashMap[MModule, Array[String]] */
&type_standard__Array__standard__String, /* V: Array[String] */
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__Collection__standard__Array__standard__String, /* Collection[E]: Collection[Array[String]] */
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
&type_standard__MapValuesIterator__nit__MModule__standard__Array__standard__String, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, Array[String]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__Array__standard__String, /* E: Array[String] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Array[String]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String = {
673,
"NativeArray[nullable HashMapNode[MModule, Array[String]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String,
2,
{
0, /* Object */
673, /* NativeArray[nullable HashMapNode[MModule, Array[String]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String, /* E: nullable HashMapNode[MModule, Array[String]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, Array[String]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, Array[String]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, Array[String]] */
const struct type type_standard__HashMapIterator__nit__MModule__standard__Array__standard__String = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, Array[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__standard__Array__standard__String,
3,
{
0, /* Object */
401, /* MapIterator[MModule, Array[String]] */
1373, /* HashMapIterator[MModule, Array[String]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__Array__standard__String, /* HashMap[K, V]: HashMap[MModule, Array[String]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, Array[String]] */
}
};
/* runtime type HashMapNode[MModule, Array[String]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String = {
1374,
"HashMapNode[MModule, Array[String]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String,
3,
{
0, /* Object */
202, /* nullable HashMapNode[MModule, Array[String]] */
1374, /* HashMapNode[MModule, Array[String]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* V: Array[String] */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Array__standard__String, /* nullable N: nullable HashMapNode[MModule, Array[String]] */
}
};
/* runtime type MapKeysIterator[MModule, HashSet[String]] */
const struct type type_standard__MapKeysIterator__nit__MModule__standard__HashSet__standard__String = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, HashSet[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MModule__standard__HashSet__standard__String,
2,
{
0, /* Object */
674, /* MapKeysIterator[MModule, HashSet[String]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MModule__standard__HashSet__standard__String = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapIterator__nit__MModule__standard__HashSet__standard__String, /* MapIterator[K, V]: MapIterator[MModule, HashSet[String]] */
}
};
/* runtime type Array[HashSet[String]] */
const struct type type_standard__Array__standard__HashSet__standard__String = {
1869,
"Array[HashSet[String]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__HashSet__standard__String,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
262, /* Collection[HashSet[String]] */
347, /* AbstractArrayRead[HashSet[String]] */
481, /* AbstractArray[HashSet[String]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1869, /* Array[HashSet[String]] */
},
};
const struct types resolution_table_standard__Array__standard__HashSet__standard__String = {
0, /* dummy */
{
&type_standard__HashSet__standard__String, /* E: HashSet[String] */
&type_standard__HashSet__standard__String, /* E: HashSet[String] */
&type_standard__HashSet__standard__String, /* E: HashSet[String] */
&type_standard__Collection__standard__HashSet__standard__String, /* Collection[E]: Collection[HashSet[String]] */
&type_standard__Array__standard__HashSet__standard__String, /* Array[E]: Array[HashSet[String]] */
&type_standard__HashSet__standard__String, /* E: HashSet[String] */
&type_standard__Collection__standard__HashSet__standard__String, /* Collection[E]: Collection[HashSet[String]] */
&type_standard__Array__standard__HashSet__standard__String, /* Array[E]: Array[HashSet[String]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[HashSet[String]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[HashSet[String]] not a live type) */
&type_standard__Collection__standard__HashSet__standard__String, /* Collection[E]: Collection[HashSet[String]] */
NULL, /* empty (RandQueue[E]: RandQueue[HashSet[String]] not a live type) */
&type_standard__HashSet__standard__String, /* E: HashSet[String] */
&type_standard__Collection__standard__HashSet__standard__String, /* Collection[E]: Collection[HashSet[String]] */
&type_standard__Array__standard__HashSet__standard__String, /* Array[E]: Array[HashSet[String]] */
&type_standard__NativeArray__standard__HashSet__standard__String, /* NativeArray[E]: NativeArray[HashSet[String]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[HashSet[String]] not a live type) */
&type_standard__Array__standard__HashSet__standard__String, /* SELF: Array[HashSet[String]] */
&type_standard__HashSet__standard__String, /* E: HashSet[String] */
&type_standard__Collection__standard__HashSet__standard__String, /* Collection[E]: Collection[HashSet[String]] */
&type_standard__HashSet__standard__String, /* E: HashSet[String] */
&type_standard__Array__standard__HashSet__standard__String, /* Array[E]: Array[HashSet[String]] */
&type_standard__AbstractArray__standard__HashSet__standard__String, /* AbstractArray[E]: AbstractArray[HashSet[String]] */
&type_standard__array__ArrayIterator__standard__HashSet__standard__String, /* ArrayIterator[E]: ArrayIterator[HashSet[String]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[HashSet[String]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[HashSet[String]] not a live type) */
}
};
/* runtime type MapValuesIterator[MModule, HashSet[String]] */
const struct type type_standard__MapValuesIterator__nit__MModule__standard__HashSet__standard__String = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, HashSet[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MModule__standard__HashSet__standard__String,
2,
{
0, /* Object */
675, /* MapValuesIterator[MModule, HashSet[String]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MModule__standard__HashSet__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__HashSet__standard__String, /* Array[E]: Array[HashSet[String]] */
&type_standard__MapIterator__nit__MModule__standard__HashSet__standard__String, /* MapIterator[K, V]: MapIterator[MModule, HashSet[String]] */
}
};
/* runtime type MapKeysIterator[String, Array[MProject]] */
const struct type type_standard__MapKeysIterator__standard__String__standard__Array__nit__MProject = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__standard__Array__nit__MProject,
2,
{
0, /* Object */
676, /* MapKeysIterator[String, Array[MProject]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__standard__Array__nit__MProject = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__standard__Array__nit__MProject, /* MapIterator[K, V]: MapIterator[String, Array[MProject]] */
}
};
/* runtime type Array[Array[MProject]] */
const struct type type_standard__Array__standard__Array__nit__MProject = {
1870,
"Array[Array[MProject]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Array__nit__MProject,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
263, /* Collection[Array[MProject]] */
348, /* AbstractArrayRead[Array[MProject]] */
482, /* AbstractArray[Array[MProject]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1870, /* Array[Array[MProject]] */
},
};
const struct types resolution_table_standard__Array__standard__Array__nit__MProject = {
0, /* dummy */
{
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__Collection__standard__Array__nit__MProject, /* Collection[E]: Collection[Array[MProject]] */
&type_standard__Array__standard__Array__nit__MProject, /* Array[E]: Array[Array[MProject]] */
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__Collection__standard__Array__nit__MProject, /* Collection[E]: Collection[Array[MProject]] */
&type_standard__Array__standard__Array__nit__MProject, /* Array[E]: Array[Array[MProject]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Array[MProject]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Array[MProject]] not a live type) */
&type_standard__Collection__standard__Array__nit__MProject, /* Collection[E]: Collection[Array[MProject]] */
NULL, /* empty (RandQueue[E]: RandQueue[Array[MProject]] not a live type) */
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__Collection__standard__Array__nit__MProject, /* Collection[E]: Collection[Array[MProject]] */
&type_standard__Array__standard__Array__nit__MProject, /* Array[E]: Array[Array[MProject]] */
&type_standard__NativeArray__standard__Array__nit__MProject, /* NativeArray[E]: NativeArray[Array[MProject]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Array[MProject]] not a live type) */
&type_standard__Array__standard__Array__nit__MProject, /* SELF: Array[Array[MProject]] */
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__Collection__standard__Array__nit__MProject, /* Collection[E]: Collection[Array[MProject]] */
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__Array__standard__Array__nit__MProject, /* Array[E]: Array[Array[MProject]] */
&type_standard__AbstractArray__standard__Array__nit__MProject, /* AbstractArray[E]: AbstractArray[Array[MProject]] */
&type_standard__array__ArrayIterator__standard__Array__nit__MProject, /* ArrayIterator[E]: ArrayIterator[Array[MProject]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Array[MProject]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Array[MProject]] not a live type) */
}
};
/* runtime type MapValuesIterator[String, Array[MProject]] */
const struct type type_standard__MapValuesIterator__standard__String__standard__Array__nit__MProject = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__standard__Array__nit__MProject,
2,
{
0, /* Object */
677, /* MapValuesIterator[String, Array[MProject]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__standard__Array__nit__MProject = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MProject, /* Array[E]: Array[Array[MProject]] */
&type_standard__MapIterator__standard__String__standard__Array__nit__MProject, /* MapIterator[K, V]: MapIterator[String, Array[MProject]] */
}
};
/* runtime type HashMapKeys[MModule, POSetElement[MModule]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__poset__POSetElement__nit__MModule = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, POSetElement[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__poset__POSetElement__nit__MModule,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1595, /* HashMapKeys[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__poset__POSetElement__nit__MModule, /* HashMap[K, V]: HashMap[MModule, POSetElement[MModule]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__poset__POSetElement__nit__MModule, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, POSetElement[MModule]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, POSetElement[MModule]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__poset__POSetElement__nit__MModule = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, POSetElement[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__poset__POSetElement__nit__MModule,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
277, /* Collection[POSetElement[MModule]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1596, /* HashMapValues[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__poset__POSetElement__nit__MModule, /* HashMap[K, V]: HashMap[MModule, POSetElement[MModule]] */
&type_poset__POSetElement__nit__MModule, /* V: POSetElement[MModule] */
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_standard__Collection__poset__POSetElement__nit__MModule, /* Collection[E]: Collection[POSetElement[MModule]] */
&type_standard__Array__poset__POSetElement__nit__MModule, /* Array[E]: Array[POSetElement[MModule]] */
&type_standard__MapValuesIterator__nit__MModule__poset__POSetElement__nit__MModule, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, POSetElement[MModule]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule = {
678,
"NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule,
2,
{
0, /* Object */
678, /* NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule, /* E: nullable HashMapNode[MModule, POSetElement[MModule]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, POSetElement[MModule]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, POSetElement[MModule]] */
const struct type type_standard__HashMapIterator__nit__MModule__poset__POSetElement__nit__MModule = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, POSetElement[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__poset__POSetElement__nit__MModule,
3,
{
0, /* Object */
402, /* MapIterator[MModule, POSetElement[MModule]] */
1375, /* HashMapIterator[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__poset__POSetElement__nit__MModule, /* HashMap[K, V]: HashMap[MModule, POSetElement[MModule]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, POSetElement[MModule]] */
}
};
/* runtime type HashMapNode[MModule, POSetElement[MModule]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule = {
1376,
"HashMapNode[MModule, POSetElement[MModule]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule,
3,
{
0, /* Object */
203, /* nullable HashMapNode[MModule, POSetElement[MModule]] */
1376, /* HashMapNode[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MModule, /* V: POSetElement[MModule] */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule, /* nullable N: nullable HashMapNode[MModule, POSetElement[MModule]] */
}
};
/* runtime type MapKeysIterator[String, Array[MModule]] */
const struct type type_standard__MapKeysIterator__standard__String__standard__Array__nit__MModule = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__standard__Array__nit__MModule,
2,
{
0, /* Object */
679, /* MapKeysIterator[String, Array[MModule]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__standard__Array__nit__MModule = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__standard__Array__nit__MModule, /* MapIterator[K, V]: MapIterator[String, Array[MModule]] */
}
};
/* runtime type Array[Array[MModule]] */
const struct type type_standard__Array__standard__Array__nit__MModule = {
1871,
"Array[Array[MModule]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Array__nit__MModule,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
264, /* Collection[Array[MModule]] */
349, /* AbstractArrayRead[Array[MModule]] */
483, /* AbstractArray[Array[MModule]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1871, /* Array[Array[MModule]] */
},
};
const struct types resolution_table_standard__Array__standard__Array__nit__MModule = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__Collection__standard__Array__nit__MModule, /* Collection[E]: Collection[Array[MModule]] */
&type_standard__Array__standard__Array__nit__MModule, /* Array[E]: Array[Array[MModule]] */
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__Collection__standard__Array__nit__MModule, /* Collection[E]: Collection[Array[MModule]] */
&type_standard__Array__standard__Array__nit__MModule, /* Array[E]: Array[Array[MModule]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Array[MModule]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Array[MModule]] not a live type) */
&type_standard__Collection__standard__Array__nit__MModule, /* Collection[E]: Collection[Array[MModule]] */
NULL, /* empty (RandQueue[E]: RandQueue[Array[MModule]] not a live type) */
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__Collection__standard__Array__nit__MModule, /* Collection[E]: Collection[Array[MModule]] */
&type_standard__Array__standard__Array__nit__MModule, /* Array[E]: Array[Array[MModule]] */
&type_standard__NativeArray__standard__Array__nit__MModule, /* NativeArray[E]: NativeArray[Array[MModule]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Array[MModule]] not a live type) */
&type_standard__Array__standard__Array__nit__MModule, /* SELF: Array[Array[MModule]] */
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__Collection__standard__Array__nit__MModule, /* Collection[E]: Collection[Array[MModule]] */
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__Array__standard__Array__nit__MModule, /* Array[E]: Array[Array[MModule]] */
&type_standard__AbstractArray__standard__Array__nit__MModule, /* AbstractArray[E]: AbstractArray[Array[MModule]] */
&type_standard__array__ArrayIterator__standard__Array__nit__MModule, /* ArrayIterator[E]: ArrayIterator[Array[MModule]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Array[MModule]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Array[MModule]] not a live type) */
}
};
/* runtime type MapValuesIterator[String, Array[MModule]] */
const struct type type_standard__MapValuesIterator__standard__String__standard__Array__nit__MModule = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__standard__Array__nit__MModule,
2,
{
0, /* Object */
680, /* MapValuesIterator[String, Array[MModule]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__standard__Array__nit__MModule = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MModule, /* Array[E]: Array[Array[MModule]] */
&type_standard__MapIterator__standard__String__standard__Array__nit__MModule, /* MapIterator[K, V]: MapIterator[String, Array[MModule]] */
}
};
/* runtime type HashMapKeys[MClassDef, POSetElement[MClassDef]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MClassDef__poset__POSetElement__nit__MClassDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
161, /* Collection[MClassDef] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1597, /* HashMapKeys[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* HashMap[K, V]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_nit__MClassDef, /* K: MClassDef */
&type_nit__MClassDef, /* E: MClassDef */
&type_standard__Collection__nit__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_standard__Array__nit__MClassDef, /* Array[E]: Array[MClassDef] */
&type_standard__MapKeysIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* MapKeysIterator[K, V]: MapKeysIterator[MClassDef, POSetElement[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassDef, /* E: MClassDef */
}
};
/* runtime type HashMapValues[MClassDef, POSetElement[MClassDef]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
-1, /*CAST DEAD*/
"HashMapValues[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MClassDef__poset__POSetElement__nit__MClassDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
278, /* Collection[POSetElement[MClassDef]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1598, /* HashMapValues[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* HashMap[K, V]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_poset__POSetElement__nit__MClassDef, /* V: POSetElement[MClassDef] */
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_standard__Collection__poset__POSetElement__nit__MClassDef, /* Collection[E]: Collection[POSetElement[MClassDef]] */
&type_standard__Array__poset__POSetElement__nit__MClassDef, /* Array[E]: Array[POSetElement[MClassDef]] */
&type_standard__MapValuesIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* MapValuesIterator[K, V]: MapValuesIterator[MClassDef, POSetElement[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
681,
"NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef,
2,
{
0, /* Object */
681, /* NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* E: nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] not a live type) */
}
};
/* runtime type HashMapIterator[MClassDef, POSetElement[MClassDef]] */
const struct type type_standard__HashMapIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef,
3,
{
0, /* Object */
403, /* MapIterator[MClassDef, POSetElement[MClassDef]] */
1377, /* HashMapIterator[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* HashMap[K, V]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* nullable HashMapNode[K, V]: nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
}
};
/* runtime type HashMapNode[MClassDef, POSetElement[MClassDef]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
1378,
"HashMapNode[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef,
3,
{
0, /* Object */
204, /* nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
1378, /* HashMapNode[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MClassDef, /* V: POSetElement[MClassDef] */
&type_nit__MClassDef, /* K: MClassDef */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* nullable N: nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
}
};
/* runtime type HashMapKeys[MClassType, POSetElement[MClassType]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MClassType__poset__POSetElement__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassType, POSetElement[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MClassType__poset__POSetElement__nit__MClassType,
9,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
163, /* Collection[MClassType] */
168, /* Collection[MType] */
219, /* Collection[Object] */
254, /* Collection[nullable MType] */
1832, /* HashMapKeys[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MClassType__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClassType__poset__POSetElement__nit__MClassType, /* HashMap[K, V]: HashMap[MClassType, POSetElement[MClassType]] */
&type_nit__MClassType, /* K: MClassType */
&type_nit__MClassType, /* E: MClassType */
&type_standard__Collection__nit__MClassType, /* Collection[E]: Collection[MClassType] */
&type_standard__Array__nit__MClassType, /* Array[E]: Array[MClassType] */
&type_standard__MapKeysIterator__nit__MClassType__poset__POSetElement__nit__MClassType, /* MapKeysIterator[K, V]: MapKeysIterator[MClassType, POSetElement[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassType, /* E: MClassType */
}
};
/* runtime type HashMapValues[MClassType, POSetElement[MClassType]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MClassType__poset__POSetElement__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapValues[MClassType, POSetElement[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MClassType__poset__POSetElement__nit__MClassType,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
279, /* Collection[POSetElement[MClassType]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1599, /* HashMapValues[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MClassType__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClassType__poset__POSetElement__nit__MClassType, /* HashMap[K, V]: HashMap[MClassType, POSetElement[MClassType]] */
&type_poset__POSetElement__nit__MClassType, /* V: POSetElement[MClassType] */
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_standard__Collection__poset__POSetElement__nit__MClassType, /* Collection[E]: Collection[POSetElement[MClassType]] */
&type_standard__Array__poset__POSetElement__nit__MClassType, /* Array[E]: Array[POSetElement[MClassType]] */
&type_standard__MapValuesIterator__nit__MClassType__poset__POSetElement__nit__MClassType, /* MapValuesIterator[K, V]: MapValuesIterator[MClassType, POSetElement[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType = {
682,
"NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType,
2,
{
0, /* Object */
682, /* NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType, /* E: nullable HashMapNode[MClassType, POSetElement[MClassType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MClassType, POSetElement[MClassType]]] not a live type) */
}
};
/* runtime type HashMapIterator[MClassType, POSetElement[MClassType]] */
const struct type type_standard__HashMapIterator__nit__MClassType__poset__POSetElement__nit__MClassType = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassType, POSetElement[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MClassType__poset__POSetElement__nit__MClassType,
3,
{
0, /* Object */
404, /* MapIterator[MClassType, POSetElement[MClassType]] */
1379, /* HashMapIterator[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MClassType__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClassType__poset__POSetElement__nit__MClassType, /* HashMap[K, V]: HashMap[MClassType, POSetElement[MClassType]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType, /* nullable HashMapNode[K, V]: nullable HashMapNode[MClassType, POSetElement[MClassType]] */
}
};
/* runtime type HashMapNode[MClassType, POSetElement[MClassType]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType = {
1380,
"HashMapNode[MClassType, POSetElement[MClassType]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType,
3,
{
0, /* Object */
205, /* nullable HashMapNode[MClassType, POSetElement[MClassType]] */
1380, /* HashMapNode[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MClassType, /* V: POSetElement[MClassType] */
&type_nit__MClassType, /* K: MClassType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType, /* nullable N: nullable HashMapNode[MClassType, POSetElement[MClassType]] */
}
};
/* runtime type MapKeysIterator[String, Array[MClass]] */
const struct type type_standard__MapKeysIterator__standard__String__standard__Array__nit__MClass = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__standard__Array__nit__MClass,
2,
{
0, /* Object */
683, /* MapKeysIterator[String, Array[MClass]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__standard__Array__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__standard__Array__nit__MClass, /* MapIterator[K, V]: MapIterator[String, Array[MClass]] */
}
};
/* runtime type Array[Array[MClass]] */
const struct type type_standard__Array__standard__Array__nit__MClass = {
1872,
"Array[Array[MClass]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Array__nit__MClass,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
265, /* Collection[Array[MClass]] */
350, /* AbstractArrayRead[Array[MClass]] */
484, /* AbstractArray[Array[MClass]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1872, /* Array[Array[MClass]] */
},
};
const struct types resolution_table_standard__Array__standard__Array__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__Collection__standard__Array__nit__MClass, /* Collection[E]: Collection[Array[MClass]] */
&type_standard__Array__standard__Array__nit__MClass, /* Array[E]: Array[Array[MClass]] */
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__Collection__standard__Array__nit__MClass, /* Collection[E]: Collection[Array[MClass]] */
&type_standard__Array__standard__Array__nit__MClass, /* Array[E]: Array[Array[MClass]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Array[MClass]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Array[MClass]] not a live type) */
&type_standard__Collection__standard__Array__nit__MClass, /* Collection[E]: Collection[Array[MClass]] */
NULL, /* empty (RandQueue[E]: RandQueue[Array[MClass]] not a live type) */
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__Collection__standard__Array__nit__MClass, /* Collection[E]: Collection[Array[MClass]] */
&type_standard__Array__standard__Array__nit__MClass, /* Array[E]: Array[Array[MClass]] */
&type_standard__NativeArray__standard__Array__nit__MClass, /* NativeArray[E]: NativeArray[Array[MClass]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Array[MClass]] not a live type) */
&type_standard__Array__standard__Array__nit__MClass, /* SELF: Array[Array[MClass]] */
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__Collection__standard__Array__nit__MClass, /* Collection[E]: Collection[Array[MClass]] */
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__Array__standard__Array__nit__MClass, /* Array[E]: Array[Array[MClass]] */
&type_standard__AbstractArray__standard__Array__nit__MClass, /* AbstractArray[E]: AbstractArray[Array[MClass]] */
&type_standard__array__ArrayIterator__standard__Array__nit__MClass, /* ArrayIterator[E]: ArrayIterator[Array[MClass]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Array[MClass]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Array[MClass]] not a live type) */
}
};
/* runtime type MapValuesIterator[String, Array[MClass]] */
const struct type type_standard__MapValuesIterator__standard__String__standard__Array__nit__MClass = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__standard__Array__nit__MClass,
2,
{
0, /* Object */
684, /* MapValuesIterator[String, Array[MClass]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__standard__Array__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MClass, /* Array[E]: Array[Array[MClass]] */
&type_standard__MapIterator__standard__String__standard__Array__nit__MClass, /* MapIterator[K, V]: MapIterator[String, Array[MClass]] */
}
};
/* runtime type MapKeysIterator[String, Array[MProperty]] */
const struct type type_standard__MapKeysIterator__standard__String__standard__Array__nit__MProperty = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__standard__Array__nit__MProperty,
2,
{
0, /* Object */
685, /* MapKeysIterator[String, Array[MProperty]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__standard__Array__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__standard__Array__nit__MProperty, /* MapIterator[K, V]: MapIterator[String, Array[MProperty]] */
}
};
/* runtime type Array[Array[MProperty]] */
const struct type type_standard__Array__standard__Array__nit__MProperty = {
1873,
"Array[Array[MProperty]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Array__nit__MProperty,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
266, /* Collection[Array[MProperty]] */
351, /* AbstractArrayRead[Array[MProperty]] */
485, /* AbstractArray[Array[MProperty]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1873, /* Array[Array[MProperty]] */
},
};
const struct types resolution_table_standard__Array__standard__Array__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__Collection__standard__Array__nit__MProperty, /* Collection[E]: Collection[Array[MProperty]] */
&type_standard__Array__standard__Array__nit__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__Collection__standard__Array__nit__MProperty, /* Collection[E]: Collection[Array[MProperty]] */
&type_standard__Array__standard__Array__nit__MProperty, /* Array[E]: Array[Array[MProperty]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Array[MProperty]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Array[MProperty]] not a live type) */
&type_standard__Collection__standard__Array__nit__MProperty, /* Collection[E]: Collection[Array[MProperty]] */
NULL, /* empty (RandQueue[E]: RandQueue[Array[MProperty]] not a live type) */
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__Collection__standard__Array__nit__MProperty, /* Collection[E]: Collection[Array[MProperty]] */
&type_standard__Array__standard__Array__nit__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_standard__NativeArray__standard__Array__nit__MProperty, /* NativeArray[E]: NativeArray[Array[MProperty]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Array[MProperty]] not a live type) */
&type_standard__Array__standard__Array__nit__MProperty, /* SELF: Array[Array[MProperty]] */
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__Collection__standard__Array__nit__MProperty, /* Collection[E]: Collection[Array[MProperty]] */
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__Array__standard__Array__nit__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_standard__AbstractArray__standard__Array__nit__MProperty, /* AbstractArray[E]: AbstractArray[Array[MProperty]] */
&type_standard__array__ArrayIterator__standard__Array__nit__MProperty, /* ArrayIterator[E]: ArrayIterator[Array[MProperty]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Array[MProperty]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Array[MProperty]] not a live type) */
}
};
/* runtime type MapValuesIterator[String, Array[MProperty]] */
const struct type type_standard__MapValuesIterator__standard__String__standard__Array__nit__MProperty = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__standard__Array__nit__MProperty,
2,
{
0, /* Object */
686, /* MapValuesIterator[String, Array[MProperty]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__standard__Array__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_standard__MapIterator__standard__String__standard__Array__nit__MProperty, /* MapIterator[K, V]: MapIterator[String, Array[MProperty]] */
}
};
/* runtime type HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1600, /* HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
280, /* Collection[HashMap2[MType, String, nullable MProperty]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1601, /* HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* V: HashMap2[MType, String, nullable MProperty] */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_standard__Collection__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Collection[E]: Collection[HashMap2[MType, String, nullable MProperty]] */
&type_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Array[E]: Array[HashMap2[MType, String, nullable MProperty]] */
&type_standard__MapValuesIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
687,
"NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
2,
{
0, /* Object */
687, /* NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__HashMapIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
3,
{
0, /* Object */
405, /* MapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
1381, /* HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
}
};
/* runtime type HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
1382,
"HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
3,
{
0, /* Object */
206, /* nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
1382, /* HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* V: HashMap2[MType, String, nullable MProperty] */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* nullable N: nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
}
};
/* runtime type HashMap[MType, HashMap[String, nullable MProperty]] */
const struct type type_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
1383,
"HashMap[MType, HashMap[String, nullable MProperty]]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1383, /* HashMap[MType, HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMapIterator[K, V]: HashMapIterator[MType, HashMap[String, nullable MProperty]] */
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* V: HashMap[String, nullable MProperty] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMapNode[K, V]: HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMapKeys[K, V]: HashMapKeys[MType, HashMap[String, nullable MProperty]] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[MType] not a live type) */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMapValues[K, V]: HashMapValues[MType, HashMap[String, nullable MProperty]] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[HashMap[String, nullable MProperty]] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[MType, HashMap[String, nullable MProperty]] not a live type) */
&type_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[MType, HashMap[String, nullable MProperty]] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* nullable N: nullable HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_nullable__nit__MType, /* nullable K: nullable MType */
&type_nit__MType, /* K: MType */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* N: HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* V: HashMap[String, nullable MProperty] */
}
};
/* runtime type HashMap[String, nullable MProperty] */
const struct type type_standard__HashMap__standard__String__nullable__nit__MProperty = {
1384,
"HashMap[String, nullable MProperty]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__standard__String__nullable__nit__MProperty,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1384, /* HashMap[String, nullable MProperty] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__nullable__nit__MProperty, /* HashMapIterator[K, V]: HashMapIterator[String, nullable MProperty] */
&type_nullable__nit__MProperty, /* V: nullable MProperty */
&type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* HashMapNode[K, V]: HashMapNode[String, nullable MProperty] */
&type_standard__hash_collection__HashMapKeys__standard__String__nullable__nit__MProperty, /* HashMapKeys[K, V]: HashMapKeys[String, nullable MProperty] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[String] not a live type) */
&type_standard__hash_collection__HashMapValues__standard__String__nullable__nit__MProperty, /* HashMapValues[K, V]: HashMapValues[String, nullable MProperty] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[nullable MProperty] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[String, nullable MProperty] not a live type) */
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[String, nullable MProperty] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[String, nullable MProperty]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* nullable N: nullable HashMapNode[String, nullable MProperty] */
&type_nullable__standard__String, /* nullable K: nullable String */
&type_standard__String, /* K: String */
&type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* N: HashMapNode[String, nullable MProperty] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, nullable MProperty]] */
&type_standard__String, /* K: String */
&type_nullable__nit__MProperty, /* V: nullable MProperty */
}
};
/* runtime type MapKeysIterator[String, nullable ModulePath] */
const struct type type_standard__MapKeysIterator__standard__String__nullable__nit__ModulePath = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__nullable__nit__ModulePath,
2,
{
0, /* Object */
688, /* MapKeysIterator[String, nullable ModulePath] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__nullable__nit__ModulePath = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__nullable__nit__ModulePath, /* MapIterator[K, V]: MapIterator[String, nullable ModulePath] */
}
};
/* runtime type Array[nullable ModulePath] */
const struct type type_standard__Array__nullable__nit__ModulePath = {
1839,
"Array[nullable ModulePath]", /* class_name_string */
11,
0,
&resolution_table_standard__Array__nullable__nit__ModulePath,
12,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
-1, /* empty */
267, /* Collection[nullable ModulePath] */
-1, /* empty */
-1, /* empty */
352, /* AbstractArrayRead[nullable ModulePath] */
-1, /* empty */
-1, /* empty */
486, /* AbstractArray[nullable ModulePath] */
1839, /* Array[nullable ModulePath] */
},
};
const struct types resolution_table_standard__Array__nullable__nit__ModulePath = {
0, /* dummy */
{
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_standard__Collection__nullable__nit__ModulePath, /* Collection[E]: Collection[nullable ModulePath] */
&type_standard__Array__nullable__nit__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_standard__Collection__nullable__nit__ModulePath, /* Collection[E]: Collection[nullable ModulePath] */
&type_standard__Array__nullable__nit__ModulePath, /* Array[E]: Array[nullable ModulePath] */
NULL, /* empty (LifoQueue[E]: LifoQueue[nullable ModulePath] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[nullable ModulePath] not a live type) */
&type_standard__Collection__nullable__nit__ModulePath, /* Collection[E]: Collection[nullable ModulePath] */
NULL, /* empty (RandQueue[E]: RandQueue[nullable ModulePath] not a live type) */
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_standard__Collection__nullable__nit__ModulePath, /* Collection[E]: Collection[nullable ModulePath] */
&type_standard__Array__nullable__nit__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_standard__NativeArray__nullable__nit__ModulePath, /* NativeArray[E]: NativeArray[nullable ModulePath] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[nullable ModulePath] not a live type) */
&type_standard__Array__nullable__nit__ModulePath, /* SELF: Array[nullable ModulePath] */
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_standard__Collection__nullable__nit__ModulePath, /* Collection[E]: Collection[nullable ModulePath] */
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_standard__Array__nullable__nit__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_standard__AbstractArray__nullable__nit__ModulePath, /* AbstractArray[E]: AbstractArray[nullable ModulePath] */
&type_standard__array__ArrayIterator__nullable__nit__ModulePath, /* ArrayIterator[E]: ArrayIterator[nullable ModulePath] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[nullable ModulePath] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[nullable ModulePath] not a live type) */
}
};
/* runtime type MapValuesIterator[String, nullable ModulePath] */
const struct type type_standard__MapValuesIterator__standard__String__nullable__nit__ModulePath = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__nullable__nit__ModulePath,
2,
{
0, /* Object */
689, /* MapValuesIterator[String, nullable ModulePath] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__nullable__nit__ModulePath = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_standard__MapIterator__standard__String__nullable__nit__ModulePath, /* MapIterator[K, V]: MapIterator[String, nullable ModulePath] */
}
};
/* runtime type MapKeysIterator[String, nullable MGroup] */
const struct type type_standard__MapKeysIterator__standard__String__nullable__nit__MGroup = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__nullable__nit__MGroup,
2,
{
0, /* Object */
690, /* MapKeysIterator[String, nullable MGroup] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__nullable__nit__MGroup = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__nullable__nit__MGroup, /* MapIterator[K, V]: MapIterator[String, nullable MGroup] */
}
};
/* runtime type Array[nullable MGroup] */
const struct type type_standard__Array__nullable__nit__MGroup = {
1840,
"Array[nullable MGroup]", /* class_name_string */
11,
0,
&resolution_table_standard__Array__nullable__nit__MGroup,
12,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
-1, /* empty */
268, /* Collection[nullable MGroup] */
-1, /* empty */
-1, /* empty */
353, /* AbstractArrayRead[nullable MGroup] */
-1, /* empty */
-1, /* empty */
487, /* AbstractArray[nullable MGroup] */
1840, /* Array[nullable MGroup] */
},
};
const struct types resolution_table_standard__Array__nullable__nit__MGroup = {
0, /* dummy */
{
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_standard__Collection__nullable__nit__MGroup, /* Collection[E]: Collection[nullable MGroup] */
&type_standard__Array__nullable__nit__MGroup, /* Array[E]: Array[nullable MGroup] */
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_standard__Collection__nullable__nit__MGroup, /* Collection[E]: Collection[nullable MGroup] */
&type_standard__Array__nullable__nit__MGroup, /* Array[E]: Array[nullable MGroup] */
NULL, /* empty (LifoQueue[E]: LifoQueue[nullable MGroup] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[nullable MGroup] not a live type) */
&type_standard__Collection__nullable__nit__MGroup, /* Collection[E]: Collection[nullable MGroup] */
NULL, /* empty (RandQueue[E]: RandQueue[nullable MGroup] not a live type) */
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_standard__Collection__nullable__nit__MGroup, /* Collection[E]: Collection[nullable MGroup] */
&type_standard__Array__nullable__nit__MGroup, /* Array[E]: Array[nullable MGroup] */
&type_standard__NativeArray__nullable__nit__MGroup, /* NativeArray[E]: NativeArray[nullable MGroup] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[nullable MGroup] not a live type) */
&type_standard__Array__nullable__nit__MGroup, /* SELF: Array[nullable MGroup] */
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_standard__Collection__nullable__nit__MGroup, /* Collection[E]: Collection[nullable MGroup] */
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_standard__Array__nullable__nit__MGroup, /* Array[E]: Array[nullable MGroup] */
&type_standard__AbstractArray__nullable__nit__MGroup, /* AbstractArray[E]: AbstractArray[nullable MGroup] */
&type_standard__array__ArrayIterator__nullable__nit__MGroup, /* ArrayIterator[E]: ArrayIterator[nullable MGroup] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[nullable MGroup] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[nullable MGroup] not a live type) */
}
};
/* runtime type MapValuesIterator[String, nullable MGroup] */
const struct type type_standard__MapValuesIterator__standard__String__nullable__nit__MGroup = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__nullable__nit__MGroup,
2,
{
0, /* Object */
691, /* MapValuesIterator[String, nullable MGroup] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__nullable__nit__MGroup = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__MGroup, /* Array[E]: Array[nullable MGroup] */
&type_standard__MapIterator__standard__String__nullable__nit__MGroup, /* MapIterator[K, V]: MapIterator[String, nullable MGroup] */
}
};
/* runtime type MapKeysIterator[MModule, AModule] */
const struct type type_standard__MapKeysIterator__nit__MModule__nit__AModule = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MModule__nit__AModule,
2,
{
0, /* Object */
692, /* MapKeysIterator[MModule, AModule] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MModule__nit__AModule = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapIterator__nit__MModule__nit__AModule, /* MapIterator[K, V]: MapIterator[MModule, AModule] */
}
};
/* runtime type MapValuesIterator[MModule, AModule] */
const struct type type_standard__MapValuesIterator__nit__MModule__nit__AModule = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MModule__nit__AModule,
2,
{
0, /* Object */
693, /* MapValuesIterator[MModule, AModule] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MModule__nit__AModule = {
0, /* dummy */
{
&type_standard__Array__nit__AModule, /* Array[E]: Array[AModule] */
&type_standard__MapIterator__nit__MModule__nit__AModule, /* MapIterator[K, V]: MapIterator[MModule, AModule] */
}
};
/* runtime type MapKeysIterator[MClassDef, AClassdef] */
const struct type type_standard__MapKeysIterator__nit__MClassDef__nit__AClassdef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClassDef, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MClassDef__nit__AClassdef,
2,
{
0, /* Object */
694, /* MapKeysIterator[MClassDef, AClassdef] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MClassDef__nit__AClassdef = {
0, /* dummy */
{
&type_standard__Array__nit__MClassDef, /* Array[E]: Array[MClassDef] */
&type_standard__MapIterator__nit__MClassDef__nit__AClassdef, /* MapIterator[K, V]: MapIterator[MClassDef, AClassdef] */
}
};
/* runtime type MapValuesIterator[MClassDef, AClassdef] */
const struct type type_standard__MapValuesIterator__nit__MClassDef__nit__AClassdef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClassDef, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MClassDef__nit__AClassdef,
2,
{
0, /* Object */
695, /* MapValuesIterator[MClassDef, AClassdef] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MClassDef__nit__AClassdef = {
0, /* dummy */
{
&type_standard__Array__nit__AClassdef, /* Array[E]: Array[AClassdef] */
&type_standard__MapIterator__nit__MClassDef__nit__AClassdef, /* MapIterator[K, V]: MapIterator[MClassDef, AClassdef] */
}
};
/* runtime type MapKeysIterator[String, MModuleData[AAnnotation]] */
const struct type type_standard__MapKeysIterator__standard__String__nit__MModuleData__nit__AAnnotation = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, MModuleData[AAnnotation]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__nit__MModuleData__nit__AAnnotation,
2,
{
0, /* Object */
696, /* MapKeysIterator[String, MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__nit__MModuleData__nit__AAnnotation = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__nit__MModuleData__nit__AAnnotation, /* MapIterator[K, V]: MapIterator[String, MModuleData[AAnnotation]] */
}
};
/* runtime type Array[MModuleData[AAnnotation]] */
const struct type type_standard__Array__nit__MModuleData__nit__AAnnotation = {
1874,
"Array[MModuleData[AAnnotation]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__MModuleData__nit__AAnnotation,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
269, /* Collection[MModuleData[AAnnotation]] */
354, /* AbstractArrayRead[MModuleData[AAnnotation]] */
488, /* AbstractArray[MModuleData[AAnnotation]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1874, /* Array[MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_standard__Array__nit__MModuleData__nit__AAnnotation = {
0, /* dummy */
{
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_standard__Collection__nit__MModuleData__nit__AAnnotation, /* Collection[E]: Collection[MModuleData[AAnnotation]] */
&type_standard__Array__nit__MModuleData__nit__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_standard__Collection__nit__MModuleData__nit__AAnnotation, /* Collection[E]: Collection[MModuleData[AAnnotation]] */
&type_standard__Array__nit__MModuleData__nit__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[MModuleData[AAnnotation]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[MModuleData[AAnnotation]] not a live type) */
&type_standard__Collection__nit__MModuleData__nit__AAnnotation, /* Collection[E]: Collection[MModuleData[AAnnotation]] */
NULL, /* empty (RandQueue[E]: RandQueue[MModuleData[AAnnotation]] not a live type) */
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_standard__Collection__nit__MModuleData__nit__AAnnotation, /* Collection[E]: Collection[MModuleData[AAnnotation]] */
&type_standard__Array__nit__MModuleData__nit__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_standard__NativeArray__nit__MModuleData__nit__AAnnotation, /* NativeArray[E]: NativeArray[MModuleData[AAnnotation]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[MModuleData[AAnnotation]] not a live type) */
&type_standard__Array__nit__MModuleData__nit__AAnnotation, /* SELF: Array[MModuleData[AAnnotation]] */
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_standard__Collection__nit__MModuleData__nit__AAnnotation, /* Collection[E]: Collection[MModuleData[AAnnotation]] */
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_standard__Array__nit__MModuleData__nit__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_standard__AbstractArray__nit__MModuleData__nit__AAnnotation, /* AbstractArray[E]: AbstractArray[MModuleData[AAnnotation]] */
&type_standard__array__ArrayIterator__nit__MModuleData__nit__AAnnotation, /* ArrayIterator[E]: ArrayIterator[MModuleData[AAnnotation]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[MModuleData[AAnnotation]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[MModuleData[AAnnotation]] not a live type) */
}
};
/* runtime type MapValuesIterator[String, MModuleData[AAnnotation]] */
const struct type type_standard__MapValuesIterator__standard__String__nit__MModuleData__nit__AAnnotation = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, MModuleData[AAnnotation]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__nit__MModuleData__nit__AAnnotation,
2,
{
0, /* Object */
697, /* MapValuesIterator[String, MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__nit__MModuleData__nit__AAnnotation = {
0, /* dummy */
{
&type_standard__Array__nit__MModuleData__nit__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_standard__MapIterator__standard__String__nit__MModuleData__nit__AAnnotation, /* MapIterator[K, V]: MapIterator[String, MModuleData[AAnnotation]] */
}
};
/* runtime type MapKeysIterator[MPropDef, APropdef] */
const struct type type_standard__MapKeysIterator__nit__MPropDef__nit__APropdef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MPropDef, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MPropDef__nit__APropdef,
2,
{
0, /* Object */
698, /* MapKeysIterator[MPropDef, APropdef] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MPropDef__nit__APropdef = {
0, /* dummy */
{
&type_standard__Array__nit__MPropDef, /* Array[E]: Array[MPropDef] */
&type_standard__MapIterator__nit__MPropDef__nit__APropdef, /* MapIterator[K, V]: MapIterator[MPropDef, APropdef] */
}
};
/* runtime type MapValuesIterator[MPropDef, APropdef] */
const struct type type_standard__MapValuesIterator__nit__MPropDef__nit__APropdef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MPropDef, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MPropDef__nit__APropdef,
2,
{
0, /* Object */
699, /* MapValuesIterator[MPropDef, APropdef] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MPropDef__nit__APropdef = {
0, /* dummy */
{
&type_standard__Array__nit__APropdef, /* Array[E]: Array[APropdef] */
&type_standard__MapIterator__nit__MPropDef__nit__APropdef, /* MapIterator[K, V]: MapIterator[MPropDef, APropdef] */
}
};
/* runtime type HashMapKeys[MGroup, POSetElement[MGroup]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MGroup__poset__POSetElement__nit__MGroup = {
-1, /*CAST DEAD*/
"HashMapKeys[MGroup, POSetElement[MGroup]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MGroup__poset__POSetElement__nit__MGroup,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
167, /* Collection[MGroup] */
268, /* Collection[nullable MGroup] */
-1, /* empty */
219, /* Collection[Object] */
1782, /* HashMapKeys[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MGroup__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_standard__HashMap__nit__MGroup__poset__POSetElement__nit__MGroup, /* HashMap[K, V]: HashMap[MGroup, POSetElement[MGroup]] */
&type_nit__MGroup, /* K: MGroup */
&type_nit__MGroup, /* E: MGroup */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
&type_standard__MapKeysIterator__nit__MGroup__poset__POSetElement__nit__MGroup, /* MapKeysIterator[K, V]: MapKeysIterator[MGroup, POSetElement[MGroup]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MGroup, /* E: MGroup */
}
};
/* runtime type HashMapValues[MGroup, POSetElement[MGroup]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MGroup__poset__POSetElement__nit__MGroup = {
-1, /*CAST DEAD*/
"HashMapValues[MGroup, POSetElement[MGroup]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MGroup__poset__POSetElement__nit__MGroup,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
281, /* Collection[POSetElement[MGroup]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1602, /* HashMapValues[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MGroup__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_standard__HashMap__nit__MGroup__poset__POSetElement__nit__MGroup, /* HashMap[K, V]: HashMap[MGroup, POSetElement[MGroup]] */
&type_poset__POSetElement__nit__MGroup, /* V: POSetElement[MGroup] */
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_standard__Collection__poset__POSetElement__nit__MGroup, /* Collection[E]: Collection[POSetElement[MGroup]] */
&type_standard__Array__poset__POSetElement__nit__MGroup, /* Array[E]: Array[POSetElement[MGroup]] */
&type_standard__MapValuesIterator__nit__MGroup__poset__POSetElement__nit__MGroup, /* MapValuesIterator[K, V]: MapValuesIterator[MGroup, POSetElement[MGroup]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup = {
700,
"NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup,
2,
{
0, /* Object */
700, /* NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup, /* E: nullable HashMapNode[MGroup, POSetElement[MGroup]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup, /* NativeArray[E]: NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MGroup, POSetElement[MGroup]]] not a live type) */
}
};
/* runtime type HashMapIterator[MGroup, POSetElement[MGroup]] */
const struct type type_standard__HashMapIterator__nit__MGroup__poset__POSetElement__nit__MGroup = {
-1, /*CAST DEAD*/
"HashMapIterator[MGroup, POSetElement[MGroup]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MGroup__poset__POSetElement__nit__MGroup,
3,
{
0, /* Object */
406, /* MapIterator[MGroup, POSetElement[MGroup]] */
1385, /* HashMapIterator[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MGroup__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_standard__HashMap__nit__MGroup__poset__POSetElement__nit__MGroup, /* HashMap[K, V]: HashMap[MGroup, POSetElement[MGroup]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup, /* nullable HashMapNode[K, V]: nullable HashMapNode[MGroup, POSetElement[MGroup]] */
}
};
/* runtime type HashMapNode[MGroup, POSetElement[MGroup]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup = {
1386,
"HashMapNode[MGroup, POSetElement[MGroup]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup,
3,
{
0, /* Object */
207, /* nullable HashMapNode[MGroup, POSetElement[MGroup]] */
1386, /* HashMapNode[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MGroup, /* V: POSetElement[MGroup] */
&type_nit__MGroup, /* K: MGroup */
&type_nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup, /* nullable N: nullable HashMapNode[MGroup, POSetElement[MGroup]] */
}
};
/* runtime type NativeArray[MGroup] */
const struct type type_standard__NativeArray__nit__MGroup = {
1603,
"NativeArray[MGroup]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__MGroup,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
768, /* NativeArray[nullable MGroup] */
1603, /* NativeArray[MGroup] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MGroup = {
0, /* dummy */
{
&type_nit__MGroup, /* E: MGroup */
&type_standard__NativeArray__nit__MGroup, /* NativeArray[E]: NativeArray[MGroup] */
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
}
};
/* runtime type ArrayIterator[MGroup] */
const struct type type_standard__array__ArrayIterator__nit__MGroup = {
-1, /*CAST DEAD*/
"ArrayIterator[MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MGroup,
2,
{
0, /* Object */
701, /* ArrayIterator[MGroup] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MGroup = {
0, /* dummy */
{
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
&type_standard__AbstractArrayRead__nit__MGroup, /* AbstractArrayRead[E]: AbstractArrayRead[MGroup] */
}
};
/* runtime type HashSet[MGroup] */
const struct type type_standard__HashSet__nit__MGroup = {
1833,
"HashSet[MGroup]", /* class_name_string */
7,
0,
&resolution_table_standard__HashSet__nit__MGroup,
8,
{
0, /* Object */
5, /* Set[Object] */
-1, /* empty */
167, /* Collection[MGroup] */
268, /* Collection[nullable MGroup] */
-1, /* empty */
219, /* Collection[Object] */
1833, /* HashSet[MGroup] */
},
};
const struct types resolution_table_standard__HashSet__nit__MGroup = {
0, /* dummy */
{
&type_nit__MGroup, /* E: MGroup */
&type_standard__hash_collection__HashSetNode__nit__MGroup, /* HashSetNode[E]: HashSetNode[MGroup] */
&type_nit__MGroup, /* E: MGroup */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
&type_standard__hash_collection__HashSetIterator__nit__MGroup, /* HashSetIterator[E]: HashSetIterator[MGroup] */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_standard__HashSet__nit__MGroup, /* HashSet[E]: HashSet[MGroup] */
&type_nit__MGroup, /* E: MGroup */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
NULL, /* empty (RandQueue[E]: RandQueue[MGroup] not a live type) */
&type_nit__MGroup, /* E: MGroup */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashSetNode[MGroup]] not a live type) */
&type_nullable__standard__hash_collection__HashSetNode__nit__MGroup, /* nullable N: nullable HashSetNode[MGroup] */
&type_nullable__nit__MGroup, /* nullable K: nullable MGroup */
&type_nit__MGroup, /* K: MGroup */
&type_standard__hash_collection__HashSetNode__nit__MGroup, /* N: HashSetNode[MGroup] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MGroup, /* NativeArray[nullable N]: NativeArray[nullable HashSetNode[MGroup]] */
NULL, /* empty (Set[E]: Set[MGroup] not a live type) */
}
};
/* runtime type NativeArray[FlatText] */
const struct type type_standard__NativeArray__standard__FlatText = {
1604,
"NativeArray[FlatText]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__standard__FlatText,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1324, /* NativeArray[Writable] */
1604, /* NativeArray[FlatText] */
},
};
const struct types resolution_table_standard__NativeArray__standard__FlatText = {
0, /* dummy */
{
&type_standard__FlatText, /* E: FlatText */
&type_standard__NativeArray__standard__FlatText, /* NativeArray[E]: NativeArray[FlatText] */
&type_standard__Array__standard__FlatText, /* Array[E]: Array[FlatText] */
}
};
/* runtime type ArrayIterator[FlatText] */
const struct type type_standard__array__ArrayIterator__standard__FlatText = {
-1, /*CAST DEAD*/
"ArrayIterator[FlatText]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__FlatText,
2,
{
0, /* Object */
702, /* ArrayIterator[FlatText] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__FlatText = {
0, /* dummy */
{
&type_standard__Array__standard__FlatText, /* Array[E]: Array[FlatText] */
&type_standard__AbstractArrayRead__standard__FlatText, /* AbstractArrayRead[E]: AbstractArrayRead[FlatText] */
}
};
/* runtime type NativeArray[AImport] */
const struct type type_standard__NativeArray__nit__AImport = {
1605,
"NativeArray[AImport]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__AImport,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1605, /* NativeArray[AImport] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AImport = {
0, /* dummy */
{
&type_nit__AImport, /* E: AImport */
&type_standard__NativeArray__nit__AImport, /* NativeArray[E]: NativeArray[AImport] */
&type_standard__Array__nit__AImport, /* Array[E]: Array[AImport] */
}
};
/* runtime type ArrayIterator[AImport] */
const struct type type_standard__array__ArrayIterator__nit__AImport = {
-1, /*CAST DEAD*/
"ArrayIterator[AImport]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AImport,
2,
{
0, /* Object */
703, /* ArrayIterator[AImport] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AImport = {
0, /* dummy */
{
&type_standard__Array__nit__AImport, /* Array[E]: Array[AImport] */
&type_standard__AbstractArrayRead__nit__AImport, /* AbstractArrayRead[E]: AbstractArrayRead[AImport] */
}
};
/* runtime type NativeArray[TId] */
const struct type type_standard__NativeArray__nit__TId = {
1606,
"NativeArray[TId]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__TId,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1398, /* NativeArray[Token] */
1606, /* NativeArray[TId] */
},
};
const struct types resolution_table_standard__NativeArray__nit__TId = {
0, /* dummy */
{
&type_nit__TId, /* E: TId */
&type_standard__NativeArray__nit__TId, /* NativeArray[E]: NativeArray[TId] */
&type_standard__Array__nit__TId, /* Array[E]: Array[TId] */
}
};
/* runtime type ArrayIterator[TId] */
const struct type type_standard__array__ArrayIterator__nit__TId = {
-1, /*CAST DEAD*/
"ArrayIterator[TId]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__TId,
2,
{
0, /* Object */
704, /* ArrayIterator[TId] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__TId = {
0, /* dummy */
{
&type_standard__Array__nit__TId, /* Array[E]: Array[TId] */
&type_standard__AbstractArrayRead__nit__TId, /* AbstractArrayRead[E]: AbstractArrayRead[TId] */
}
};
/* runtime type NativeArray[APropdef] */
const struct type type_standard__NativeArray__nit__APropdef = {
1607,
"NativeArray[APropdef]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__APropdef,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1607, /* NativeArray[APropdef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__APropdef = {
0, /* dummy */
{
&type_nit__APropdef, /* E: APropdef */
&type_standard__NativeArray__nit__APropdef, /* NativeArray[E]: NativeArray[APropdef] */
&type_standard__Array__nit__APropdef, /* Array[E]: Array[APropdef] */
}
};
/* runtime type ArrayIterator[APropdef] */
const struct type type_standard__array__ArrayIterator__nit__APropdef = {
-1, /*CAST DEAD*/
"ArrayIterator[APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__APropdef,
2,
{
0, /* Object */
705, /* ArrayIterator[APropdef] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__APropdef = {
0, /* dummy */
{
&type_standard__Array__nit__APropdef, /* Array[E]: Array[APropdef] */
&type_standard__AbstractArrayRead__nit__APropdef, /* AbstractArrayRead[E]: AbstractArrayRead[APropdef] */
}
};
/* runtime type Array[Array[MType]] */
const struct type type_standard__Array__standard__Array__nit__MType = {
1914,
"Array[Array[MType]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Array__nit__MType,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
270, /* Collection[Array[MType]] */
275, /* Collection[nullable Array[nullable MType]] */
355, /* AbstractArrayRead[Array[MType]] */
219, /* Collection[Object] */
360, /* AbstractArrayRead[nullable Array[nullable MType]] */
489, /* AbstractArray[Array[MType]] */
291, /* AbstractArrayRead[Object] */
494, /* AbstractArray[nullable Array[nullable MType]] */
1841, /* Array[nullable Array[nullable MType]] */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1914, /* Array[Array[MType]] */
},
};
const struct types resolution_table_standard__Array__standard__Array__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__Collection__standard__Array__nit__MType, /* Collection[E]: Collection[Array[MType]] */
&type_standard__Array__standard__Array__nit__MType, /* Array[E]: Array[Array[MType]] */
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__Collection__standard__Array__nit__MType, /* Collection[E]: Collection[Array[MType]] */
&type_standard__Array__standard__Array__nit__MType, /* Array[E]: Array[Array[MType]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Array[MType]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Array[MType]] not a live type) */
&type_standard__Collection__standard__Array__nit__MType, /* Collection[E]: Collection[Array[MType]] */
NULL, /* empty (RandQueue[E]: RandQueue[Array[MType]] not a live type) */
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__Collection__standard__Array__nit__MType, /* Collection[E]: Collection[Array[MType]] */
&type_standard__Array__standard__Array__nit__MType, /* Array[E]: Array[Array[MType]] */
&type_standard__NativeArray__standard__Array__nit__MType, /* NativeArray[E]: NativeArray[Array[MType]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Array[MType]] not a live type) */
&type_standard__Array__standard__Array__nit__MType, /* SELF: Array[Array[MType]] */
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__Collection__standard__Array__nit__MType, /* Collection[E]: Collection[Array[MType]] */
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__Array__standard__Array__nit__MType, /* Array[E]: Array[Array[MType]] */
&type_standard__AbstractArray__standard__Array__nit__MType, /* AbstractArray[E]: AbstractArray[Array[MType]] */
&type_standard__array__ArrayIterator__standard__Array__nit__MType, /* ArrayIterator[E]: ArrayIterator[Array[MType]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Array[MType]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Array[MType]] not a live type) */
}
};
/* runtime type MapKeysIterator[Array[MType], MGenericType] */
const struct type type_standard__MapKeysIterator__standard__Array__nit__MType__nit__MGenericType = {
-1, /*CAST DEAD*/
"MapKeysIterator[Array[MType], MGenericType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__Array__nit__MType__nit__MGenericType,
2,
{
0, /* Object */
706, /* MapKeysIterator[Array[MType], MGenericType] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__Array__nit__MType__nit__MGenericType = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MType, /* Array[E]: Array[Array[MType]] */
&type_standard__MapIterator__standard__Array__nit__MType__nit__MGenericType, /* MapIterator[K, V]: MapIterator[Array[MType], MGenericType] */
}
};
/* runtime type Array[MGenericType] */
const struct type type_standard__Array__nit__MGenericType = {
1926,
"Array[MGenericType]", /* class_name_string */
23,
0,
&resolution_table_standard__Array__nit__MGenericType,
24,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
155, /* nullable Array[nullable MType] */
163, /* Collection[MClassType] */
168, /* Collection[MType] */
219, /* Collection[Object] */
254, /* Collection[nullable MType] */
271, /* Collection[MGenericType] */
291, /* AbstractArrayRead[Object] */
310, /* AbstractArrayRead[MClassType] */
314, /* AbstractArrayRead[MType] */
324, /* AbstractArrayRead[nullable MType] */
356, /* AbstractArrayRead[MGenericType] */
425, /* AbstractArray[Object] */
444, /* AbstractArray[MClassType] */
448, /* AbstractArray[MType] */
458, /* AbstractArray[nullable MType] */
490, /* AbstractArray[MGenericType] */
1836, /* Array[Object] */
1847, /* Array[nullable MType] */
1916, /* Array[MType] */
1924, /* Array[MClassType] */
1926, /* Array[MGenericType] */
},
};
const struct types resolution_table_standard__Array__nit__MGenericType = {
0, /* dummy */
{
&type_nit__MGenericType, /* E: MGenericType */
&type_nit__MGenericType, /* E: MGenericType */
&type_nit__MGenericType, /* E: MGenericType */
&type_standard__Collection__nit__MGenericType, /* Collection[E]: Collection[MGenericType] */
&type_standard__Array__nit__MGenericType, /* Array[E]: Array[MGenericType] */
&type_nit__MGenericType, /* E: MGenericType */
&type_standard__Collection__nit__MGenericType, /* Collection[E]: Collection[MGenericType] */
&type_standard__Array__nit__MGenericType, /* Array[E]: Array[MGenericType] */
NULL, /* empty (LifoQueue[E]: LifoQueue[MGenericType] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[MGenericType] not a live type) */
&type_standard__Collection__nit__MGenericType, /* Collection[E]: Collection[MGenericType] */
NULL, /* empty (RandQueue[E]: RandQueue[MGenericType] not a live type) */
&type_nit__MGenericType, /* E: MGenericType */
&type_standard__Collection__nit__MGenericType, /* Collection[E]: Collection[MGenericType] */
&type_standard__Array__nit__MGenericType, /* Array[E]: Array[MGenericType] */
&type_standard__NativeArray__nit__MGenericType, /* NativeArray[E]: NativeArray[MGenericType] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[MGenericType] not a live type) */
&type_standard__Array__nit__MGenericType, /* SELF: Array[MGenericType] */
&type_nit__MGenericType, /* E: MGenericType */
&type_standard__Collection__nit__MGenericType, /* Collection[E]: Collection[MGenericType] */
&type_nit__MGenericType, /* E: MGenericType */
&type_standard__Array__nit__MGenericType, /* Array[E]: Array[MGenericType] */
&type_standard__AbstractArray__nit__MGenericType, /* AbstractArray[E]: AbstractArray[MGenericType] */
&type_standard__array__ArrayIterator__nit__MGenericType, /* ArrayIterator[E]: ArrayIterator[MGenericType] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[MGenericType] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[MGenericType] not a live type) */
}
};
/* runtime type MapValuesIterator[Array[MType], MGenericType] */
const struct type type_standard__MapValuesIterator__standard__Array__nit__MType__nit__MGenericType = {
-1, /*CAST DEAD*/
"MapValuesIterator[Array[MType], MGenericType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__Array__nit__MType__nit__MGenericType,
2,
{
0, /* Object */
707, /* MapValuesIterator[Array[MType], MGenericType] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__Array__nit__MType__nit__MGenericType = {
0, /* dummy */
{
&type_standard__Array__nit__MGenericType, /* Array[E]: Array[MGenericType] */
&type_standard__MapIterator__standard__Array__nit__MType__nit__MGenericType, /* MapIterator[K, V]: MapIterator[Array[MType], MGenericType] */
}
};
/* runtime type MapKeysIterator[MProperty, APropdef] */
const struct type type_standard__MapKeysIterator__nit__MProperty__nit__APropdef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MProperty, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MProperty__nit__APropdef,
2,
{
0, /* Object */
708, /* MapKeysIterator[MProperty, APropdef] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MProperty__nit__APropdef = {
0, /* dummy */
{
&type_standard__Array__nit__MProperty, /* Array[E]: Array[MProperty] */
&type_standard__MapIterator__nit__MProperty__nit__APropdef, /* MapIterator[K, V]: MapIterator[MProperty, APropdef] */
}
};
/* runtime type MapValuesIterator[MProperty, APropdef] */
const struct type type_standard__MapValuesIterator__nit__MProperty__nit__APropdef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MProperty, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MProperty__nit__APropdef,
2,
{
0, /* Object */
709, /* MapValuesIterator[MProperty, APropdef] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MProperty__nit__APropdef = {
0, /* dummy */
{
&type_standard__Array__nit__APropdef, /* Array[E]: Array[APropdef] */
&type_standard__MapIterator__nit__MProperty__nit__APropdef, /* MapIterator[K, V]: MapIterator[MProperty, APropdef] */
}
};
/* runtime type MapKeysIterator[MClass, MClassType] */
const struct type type_standard__MapKeysIterator__nit__MClass__nit__MClassType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MClass__nit__MClassType,
2,
{
0, /* Object */
710, /* MapKeysIterator[MClass, MClassType] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MClass__nit__MClassType = {
0, /* dummy */
{
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__MapIterator__nit__MClass__nit__MClassType, /* MapIterator[K, V]: MapIterator[MClass, MClassType] */
}
};
/* runtime type MapValuesIterator[MClass, MClassType] */
const struct type type_standard__MapValuesIterator__nit__MClass__nit__MClassType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MClass__nit__MClassType,
2,
{
0, /* Object */
711, /* MapValuesIterator[MClass, MClassType] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MClass__nit__MClassType = {
0, /* dummy */
{
&type_standard__Array__nit__MClassType, /* Array[E]: Array[MClassType] */
&type_standard__MapIterator__nit__MClass__nit__MClassType, /* MapIterator[K, V]: MapIterator[MClass, MClassType] */
}
};
/* runtime type MapKeysIterator[MClass, AType] */
const struct type type_standard__MapKeysIterator__nit__MClass__nit__AType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MClass__nit__AType,
2,
{
0, /* Object */
712, /* MapKeysIterator[MClass, AType] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__MapIterator__nit__MClass__nit__AType, /* MapIterator[K, V]: MapIterator[MClass, AType] */
}
};
/* runtime type MapValuesIterator[MClass, AType] */
const struct type type_standard__MapValuesIterator__nit__MClass__nit__AType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MClass__nit__AType,
2,
{
0, /* Object */
713, /* MapValuesIterator[MClass, AType] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__Array__nit__AType, /* Array[E]: Array[AType] */
&type_standard__MapIterator__nit__MClass__nit__AType, /* MapIterator[K, V]: MapIterator[MClass, AType] */
}
};
/* runtime type NativeArray[Couple[MClass, AType]] */
const struct type type_standard__NativeArray__standard__Couple__nit__MClass__nit__AType = {
1387,
"NativeArray[Couple[MClass, AType]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Couple__nit__MClass__nit__AType,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1387, /* NativeArray[Couple[MClass, AType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Couple__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__NativeArray__standard__Couple__nit__MClass__nit__AType, /* NativeArray[E]: NativeArray[Couple[MClass, AType]] */
&type_standard__Array__standard__Couple__nit__MClass__nit__AType, /* Array[E]: Array[Couple[MClass, AType]] */
}
};
/* runtime type ArrayIterator[Couple[MClass, AType]] */
const struct type type_standard__array__ArrayIterator__standard__Couple__nit__MClass__nit__AType = {
-1, /*CAST DEAD*/
"ArrayIterator[Couple[MClass, AType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Couple__nit__MClass__nit__AType,
3,
{
0, /* Object */
418, /* Iterator[Couple[MClass, AType]] */
1388, /* ArrayIterator[Couple[MClass, AType]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Couple__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__Array__standard__Couple__nit__MClass__nit__AType, /* Array[E]: Array[Couple[MClass, AType]] */
&type_standard__AbstractArrayRead__standard__Couple__nit__MClass__nit__AType, /* AbstractArrayRead[E]: AbstractArrayRead[Couple[MClass, AType]] */
}
};
/* runtime type MapKeysIterator[MModule, Set[MClassDef]] */
const struct type type_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClassDef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClassDef,
2,
{
0, /* Object */
714, /* MapKeysIterator[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapIterator__nit__MModule__standard__Set__nit__MClassDef, /* MapIterator[K, V]: MapIterator[MModule, Set[MClassDef]] */
}
};
/* runtime type Array[Set[MClassDef]] */
const struct type type_standard__Array__standard__Set__nit__MClassDef = {
1875,
"Array[Set[MClassDef]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Set__nit__MClassDef,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
272, /* Collection[Set[MClassDef]] */
357, /* AbstractArrayRead[Set[MClassDef]] */
491, /* AbstractArray[Set[MClassDef]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1875, /* Array[Set[MClassDef]] */
},
};
const struct types resolution_table_standard__Array__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__Collection__standard__Set__nit__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
&type_standard__Array__standard__Set__nit__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__Collection__standard__Set__nit__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
&type_standard__Array__standard__Set__nit__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Set[MClassDef]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Set[MClassDef]] not a live type) */
&type_standard__Collection__standard__Set__nit__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
NULL, /* empty (RandQueue[E]: RandQueue[Set[MClassDef]] not a live type) */
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__Collection__standard__Set__nit__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
&type_standard__Array__standard__Set__nit__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_standard__NativeArray__standard__Set__nit__MClassDef, /* NativeArray[E]: NativeArray[Set[MClassDef]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Set[MClassDef]] not a live type) */
&type_standard__Array__standard__Set__nit__MClassDef, /* SELF: Array[Set[MClassDef]] */
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__Collection__standard__Set__nit__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__Array__standard__Set__nit__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_standard__AbstractArray__standard__Set__nit__MClassDef, /* AbstractArray[E]: AbstractArray[Set[MClassDef]] */
&type_standard__array__ArrayIterator__standard__Set__nit__MClassDef, /* ArrayIterator[E]: ArrayIterator[Set[MClassDef]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Set[MClassDef]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Set[MClassDef]] not a live type) */
}
};
/* runtime type MapValuesIterator[MModule, Set[MClassDef]] */
const struct type type_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClassDef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClassDef,
2,
{
0, /* Object */
715, /* MapValuesIterator[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Array__standard__Set__nit__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_standard__MapIterator__nit__MModule__standard__Set__nit__MClassDef, /* MapIterator[K, V]: MapIterator[MModule, Set[MClassDef]] */
}
};
/* runtime type MapKeysIterator[MModule, Set[MClass]] */
const struct type type_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClass = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClass,
2,
{
0, /* Object */
716, /* MapKeysIterator[MModule, Set[MClass]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapIterator__nit__MModule__standard__Set__nit__MClass, /* MapIterator[K, V]: MapIterator[MModule, Set[MClass]] */
}
};
/* runtime type Array[Set[MClass]] */
const struct type type_standard__Array__standard__Set__nit__MClass = {
1876,
"Array[Set[MClass]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Set__nit__MClass,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
273, /* Collection[Set[MClass]] */
358, /* AbstractArrayRead[Set[MClass]] */
492, /* AbstractArray[Set[MClass]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1876, /* Array[Set[MClass]] */
},
};
const struct types resolution_table_standard__Array__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__Collection__standard__Set__nit__MClass, /* Collection[E]: Collection[Set[MClass]] */
&type_standard__Array__standard__Set__nit__MClass, /* Array[E]: Array[Set[MClass]] */
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__Collection__standard__Set__nit__MClass, /* Collection[E]: Collection[Set[MClass]] */
&type_standard__Array__standard__Set__nit__MClass, /* Array[E]: Array[Set[MClass]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Set[MClass]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Set[MClass]] not a live type) */
&type_standard__Collection__standard__Set__nit__MClass, /* Collection[E]: Collection[Set[MClass]] */
NULL, /* empty (RandQueue[E]: RandQueue[Set[MClass]] not a live type) */
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__Collection__standard__Set__nit__MClass, /* Collection[E]: Collection[Set[MClass]] */
&type_standard__Array__standard__Set__nit__MClass, /* Array[E]: Array[Set[MClass]] */
&type_standard__NativeArray__standard__Set__nit__MClass, /* NativeArray[E]: NativeArray[Set[MClass]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Set[MClass]] not a live type) */
&type_standard__Array__standard__Set__nit__MClass, /* SELF: Array[Set[MClass]] */
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__Collection__standard__Set__nit__MClass, /* Collection[E]: Collection[Set[MClass]] */
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__Array__standard__Set__nit__MClass, /* Array[E]: Array[Set[MClass]] */
&type_standard__AbstractArray__standard__Set__nit__MClass, /* AbstractArray[E]: AbstractArray[Set[MClass]] */
&type_standard__array__ArrayIterator__standard__Set__nit__MClass, /* ArrayIterator[E]: ArrayIterator[Set[MClass]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Set[MClass]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Set[MClass]] not a live type) */
}
};
/* runtime type MapValuesIterator[MModule, Set[MClass]] */
const struct type type_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClass = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClass,
2,
{
0, /* Object */
717, /* MapValuesIterator[MModule, Set[MClass]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__standard__Set__nit__MClass, /* Array[E]: Array[Set[MClass]] */
&type_standard__MapIterator__nit__MModule__standard__Set__nit__MClass, /* MapIterator[K, V]: MapIterator[MModule, Set[MClass]] */
}
};
/* runtime type MapKeysIterator[MModule, Set[MClassType]] */
const struct type type_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClassType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClassType,
2,
{
0, /* Object */
718, /* MapKeysIterator[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MModule__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapIterator__nit__MModule__standard__Set__nit__MClassType, /* MapIterator[K, V]: MapIterator[MModule, Set[MClassType]] */
}
};
/* runtime type Array[Set[MClassType]] */
const struct type type_standard__Array__standard__Set__nit__MClassType = {
1877,
"Array[Set[MClassType]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__standard__Set__nit__MClassType,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
274, /* Collection[Set[MClassType]] */
359, /* AbstractArrayRead[Set[MClassType]] */
493, /* AbstractArray[Set[MClassType]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1877, /* Array[Set[MClassType]] */
},
};
const struct types resolution_table_standard__Array__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__Collection__standard__Set__nit__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
&type_standard__Array__standard__Set__nit__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__Collection__standard__Set__nit__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
&type_standard__Array__standard__Set__nit__MClassType, /* Array[E]: Array[Set[MClassType]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[Set[MClassType]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[Set[MClassType]] not a live type) */
&type_standard__Collection__standard__Set__nit__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
NULL, /* empty (RandQueue[E]: RandQueue[Set[MClassType]] not a live type) */
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__Collection__standard__Set__nit__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
&type_standard__Array__standard__Set__nit__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_standard__NativeArray__standard__Set__nit__MClassType, /* NativeArray[E]: NativeArray[Set[MClassType]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[Set[MClassType]] not a live type) */
&type_standard__Array__standard__Set__nit__MClassType, /* SELF: Array[Set[MClassType]] */
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__Collection__standard__Set__nit__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__Array__standard__Set__nit__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_standard__AbstractArray__standard__Set__nit__MClassType, /* AbstractArray[E]: AbstractArray[Set[MClassType]] */
&type_standard__array__ArrayIterator__standard__Set__nit__MClassType, /* ArrayIterator[E]: ArrayIterator[Set[MClassType]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[Set[MClassType]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[Set[MClassType]] not a live type) */
}
};
/* runtime type MapValuesIterator[MModule, Set[MClassType]] */
const struct type type_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClassType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClassType,
2,
{
0, /* Object */
719, /* MapValuesIterator[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MModule__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__Array__standard__Set__nit__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_standard__MapIterator__nit__MModule__standard__Set__nit__MClassType, /* MapIterator[K, V]: MapIterator[MModule, Set[MClassType]] */
}
};
/* runtime type NativeArray[TComment] */
const struct type type_standard__NativeArray__nit__TComment = {
1608,
"NativeArray[TComment]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__TComment,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1398, /* NativeArray[Token] */
1608, /* NativeArray[TComment] */
},
};
const struct types resolution_table_standard__NativeArray__nit__TComment = {
0, /* dummy */
{
&type_nit__TComment, /* E: TComment */
&type_standard__NativeArray__nit__TComment, /* NativeArray[E]: NativeArray[TComment] */
&type_standard__Array__nit__TComment, /* Array[E]: Array[TComment] */
}
};
/* runtime type ArrayIterator[TComment] */
const struct type type_standard__array__ArrayIterator__nit__TComment = {
-1, /*CAST DEAD*/
"ArrayIterator[TComment]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__TComment,
2,
{
0, /* Object */
720, /* ArrayIterator[TComment] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__TComment = {
0, /* dummy */
{
&type_standard__Array__nit__TComment, /* Array[E]: Array[TComment] */
&type_standard__AbstractArrayRead__nit__TComment, /* AbstractArrayRead[E]: AbstractArrayRead[TComment] */
}
};
/* runtime type NativeArray[AFormaldef] */
const struct type type_standard__NativeArray__nit__AFormaldef = {
1609,
"NativeArray[AFormaldef]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__AFormaldef,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1609, /* NativeArray[AFormaldef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AFormaldef = {
0, /* dummy */
{
&type_nit__AFormaldef, /* E: AFormaldef */
&type_standard__NativeArray__nit__AFormaldef, /* NativeArray[E]: NativeArray[AFormaldef] */
&type_standard__Array__nit__AFormaldef, /* Array[E]: Array[AFormaldef] */
}
};
/* runtime type ArrayIterator[AFormaldef] */
const struct type type_standard__array__ArrayIterator__nit__AFormaldef = {
-1, /*CAST DEAD*/
"ArrayIterator[AFormaldef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AFormaldef,
2,
{
0, /* Object */
721, /* ArrayIterator[AFormaldef] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AFormaldef = {
0, /* dummy */
{
&type_standard__Array__nit__AFormaldef, /* Array[E]: Array[AFormaldef] */
&type_standard__AbstractArrayRead__nit__AFormaldef, /* AbstractArrayRead[E]: AbstractArrayRead[AFormaldef] */
}
};
/* runtime type NativeArray[MMethodDef] */
const struct type type_standard__NativeArray__nit__MMethodDef = {
1610,
"NativeArray[MMethodDef]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__MMethodDef,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1334, /* NativeArray[MPropDef] */
1610, /* NativeArray[MMethodDef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MMethodDef = {
0, /* dummy */
{
&type_nit__MMethodDef, /* E: MMethodDef */
&type_standard__NativeArray__nit__MMethodDef, /* NativeArray[E]: NativeArray[MMethodDef] */
&type_standard__Array__nit__MMethodDef, /* Array[E]: Array[MMethodDef] */
}
};
/* runtime type ArrayIterator[MMethodDef] */
const struct type type_standard__array__ArrayIterator__nit__MMethodDef = {
-1, /*CAST DEAD*/
"ArrayIterator[MMethodDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MMethodDef,
2,
{
0, /* Object */
722, /* ArrayIterator[MMethodDef] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__Array__nit__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_standard__AbstractArrayRead__nit__MMethodDef, /* AbstractArrayRead[E]: AbstractArrayRead[MMethodDef] */
}
};
/* runtime type HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
const struct type type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
1389,
"HashMap[MModule, HashMap[MType, Array[MMethodDef]]]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1389, /* HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* V: HashMap[MType, Array[MMethodDef]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMapNode[K, V]: HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, HashMap[MType, Array[MMethodDef]]] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[MModule] not a live type) */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMapValues[K, V]: HashMapValues[MModule, HashMap[MType, Array[MMethodDef]]] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[HashMap[MType, Array[MMethodDef]]] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[MModule, HashMap[MType, Array[MMethodDef]]] not a live type) */
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
NULL, /* empty (nullable K: nullable MModule not a live type) */
&type_nit__MModule, /* K: MModule */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* N: HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* V: HashMap[MType, Array[MMethodDef]] */
}
};
/* runtime type HashMap[MType, Array[MMethodDef]] */
const struct type type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
1390,
"HashMap[MType, Array[MMethodDef]]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1390, /* HashMap[MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Array__nit__MMethodDef, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[MMethodDef]] */
&type_standard__Array__nit__MMethodDef, /* V: Array[MMethodDef] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* HashMapNode[K, V]: HashMapNode[MType, Array[MMethodDef]] */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MMethodDef, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[MMethodDef]] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[MType] not a live type) */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MMethodDef, /* HashMapValues[K, V]: HashMapValues[MType, Array[MMethodDef]] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[Array[MMethodDef]] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[MType, Array[MMethodDef]] not a live type) */
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K, V]: HashMap[MType, Array[MMethodDef]] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[MType, Array[MMethodDef]]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* nullable N: nullable HashMapNode[MType, Array[MMethodDef]] */
&type_nullable__nit__MType, /* nullable K: nullable MType */
&type_nit__MType, /* K: MType */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* N: HashMapNode[MType, Array[MMethodDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Array[MMethodDef]]] */
&type_nit__MType, /* K: MType */
&type_standard__Array__nit__MMethodDef, /* V: Array[MMethodDef] */
}
};
/* runtime type NativeArray[Scope] */
const struct type type_standard__NativeArray__nit__scope__Scope = {
1391,
"NativeArray[Scope]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__scope__Scope,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1391, /* NativeArray[Scope] */
},
};
const struct types resolution_table_standard__NativeArray__nit__scope__Scope = {
0, /* dummy */
{
&type_nit__scope__Scope, /* E: Scope */
&type_standard__NativeArray__nit__scope__Scope, /* NativeArray[E]: NativeArray[Scope] */
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
}
};
/* runtime type ArrayIterator[Scope] */
const struct type type_standard__array__ArrayIterator__nit__scope__Scope = {
-1, /*CAST DEAD*/
"ArrayIterator[Scope]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__scope__Scope,
2,
{
0, /* Object */
723, /* ArrayIterator[Scope] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__scope__Scope = {
0, /* dummy */
{
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
&type_standard__AbstractArrayRead__nit__scope__Scope, /* AbstractArrayRead[E]: AbstractArrayRead[Scope] */
}
};
/* runtime type ContainerIterator[Scope] */
const struct type type_standard__abstract_collection__ContainerIterator__nit__scope__Scope = {
-1, /*CAST DEAD*/
"ContainerIterator[Scope]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__abstract_collection__ContainerIterator__nit__scope__Scope,
2,
{
0, /* Object */
724, /* ContainerIterator[Scope] */
},
};
const struct types resolution_table_standard__abstract_collection__ContainerIterator__nit__scope__Scope = {
0, /* dummy */
{
&type_standard__Array__nit__scope__Scope, /* Array[E]: Array[Scope] */
&type_standard__Container__nit__scope__Scope, /* Container[E]: Container[Scope] */
}
};
/* runtime type MapKeysIterator[Variable, nullable MType] */
const struct type type_standard__MapKeysIterator__nit__Variable__nullable__nit__MType = {
-1, /*CAST DEAD*/
"MapKeysIterator[Variable, nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__Variable__nullable__nit__MType,
2,
{
0, /* Object */
725, /* MapKeysIterator[Variable, nullable MType] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__Variable__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
&type_standard__MapIterator__nit__Variable__nullable__nit__MType, /* MapIterator[K, V]: MapIterator[Variable, nullable MType] */
}
};
/* runtime type MapValuesIterator[Variable, nullable MType] */
const struct type type_standard__MapValuesIterator__nit__Variable__nullable__nit__MType = {
-1, /*CAST DEAD*/
"MapValuesIterator[Variable, nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__Variable__nullable__nit__MType,
2,
{
0, /* Object */
726, /* MapValuesIterator[Variable, nullable MType] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__Variable__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable MType] */
&type_standard__MapIterator__nit__Variable__nullable__nit__MType, /* MapIterator[K, V]: MapIterator[Variable, nullable MType] */
}
};
/* runtime type MapKeysIterator[Variable, nullable Array[nullable MType]] */
const struct type type_standard__MapKeysIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
-1, /*CAST DEAD*/
"MapKeysIterator[Variable, nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType,
2,
{
0, /* Object */
727, /* MapKeysIterator[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
&type_standard__MapIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* MapIterator[K, V]: MapIterator[Variable, nullable Array[nullable MType]] */
}
};
/* runtime type Array[nullable Array[nullable MType]] */
const struct type type_standard__Array__nullable__standard__Array__nullable__nit__MType = {
1841,
"Array[nullable Array[nullable MType]]", /* class_name_string */
11,
0,
&resolution_table_standard__Array__nullable__standard__Array__nullable__nit__MType,
12,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
-1, /* empty */
275, /* Collection[nullable Array[nullable MType]] */
-1, /* empty */
-1, /* empty */
360, /* AbstractArrayRead[nullable Array[nullable MType]] */
-1, /* empty */
-1, /* empty */
494, /* AbstractArray[nullable Array[nullable MType]] */
1841, /* Array[nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__Array__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_standard__Collection__nullable__standard__Array__nullable__nit__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_standard__Collection__nullable__standard__Array__nullable__nit__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[nullable Array[nullable MType]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[nullable Array[nullable MType]] not a live type) */
&type_standard__Collection__nullable__standard__Array__nullable__nit__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
NULL, /* empty (RandQueue[E]: RandQueue[nullable Array[nullable MType]] not a live type) */
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_standard__Collection__nullable__standard__Array__nullable__nit__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_standard__NativeArray__nullable__standard__Array__nullable__nit__MType, /* NativeArray[E]: NativeArray[nullable Array[nullable MType]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[nullable Array[nullable MType]] not a live type) */
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* SELF: Array[nullable Array[nullable MType]] */
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_standard__Collection__nullable__standard__Array__nullable__nit__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_standard__AbstractArray__nullable__standard__Array__nullable__nit__MType, /* AbstractArray[E]: AbstractArray[nullable Array[nullable MType]] */
&type_standard__array__ArrayIterator__nullable__standard__Array__nullable__nit__MType, /* ArrayIterator[E]: ArrayIterator[nullable Array[nullable MType]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[nullable Array[nullable MType]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[nullable Array[nullable MType]] not a live type) */
}
};
/* runtime type MapValuesIterator[Variable, nullable Array[nullable MType]] */
const struct type type_standard__MapValuesIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
-1, /*CAST DEAD*/
"MapValuesIterator[Variable, nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType,
2,
{
0, /* Object */
728, /* MapValuesIterator[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_standard__MapIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* MapIterator[K, V]: MapIterator[Variable, nullable Array[nullable MType]] */
}
};
/* runtime type NativeArray[AExternCodeBlock] */
const struct type type_standard__NativeArray__nit__AExternCodeBlock = {
1611,
"NativeArray[AExternCodeBlock]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__AExternCodeBlock,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1611, /* NativeArray[AExternCodeBlock] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AExternCodeBlock = {
0, /* dummy */
{
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_standard__NativeArray__nit__AExternCodeBlock, /* NativeArray[E]: NativeArray[AExternCodeBlock] */
&type_standard__Array__nit__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
}
};
/* runtime type ArrayIterator[AExternCodeBlock] */
const struct type type_standard__array__ArrayIterator__nit__AExternCodeBlock = {
-1, /*CAST DEAD*/
"ArrayIterator[AExternCodeBlock]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AExternCodeBlock,
2,
{
0, /* Object */
729, /* ArrayIterator[AExternCodeBlock] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AExternCodeBlock = {
0, /* dummy */
{
&type_standard__Array__nit__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
&type_standard__AbstractArrayRead__nit__AExternCodeBlock, /* AbstractArrayRead[E]: AbstractArrayRead[AExternCodeBlock] */
}
};
/* runtime type MapKeysIterator[MClass, AClassdef] */
const struct type type_standard__MapKeysIterator__nit__MClass__nit__AClassdef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MClass__nit__AClassdef,
2,
{
0, /* Object */
730, /* MapKeysIterator[MClass, AClassdef] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MClass__nit__AClassdef = {
0, /* dummy */
{
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__MapIterator__nit__MClass__nit__AClassdef, /* MapIterator[K, V]: MapIterator[MClass, AClassdef] */
}
};
/* runtime type MapValuesIterator[MClass, AClassdef] */
const struct type type_standard__MapValuesIterator__nit__MClass__nit__AClassdef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MClass__nit__AClassdef,
2,
{
0, /* Object */
731, /* MapValuesIterator[MClass, AClassdef] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MClass__nit__AClassdef = {
0, /* dummy */
{
&type_standard__Array__nit__AClassdef, /* Array[E]: Array[AClassdef] */
&type_standard__MapIterator__nit__MClass__nit__AClassdef, /* MapIterator[K, V]: MapIterator[MClass, AClassdef] */
}
};
/* runtime type NativeArray[AParam] */
const struct type type_standard__NativeArray__nit__AParam = {
1612,
"NativeArray[AParam]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__AParam,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1612, /* NativeArray[AParam] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AParam = {
0, /* dummy */
{
&type_nit__AParam, /* E: AParam */
&type_standard__NativeArray__nit__AParam, /* NativeArray[E]: NativeArray[AParam] */
&type_standard__Array__nit__AParam, /* Array[E]: Array[AParam] */
}
};
/* runtime type ArrayIterator[AParam] */
const struct type type_standard__array__ArrayIterator__nit__AParam = {
-1, /*CAST DEAD*/
"ArrayIterator[AParam]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AParam,
2,
{
0, /* Object */
732, /* ArrayIterator[AParam] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AParam = {
0, /* dummy */
{
&type_standard__Array__nit__AParam, /* Array[E]: Array[AParam] */
&type_standard__AbstractArrayRead__nit__AParam, /* AbstractArrayRead[E]: AbstractArrayRead[AParam] */
}
};
/* runtime type NativeArray[AExternCall] */
const struct type type_standard__NativeArray__nit__AExternCall = {
1613,
"NativeArray[AExternCall]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__AExternCall,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1613, /* NativeArray[AExternCall] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AExternCall = {
0, /* dummy */
{
&type_nit__AExternCall, /* E: AExternCall */
&type_standard__NativeArray__nit__AExternCall, /* NativeArray[E]: NativeArray[AExternCall] */
&type_standard__Array__nit__AExternCall, /* Array[E]: Array[AExternCall] */
}
};
/* runtime type ArrayIterator[AExternCall] */
const struct type type_standard__array__ArrayIterator__nit__AExternCall = {
-1, /*CAST DEAD*/
"ArrayIterator[AExternCall]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AExternCall,
2,
{
0, /* Object */
733, /* ArrayIterator[AExternCall] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AExternCall = {
0, /* dummy */
{
&type_standard__Array__nit__AExternCall, /* Array[E]: Array[AExternCall] */
&type_standard__AbstractArrayRead__nit__AExternCall, /* AbstractArrayRead[E]: AbstractArrayRead[AExternCall] */
}
};
/* runtime type NativeArray[AType] */
const struct type type_standard__NativeArray__nit__AType = {
1614,
"NativeArray[AType]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__AType,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1337, /* NativeArray[Prod] */
1614, /* NativeArray[AType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AType = {
0, /* dummy */
{
&type_nit__AType, /* E: AType */
&type_standard__NativeArray__nit__AType, /* NativeArray[E]: NativeArray[AType] */
&type_standard__Array__nit__AType, /* Array[E]: Array[AType] */
}
};
/* runtime type ArrayIterator[AType] */
const struct type type_standard__array__ArrayIterator__nit__AType = {
-1, /*CAST DEAD*/
"ArrayIterator[AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__AType,
2,
{
0, /* Object */
734, /* ArrayIterator[AType] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__AType = {
0, /* dummy */
{
&type_standard__Array__nit__AType, /* Array[E]: Array[AType] */
&type_standard__AbstractArrayRead__nit__AType, /* AbstractArrayRead[E]: AbstractArrayRead[AType] */
}
};
/* runtime type MapKeysIterator[String, Variable] */
const struct type type_standard__MapKeysIterator__standard__String__nit__Variable = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__standard__String__nit__Variable,
2,
{
0, /* Object */
735, /* MapKeysIterator[String, Variable] */
},
};
const struct types resolution_table_standard__MapKeysIterator__standard__String__nit__Variable = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapIterator__standard__String__nit__Variable, /* MapIterator[K, V]: MapIterator[String, Variable] */
}
};
/* runtime type MapValuesIterator[String, Variable] */
const struct type type_standard__MapValuesIterator__standard__String__nit__Variable = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__standard__String__nit__Variable,
2,
{
0, /* Object */
736, /* MapValuesIterator[String, Variable] */
},
};
const struct types resolution_table_standard__MapValuesIterator__standard__String__nit__Variable = {
0, /* dummy */
{
&type_standard__Array__nit__Variable, /* Array[E]: Array[Variable] */
&type_standard__MapIterator__standard__String__nit__Variable, /* MapIterator[K, V]: MapIterator[String, Variable] */
}
};
/* runtime type NativeArray[MMethod] */
const struct type type_standard__NativeArray__nit__MMethod = {
1783,
"NativeArray[MMethod]", /* class_name_string */
4,
0,
&resolution_table_standard__NativeArray__nit__MMethod,
5,
{
0, /* Object */
521, /* NativeArray[Object] */
813, /* NativeArray[nullable MProperty] */
1566, /* NativeArray[MProperty] */
1783, /* NativeArray[MMethod] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MMethod = {
0, /* dummy */
{
&type_nit__MMethod, /* E: MMethod */
&type_standard__NativeArray__nit__MMethod, /* NativeArray[E]: NativeArray[MMethod] */
&type_standard__Array__nit__MMethod, /* Array[E]: Array[MMethod] */
}
};
/* runtime type ArrayIterator[MMethod] */
const struct type type_standard__array__ArrayIterator__nit__MMethod = {
-1, /*CAST DEAD*/
"ArrayIterator[MMethod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MMethod,
2,
{
0, /* Object */
737, /* ArrayIterator[MMethod] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MMethod = {
0, /* dummy */
{
&type_standard__Array__nit__MMethod, /* Array[E]: Array[MMethod] */
&type_standard__AbstractArrayRead__nit__MMethod, /* AbstractArrayRead[E]: AbstractArrayRead[MMethod] */
}
};
/* runtime type NativeArray[MAttributeDef] */
const struct type type_standard__NativeArray__nit__MAttributeDef = {
1615,
"NativeArray[MAttributeDef]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__MAttributeDef,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1334, /* NativeArray[MPropDef] */
1615, /* NativeArray[MAttributeDef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MAttributeDef = {
0, /* dummy */
{
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_standard__NativeArray__nit__MAttributeDef, /* NativeArray[E]: NativeArray[MAttributeDef] */
&type_standard__Array__nit__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
}
};
/* runtime type ArrayIterator[MAttributeDef] */
const struct type type_standard__array__ArrayIterator__nit__MAttributeDef = {
-1, /*CAST DEAD*/
"ArrayIterator[MAttributeDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MAttributeDef,
2,
{
0, /* Object */
738, /* ArrayIterator[MAttributeDef] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__Array__nit__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
&type_standard__AbstractArrayRead__nit__MAttributeDef, /* AbstractArrayRead[E]: AbstractArrayRead[MAttributeDef] */
}
};
/* runtime type HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
const struct type type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
1392,
"HashMap[MModule, HashMap[MType, Array[MAttributeDef]]]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1392, /* HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* V: HashMap[MType, Array[MAttributeDef]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapNode[K, V]: HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, HashMap[MType, Array[MAttributeDef]]] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[MModule] not a live type) */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapValues[K, V]: HashMapValues[MModule, HashMap[MType, Array[MAttributeDef]]] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[HashMap[MType, Array[MAttributeDef]]] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[MModule, HashMap[MType, Array[MAttributeDef]]] not a live type) */
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
NULL, /* empty (nullable K: nullable MModule not a live type) */
&type_nit__MModule, /* K: MModule */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* N: HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* V: HashMap[MType, Array[MAttributeDef]] */
}
};
/* runtime type HashMap[MType, Array[MAttributeDef]] */
const struct type type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
1393,
"HashMap[MType, Array[MAttributeDef]]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1393, /* HashMap[MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[MAttributeDef]] */
&type_standard__Array__nit__MAttributeDef, /* V: Array[MAttributeDef] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapNode[K, V]: HashMapNode[MType, Array[MAttributeDef]] */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[MAttributeDef]] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[MType] not a live type) */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapValues[K, V]: HashMapValues[MType, Array[MAttributeDef]] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[Array[MAttributeDef]] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[MType, Array[MAttributeDef]] not a live type) */
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K, V]: HashMap[MType, Array[MAttributeDef]] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[MType, Array[MAttributeDef]]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* nullable N: nullable HashMapNode[MType, Array[MAttributeDef]] */
&type_nullable__nit__MType, /* nullable K: nullable MType */
&type_nit__MType, /* K: MType */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* N: HashMapNode[MType, Array[MAttributeDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Array[MAttributeDef]]] */
&type_nit__MType, /* K: MType */
&type_standard__Array__nit__MAttributeDef, /* V: Array[MAttributeDef] */
}
};
/* runtime type NativeArray[MVirtualTypeDef] */
const struct type type_standard__NativeArray__nit__MVirtualTypeDef = {
1616,
"NativeArray[MVirtualTypeDef]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__nit__MVirtualTypeDef,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
1334, /* NativeArray[MPropDef] */
1616, /* NativeArray[MVirtualTypeDef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_standard__NativeArray__nit__MVirtualTypeDef, /* NativeArray[E]: NativeArray[MVirtualTypeDef] */
&type_standard__Array__nit__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
}
};
/* runtime type ArrayIterator[MVirtualTypeDef] */
const struct type type_standard__array__ArrayIterator__nit__MVirtualTypeDef = {
-1, /*CAST DEAD*/
"ArrayIterator[MVirtualTypeDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MVirtualTypeDef,
2,
{
0, /* Object */
739, /* ArrayIterator[MVirtualTypeDef] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_standard__Array__nit__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
&type_standard__AbstractArrayRead__nit__MVirtualTypeDef, /* AbstractArrayRead[E]: AbstractArrayRead[MVirtualTypeDef] */
}
};
/* runtime type HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
const struct type type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
1394,
"HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1394, /* HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* V: HashMap[MType, Array[MVirtualTypeDef]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapNode[K, V]: HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[MModule] not a live type) */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapValues[K, V]: HashMapValues[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[HashMap[MType, Array[MVirtualTypeDef]]] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[MModule, HashMap[MType, Array[MVirtualTypeDef]]] not a live type) */
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
NULL, /* empty (nullable K: nullable MModule not a live type) */
&type_nit__MModule, /* K: MModule */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* N: HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* V: HashMap[MType, Array[MVirtualTypeDef]] */
}
};
/* runtime type HashMap[MType, Array[MVirtualTypeDef]] */
const struct type type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
1395,
"HashMap[MType, Array[MVirtualTypeDef]]", /* class_name_string */
2,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
3,
{
0, /* Object */
4, /* MapRead[nullable Object, nullable Object] */
1395, /* HashMap[MType, Array[MVirtualTypeDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[MVirtualTypeDef]] */
&type_standard__Array__nit__MVirtualTypeDef, /* V: Array[MVirtualTypeDef] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapNode[K, V]: HashMapNode[MType, Array[MVirtualTypeDef]] */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[MVirtualTypeDef]] */
NULL, /* empty (RemovableCollection[K]: RemovableCollection[MType] not a live type) */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapValues[K, V]: HashMapValues[MType, Array[MVirtualTypeDef]] */
NULL, /* empty (RemovableCollection[V]: RemovableCollection[Array[MVirtualTypeDef]] not a live type) */
NULL, /* empty (MapRead[K, V]: MapRead[MType, Array[MVirtualTypeDef]] not a live type) */
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMap[K, V]: HashMap[MType, Array[MVirtualTypeDef]] */
NULL, /* empty (nullable NativeArray[nullable N]: nullable NativeArray[nullable HashMapNode[MType, Array[MVirtualTypeDef]]] not a live type) */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MVirtualTypeDef, /* nullable N: nullable HashMapNode[MType, Array[MVirtualTypeDef]] */
&type_nullable__nit__MType, /* nullable K: nullable MType */
&type_nit__MType, /* K: MType */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MVirtualTypeDef, /* N: HashMapNode[MType, Array[MVirtualTypeDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MVirtualTypeDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Array[MVirtualTypeDef]]] */
&type_nit__MType, /* K: MType */
&type_standard__Array__nit__MVirtualTypeDef, /* V: Array[MVirtualTypeDef] */
}
};
/* runtime type HashMapKeys[MClass, POSetElement[MClass]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MClass__poset__POSetElement__nit__MClass = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, POSetElement[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MClass__poset__POSetElement__nit__MClass,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
162, /* Collection[MClass] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1617, /* HashMapKeys[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MClass__poset__POSetElement__nit__MClass = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass, /* HashMap[K, V]: HashMap[MClass, POSetElement[MClass]] */
&type_nit__MClass, /* K: MClass */
&type_nit__MClass, /* E: MClass */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__MapKeysIterator__nit__MClass__poset__POSetElement__nit__MClass, /* MapKeysIterator[K, V]: MapKeysIterator[MClass, POSetElement[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* E: MClass */
}
};
/* runtime type HashMapValues[MClass, POSetElement[MClass]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MClass__poset__POSetElement__nit__MClass = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, POSetElement[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MClass__poset__POSetElement__nit__MClass,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
282, /* Collection[POSetElement[MClass]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1618, /* HashMapValues[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MClass__poset__POSetElement__nit__MClass = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass, /* HashMap[K, V]: HashMap[MClass, POSetElement[MClass]] */
&type_poset__POSetElement__nit__MClass, /* V: POSetElement[MClass] */
&type_poset__POSetElement__nit__MClass, /* E: POSetElement[MClass] */
&type_standard__Collection__poset__POSetElement__nit__MClass, /* Collection[E]: Collection[POSetElement[MClass]] */
&type_standard__Array__poset__POSetElement__nit__MClass, /* Array[E]: Array[POSetElement[MClass]] */
&type_standard__MapValuesIterator__nit__MClass__poset__POSetElement__nit__MClass, /* MapValuesIterator[K, V]: MapValuesIterator[MClass, POSetElement[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElement__nit__MClass, /* E: POSetElement[MClass] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass = {
740,
"NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass,
2,
{
0, /* Object */
740, /* NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* E: nullable HashMapNode[MClass, POSetElement[MClass]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MClass, POSetElement[MClass]]] not a live type) */
}
};
/* runtime type HashMapIterator[MClass, POSetElement[MClass]] */
const struct type type_standard__HashMapIterator__nit__MClass__poset__POSetElement__nit__MClass = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, POSetElement[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MClass__poset__POSetElement__nit__MClass,
3,
{
0, /* Object */
407, /* MapIterator[MClass, POSetElement[MClass]] */
1396, /* HashMapIterator[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MClass__poset__POSetElement__nit__MClass = {
0, /* dummy */
{
&type_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass, /* HashMap[K, V]: HashMap[MClass, POSetElement[MClass]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* nullable HashMapNode[K, V]: nullable HashMapNode[MClass, POSetElement[MClass]] */
}
};
/* runtime type HashMapNode[MClass, POSetElement[MClass]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass = {
1397,
"HashMapNode[MClass, POSetElement[MClass]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass,
3,
{
0, /* Object */
208, /* nullable HashMapNode[MClass, POSetElement[MClass]] */
1397, /* HashMapNode[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MClass, /* V: POSetElement[MClass] */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* nullable N: nullable HashMapNode[MClass, POSetElement[MClass]] */
}
};
/* runtime type NativeArray[Token] */
const struct type type_standard__NativeArray__nit__Token = {
1398,
"NativeArray[Token]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__Token,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1398, /* NativeArray[Token] */
},
};
const struct types resolution_table_standard__NativeArray__nit__Token = {
0, /* dummy */
{
&type_nit__Token, /* E: Token */
&type_standard__NativeArray__nit__Token, /* NativeArray[E]: NativeArray[Token] */
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
}
};
/* runtime type ArrayIterator[Token] */
const struct type type_standard__array__ArrayIterator__nit__Token = {
-1, /*CAST DEAD*/
"ArrayIterator[Token]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__Token,
2,
{
0, /* Object */
741, /* ArrayIterator[Token] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__Token = {
0, /* dummy */
{
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
&type_standard__AbstractArrayRead__nit__Token, /* AbstractArrayRead[E]: AbstractArrayRead[Token] */
}
};
/* runtime type ContainerIterator[Token] */
const struct type type_standard__abstract_collection__ContainerIterator__nit__Token = {
-1, /*CAST DEAD*/
"ContainerIterator[Token]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__abstract_collection__ContainerIterator__nit__Token,
2,
{
0, /* Object */
742, /* ContainerIterator[Token] */
},
};
const struct types resolution_table_standard__abstract_collection__ContainerIterator__nit__Token = {
0, /* dummy */
{
&type_standard__Array__nit__Token, /* Array[E]: Array[Token] */
&type_standard__Container__nit__Token, /* Container[E]: Container[Token] */
}
};
/* runtime type NativeArray[SourceFile] */
const struct type type_standard__NativeArray__nit__SourceFile = {
1399,
"NativeArray[SourceFile]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__SourceFile,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1399, /* NativeArray[SourceFile] */
},
};
const struct types resolution_table_standard__NativeArray__nit__SourceFile = {
0, /* dummy */
{
&type_nit__SourceFile, /* E: SourceFile */
&type_standard__NativeArray__nit__SourceFile, /* NativeArray[E]: NativeArray[SourceFile] */
&type_standard__Array__nit__SourceFile, /* Array[E]: Array[SourceFile] */
}
};
/* runtime type ArrayIterator[SourceFile] */
const struct type type_standard__array__ArrayIterator__nit__SourceFile = {
-1, /*CAST DEAD*/
"ArrayIterator[SourceFile]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__SourceFile,
2,
{
0, /* Object */
743, /* ArrayIterator[SourceFile] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__SourceFile = {
0, /* dummy */
{
&type_standard__Array__nit__SourceFile, /* Array[E]: Array[SourceFile] */
&type_standard__AbstractArrayRead__nit__SourceFile, /* AbstractArrayRead[E]: AbstractArrayRead[SourceFile] */
}
};
/* runtime type NativeArray[Array[String]] */
const struct type type_standard__NativeArray__standard__Array__standard__String = {
1400,
"NativeArray[Array[String]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Array__standard__String,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1400, /* NativeArray[Array[String]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__NativeArray__standard__Array__standard__String, /* NativeArray[E]: NativeArray[Array[String]] */
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
}
};
/* runtime type ArrayIterator[Array[String]] */
const struct type type_standard__array__ArrayIterator__standard__Array__standard__String = {
-1, /*CAST DEAD*/
"ArrayIterator[Array[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Array__standard__String,
2,
{
0, /* Object */
744, /* ArrayIterator[Array[String]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
&type_standard__AbstractArrayRead__standard__Array__standard__String, /* AbstractArrayRead[E]: AbstractArrayRead[Array[String]] */
}
};
/* runtime type MapKeysIterator[Phase, POSetElement[Phase]] */
const struct type type_standard__MapKeysIterator__nit__Phase__poset__POSetElement__nit__Phase = {
-1, /*CAST DEAD*/
"MapKeysIterator[Phase, POSetElement[Phase]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__Phase__poset__POSetElement__nit__Phase,
2,
{
0, /* Object */
745, /* MapKeysIterator[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__Phase__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_standard__Array__nit__Phase, /* Array[E]: Array[Phase] */
&type_standard__MapIterator__nit__Phase__poset__POSetElement__nit__Phase, /* MapIterator[K, V]: MapIterator[Phase, POSetElement[Phase]] */
}
};
/* runtime type Array[POSetElement[Phase]] */
const struct type type_standard__Array__poset__POSetElement__nit__Phase = {
1878,
"Array[POSetElement[Phase]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__poset__POSetElement__nit__Phase,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
276, /* Collection[POSetElement[Phase]] */
361, /* AbstractArrayRead[POSetElement[Phase]] */
495, /* AbstractArray[POSetElement[Phase]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1878, /* Array[POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__Array__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_standard__Collection__poset__POSetElement__nit__Phase, /* Collection[E]: Collection[POSetElement[Phase]] */
&type_standard__Array__poset__POSetElement__nit__Phase, /* Array[E]: Array[POSetElement[Phase]] */
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_standard__Collection__poset__POSetElement__nit__Phase, /* Collection[E]: Collection[POSetElement[Phase]] */
&type_standard__Array__poset__POSetElement__nit__Phase, /* Array[E]: Array[POSetElement[Phase]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[POSetElement[Phase]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[POSetElement[Phase]] not a live type) */
&type_standard__Collection__poset__POSetElement__nit__Phase, /* Collection[E]: Collection[POSetElement[Phase]] */
NULL, /* empty (RandQueue[E]: RandQueue[POSetElement[Phase]] not a live type) */
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_standard__Collection__poset__POSetElement__nit__Phase, /* Collection[E]: Collection[POSetElement[Phase]] */
&type_standard__Array__poset__POSetElement__nit__Phase, /* Array[E]: Array[POSetElement[Phase]] */
&type_standard__NativeArray__poset__POSetElement__nit__Phase, /* NativeArray[E]: NativeArray[POSetElement[Phase]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[POSetElement[Phase]] not a live type) */
&type_standard__Array__poset__POSetElement__nit__Phase, /* SELF: Array[POSetElement[Phase]] */
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_standard__Collection__poset__POSetElement__nit__Phase, /* Collection[E]: Collection[POSetElement[Phase]] */
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_standard__Array__poset__POSetElement__nit__Phase, /* Array[E]: Array[POSetElement[Phase]] */
&type_standard__AbstractArray__poset__POSetElement__nit__Phase, /* AbstractArray[E]: AbstractArray[POSetElement[Phase]] */
&type_standard__array__ArrayIterator__poset__POSetElement__nit__Phase, /* ArrayIterator[E]: ArrayIterator[POSetElement[Phase]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[POSetElement[Phase]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[POSetElement[Phase]] not a live type) */
}
};
/* runtime type MapValuesIterator[Phase, POSetElement[Phase]] */
const struct type type_standard__MapValuesIterator__nit__Phase__poset__POSetElement__nit__Phase = {
-1, /*CAST DEAD*/
"MapValuesIterator[Phase, POSetElement[Phase]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__Phase__poset__POSetElement__nit__Phase,
2,
{
0, /* Object */
746, /* MapValuesIterator[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__Phase__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_standard__Array__poset__POSetElement__nit__Phase, /* Array[E]: Array[POSetElement[Phase]] */
&type_standard__MapIterator__nit__Phase__poset__POSetElement__nit__Phase, /* MapIterator[K, V]: MapIterator[Phase, POSetElement[Phase]] */
}
};
/* runtime type HashSetIterator[Phase] */
const struct type type_standard__hash_collection__HashSetIterator__nit__Phase = {
-1, /*CAST DEAD*/
"HashSetIterator[Phase]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashSetIterator__nit__Phase,
2,
{
0, /* Object */
747, /* HashSetIterator[Phase] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetIterator__nit__Phase = {
0, /* dummy */
{
&type_standard__Array__nit__Phase, /* Array[E]: Array[Phase] */
&type_standard__HashSet__nit__Phase, /* HashSet[E]: HashSet[Phase] */
&type_nullable__standard__hash_collection__HashSetNode__nit__Phase, /* nullable HashSetNode[E]: nullable HashSetNode[Phase] */
}
};
/* runtime type NativeArray[nullable HashSetNode[Phase]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Phase = {
748,
"NativeArray[nullable HashSetNode[Phase]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Phase,
2,
{
0, /* Object */
748, /* NativeArray[nullable HashSetNode[Phase]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Phase = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashSetNode__nit__Phase, /* E: nullable HashSetNode[Phase] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__Phase, /* NativeArray[E]: NativeArray[nullable HashSetNode[Phase]] */
NULL, /* empty (Array[E]: Array[nullable HashSetNode[Phase]] not a live type) */
}
};
/* runtime type HashSetNode[Phase] */
const struct type type_standard__hash_collection__HashSetNode__nit__Phase = {
1401,
"HashSetNode[Phase]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashSetNode__nit__Phase,
3,
{
0, /* Object */
209, /* nullable HashSetNode[Phase] */
1401, /* HashSetNode[Phase] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetNode__nit__Phase = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__Phase, /* K: Phase */
&type_nullable__standard__hash_collection__HashSetNode__nit__Phase, /* nullable N: nullable HashSetNode[Phase] */
}
};
/* runtime type MapKeysIterator[MModule, Array[String]] */
const struct type type_standard__MapKeysIterator__nit__MModule__standard__Array__standard__String = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, Array[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MModule__standard__Array__standard__String,
2,
{
0, /* Object */
749, /* MapKeysIterator[MModule, Array[String]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MModule__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapIterator__nit__MModule__standard__Array__standard__String, /* MapIterator[K, V]: MapIterator[MModule, Array[String]] */
}
};
/* runtime type MapValuesIterator[MModule, Array[String]] */
const struct type type_standard__MapValuesIterator__nit__MModule__standard__Array__standard__String = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, Array[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MModule__standard__Array__standard__String,
2,
{
0, /* Object */
750, /* MapValuesIterator[MModule, Array[String]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MModule__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__Array__standard__String, /* Array[E]: Array[Array[String]] */
&type_standard__MapIterator__nit__MModule__standard__Array__standard__String, /* MapIterator[K, V]: MapIterator[MModule, Array[String]] */
}
};
/* runtime type NativeArray[HashSet[String]] */
const struct type type_standard__NativeArray__standard__HashSet__standard__String = {
1402,
"NativeArray[HashSet[String]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__HashSet__standard__String,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1402, /* NativeArray[HashSet[String]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__HashSet__standard__String = {
0, /* dummy */
{
&type_standard__HashSet__standard__String, /* E: HashSet[String] */
&type_standard__NativeArray__standard__HashSet__standard__String, /* NativeArray[E]: NativeArray[HashSet[String]] */
&type_standard__Array__standard__HashSet__standard__String, /* Array[E]: Array[HashSet[String]] */
}
};
/* runtime type ArrayIterator[HashSet[String]] */
const struct type type_standard__array__ArrayIterator__standard__HashSet__standard__String = {
-1, /*CAST DEAD*/
"ArrayIterator[HashSet[String]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__HashSet__standard__String,
2,
{
0, /* Object */
751, /* ArrayIterator[HashSet[String]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__HashSet__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__HashSet__standard__String, /* Array[E]: Array[HashSet[String]] */
&type_standard__AbstractArrayRead__standard__HashSet__standard__String, /* AbstractArrayRead[E]: AbstractArrayRead[HashSet[String]] */
}
};
/* runtime type NativeArray[Array[MProject]] */
const struct type type_standard__NativeArray__standard__Array__nit__MProject = {
1403,
"NativeArray[Array[MProject]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MProject,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1403, /* NativeArray[Array[MProject]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MProject = {
0, /* dummy */
{
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__NativeArray__standard__Array__nit__MProject, /* NativeArray[E]: NativeArray[Array[MProject]] */
&type_standard__Array__standard__Array__nit__MProject, /* Array[E]: Array[Array[MProject]] */
}
};
/* runtime type ArrayIterator[Array[MProject]] */
const struct type type_standard__array__ArrayIterator__standard__Array__nit__MProject = {
-1, /*CAST DEAD*/
"ArrayIterator[Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Array__nit__MProject,
2,
{
0, /* Object */
752, /* ArrayIterator[Array[MProject]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Array__nit__MProject = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MProject, /* Array[E]: Array[Array[MProject]] */
&type_standard__AbstractArrayRead__standard__Array__nit__MProject, /* AbstractArrayRead[E]: AbstractArrayRead[Array[MProject]] */
}
};
/* runtime type MapKeysIterator[MModule, POSetElement[MModule]] */
const struct type type_standard__MapKeysIterator__nit__MModule__poset__POSetElement__nit__MModule = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, POSetElement[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MModule__poset__POSetElement__nit__MModule,
2,
{
0, /* Object */
753, /* MapKeysIterator[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MModule__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapIterator__nit__MModule__poset__POSetElement__nit__MModule, /* MapIterator[K, V]: MapIterator[MModule, POSetElement[MModule]] */
}
};
/* runtime type Array[POSetElement[MModule]] */
const struct type type_standard__Array__poset__POSetElement__nit__MModule = {
1879,
"Array[POSetElement[MModule]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__poset__POSetElement__nit__MModule,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
277, /* Collection[POSetElement[MModule]] */
362, /* AbstractArrayRead[POSetElement[MModule]] */
496, /* AbstractArray[POSetElement[MModule]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1879, /* Array[POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__Array__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_standard__Collection__poset__POSetElement__nit__MModule, /* Collection[E]: Collection[POSetElement[MModule]] */
&type_standard__Array__poset__POSetElement__nit__MModule, /* Array[E]: Array[POSetElement[MModule]] */
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_standard__Collection__poset__POSetElement__nit__MModule, /* Collection[E]: Collection[POSetElement[MModule]] */
&type_standard__Array__poset__POSetElement__nit__MModule, /* Array[E]: Array[POSetElement[MModule]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[POSetElement[MModule]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[POSetElement[MModule]] not a live type) */
&type_standard__Collection__poset__POSetElement__nit__MModule, /* Collection[E]: Collection[POSetElement[MModule]] */
NULL, /* empty (RandQueue[E]: RandQueue[POSetElement[MModule]] not a live type) */
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_standard__Collection__poset__POSetElement__nit__MModule, /* Collection[E]: Collection[POSetElement[MModule]] */
&type_standard__Array__poset__POSetElement__nit__MModule, /* Array[E]: Array[POSetElement[MModule]] */
&type_standard__NativeArray__poset__POSetElement__nit__MModule, /* NativeArray[E]: NativeArray[POSetElement[MModule]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[POSetElement[MModule]] not a live type) */
&type_standard__Array__poset__POSetElement__nit__MModule, /* SELF: Array[POSetElement[MModule]] */
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_standard__Collection__poset__POSetElement__nit__MModule, /* Collection[E]: Collection[POSetElement[MModule]] */
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_standard__Array__poset__POSetElement__nit__MModule, /* Array[E]: Array[POSetElement[MModule]] */
&type_standard__AbstractArray__poset__POSetElement__nit__MModule, /* AbstractArray[E]: AbstractArray[POSetElement[MModule]] */
&type_standard__array__ArrayIterator__poset__POSetElement__nit__MModule, /* ArrayIterator[E]: ArrayIterator[POSetElement[MModule]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[POSetElement[MModule]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[POSetElement[MModule]] not a live type) */
}
};
/* runtime type MapValuesIterator[MModule, POSetElement[MModule]] */
const struct type type_standard__MapValuesIterator__nit__MModule__poset__POSetElement__nit__MModule = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, POSetElement[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MModule__poset__POSetElement__nit__MModule,
2,
{
0, /* Object */
754, /* MapValuesIterator[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MModule__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_standard__Array__poset__POSetElement__nit__MModule, /* Array[E]: Array[POSetElement[MModule]] */
&type_standard__MapIterator__nit__MModule__poset__POSetElement__nit__MModule, /* MapIterator[K, V]: MapIterator[MModule, POSetElement[MModule]] */
}
};
/* runtime type NativeArray[Array[MModule]] */
const struct type type_standard__NativeArray__standard__Array__nit__MModule = {
1404,
"NativeArray[Array[MModule]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MModule,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1404, /* NativeArray[Array[MModule]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MModule = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__NativeArray__standard__Array__nit__MModule, /* NativeArray[E]: NativeArray[Array[MModule]] */
&type_standard__Array__standard__Array__nit__MModule, /* Array[E]: Array[Array[MModule]] */
}
};
/* runtime type ArrayIterator[Array[MModule]] */
const struct type type_standard__array__ArrayIterator__standard__Array__nit__MModule = {
-1, /*CAST DEAD*/
"ArrayIterator[Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Array__nit__MModule,
2,
{
0, /* Object */
755, /* ArrayIterator[Array[MModule]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Array__nit__MModule = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MModule, /* Array[E]: Array[Array[MModule]] */
&type_standard__AbstractArrayRead__standard__Array__nit__MModule, /* AbstractArrayRead[E]: AbstractArrayRead[Array[MModule]] */
}
};
/* runtime type MapKeysIterator[MClassDef, POSetElement[MClassDef]] */
const struct type type_standard__MapKeysIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef,
2,
{
0, /* Object */
756, /* MapKeysIterator[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Array__nit__MClassDef, /* Array[E]: Array[MClassDef] */
&type_standard__MapIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* MapIterator[K, V]: MapIterator[MClassDef, POSetElement[MClassDef]] */
}
};
/* runtime type Array[POSetElement[MClassDef]] */
const struct type type_standard__Array__poset__POSetElement__nit__MClassDef = {
1880,
"Array[POSetElement[MClassDef]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__poset__POSetElement__nit__MClassDef,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
278, /* Collection[POSetElement[MClassDef]] */
363, /* AbstractArrayRead[POSetElement[MClassDef]] */
497, /* AbstractArray[POSetElement[MClassDef]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1880, /* Array[POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__Array__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_standard__Collection__poset__POSetElement__nit__MClassDef, /* Collection[E]: Collection[POSetElement[MClassDef]] */
&type_standard__Array__poset__POSetElement__nit__MClassDef, /* Array[E]: Array[POSetElement[MClassDef]] */
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_standard__Collection__poset__POSetElement__nit__MClassDef, /* Collection[E]: Collection[POSetElement[MClassDef]] */
&type_standard__Array__poset__POSetElement__nit__MClassDef, /* Array[E]: Array[POSetElement[MClassDef]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[POSetElement[MClassDef]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[POSetElement[MClassDef]] not a live type) */
&type_standard__Collection__poset__POSetElement__nit__MClassDef, /* Collection[E]: Collection[POSetElement[MClassDef]] */
NULL, /* empty (RandQueue[E]: RandQueue[POSetElement[MClassDef]] not a live type) */
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_standard__Collection__poset__POSetElement__nit__MClassDef, /* Collection[E]: Collection[POSetElement[MClassDef]] */
&type_standard__Array__poset__POSetElement__nit__MClassDef, /* Array[E]: Array[POSetElement[MClassDef]] */
&type_standard__NativeArray__poset__POSetElement__nit__MClassDef, /* NativeArray[E]: NativeArray[POSetElement[MClassDef]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[POSetElement[MClassDef]] not a live type) */
&type_standard__Array__poset__POSetElement__nit__MClassDef, /* SELF: Array[POSetElement[MClassDef]] */
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_standard__Collection__poset__POSetElement__nit__MClassDef, /* Collection[E]: Collection[POSetElement[MClassDef]] */
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_standard__Array__poset__POSetElement__nit__MClassDef, /* Array[E]: Array[POSetElement[MClassDef]] */
&type_standard__AbstractArray__poset__POSetElement__nit__MClassDef, /* AbstractArray[E]: AbstractArray[POSetElement[MClassDef]] */
&type_standard__array__ArrayIterator__poset__POSetElement__nit__MClassDef, /* ArrayIterator[E]: ArrayIterator[POSetElement[MClassDef]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[POSetElement[MClassDef]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[POSetElement[MClassDef]] not a live type) */
}
};
/* runtime type MapValuesIterator[MClassDef, POSetElement[MClassDef]] */
const struct type type_standard__MapValuesIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef,
2,
{
0, /* Object */
757, /* MapValuesIterator[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Array__poset__POSetElement__nit__MClassDef, /* Array[E]: Array[POSetElement[MClassDef]] */
&type_standard__MapIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* MapIterator[K, V]: MapIterator[MClassDef, POSetElement[MClassDef]] */
}
};
/* runtime type MapKeysIterator[MClassType, POSetElement[MClassType]] */
const struct type type_standard__MapKeysIterator__nit__MClassType__poset__POSetElement__nit__MClassType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClassType, POSetElement[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MClassType__poset__POSetElement__nit__MClassType,
2,
{
0, /* Object */
758, /* MapKeysIterator[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MClassType__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_standard__Array__nit__MClassType, /* Array[E]: Array[MClassType] */
&type_standard__MapIterator__nit__MClassType__poset__POSetElement__nit__MClassType, /* MapIterator[K, V]: MapIterator[MClassType, POSetElement[MClassType]] */
}
};
/* runtime type Array[POSetElement[MClassType]] */
const struct type type_standard__Array__poset__POSetElement__nit__MClassType = {
1881,
"Array[POSetElement[MClassType]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__poset__POSetElement__nit__MClassType,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
279, /* Collection[POSetElement[MClassType]] */
364, /* AbstractArrayRead[POSetElement[MClassType]] */
498, /* AbstractArray[POSetElement[MClassType]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1881, /* Array[POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__Array__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_standard__Collection__poset__POSetElement__nit__MClassType, /* Collection[E]: Collection[POSetElement[MClassType]] */
&type_standard__Array__poset__POSetElement__nit__MClassType, /* Array[E]: Array[POSetElement[MClassType]] */
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_standard__Collection__poset__POSetElement__nit__MClassType, /* Collection[E]: Collection[POSetElement[MClassType]] */
&type_standard__Array__poset__POSetElement__nit__MClassType, /* Array[E]: Array[POSetElement[MClassType]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[POSetElement[MClassType]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[POSetElement[MClassType]] not a live type) */
&type_standard__Collection__poset__POSetElement__nit__MClassType, /* Collection[E]: Collection[POSetElement[MClassType]] */
NULL, /* empty (RandQueue[E]: RandQueue[POSetElement[MClassType]] not a live type) */
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_standard__Collection__poset__POSetElement__nit__MClassType, /* Collection[E]: Collection[POSetElement[MClassType]] */
&type_standard__Array__poset__POSetElement__nit__MClassType, /* Array[E]: Array[POSetElement[MClassType]] */
&type_standard__NativeArray__poset__POSetElement__nit__MClassType, /* NativeArray[E]: NativeArray[POSetElement[MClassType]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[POSetElement[MClassType]] not a live type) */
&type_standard__Array__poset__POSetElement__nit__MClassType, /* SELF: Array[POSetElement[MClassType]] */
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_standard__Collection__poset__POSetElement__nit__MClassType, /* Collection[E]: Collection[POSetElement[MClassType]] */
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_standard__Array__poset__POSetElement__nit__MClassType, /* Array[E]: Array[POSetElement[MClassType]] */
&type_standard__AbstractArray__poset__POSetElement__nit__MClassType, /* AbstractArray[E]: AbstractArray[POSetElement[MClassType]] */
&type_standard__array__ArrayIterator__poset__POSetElement__nit__MClassType, /* ArrayIterator[E]: ArrayIterator[POSetElement[MClassType]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[POSetElement[MClassType]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[POSetElement[MClassType]] not a live type) */
}
};
/* runtime type MapValuesIterator[MClassType, POSetElement[MClassType]] */
const struct type type_standard__MapValuesIterator__nit__MClassType__poset__POSetElement__nit__MClassType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClassType, POSetElement[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MClassType__poset__POSetElement__nit__MClassType,
2,
{
0, /* Object */
759, /* MapValuesIterator[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MClassType__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_standard__Array__poset__POSetElement__nit__MClassType, /* Array[E]: Array[POSetElement[MClassType]] */
&type_standard__MapIterator__nit__MClassType__poset__POSetElement__nit__MClassType, /* MapIterator[K, V]: MapIterator[MClassType, POSetElement[MClassType]] */
}
};
/* runtime type NativeArray[Array[MClass]] */
const struct type type_standard__NativeArray__standard__Array__nit__MClass = {
1405,
"NativeArray[Array[MClass]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MClass,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1405, /* NativeArray[Array[MClass]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__NativeArray__standard__Array__nit__MClass, /* NativeArray[E]: NativeArray[Array[MClass]] */
&type_standard__Array__standard__Array__nit__MClass, /* Array[E]: Array[Array[MClass]] */
}
};
/* runtime type ArrayIterator[Array[MClass]] */
const struct type type_standard__array__ArrayIterator__standard__Array__nit__MClass = {
-1, /*CAST DEAD*/
"ArrayIterator[Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Array__nit__MClass,
2,
{
0, /* Object */
760, /* ArrayIterator[Array[MClass]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Array__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MClass, /* Array[E]: Array[Array[MClass]] */
&type_standard__AbstractArrayRead__standard__Array__nit__MClass, /* AbstractArrayRead[E]: AbstractArrayRead[Array[MClass]] */
}
};
/* runtime type NativeArray[Array[MProperty]] */
const struct type type_standard__NativeArray__standard__Array__nit__MProperty = {
1406,
"NativeArray[Array[MProperty]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MProperty,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1406, /* NativeArray[Array[MProperty]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__NativeArray__standard__Array__nit__MProperty, /* NativeArray[E]: NativeArray[Array[MProperty]] */
&type_standard__Array__standard__Array__nit__MProperty, /* Array[E]: Array[Array[MProperty]] */
}
};
/* runtime type ArrayIterator[Array[MProperty]] */
const struct type type_standard__array__ArrayIterator__standard__Array__nit__MProperty = {
-1, /*CAST DEAD*/
"ArrayIterator[Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Array__nit__MProperty,
2,
{
0, /* Object */
761, /* ArrayIterator[Array[MProperty]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Array__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_standard__AbstractArrayRead__standard__Array__nit__MProperty, /* AbstractArrayRead[E]: AbstractArrayRead[Array[MProperty]] */
}
};
/* runtime type MapKeysIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__MapKeysIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
2,
{
0, /* Object */
762, /* MapKeysIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* MapIterator[K, V]: MapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
}
};
/* runtime type Array[HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
1882,
"Array[HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
280, /* Collection[HashMap2[MType, String, nullable MProperty]] */
365, /* AbstractArrayRead[HashMap2[MType, String, nullable MProperty]] */
499, /* AbstractArray[HashMap2[MType, String, nullable MProperty]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1882, /* Array[HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_standard__Collection__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Collection[E]: Collection[HashMap2[MType, String, nullable MProperty]] */
&type_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Array[E]: Array[HashMap2[MType, String, nullable MProperty]] */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_standard__Collection__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Collection[E]: Collection[HashMap2[MType, String, nullable MProperty]] */
&type_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Array[E]: Array[HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[HashMap2[MType, String, nullable MProperty]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[HashMap2[MType, String, nullable MProperty]] not a live type) */
&type_standard__Collection__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Collection[E]: Collection[HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty (RandQueue[E]: RandQueue[HashMap2[MType, String, nullable MProperty]] not a live type) */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_standard__Collection__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Collection[E]: Collection[HashMap2[MType, String, nullable MProperty]] */
&type_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Array[E]: Array[HashMap2[MType, String, nullable MProperty]] */
&type_standard__NativeArray__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* NativeArray[E]: NativeArray[HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[HashMap2[MType, String, nullable MProperty]] not a live type) */
&type_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* SELF: Array[HashMap2[MType, String, nullable MProperty]] */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_standard__Collection__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Collection[E]: Collection[HashMap2[MType, String, nullable MProperty]] */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Array[E]: Array[HashMap2[MType, String, nullable MProperty]] */
&type_standard__AbstractArray__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* AbstractArray[E]: AbstractArray[HashMap2[MType, String, nullable MProperty]] */
&type_standard__array__ArrayIterator__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* ArrayIterator[E]: ArrayIterator[HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[HashMap2[MType, String, nullable MProperty]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[HashMap2[MType, String, nullable MProperty]] not a live type) */
}
};
/* runtime type MapValuesIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__MapValuesIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
2,
{
0, /* Object */
763, /* MapValuesIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* Array[E]: Array[HashMap2[MType, String, nullable MProperty]] */
&type_standard__MapIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* MapIterator[K, V]: MapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
}
};
/* runtime type HashMapKeys[MType, HashMap[String, nullable MProperty]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, HashMap[String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty,
9,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
168, /* Collection[MType] */
219, /* Collection[Object] */
254, /* Collection[nullable MType] */
1784, /* HashMapKeys[MType, HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[MType, HashMap[String, nullable MProperty]] */
&type_nit__MType, /* K: MType */
&type_nit__MType, /* E: MType */
&type_standard__Collection__nit__MType, /* Collection[E]: Collection[MType] */
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
&type_standard__MapKeysIterator__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* MapKeysIterator[K, V]: MapKeysIterator[MType, HashMap[String, nullable MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* E: MType */
}
};
/* runtime type HashMapValues[MType, HashMap[String, nullable MProperty]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapValues[MType, HashMap[String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
283, /* Collection[HashMap[String, nullable MProperty]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1619, /* HashMapValues[MType, HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[MType, HashMap[String, nullable MProperty]] */
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* V: HashMap[String, nullable MProperty] */
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* E: HashMap[String, nullable MProperty] */
&type_standard__Collection__standard__HashMap__standard__String__nullable__nit__MProperty, /* Collection[E]: Collection[HashMap[String, nullable MProperty]] */
&type_standard__Array__standard__HashMap__standard__String__nullable__nit__MProperty, /* Array[E]: Array[HashMap[String, nullable MProperty]] */
&type_standard__MapValuesIterator__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* MapValuesIterator[K, V]: MapValuesIterator[MType, HashMap[String, nullable MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* E: HashMap[String, nullable MProperty] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
764,
"NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty,
2,
{
0, /* Object */
764, /* NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* E: nullable HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] not a live type) */
}
};
/* runtime type HashMapIterator[MType, HashMap[String, nullable MProperty]] */
const struct type type_standard__HashMapIterator__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, HashMap[String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty,
3,
{
0, /* Object */
408, /* MapIterator[MType, HashMap[String, nullable MProperty]] */
1407, /* HashMapIterator[MType, HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[MType, HashMap[String, nullable MProperty]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* nullable HashMapNode[K, V]: nullable HashMapNode[MType, HashMap[String, nullable MProperty]] */
}
};
/* runtime type HashMapNode[MType, HashMap[String, nullable MProperty]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
1408,
"HashMapNode[MType, HashMap[String, nullable MProperty]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty,
3,
{
0, /* Object */
210, /* nullable HashMapNode[MType, HashMap[String, nullable MProperty]] */
1408, /* HashMapNode[MType, HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* V: HashMap[String, nullable MProperty] */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* nullable N: nullable HashMapNode[MType, HashMap[String, nullable MProperty]] */
}
};
/* runtime type HashMapKeys[String, nullable MProperty] */
const struct type type_standard__hash_collection__HashMapKeys__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapKeys[String, nullable MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__standard__String__nullable__nit__MProperty,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
158, /* Collection[String] */
-1, /* empty */
225, /* Collection[Writable] */
219, /* Collection[Object] */
1785, /* HashMapKeys[String, nullable MProperty] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[String, nullable MProperty] */
&type_standard__String, /* K: String */
&type_standard__String, /* E: String */
&type_standard__Collection__standard__String, /* Collection[E]: Collection[String] */
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__MapKeysIterator__standard__String__nullable__nit__MProperty, /* MapKeysIterator[K, V]: MapKeysIterator[String, nullable MProperty] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* E: String */
}
};
/* runtime type HashMapValues[String, nullable MProperty] */
const struct type type_standard__hash_collection__HashMapValues__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapValues[String, nullable MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__standard__String__nullable__nit__MProperty,
7,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
284, /* Collection[nullable MProperty] */
1409, /* HashMapValues[String, nullable MProperty] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[String, nullable MProperty] */
&type_nullable__nit__MProperty, /* V: nullable MProperty */
&type_nullable__nit__MProperty, /* E: nullable MProperty */
&type_standard__Collection__nullable__nit__MProperty, /* Collection[E]: Collection[nullable MProperty] */
&type_standard__Array__nullable__nit__MProperty, /* Array[E]: Array[nullable MProperty] */
&type_standard__MapValuesIterator__standard__String__nullable__nit__MProperty, /* MapValuesIterator[K, V]: MapValuesIterator[String, nullable MProperty] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable__nit__MProperty, /* E: nullable MProperty */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, nullable MProperty]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty = {
765,
"NativeArray[nullable HashMapNode[String, nullable MProperty]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty,
2,
{
0, /* Object */
765, /* NativeArray[nullable HashMapNode[String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* E: nullable HashMapNode[String, nullable MProperty] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, nullable MProperty]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[String, nullable MProperty]] not a live type) */
}
};
/* runtime type HashMapIterator[String, nullable MProperty] */
const struct type type_standard__HashMapIterator__standard__String__nullable__nit__MProperty = {
-1, /*CAST DEAD*/
"HashMapIterator[String, nullable MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__standard__String__nullable__nit__MProperty,
3,
{
0, /* Object */
409, /* MapIterator[String, nullable MProperty] */
1410, /* HashMapIterator[String, nullable MProperty] */
},
};
const struct types resolution_table_standard__HashMapIterator__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMap[K, V]: HashMap[String, nullable MProperty] */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* nullable HashMapNode[K, V]: nullable HashMapNode[String, nullable MProperty] */
}
};
/* runtime type HashMapNode[String, nullable MProperty] */
const struct type type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty = {
1411,
"HashMapNode[String, nullable MProperty]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty,
3,
{
0, /* Object */
211, /* nullable HashMapNode[String, nullable MProperty] */
1411, /* HashMapNode[String, nullable MProperty] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_nullable__nit__MProperty, /* V: nullable MProperty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* nullable N: nullable HashMapNode[String, nullable MProperty] */
}
};
/* runtime type NativeArray[nullable ModulePath] */
const struct type type_standard__NativeArray__nullable__nit__ModulePath = {
766,
"NativeArray[nullable ModulePath]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nullable__nit__ModulePath,
3,
{
0, /* Object */
-1, /* empty */
766, /* NativeArray[nullable ModulePath] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__ModulePath = {
0, /* dummy */
{
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_standard__NativeArray__nullable__nit__ModulePath, /* NativeArray[E]: NativeArray[nullable ModulePath] */
&type_standard__Array__nullable__nit__ModulePath, /* Array[E]: Array[nullable ModulePath] */
}
};
/* runtime type ArrayIterator[nullable ModulePath] */
const struct type type_standard__array__ArrayIterator__nullable__nit__ModulePath = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nullable__nit__ModulePath,
2,
{
0, /* Object */
767, /* ArrayIterator[nullable ModulePath] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nullable__nit__ModulePath = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_standard__AbstractArrayRead__nullable__nit__ModulePath, /* AbstractArrayRead[E]: AbstractArrayRead[nullable ModulePath] */
}
};
/* runtime type NativeArray[nullable MGroup] */
const struct type type_standard__NativeArray__nullable__nit__MGroup = {
768,
"NativeArray[nullable MGroup]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nullable__nit__MGroup,
3,
{
0, /* Object */
-1, /* empty */
768, /* NativeArray[nullable MGroup] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__MGroup = {
0, /* dummy */
{
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_standard__NativeArray__nullable__nit__MGroup, /* NativeArray[E]: NativeArray[nullable MGroup] */
&type_standard__Array__nullable__nit__MGroup, /* Array[E]: Array[nullable MGroup] */
}
};
/* runtime type ArrayIterator[nullable MGroup] */
const struct type type_standard__array__ArrayIterator__nullable__nit__MGroup = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nullable__nit__MGroup,
2,
{
0, /* Object */
769, /* ArrayIterator[nullable MGroup] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nullable__nit__MGroup = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__MGroup, /* Array[E]: Array[nullable MGroup] */
&type_standard__AbstractArrayRead__nullable__nit__MGroup, /* AbstractArrayRead[E]: AbstractArrayRead[nullable MGroup] */
}
};
/* runtime type NativeArray[MModuleData[AAnnotation]] */
const struct type type_standard__NativeArray__nit__MModuleData__nit__AAnnotation = {
1412,
"NativeArray[MModuleData[AAnnotation]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nit__MModuleData__nit__AAnnotation,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1412, /* NativeArray[MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MModuleData__nit__AAnnotation = {
0, /* dummy */
{
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_standard__NativeArray__nit__MModuleData__nit__AAnnotation, /* NativeArray[E]: NativeArray[MModuleData[AAnnotation]] */
&type_standard__Array__nit__MModuleData__nit__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
}
};
/* runtime type ArrayIterator[MModuleData[AAnnotation]] */
const struct type type_standard__array__ArrayIterator__nit__MModuleData__nit__AAnnotation = {
-1, /*CAST DEAD*/
"ArrayIterator[MModuleData[AAnnotation]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MModuleData__nit__AAnnotation,
2,
{
0, /* Object */
770, /* ArrayIterator[MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MModuleData__nit__AAnnotation = {
0, /* dummy */
{
&type_standard__Array__nit__MModuleData__nit__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_standard__AbstractArrayRead__nit__MModuleData__nit__AAnnotation, /* AbstractArrayRead[E]: AbstractArrayRead[MModuleData[AAnnotation]] */
}
};
/* runtime type MapKeysIterator[MGroup, POSetElement[MGroup]] */
const struct type type_standard__MapKeysIterator__nit__MGroup__poset__POSetElement__nit__MGroup = {
-1, /*CAST DEAD*/
"MapKeysIterator[MGroup, POSetElement[MGroup]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapKeysIterator__nit__MGroup__poset__POSetElement__nit__MGroup,
2,
{
0, /* Object */
771, /* MapKeysIterator[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__MapKeysIterator__nit__MGroup__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
&type_standard__MapIterator__nit__MGroup__poset__POSetElement__nit__MGroup, /* MapIterator[K, V]: MapIterator[MGroup, POSetElement[MGroup]] */
}
};
/* runtime type Array[POSetElement[MGroup]] */
const struct type type_standard__Array__poset__POSetElement__nit__MGroup = {
1883,
"Array[POSetElement[MGroup]]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__poset__POSetElement__nit__MGroup,
21,
{
0, /* Object */
1, /* SequenceRead[nullable Object] */
3, /* Array[nullable Object] */
281, /* Collection[POSetElement[MGroup]] */
366, /* AbstractArrayRead[POSetElement[MGroup]] */
500, /* AbstractArray[POSetElement[MGroup]] */
219, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
291, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
425, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1836, /* Array[Object] */
1883, /* Array[POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__Array__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_standard__Collection__poset__POSetElement__nit__MGroup, /* Collection[E]: Collection[POSetElement[MGroup]] */
&type_standard__Array__poset__POSetElement__nit__MGroup, /* Array[E]: Array[POSetElement[MGroup]] */
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_standard__Collection__poset__POSetElement__nit__MGroup, /* Collection[E]: Collection[POSetElement[MGroup]] */
&type_standard__Array__poset__POSetElement__nit__MGroup, /* Array[E]: Array[POSetElement[MGroup]] */
NULL, /* empty (LifoQueue[E]: LifoQueue[POSetElement[MGroup]] not a live type) */
NULL, /* empty (FifoQueue[E]: FifoQueue[POSetElement[MGroup]] not a live type) */
&type_standard__Collection__poset__POSetElement__nit__MGroup, /* Collection[E]: Collection[POSetElement[MGroup]] */
NULL, /* empty (RandQueue[E]: RandQueue[POSetElement[MGroup]] not a live type) */
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_standard__Collection__poset__POSetElement__nit__MGroup, /* Collection[E]: Collection[POSetElement[MGroup]] */
&type_standard__Array__poset__POSetElement__nit__MGroup, /* Array[E]: Array[POSetElement[MGroup]] */
&type_standard__NativeArray__poset__POSetElement__nit__MGroup, /* NativeArray[E]: NativeArray[POSetElement[MGroup]] */
NULL, /* empty (nullable NativeArray[E]: nullable NativeArray[POSetElement[MGroup]] not a live type) */
&type_standard__Array__poset__POSetElement__nit__MGroup, /* SELF: Array[POSetElement[MGroup]] */
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_standard__Collection__poset__POSetElement__nit__MGroup, /* Collection[E]: Collection[POSetElement[MGroup]] */
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_standard__Array__poset__POSetElement__nit__MGroup, /* Array[E]: Array[POSetElement[MGroup]] */
&type_standard__AbstractArray__poset__POSetElement__nit__MGroup, /* AbstractArray[E]: AbstractArray[POSetElement[MGroup]] */
&type_standard__array__ArrayIterator__poset__POSetElement__nit__MGroup, /* ArrayIterator[E]: ArrayIterator[POSetElement[MGroup]] */
NULL, /* empty (nullable ArrayIterator[E]: nullable ArrayIterator[POSetElement[MGroup]] not a live type) */
NULL, /* empty (ArrayReverseIterator[E]: ArrayReverseIterator[POSetElement[MGroup]] not a live type) */
}
};
/* runtime type MapValuesIterator[MGroup, POSetElement[MGroup]] */
const struct type type_standard__MapValuesIterator__nit__MGroup__poset__POSetElement__nit__MGroup = {
-1, /*CAST DEAD*/
"MapValuesIterator[MGroup, POSetElement[MGroup]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__MapValuesIterator__nit__MGroup__poset__POSetElement__nit__MGroup,
2,
{
0, /* Object */
772, /* MapValuesIterator[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__MapValuesIterator__nit__MGroup__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_standard__Array__poset__POSetElement__nit__MGroup, /* Array[E]: Array[POSetElement[MGroup]] */
&type_standard__MapIterator__nit__MGroup__poset__POSetElement__nit__MGroup, /* MapIterator[K, V]: MapIterator[MGroup, POSetElement[MGroup]] */
}
};
/* runtime type HashSetIterator[MGroup] */
const struct type type_standard__hash_collection__HashSetIterator__nit__MGroup = {
-1, /*CAST DEAD*/
"HashSetIterator[MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashSetIterator__nit__MGroup,
2,
{
0, /* Object */
773, /* HashSetIterator[MGroup] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetIterator__nit__MGroup = {
0, /* dummy */
{
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
&type_standard__HashSet__nit__MGroup, /* HashSet[E]: HashSet[MGroup] */
&type_nullable__standard__hash_collection__HashSetNode__nit__MGroup, /* nullable HashSetNode[E]: nullable HashSetNode[MGroup] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MGroup]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MGroup = {
774,
"NativeArray[nullable HashSetNode[MGroup]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MGroup,
2,
{
0, /* Object */
774, /* NativeArray[nullable HashSetNode[MGroup]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MGroup = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashSetNode__nit__MGroup, /* E: nullable HashSetNode[MGroup] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashSetNode__nit__MGroup, /* NativeArray[E]: NativeArray[nullable HashSetNode[MGroup]] */
NULL, /* empty (Array[E]: Array[nullable HashSetNode[MGroup]] not a live type) */
}
};
/* runtime type HashSetNode[MGroup] */
const struct type type_standard__hash_collection__HashSetNode__nit__MGroup = {
1413,
"HashSetNode[MGroup]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashSetNode__nit__MGroup,
3,
{
0, /* Object */
212, /* nullable HashSetNode[MGroup] */
1413, /* HashSetNode[MGroup] */
},
};
const struct types resolution_table_standard__hash_collection__HashSetNode__nit__MGroup = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__MGroup, /* K: MGroup */
&type_nullable__standard__hash_collection__HashSetNode__nit__MGroup, /* nullable N: nullable HashSetNode[MGroup] */
}
};
/* runtime type NativeArray[Array[MType]] */
const struct type type_standard__NativeArray__standard__Array__nit__MType = {
1620,
"NativeArray[Array[MType]]", /* class_name_string */
3,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MType,
4,
{
0, /* Object */
521, /* NativeArray[Object] */
781, /* NativeArray[nullable Array[nullable MType]] */
1620, /* NativeArray[Array[MType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__NativeArray__standard__Array__nit__MType, /* NativeArray[E]: NativeArray[Array[MType]] */
&type_standard__Array__standard__Array__nit__MType, /* Array[E]: Array[Array[MType]] */
}
};
/* runtime type ArrayIterator[Array[MType]] */
const struct type type_standard__array__ArrayIterator__standard__Array__nit__MType = {
-1, /*CAST DEAD*/
"ArrayIterator[Array[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Array__nit__MType,
2,
{
0, /* Object */
775, /* ArrayIterator[Array[MType]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Array__nit__MType = {
0, /* dummy */
{
&type_standard__Array__standard__Array__nit__MType, /* Array[E]: Array[Array[MType]] */
&type_standard__AbstractArrayRead__standard__Array__nit__MType, /* AbstractArrayRead[E]: AbstractArrayRead[Array[MType]] */
}
};
/* runtime type NativeArray[MGenericType] */
const struct type type_standard__NativeArray__nit__MGenericType = {
1834,
"NativeArray[MGenericType]", /* class_name_string */
5,
0,
&resolution_table_standard__NativeArray__nit__MGenericType,
6,
{
0, /* Object */
521, /* NativeArray[Object] */
663, /* NativeArray[nullable MType] */
1578, /* NativeArray[MType] */
1770, /* NativeArray[MClassType] */
1834, /* NativeArray[MGenericType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MGenericType = {
0, /* dummy */
{
&type_nit__MGenericType, /* E: MGenericType */
&type_standard__NativeArray__nit__MGenericType, /* NativeArray[E]: NativeArray[MGenericType] */
&type_standard__Array__nit__MGenericType, /* Array[E]: Array[MGenericType] */
}
};
/* runtime type ArrayIterator[MGenericType] */
const struct type type_standard__array__ArrayIterator__nit__MGenericType = {
-1, /*CAST DEAD*/
"ArrayIterator[MGenericType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nit__MGenericType,
3,
{
0, /* Object */
630, /* ArrayIterator[MType] */
1414, /* ArrayIterator[MGenericType] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nit__MGenericType = {
0, /* dummy */
{
&type_standard__Array__nit__MGenericType, /* Array[E]: Array[MGenericType] */
&type_standard__AbstractArrayRead__nit__MGenericType, /* AbstractArrayRead[E]: AbstractArrayRead[MGenericType] */
}
};
/* runtime type NativeArray[Set[MClassDef]] */
const struct type type_standard__NativeArray__standard__Set__nit__MClassDef = {
1415,
"NativeArray[Set[MClassDef]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MClassDef,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1415, /* NativeArray[Set[MClassDef]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__NativeArray__standard__Set__nit__MClassDef, /* NativeArray[E]: NativeArray[Set[MClassDef]] */
&type_standard__Array__standard__Set__nit__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
}
};
/* runtime type ArrayIterator[Set[MClassDef]] */
const struct type type_standard__array__ArrayIterator__standard__Set__nit__MClassDef = {
-1, /*CAST DEAD*/
"ArrayIterator[Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Set__nit__MClassDef,
2,
{
0, /* Object */
776, /* ArrayIterator[Set[MClassDef]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Array__standard__Set__nit__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_standard__AbstractArrayRead__standard__Set__nit__MClassDef, /* AbstractArrayRead[E]: AbstractArrayRead[Set[MClassDef]] */
}
};
/* runtime type NativeArray[Set[MClass]] */
const struct type type_standard__NativeArray__standard__Set__nit__MClass = {
1416,
"NativeArray[Set[MClass]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MClass,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1416, /* NativeArray[Set[MClass]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__NativeArray__standard__Set__nit__MClass, /* NativeArray[E]: NativeArray[Set[MClass]] */
&type_standard__Array__standard__Set__nit__MClass, /* Array[E]: Array[Set[MClass]] */
}
};
/* runtime type ArrayIterator[Set[MClass]] */
const struct type type_standard__array__ArrayIterator__standard__Set__nit__MClass = {
-1, /*CAST DEAD*/
"ArrayIterator[Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Set__nit__MClass,
2,
{
0, /* Object */
777, /* ArrayIterator[Set[MClass]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__standard__Set__nit__MClass, /* Array[E]: Array[Set[MClass]] */
&type_standard__AbstractArrayRead__standard__Set__nit__MClass, /* AbstractArrayRead[E]: AbstractArrayRead[Set[MClass]] */
}
};
/* runtime type NativeArray[Set[MClassType]] */
const struct type type_standard__NativeArray__standard__Set__nit__MClassType = {
1417,
"NativeArray[Set[MClassType]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MClassType,
3,
{
0, /* Object */
521, /* NativeArray[Object] */
1417, /* NativeArray[Set[MClassType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__NativeArray__standard__Set__nit__MClassType, /* NativeArray[E]: NativeArray[Set[MClassType]] */
&type_standard__Array__standard__Set__nit__MClassType, /* Array[E]: Array[Set[MClassType]] */
}
};
/* runtime type ArrayIterator[Set[MClassType]] */
const struct type type_standard__array__ArrayIterator__standard__Set__nit__MClassType = {
-1, /*CAST DEAD*/
"ArrayIterator[Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__standard__Set__nit__MClassType,
2,
{
0, /* Object */
778, /* ArrayIterator[Set[MClassType]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__Array__standard__Set__nit__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_standard__AbstractArrayRead__standard__Set__nit__MClassType, /* AbstractArrayRead[E]: AbstractArrayRead[Set[MClassType]] */
}
};
/* runtime type HashMapKeys[MModule, HashMap[MType, Array[MMethodDef]]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, HashMap[MType, Array[MMethodDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1621, /* HashMapKeys[MModule, HashMap[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, HashMap[MType, Array[MMethodDef]]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, HashMap[MType, Array[MMethodDef]]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, HashMap[MType, Array[MMethodDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
285, /* Collection[HashMap[MType, Array[MMethodDef]]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1622, /* HashMapValues[MModule, HashMap[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* V: HashMap[MType, Array[MMethodDef]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* E: HashMap[MType, Array[MMethodDef]] */
&type_standard__Collection__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* Collection[E]: Collection[HashMap[MType, Array[MMethodDef]]] */
&type_standard__Array__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* Array[E]: Array[HashMap[MType, Array[MMethodDef]]] */
&type_standard__MapValuesIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, HashMap[MType, Array[MMethodDef]]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* E: HashMap[MType, Array[MMethodDef]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
779,
"NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
2,
{
0, /* Object */
779, /* NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* E: nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, HashMap[MType, Array[MMethodDef]]] */
const struct type type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, HashMap[MType, Array[MMethodDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
3,
{
0, /* Object */
410, /* MapIterator[MModule, HashMap[MType, Array[MMethodDef]]] */
1418, /* HashMapIterator[MModule, HashMap[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
}
};
/* runtime type HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
1419,
"HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
3,
{
0, /* Object */
213, /* nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
1419, /* HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* V: HashMap[MType, Array[MMethodDef]] */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
}
};
/* runtime type HashMapKeys[MType, Array[MMethodDef]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, Array[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MMethodDef,
9,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
168, /* Collection[MType] */
219, /* Collection[Object] */
254, /* Collection[nullable MType] */
1786, /* HashMapKeys[MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K, V]: HashMap[MType, Array[MMethodDef]] */
&type_nit__MType, /* K: MType */
&type_nit__MType, /* E: MType */
&type_standard__Collection__nit__MType, /* Collection[E]: Collection[MType] */
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
&type_standard__MapKeysIterator__nit__MType__standard__Array__nit__MMethodDef, /* MapKeysIterator[K, V]: MapKeysIterator[MType, Array[MMethodDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* E: MType */
}
};
/* runtime type HashMapValues[MType, Array[MMethodDef]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Array[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MMethodDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
286, /* Collection[Array[MMethodDef]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1623, /* HashMapValues[MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K, V]: HashMap[MType, Array[MMethodDef]] */
&type_standard__Array__nit__MMethodDef, /* V: Array[MMethodDef] */
&type_standard__Array__nit__MMethodDef, /* E: Array[MMethodDef] */
&type_standard__Collection__standard__Array__nit__MMethodDef, /* Collection[E]: Collection[Array[MMethodDef]] */
&type_standard__Array__standard__Array__nit__MMethodDef, /* Array[E]: Array[Array[MMethodDef]] */
&type_standard__MapValuesIterator__nit__MType__standard__Array__nit__MMethodDef, /* MapValuesIterator[K, V]: MapValuesIterator[MType, Array[MMethodDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__Array__nit__MMethodDef, /* E: Array[MMethodDef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, Array[MMethodDef]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef = {
780,
"NativeArray[nullable HashMapNode[MType, Array[MMethodDef]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef,
2,
{
0, /* Object */
780, /* NativeArray[nullable HashMapNode[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* E: nullable HashMapNode[MType, Array[MMethodDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, Array[MMethodDef]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MType, Array[MMethodDef]]] not a live type) */
}
};
/* runtime type HashMapIterator[MType, Array[MMethodDef]] */
const struct type type_standard__HashMapIterator__nit__MType__standard__Array__nit__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, Array[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MType__standard__Array__nit__MMethodDef,
3,
{
0, /* Object */
411, /* MapIterator[MType, Array[MMethodDef]] */
1420, /* HashMapIterator[MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMap[K, V]: HashMap[MType, Array[MMethodDef]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* nullable HashMapNode[K, V]: nullable HashMapNode[MType, Array[MMethodDef]] */
}
};
/* runtime type HashMapNode[MType, Array[MMethodDef]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef = {
1421,
"HashMapNode[MType, Array[MMethodDef]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef,
3,
{
0, /* Object */
214, /* nullable HashMapNode[MType, Array[MMethodDef]] */
1421, /* HashMapNode[MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__Array__nit__MMethodDef, /* V: Array[MMethodDef] */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* nullable N: nullable HashMapNode[MType, Array[MMethodDef]] */
}
};
/* runtime type NativeArray[nullable Array[nullable MType]] */
const struct type type_standard__NativeArray__nullable__standard__Array__nullable__nit__MType = {
781,
"NativeArray[nullable Array[nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_standard__NativeArray__nullable__standard__Array__nullable__nit__MType,
3,
{
0, /* Object */
-1, /* empty */
781, /* NativeArray[nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_standard__NativeArray__nullable__standard__Array__nullable__nit__MType, /* NativeArray[E]: NativeArray[nullable Array[nullable MType]] */
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
}
};
/* runtime type ArrayIterator[nullable Array[nullable MType]] */
const struct type type_standard__array__ArrayIterator__nullable__standard__Array__nullable__nit__MType = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__array__ArrayIterator__nullable__standard__Array__nullable__nit__MType,
2,
{
0, /* Object */
782, /* ArrayIterator[nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__array__ArrayIterator__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nullable__standard__Array__nullable__nit__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_standard__AbstractArrayRead__nullable__standard__Array__nullable__nit__MType, /* AbstractArrayRead[E]: AbstractArrayRead[nullable Array[nullable MType]] */
}
};
/* runtime type HashMapKeys[MModule, HashMap[MType, Array[MAttributeDef]]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, HashMap[MType, Array[MAttributeDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1624, /* HashMapKeys[MModule, HashMap[MType, Array[MAttributeDef]]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, HashMap[MType, Array[MAttributeDef]]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, HashMap[MType, Array[MAttributeDef]]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, HashMap[MType, Array[MAttributeDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
287, /* Collection[HashMap[MType, Array[MAttributeDef]]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1625, /* HashMapValues[MModule, HashMap[MType, Array[MAttributeDef]]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* V: HashMap[MType, Array[MAttributeDef]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* E: HashMap[MType, Array[MAttributeDef]] */
&type_standard__Collection__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* Collection[E]: Collection[HashMap[MType, Array[MAttributeDef]]] */
&type_standard__Array__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* Array[E]: Array[HashMap[MType, Array[MAttributeDef]]] */
&type_standard__MapValuesIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, HashMap[MType, Array[MAttributeDef]]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* E: HashMap[MType, Array[MAttributeDef]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
783,
"NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
2,
{
0, /* Object */
783, /* NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* E: nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, HashMap[MType, Array[MAttributeDef]]] */
const struct type type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, HashMap[MType, Array[MAttributeDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
3,
{
0, /* Object */
412, /* MapIterator[MModule, HashMap[MType, Array[MAttributeDef]]] */
1422, /* HashMapIterator[MModule, HashMap[MType, Array[MAttributeDef]]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
}
};
/* runtime type HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
1423,
"HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
3,
{
0, /* Object */
215, /* nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
1423, /* HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* V: HashMap[MType, Array[MAttributeDef]] */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
}
};
/* runtime type HashMapKeys[MType, Array[MAttributeDef]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MAttributeDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, Array[MAttributeDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MAttributeDef,
9,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
168, /* Collection[MType] */
219, /* Collection[Object] */
254, /* Collection[nullable MType] */
1787, /* HashMapKeys[MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K, V]: HashMap[MType, Array[MAttributeDef]] */
&type_nit__MType, /* K: MType */
&type_nit__MType, /* E: MType */
&type_standard__Collection__nit__MType, /* Collection[E]: Collection[MType] */
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
&type_standard__MapKeysIterator__nit__MType__standard__Array__nit__MAttributeDef, /* MapKeysIterator[K, V]: MapKeysIterator[MType, Array[MAttributeDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* E: MType */
}
};
/* runtime type HashMapValues[MType, Array[MAttributeDef]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MAttributeDef = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Array[MAttributeDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MAttributeDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
288, /* Collection[Array[MAttributeDef]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1626, /* HashMapValues[MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K, V]: HashMap[MType, Array[MAttributeDef]] */
&type_standard__Array__nit__MAttributeDef, /* V: Array[MAttributeDef] */
&type_standard__Array__nit__MAttributeDef, /* E: Array[MAttributeDef] */
&type_standard__Collection__standard__Array__nit__MAttributeDef, /* Collection[E]: Collection[Array[MAttributeDef]] */
&type_standard__Array__standard__Array__nit__MAttributeDef, /* Array[E]: Array[Array[MAttributeDef]] */
&type_standard__MapValuesIterator__nit__MType__standard__Array__nit__MAttributeDef, /* MapValuesIterator[K, V]: MapValuesIterator[MType, Array[MAttributeDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__Array__nit__MAttributeDef, /* E: Array[MAttributeDef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, Array[MAttributeDef]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef = {
784,
"NativeArray[nullable HashMapNode[MType, Array[MAttributeDef]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef,
2,
{
0, /* Object */
784, /* NativeArray[nullable HashMapNode[MType, Array[MAttributeDef]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* E: nullable HashMapNode[MType, Array[MAttributeDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, Array[MAttributeDef]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MType, Array[MAttributeDef]]] not a live type) */
}
};
/* runtime type HashMapIterator[MType, Array[MAttributeDef]] */
const struct type type_standard__HashMapIterator__nit__MType__standard__Array__nit__MAttributeDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, Array[MAttributeDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MType__standard__Array__nit__MAttributeDef,
3,
{
0, /* Object */
413, /* MapIterator[MType, Array[MAttributeDef]] */
1424, /* HashMapIterator[MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap[K, V]: HashMap[MType, Array[MAttributeDef]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* nullable HashMapNode[K, V]: nullable HashMapNode[MType, Array[MAttributeDef]] */
}
};
/* runtime type HashMapNode[MType, Array[MAttributeDef]] */
const struct type type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef = {
1425,
"HashMapNode[MType, Array[MAttributeDef]]", /* class_name_string */
2,
0,
&resolution_table_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef,
3,
{
0, /* Object */
216, /* nullable HashMapNode[MType, Array[MAttributeDef]] */
1425, /* HashMapNode[MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__Array__nit__MAttributeDef, /* V: Array[MAttributeDef] */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* nullable N: nullable HashMapNode[MType, Array[MAttributeDef]] */
}
};
/* runtime type HashMapKeys[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
const struct type type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, HashMap[MType, Array[MVirtualTypeDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
159, /* Collection[MModule] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1627, /* HashMapKeys[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_nit__MModule, /* K: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__MapKeysIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
const struct type type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, HashMap[MType, Array[MVirtualTypeDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
8,
{
0, /* Object */
-1, /* empty */
-1, /* empty */
289, /* Collection[HashMap[MType, Array[MVirtualTypeDef]]] */
-1, /* empty */
-1, /* empty */
219, /* Collection[Object] */
1628, /* HashMapValues[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
},
};
const struct types resolution_table_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* V: HashMap[MType, Array[MVirtualTypeDef]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* E: HashMap[MType, Array[MVirtualTypeDef]] */
&type_standard__Collection__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* Collection[E]: Collection[HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__Array__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* Array[E]: Array[HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__MapValuesIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* E: HashMap[MType, Array[MVirtualTypeDef]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]]] */
const struct type type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
785,
"NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]]]", /* class_name_string */
1,
0,
&resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
2,
{
0, /* Object */
785, /* NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* E: nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]]] */
NULL, /* empty (Array[E]: Array[nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]]] not a live type) */
}
};
/* runtime type HashMapIterator[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
const struct type type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, HashMap[MType, Array[MVirtualTypeDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
3,
{
0, /* Object */
414, /* MapIterator[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
1426, /* HashMapIterator[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
},
};
const struct types resolution_table_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMap[K, V]: HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* nullable HashMapNode[K, V]: nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
}
};
