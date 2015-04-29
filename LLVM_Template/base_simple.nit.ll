

;Class Structures

%class_Object = type {%class_Object_vtable*}

%class_Int = type {%class_Int_vtable*}

%class_A = type {%class_A_vtable*}

%class_B = type {%class_B_vtable*}

%class_C = type {%class_C_vtable*}

%class_D = type {%class_D_vtable*}

%class_Sys = type {%class_Sys_vtable*}


;Functions
define void @Object_init(%class_Sys* %this) nounwind {
;Corp de la methode
}
define void @Int_output(%class_Int* %this) nounwind {
;Corp de la methode
}
define void @A_foo(%class_D* %this,%class_Int i) nounwind {
;Corp de la methode
}
define void @A_bar(%class_D* %this,%class_Int i) nounwind {
;Corp de la methode
}
define %Int @B_this_is_a_dead_method(%class_D* %this,%class_Int i,%class_A a) nounwind {
;Corp de la methode
}
define void @B_bar(%class_D* %this,%class_Int i) nounwind {
;Corp de la methode
}
define void @B_init(%class_D* %this) nounwind {
;Corp de la methode
}
define void @C_test(%class_D* %this,%class_Int i) nounwind {
;Corp de la methode
}
define void @C_bar(%class_D* %this,%class_Int i) nounwind {
;Corp de la methode
}
define %Int @D_test2(%class_D* %this,%class_Int i,%class_Object j) nounwind {
;Corp de la methode
}
define void @D_foo(%class_D* %this,%class_Int i) nounwind {
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
void(%class_A*,%class_Int,)* @A_bar,
void(%class_Object*,)* @Object_init,

}

%class_B_vtable = type {
%Int(%class_B*,%class_Int,%class_A,)* @B_this_is_a_dead_method,
void(%class_B*,%class_Int,)* @B_bar,
void(%class_A*,%class_Int,)* @A_bar,
void(%class_B*,)* @B_init,
void(%class_Object*,)* @Object_init,
void(%class_A*,%class_Int,)* @A_foo,

}

%class_C_vtable = type {
void(%class_C*,%class_Int,)* @C_test,
void(%class_C*,%class_Int,)* @C_bar,
void(%class_A*,%class_Int,)* @A_bar,
void(%class_A*,%class_Int,)* @A_foo,
void(%class_Object*,)* @Object_init,

}

%class_D_vtable = type {
%Int(%class_D*,%class_Int,%class_Object,)* @D_test2,
void(%class_D*,%class_Int,)* @D_foo,
void(%class_A*,%class_Int,)* @A_foo,
%Int(%class_B*,%class_Int,%class_A,)* @B_this_is_a_dead_method,
void(%class_C*,%class_Int,)* @C_bar,
void(%class_B*,%class_Int,)* @B_bar,
void(%class_A*,%class_Int,)* @A_bar,
void(%class_B*,)* @B_init,
void(%class_Object*,)* @Object_init,
void(%class_C*,%class_Int,)* @C_test,

}

%class_Sys_vtable = type {
void(%class_Sys*,)* @Sys_main,
void(%class_Object*,)* @Object_init,

}



define i32 @main(i32 %argc, i8** %argv) nounwind {

}