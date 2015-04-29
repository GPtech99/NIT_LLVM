

;Class Structures

%class_Object = type {%class_Object_vtable*}

%class_Int = type {%class_Int_vtable*}

%class_A = type {%class_A_vtable*}

%class_B = type {%class_B_vtable*}

%class_Sys = type {%class_Sys_vtable*}


;Functions
define void @Object_init(%class_Sys* %this) nounwind {
;Corp de la methode
}
define void @Int_output(%class_Int* %this) nounwind {
;Corp de la methode
}
define void @A_foo(%class_B* %this,%class_Int i) nounwind {
;Corp de la methode
}
define void @B_foo(%class_B* %this,%class_Int i) nounwind {
;Corp de la methode
}
define void @Sys_main(%class_Sys* %this) nounwind {
;Corp de la methode
}


;Classes Vtables
%class_Object_vtable = type {
void(%class_Object*,)* @Object_init,

}

%class_Int_vtable = type {
void(%class_Int*,)* @Int_output,
void(%class_Object*,)* @Object_init,

}

%class_A_vtable = type {
void(%class_A*,%class_Int,)* @A_foo,
void(%class_Object*,)* @Object_init,

}

%class_B_vtable = type {
void(%class_B*,%class_Int,)* @B_foo,
void(%class_A*,%class_Int,)* @A_foo,
void(%class_Object*,)* @Object_init,

}

%class_Sys_vtable = type {
void(%class_Sys*,)* @Sys_main,
void(%class_Object*,)* @Object_init,

}



define i32 @main(i32 %argc, i8** %argv) nounwind {

}