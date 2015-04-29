#include "nit__parser.sep.0.h"
/* method parser#Parser#build_reduce_table for (self: Parser) */
void nit__parser___Parser___build_reduce_table(val* self) {
val* var /* : Array[ReduceAction] */;
val* var1 /* : ReduceAction0 */;
val* var2 /* : ReduceAction1 */;
val* var3 /* : ReduceAction2 */;
val* var4 /* : ReduceAction3 */;
val* var5 /* : ReduceAction4 */;
val* var6 /* : ReduceAction5 */;
val* var7 /* : ReduceAction6 */;
val* var8 /* : ReduceAction7 */;
val* var9 /* : ReduceAction8 */;
val* var10 /* : ReduceAction9 */;
val* var11 /* : ReduceAction10 */;
val* var12 /* : ReduceAction11 */;
val* var13 /* : ReduceAction12 */;
val* var14 /* : ReduceAction13 */;
val* var15 /* : ReduceAction14 */;
val* var16 /* : ReduceAction15 */;
val* var17 /* : ReduceAction16 */;
val* var18 /* : ReduceAction17 */;
val* var19 /* : ReduceAction18 */;
val* var20 /* : ReduceAction19 */;
val* var21 /* : ReduceAction20 */;
val* var22 /* : ReduceAction21 */;
val* var23 /* : ReduceAction22 */;
val* var24 /* : ReduceAction23 */;
val* var25 /* : ReduceAction24 */;
val* var26 /* : ReduceAction24 */;
val* var27 /* : ReduceAction26 */;
val* var28 /* : ReduceAction27 */;
val* var29 /* : ReduceAction22 */;
val* var30 /* : ReduceAction29 */;
val* var31 /* : ReduceAction30 */;
val* var32 /* : ReduceAction31 */;
val* var33 /* : ReduceAction32 */;
val* var34 /* : ReduceAction33 */;
val* var35 /* : ReduceAction34 */;
val* var36 /* : ReduceAction35 */;
val* var37 /* : ReduceAction36 */;
val* var38 /* : ReduceAction37 */;
val* var39 /* : ReduceAction38 */;
val* var40 /* : ReduceAction39 */;
val* var41 /* : ReduceAction40 */;
val* var42 /* : ReduceAction41 */;
val* var43 /* : ReduceAction42 */;
val* var44 /* : ReduceAction43 */;
val* var45 /* : ReduceAction44 */;
val* var46 /* : ReduceAction45 */;
val* var47 /* : ReduceAction46 */;
val* var48 /* : ReduceAction47 */;
val* var49 /* : ReduceAction48 */;
val* var50 /* : ReduceAction49 */;
val* var51 /* : ReduceAction50 */;
val* var52 /* : ReduceAction51 */;
val* var53 /* : ReduceAction52 */;
val* var54 /* : ReduceAction53 */;
val* var55 /* : ReduceAction54 */;
val* var56 /* : ReduceAction55 */;
val* var57 /* : ReduceAction56 */;
val* var58 /* : ReduceAction57 */;
val* var59 /* : ReduceAction58 */;
val* var60 /* : ReduceAction59 */;
val* var61 /* : ReduceAction60 */;
val* var62 /* : ReduceAction61 */;
val* var63 /* : ReduceAction62 */;
val* var64 /* : ReduceAction63 */;
val* var65 /* : ReduceAction64 */;
val* var66 /* : ReduceAction65 */;
val* var67 /* : ReduceAction66 */;
val* var68 /* : ReduceAction67 */;
val* var69 /* : ReduceAction68 */;
val* var70 /* : ReduceAction69 */;
val* var71 /* : ReduceAction70 */;
val* var72 /* : ReduceAction71 */;
val* var73 /* : ReduceAction72 */;
val* var74 /* : ReduceAction72 */;
val* var75 /* : ReduceAction74 */;
val* var76 /* : ReduceAction75 */;
val* var77 /* : ReduceAction22 */;
val* var78 /* : ReduceAction74 */;
val* var79 /* : ReduceAction78 */;
val* var80 /* : ReduceAction79 */;
val* var81 /* : ReduceAction80 */;
val* var82 /* : ReduceAction81 */;
val* var83 /* : ReduceAction82 */;
val* var84 /* : ReduceAction83 */;
val* var85 /* : ReduceAction84 */;
val* var86 /* : ReduceAction85 */;
val* var87 /* : ReduceAction86 */;
val* var88 /* : ReduceAction87 */;
val* var89 /* : ReduceAction88 */;
val* var90 /* : ReduceAction89 */;
val* var91 /* : ReduceAction90 */;
val* var92 /* : ReduceAction91 */;
val* var93 /* : ReduceAction92 */;
val* var94 /* : ReduceAction93 */;
val* var95 /* : ReduceAction94 */;
val* var96 /* : ReduceAction95 */;
val* var97 /* : ReduceAction96 */;
val* var98 /* : ReduceAction97 */;
val* var99 /* : ReduceAction98 */;
val* var100 /* : ReduceAction99 */;
val* var101 /* : ReduceAction100 */;
val* var102 /* : ReduceAction101 */;
val* var103 /* : ReduceAction102 */;
val* var104 /* : ReduceAction103 */;
val* var105 /* : ReduceAction104 */;
val* var106 /* : ReduceAction105 */;
val* var107 /* : ReduceAction106 */;
val* var108 /* : ReduceAction107 */;
val* var109 /* : ReduceAction108 */;
val* var110 /* : ReduceAction109 */;
val* var111 /* : ReduceAction110 */;
val* var112 /* : ReduceAction111 */;
val* var113 /* : ReduceAction112 */;
val* var114 /* : ReduceAction37 */;
val* var115 /* : ReduceAction114 */;
val* var116 /* : ReduceAction115 */;
val* var117 /* : ReduceAction116 */;
val* var118 /* : ReduceAction117 */;
val* var119 /* : ReduceAction118 */;
val* var120 /* : ReduceAction119 */;
val* var121 /* : ReduceAction120 */;
val* var122 /* : ReduceAction121 */;
val* var123 /* : ReduceAction22 */;
val* var124 /* : ReduceAction123 */;
val* var125 /* : ReduceAction124 */;
val* var126 /* : ReduceAction124 */;
val* var127 /* : ReduceAction126 */;
val* var128 /* : ReduceAction127 */;
val* var129 /* : ReduceAction128 */;
val* var130 /* : ReduceAction129 */;
val* var131 /* : ReduceAction130 */;
val* var132 /* : ReduceAction131 */;
val* var133 /* : ReduceAction132 */;
val* var134 /* : ReduceAction133 */;
val* var135 /* : ReduceAction134 */;
val* var136 /* : ReduceAction135 */;
val* var137 /* : ReduceAction22 */;
val* var138 /* : ReduceAction137 */;
val* var139 /* : ReduceAction138 */;
val* var140 /* : ReduceAction139 */;
val* var141 /* : ReduceAction140 */;
val* var142 /* : ReduceAction141 */;
val* var143 /* : ReduceAction22 */;
val* var144 /* : ReduceAction143 */;
val* var145 /* : ReduceAction144 */;
val* var146 /* : ReduceAction145 */;
val* var147 /* : ReduceAction146 */;
val* var148 /* : ReduceAction147 */;
val* var149 /* : ReduceAction148 */;
val* var150 /* : ReduceAction149 */;
val* var151 /* : ReduceAction150 */;
val* var152 /* : ReduceAction150 */;
val* var153 /* : ReduceAction150 */;
val* var154 /* : ReduceAction22 */;
val* var155 /* : ReduceAction154 */;
val* var156 /* : ReduceAction155 */;
val* var157 /* : ReduceAction156 */;
val* var158 /* : ReduceAction157 */;
val* var159 /* : ReduceAction158 */;
val* var160 /* : ReduceAction159 */;
val* var161 /* : ReduceAction160 */;
val* var162 /* : ReduceAction161 */;
val* var163 /* : ReduceAction162 */;
val* var164 /* : ReduceAction163 */;
val* var165 /* : ReduceAction154 */;
val* var166 /* : ReduceAction157 */;
val* var167 /* : ReduceAction157 */;
val* var168 /* : ReduceAction167 */;
val* var169 /* : ReduceAction168 */;
val* var170 /* : ReduceAction169 */;
val* var171 /* : ReduceAction170 */;
val* var172 /* : ReduceAction171 */;
val* var173 /* : ReduceAction172 */;
val* var174 /* : ReduceAction173 */;
val* var175 /* : ReduceAction157 */;
val* var176 /* : ReduceAction157 */;
val* var177 /* : ReduceAction157 */;
val* var178 /* : ReduceAction157 */;
val* var179 /* : ReduceAction157 */;
val* var180 /* : ReduceAction157 */;
val* var181 /* : ReduceAction157 */;
val* var182 /* : ReduceAction181 */;
val* var183 /* : ReduceAction182 */;
val* var184 /* : ReduceAction183 */;
val* var185 /* : ReduceAction182 */;
val* var186 /* : ReduceAction185 */;
val* var187 /* : ReduceAction186 */;
val* var188 /* : ReduceAction187 */;
val* var189 /* : ReduceAction186 */;
val* var190 /* : ReduceAction189 */;
val* var191 /* : ReduceAction190 */;
val* var192 /* : ReduceAction191 */;
val* var193 /* : ReduceAction192 */;
val* var194 /* : ReduceAction193 */;
val* var195 /* : ReduceAction192 */;
val* var196 /* : ReduceAction195 */;
val* var197 /* : ReduceAction196 */;
val* var198 /* : ReduceAction195 */;
val* var199 /* : ReduceAction198 */;
val* var200 /* : ReduceAction199 */;
val* var201 /* : ReduceAction200 */;
val* var202 /* : ReduceAction201 */;
val* var203 /* : ReduceAction202 */;
val* var204 /* : ReduceAction203 */;
val* var205 /* : ReduceAction204 */;
val* var206 /* : ReduceAction205 */;
val* var207 /* : ReduceAction206 */;
val* var208 /* : ReduceAction207 */;
val* var209 /* : ReduceAction208 */;
val* var210 /* : ReduceAction209 */;
val* var211 /* : ReduceAction210 */;
val* var212 /* : ReduceAction211 */;
val* var213 /* : ReduceAction212 */;
val* var214 /* : ReduceAction209 */;
val* var215 /* : ReduceAction210 */;
val* var216 /* : ReduceAction215 */;
val* var217 /* : ReduceAction216 */;
val* var218 /* : ReduceAction217 */;
val* var219 /* : ReduceAction218 */;
val* var220 /* : ReduceAction219 */;
val* var221 /* : ReduceAction220 */;
val* var222 /* : ReduceAction217 */;
val* var223 /* : ReduceAction218 */;
val* var224 /* : ReduceAction223 */;
val* var225 /* : ReduceAction224 */;
val* var226 /* : ReduceAction225 */;
val* var227 /* : ReduceAction226 */;
val* var228 /* : ReduceAction227 */;
val* var229 /* : ReduceAction228 */;
val* var230 /* : ReduceAction229 */;
val* var231 /* : ReduceAction230 */;
val* var232 /* : ReduceAction231 */;
val* var233 /* : ReduceAction228 */;
val* var234 /* : ReduceAction229 */;
val* var235 /* : ReduceAction234 */;
val* var236 /* : ReduceAction235 */;
val* var237 /* : ReduceAction236 */;
val* var238 /* : ReduceAction237 */;
val* var239 /* : ReduceAction238 */;
val* var240 /* : ReduceAction239 */;
val* var241 /* : ReduceAction236 */;
val* var242 /* : ReduceAction237 */;
val* var243 /* : ReduceAction242 */;
val* var244 /* : ReduceAction243 */;
val* var245 /* : ReduceAction244 */;
val* var246 /* : ReduceAction245 */;
val* var247 /* : ReduceAction246 */;
val* var248 /* : ReduceAction247 */;
val* var249 /* : ReduceAction248 */;
val* var250 /* : ReduceAction249 */;
val* var251 /* : ReduceAction250 */;
val* var252 /* : ReduceAction251 */;
val* var253 /* : ReduceAction252 */;
val* var254 /* : ReduceAction253 */;
val* var255 /* : ReduceAction254 */;
val* var256 /* : ReduceAction255 */;
val* var257 /* : ReduceAction256 */;
val* var258 /* : ReduceAction257 */;
val* var259 /* : ReduceAction258 */;
val* var260 /* : ReduceAction259 */;
val* var261 /* : ReduceAction260 */;
val* var262 /* : ReduceAction154 */;
val* var263 /* : ReduceAction156 */;
val* var264 /* : ReduceAction263 */;
val* var265 /* : ReduceAction264 */;
val* var266 /* : ReduceAction265 */;
val* var267 /* : ReduceAction266 */;
val* var268 /* : ReduceAction267 */;
val* var269 /* : ReduceAction268 */;
val* var270 /* : ReduceAction269 */;
val* var271 /* : ReduceAction270 */;
val* var272 /* : ReduceAction271 */;
val* var273 /* : ReduceAction272 */;
val* var274 /* : ReduceAction157 */;
val* var275 /* : ReduceAction274 */;
val* var276 /* : ReduceAction275 */;
val* var277 /* : ReduceAction276 */;
val* var278 /* : ReduceAction277 */;
val* var279 /* : ReduceAction278 */;
val* var280 /* : ReduceAction157 */;
val* var281 /* : ReduceAction280 */;
val* var282 /* : ReduceAction157 */;
val* var283 /* : ReduceAction282 */;
val* var284 /* : ReduceAction283 */;
val* var285 /* : ReduceAction284 */;
val* var286 /* : ReduceAction285 */;
val* var287 /* : ReduceAction157 */;
val* var288 /* : ReduceAction287 */;
val* var289 /* : ReduceAction157 */;
val* var290 /* : ReduceAction289 */;
val* var291 /* : ReduceAction290 */;
val* var292 /* : ReduceAction291 */;
val* var293 /* : ReduceAction292 */;
val* var294 /* : ReduceAction293 */;
val* var295 /* : ReduceAction294 */;
val* var296 /* : ReduceAction295 */;
val* var297 /* : ReduceAction296 */;
val* var298 /* : ReduceAction157 */;
val* var299 /* : ReduceAction298 */;
val* var300 /* : ReduceAction157 */;
val* var301 /* : ReduceAction300 */;
val* var302 /* : ReduceAction157 */;
val* var303 /* : ReduceAction302 */;
val* var304 /* : ReduceAction157 */;
val* var305 /* : ReduceAction304 */;
val* var306 /* : ReduceAction305 */;
val* var307 /* : ReduceAction157 */;
val* var308 /* : ReduceAction307 */;
val* var309 /* : ReduceAction308 */;
val* var310 /* : ReduceAction157 */;
val* var311 /* : ReduceAction310 */;
val* var312 /* : ReduceAction311 */;
val* var313 /* : ReduceAction312 */;
val* var314 /* : ReduceAction157 */;
val* var315 /* : ReduceAction314 */;
val* var316 /* : ReduceAction157 */;
val* var317 /* : ReduceAction316 */;
val* var318 /* : ReduceAction317 */;
val* var319 /* : ReduceAction318 */;
val* var320 /* : ReduceAction319 */;
val* var321 /* : ReduceAction157 */;
val* var322 /* : ReduceAction321 */;
val* var323 /* : ReduceAction322 */;
val* var324 /* : ReduceAction323 */;
val* var325 /* : ReduceAction324 */;
val* var326 /* : ReduceAction157 */;
val* var327 /* : ReduceAction326 */;
val* var328 /* : ReduceAction327 */;
val* var329 /* : ReduceAction181 */;
val* var330 /* : ReduceAction329 */;
val* var331 /* : ReduceAction182 */;
val* var332 /* : ReduceAction331 */;
val* var333 /* : ReduceAction183 */;
val* var334 /* : ReduceAction333 */;
val* var335 /* : ReduceAction182 */;
val* var336 /* : ReduceAction331 */;
val* var337 /* : ReduceAction185 */;
val* var338 /* : ReduceAction337 */;
val* var339 /* : ReduceAction186 */;
val* var340 /* : ReduceAction339 */;
val* var341 /* : ReduceAction187 */;
val* var342 /* : ReduceAction341 */;
val* var343 /* : ReduceAction186 */;
val* var344 /* : ReduceAction339 */;
val* var345 /* : ReduceAction189 */;
val* var346 /* : ReduceAction345 */;
val* var347 /* : ReduceAction190 */;
val* var348 /* : ReduceAction347 */;
val* var349 /* : ReduceAction191 */;
val* var350 /* : ReduceAction349 */;
val* var351 /* : ReduceAction350 */;
val* var352 /* : ReduceAction351 */;
val* var353 /* : ReduceAction352 */;
val* var354 /* : ReduceAction353 */;
val* var355 /* : ReduceAction354 */;
val* var356 /* : ReduceAction355 */;
val* var357 /* : ReduceAction356 */;
val* var358 /* : ReduceAction353 */;
val* var359 /* : ReduceAction354 */;
val* var360 /* : ReduceAction359 */;
val* var361 /* : ReduceAction360 */;
val* var362 /* : ReduceAction361 */;
val* var363 /* : ReduceAction157 */;
val* var364 /* : ReduceAction363 */;
val* var365 /* : ReduceAction364 */;
val* var366 /* : ReduceAction365 */;
val* var367 /* : ReduceAction366 */;
val* var368 /* : ReduceAction367 */;
val* var369 /* : ReduceAction368 */;
val* var370 /* : ReduceAction369 */;
val* var371 /* : ReduceAction370 */;
val* var372 /* : ReduceAction371 */;
val* var373 /* : ReduceAction372 */;
val* var374 /* : ReduceAction373 */;
val* var375 /* : ReduceAction157 */;
val* var376 /* : ReduceAction157 */;
val* var377 /* : ReduceAction376 */;
val* var378 /* : ReduceAction377 */;
val* var379 /* : ReduceAction378 */;
val* var380 /* : ReduceAction379 */;
val* var381 /* : ReduceAction379 */;
val* var382 /* : ReduceAction381 */;
val* var383 /* : ReduceAction382 */;
val* var384 /* : ReduceAction383 */;
val* var385 /* : ReduceAction384 */;
val* var386 /* : ReduceAction382 */;
val* var387 /* : ReduceAction386 */;
val* var388 /* : ReduceAction268 */;
val* var389 /* : ReduceAction388 */;
val* var390 /* : ReduceAction389 */;
val* var391 /* : ReduceAction390 */;
val* var392 /* : ReduceAction391 */;
val* var393 /* : ReduceAction392 */;
val* var394 /* : ReduceAction393 */;
val* var395 /* : ReduceAction391 */;
val* var396 /* : ReduceAction392 */;
val* var397 /* : ReduceAction396 */;
val* var398 /* : ReduceAction397 */;
val* var399 /* : ReduceAction398 */;
val* var400 /* : ReduceAction399 */;
val* var401 /* : ReduceAction400 */;
val* var402 /* : ReduceAction22 */;
val* var403 /* : ReduceAction402 */;
val* var404 /* : ReduceAction403 */;
val* var405 /* : ReduceAction404 */;
val* var406 /* : ReduceAction405 */;
val* var407 /* : ReduceAction406 */;
val* var408 /* : ReduceAction402 */;
val* var409 /* : ReduceAction403 */;
val* var410 /* : ReduceAction409 */;
val* var411 /* : ReduceAction157 */;
val* var412 /* : ReduceAction411 */;
val* var413 /* : ReduceAction404 */;
val* var414 /* : ReduceAction413 */;
val* var415 /* : ReduceAction414 */;
val* var416 /* : ReduceAction415 */;
val* var417 /* : ReduceAction416 */;
val* var418 /* : ReduceAction417 */;
val* var419 /* : ReduceAction418 */;
val* var420 /* : ReduceAction419 */;
val* var421 /* : ReduceAction420 */;
val* var422 /* : ReduceAction421 */;
val* var423 /* : ReduceAction422 */;
val* var424 /* : ReduceAction383 */;
val* var425 /* : ReduceAction384 */;
val* var426 /* : ReduceAction382 */;
val* var427 /* : ReduceAction426 */;
val* var428 /* : ReduceAction157 */;
val* var429 /* : ReduceAction157 */;
val* var430 /* : ReduceAction429 */;
val* var431 /* : ReduceAction430 */;
val* var432 /* : ReduceAction431 */;
val* var433 /* : ReduceAction432 */;
val* var434 /* : ReduceAction433 */;
val* var435 /* : ReduceAction434 */;
val* var436 /* : ReduceAction435 */;
val* var437 /* : ReduceAction436 */;
val* var438 /* : ReduceAction435 */;
val* var439 /* : ReduceAction438 */;
val* var440 /* : ReduceAction436 */;
val* var441 /* : ReduceAction440 */;
val* var442 /* : ReduceAction441 */;
val* var443 /* : ReduceAction392 */;
val* var444 /* : ReduceAction443 */;
val* var445 /* : ReduceAction444 */;
val* var446 /* : ReduceAction445 */;
val* var447 /* : ReduceAction446 */;
val* var448 /* : ReduceAction447 */;
val* var449 /* : ReduceAction448 */;
val* var450 /* : ReduceAction449 */;
val* var451 /* : ReduceAction450 */;
val* var452 /* : ReduceAction451 */;
val* var453 /* : ReduceAction452 */;
val* var454 /* : ReduceAction453 */;
val* var455 /* : ReduceAction454 */;
val* var456 /* : ReduceAction455 */;
val* var457 /* : ReduceAction22 */;
val* var458 /* : ReduceAction457 */;
val* var459 /* : ReduceAction458 */;
val* var460 /* : ReduceAction459 */;
val* var461 /* : ReduceAction458 */;
val* var462 /* : ReduceAction461 */;
val* var463 /* : ReduceAction462 */;
val* var464 /* : ReduceAction463 */;
val* var465 /* : ReduceAction462 */;
val* var466 /* : ReduceAction465 */;
val* var467 /* : ReduceAction466 */;
val* var468 /* : ReduceAction22 */;
val* var469 /* : ReduceAction468 */;
val* var470 /* : ReduceAction469 */;
val* var471 /* : ReduceAction469 */;
val* var472 /* : ReduceAction471 */;
val* var473 /* : ReduceAction472 */;
val* var474 /* : ReduceAction23 */;
val* var475 /* : ReduceAction22 */;
val* var476 /* : ReduceAction475 */;
val* var477 /* : ReduceAction476 */;
val* var478 /* : ReduceAction477 */;
val* var479 /* : ReduceAction469 */;
val* var480 /* : ReduceAction46 */;
val* var481 /* : ReduceAction47 */;
val* var482 /* : ReduceAction48 */;
val* var483 /* : ReduceAction55 */;
val* var484 /* : ReduceAction56 */;
val* var485 /* : ReduceAction74 */;
val* var486 /* : ReduceAction75 */;
val* var487 /* : ReduceAction84 */;
val* var488 /* : ReduceAction85 */;
val* var489 /* : ReduceAction86 */;
val* var490 /* : ReduceAction87 */;
val* var491 /* : ReduceAction88 */;
val* var492 /* : ReduceAction89 */;
val* var493 /* : ReduceAction90 */;
val* var494 /* : ReduceAction91 */;
val* var495 /* : ReduceAction92 */;
val* var496 /* : ReduceAction93 */;
val* var497 /* : ReduceAction94 */;
val* var498 /* : ReduceAction95 */;
val* var499 /* : ReduceAction96 */;
val* var500 /* : ReduceAction97 */;
val* var501 /* : ReduceAction98 */;
val* var502 /* : ReduceAction99 */;
val* var503 /* : ReduceAction100 */;
val* var504 /* : ReduceAction101 */;
val* var505 /* : ReduceAction102 */;
val* var506 /* : ReduceAction103 */;
val* var507 /* : ReduceAction104 */;
val* var508 /* : ReduceAction105 */;
val* var509 /* : ReduceAction461 */;
val* var510 /* : ReduceAction462 */;
val* var511 /* : ReduceAction463 */;
val* var512 /* : ReduceAction462 */;
val* var513 /* : ReduceAction144 */;
val* var514 /* : ReduceAction145 */;
val* var515 /* : ReduceAction157 */;
val* var516 /* : ReduceAction280 */;
val* var517 /* : ReduceAction157 */;
val* var518 /* : ReduceAction282 */;
val* var519 /* : ReduceAction283 */;
val* var520 /* : ReduceAction284 */;
val* var521 /* : ReduceAction285 */;
val* var522 /* : ReduceAction157 */;
val* var523 /* : ReduceAction287 */;
val* var524 /* : ReduceAction157 */;
val* var525 /* : ReduceAction289 */;
val* var526 /* : ReduceAction290 */;
val* var527 /* : ReduceAction291 */;
val* var528 /* : ReduceAction292 */;
val* var529 /* : ReduceAction293 */;
val* var530 /* : ReduceAction294 */;
val* var531 /* : ReduceAction295 */;
val* var532 /* : ReduceAction296 */;
val* var533 /* : ReduceAction157 */;
val* var534 /* : ReduceAction298 */;
val* var535 /* : ReduceAction157 */;
val* var536 /* : ReduceAction300 */;
val* var537 /* : ReduceAction157 */;
val* var538 /* : ReduceAction302 */;
val* var539 /* : ReduceAction157 */;
val* var540 /* : ReduceAction304 */;
val* var541 /* : ReduceAction305 */;
val* var542 /* : ReduceAction157 */;
val* var543 /* : ReduceAction307 */;
val* var544 /* : ReduceAction308 */;
val* var545 /* : ReduceAction157 */;
val* var546 /* : ReduceAction310 */;
val* var547 /* : ReduceAction311 */;
val* var548 /* : ReduceAction312 */;
val* var549 /* : ReduceAction157 */;
val* var550 /* : ReduceAction314 */;
val* var551 /* : ReduceAction157 */;
val* var552 /* : ReduceAction316 */;
val* var553 /* : ReduceAction317 */;
val* var554 /* : ReduceAction318 */;
val* var555 /* : ReduceAction319 */;
val* var556 /* : ReduceAction157 */;
val* var557 /* : ReduceAction321 */;
val* var558 /* : ReduceAction322 */;
val* var559 /* : ReduceAction323 */;
val* var560 /* : ReduceAction324 */;
val* var561 /* : ReduceAction157 */;
val* var562 /* : ReduceAction326 */;
val* var563 /* : ReduceAction327 */;
val* var564 /* : ReduceAction181 */;
val* var565 /* : ReduceAction185 */;
val* var566 /* : ReduceAction329 */;
val* var567 /* : ReduceAction337 */;
val* var568 /* : ReduceAction182 */;
val* var569 /* : ReduceAction186 */;
val* var570 /* : ReduceAction331 */;
val* var571 /* : ReduceAction339 */;
val* var572 /* : ReduceAction183 */;
val* var573 /* : ReduceAction187 */;
val* var574 /* : ReduceAction333 */;
val* var575 /* : ReduceAction341 */;
val* var576 /* : ReduceAction182 */;
val* var577 /* : ReduceAction186 */;
val* var578 /* : ReduceAction331 */;
val* var579 /* : ReduceAction339 */;
val* var580 /* : ReduceAction189 */;
val* var581 /* : ReduceAction345 */;
val* var582 /* : ReduceAction190 */;
val* var583 /* : ReduceAction191 */;
val* var584 /* : ReduceAction347 */;
val* var585 /* : ReduceAction349 */;
val* var586 /* : ReduceAction351 */;
val* var587 /* : ReduceAction352 */;
val* var588 /* : ReduceAction353 */;
val* var589 /* : ReduceAction354 */;
val* var590 /* : ReduceAction355 */;
val* var591 /* : ReduceAction356 */;
val* var592 /* : ReduceAction353 */;
val* var593 /* : ReduceAction354 */;
val* var594 /* : ReduceAction359 */;
val* var595 /* : ReduceAction360 */;
val* var596 /* : ReduceAction361 */;
val* var597 /* : ReduceAction157 */;
val* var598 /* : ReduceAction363 */;
val* var599 /* : ReduceAction364 */;
val* var600 /* : ReduceAction365 */;
val* var601 /* : ReduceAction366 */;
val* var602 /* : ReduceAction367 */;
val* var603 /* : ReduceAction368 */;
val* var604 /* : ReduceAction369 */;
val* var605 /* : ReduceAction370 */;
val* var606 /* : ReduceAction371 */;
val* var607 /* : ReduceAction372 */;
val* var608 /* : ReduceAction373 */;
val* var609 /* : ReduceAction157 */;
val* var610 /* : ReduceAction157 */;
val* var611 /* : ReduceAction144 */;
val* var612 /* : ReduceAction145 */;
val* var613 /* : ReduceAction146 */;
val* var614 /* : ReduceAction147 */;
val* var615 /* : ReduceAction157 */;
val* var616 /* : ReduceAction157 */;
val* var617 /* : ReduceAction167 */;
val* var618 /* : ReduceAction168 */;
val* var619 /* : ReduceAction169 */;
val* var620 /* : ReduceAction170 */;
val* var621 /* : ReduceAction171 */;
val* var622 /* : ReduceAction172 */;
val* var623 /* : ReduceAction173 */;
val* var624 /* : ReduceAction157 */;
val* var625 /* : ReduceAction157 */;
val* var626 /* : ReduceAction157 */;
val* var627 /* : ReduceAction157 */;
val* var628 /* : ReduceAction157 */;
val* var629 /* : ReduceAction157 */;
val* var630 /* : ReduceAction157 */;
val* var631 /* : ReduceAction181 */;
val* var632 /* : ReduceAction182 */;
val* var633 /* : ReduceAction183 */;
val* var634 /* : ReduceAction182 */;
val* var635 /* : ReduceAction185 */;
val* var636 /* : ReduceAction186 */;
val* var637 /* : ReduceAction187 */;
val* var638 /* : ReduceAction186 */;
val* var639 /* : ReduceAction189 */;
val* var640 /* : ReduceAction190 */;
val* var641 /* : ReduceAction191 */;
val* var642 /* : ReduceAction192 */;
val* var643 /* : ReduceAction193 */;
val* var644 /* : ReduceAction192 */;
val* var645 /* : ReduceAction195 */;
val* var646 /* : ReduceAction196 */;
val* var647 /* : ReduceAction195 */;
val* var648 /* : ReduceAction198 */;
val* var649 /* : ReduceAction205 */;
val* var650 /* : ReduceAction206 */;
val* var651 /* : ReduceAction207 */;
val* var652 /* : ReduceAction208 */;
val* var653 /* : ReduceAction209 */;
val* var654 /* : ReduceAction210 */;
val* var655 /* : ReduceAction211 */;
val* var656 /* : ReduceAction212 */;
val* var657 /* : ReduceAction209 */;
val* var658 /* : ReduceAction210 */;
val* var659 /* : ReduceAction215 */;
val* var660 /* : ReduceAction216 */;
val* var661 /* : ReduceAction217 */;
val* var662 /* : ReduceAction218 */;
val* var663 /* : ReduceAction219 */;
val* var664 /* : ReduceAction220 */;
val* var665 /* : ReduceAction217 */;
val* var666 /* : ReduceAction218 */;
val* var667 /* : ReduceAction223 */;
val* var668 /* : ReduceAction224 */;
val* var669 /* : ReduceAction225 */;
val* var670 /* : ReduceAction226 */;
val* var671 /* : ReduceAction227 */;
val* var672 /* : ReduceAction228 */;
val* var673 /* : ReduceAction229 */;
val* var674 /* : ReduceAction230 */;
val* var675 /* : ReduceAction231 */;
val* var676 /* : ReduceAction228 */;
val* var677 /* : ReduceAction229 */;
val* var678 /* : ReduceAction234 */;
val* var679 /* : ReduceAction235 */;
val* var680 /* : ReduceAction236 */;
val* var681 /* : ReduceAction237 */;
val* var682 /* : ReduceAction238 */;
val* var683 /* : ReduceAction239 */;
val* var684 /* : ReduceAction236 */;
val* var685 /* : ReduceAction237 */;
val* var686 /* : ReduceAction242 */;
val* var687 /* : ReduceAction157 */;
val* var688 /* : ReduceAction280 */;
val* var689 /* : ReduceAction157 */;
val* var690 /* : ReduceAction282 */;
val* var691 /* : ReduceAction283 */;
val* var692 /* : ReduceAction284 */;
val* var693 /* : ReduceAction285 */;
val* var694 /* : ReduceAction157 */;
val* var695 /* : ReduceAction287 */;
val* var696 /* : ReduceAction157 */;
val* var697 /* : ReduceAction289 */;
val* var698 /* : ReduceAction290 */;
val* var699 /* : ReduceAction291 */;
val* var700 /* : ReduceAction292 */;
val* var701 /* : ReduceAction293 */;
val* var702 /* : ReduceAction294 */;
val* var703 /* : ReduceAction295 */;
val* var704 /* : ReduceAction296 */;
val* var705 /* : ReduceAction157 */;
val* var706 /* : ReduceAction298 */;
val* var707 /* : ReduceAction157 */;
val* var708 /* : ReduceAction300 */;
val* var709 /* : ReduceAction157 */;
val* var710 /* : ReduceAction302 */;
val* var711 /* : ReduceAction157 */;
val* var712 /* : ReduceAction304 */;
val* var713 /* : ReduceAction305 */;
val* var714 /* : ReduceAction157 */;
val* var715 /* : ReduceAction307 */;
val* var716 /* : ReduceAction308 */;
val* var717 /* : ReduceAction157 */;
val* var718 /* : ReduceAction310 */;
val* var719 /* : ReduceAction311 */;
val* var720 /* : ReduceAction312 */;
val* var721 /* : ReduceAction157 */;
val* var722 /* : ReduceAction314 */;
val* var723 /* : ReduceAction157 */;
val* var724 /* : ReduceAction316 */;
val* var725 /* : ReduceAction317 */;
val* var726 /* : ReduceAction318 */;
val* var727 /* : ReduceAction319 */;
val* var728 /* : ReduceAction157 */;
val* var729 /* : ReduceAction321 */;
val* var730 /* : ReduceAction322 */;
val* var731 /* : ReduceAction323 */;
val* var732 /* : ReduceAction324 */;
val* var733 /* : ReduceAction157 */;
val* var734 /* : ReduceAction326 */;
val* var735 /* : ReduceAction327 */;
val* var736 /* : ReduceAction181 */;
val* var737 /* : ReduceAction329 */;
val* var738 /* : ReduceAction182 */;
val* var739 /* : ReduceAction331 */;
val* var740 /* : ReduceAction183 */;
val* var741 /* : ReduceAction333 */;
val* var742 /* : ReduceAction182 */;
val* var743 /* : ReduceAction331 */;
val* var744 /* : ReduceAction185 */;
val* var745 /* : ReduceAction337 */;
val* var746 /* : ReduceAction186 */;
val* var747 /* : ReduceAction339 */;
val* var748 /* : ReduceAction187 */;
val* var749 /* : ReduceAction341 */;
val* var750 /* : ReduceAction186 */;
val* var751 /* : ReduceAction339 */;
val* var752 /* : ReduceAction189 */;
val* var753 /* : ReduceAction345 */;
val* var754 /* : ReduceAction190 */;
val* var755 /* : ReduceAction347 */;
val* var756 /* : ReduceAction191 */;
val* var757 /* : ReduceAction349 */;
val* var758 /* : ReduceAction350 */;
val* var759 /* : ReduceAction351 */;
val* var760 /* : ReduceAction352 */;
val* var761 /* : ReduceAction353 */;
val* var762 /* : ReduceAction354 */;
val* var763 /* : ReduceAction355 */;
val* var764 /* : ReduceAction356 */;
val* var765 /* : ReduceAction353 */;
val* var766 /* : ReduceAction354 */;
val* var767 /* : ReduceAction359 */;
val* var768 /* : ReduceAction360 */;
val* var769 /* : ReduceAction361 */;
val* var770 /* : ReduceAction157 */;
val* var771 /* : ReduceAction363 */;
val* var772 /* : ReduceAction364 */;
val* var773 /* : ReduceAction365 */;
val* var774 /* : ReduceAction366 */;
val* var775 /* : ReduceAction367 */;
val* var776 /* : ReduceAction368 */;
val* var777 /* : ReduceAction369 */;
val* var778 /* : ReduceAction370 */;
val* var779 /* : ReduceAction371 */;
val* var780 /* : ReduceAction372 */;
val* var781 /* : ReduceAction373 */;
val* var782 /* : ReduceAction157 */;
val* var783 /* : ReduceAction398 */;
val* var784 /* : ReduceAction399 */;
val* var785 /* : ReduceAction400 */;
val* var786 /* : ReduceAction22 */;
val* var787 /* : ReduceAction402 */;
val* var788 /* : ReduceAction402 */;
val* var789 /* : ReduceAction383 */;
val* var790 /* : ReduceAction384 */;
val* var791 /* : ReduceAction426 */;
val* var792 /* : ReduceAction157 */;
val* var793 /* : ReduceAction157 */;
val* var794 /* : ReduceAction429 */;
val* var795 /* : ReduceAction430 */;
val* var796 /* : ReduceAction144 */;
val* var797 /* : ReduceAction145 */;
val* var798 /* : ReduceAction157 */;
val* var799 /* : ReduceAction280 */;
val* var800 /* : ReduceAction157 */;
val* var801 /* : ReduceAction282 */;
val* var802 /* : ReduceAction283 */;
val* var803 /* : ReduceAction284 */;
val* var804 /* : ReduceAction285 */;
val* var805 /* : ReduceAction157 */;
val* var806 /* : ReduceAction287 */;
val* var807 /* : ReduceAction157 */;
val* var808 /* : ReduceAction289 */;
val* var809 /* : ReduceAction290 */;
val* var810 /* : ReduceAction291 */;
val* var811 /* : ReduceAction292 */;
val* var812 /* : ReduceAction293 */;
val* var813 /* : ReduceAction294 */;
val* var814 /* : ReduceAction295 */;
val* var815 /* : ReduceAction296 */;
val* var816 /* : ReduceAction157 */;
val* var817 /* : ReduceAction298 */;
val* var818 /* : ReduceAction157 */;
val* var819 /* : ReduceAction300 */;
val* var820 /* : ReduceAction157 */;
val* var821 /* : ReduceAction302 */;
val* var822 /* : ReduceAction157 */;
val* var823 /* : ReduceAction304 */;
val* var824 /* : ReduceAction305 */;
val* var825 /* : ReduceAction157 */;
val* var826 /* : ReduceAction307 */;
val* var827 /* : ReduceAction308 */;
val* var828 /* : ReduceAction157 */;
val* var829 /* : ReduceAction310 */;
val* var830 /* : ReduceAction311 */;
val* var831 /* : ReduceAction312 */;
val* var832 /* : ReduceAction157 */;
val* var833 /* : ReduceAction314 */;
val* var834 /* : ReduceAction157 */;
val* var835 /* : ReduceAction316 */;
val* var836 /* : ReduceAction317 */;
val* var837 /* : ReduceAction318 */;
val* var838 /* : ReduceAction319 */;
val* var839 /* : ReduceAction157 */;
val* var840 /* : ReduceAction321 */;
val* var841 /* : ReduceAction322 */;
val* var842 /* : ReduceAction841 */;
val* var843 /* : ReduceAction157 */;
val* var844 /* : ReduceAction843 */;
val* var845 /* : ReduceAction844 */;
val* var846 /* : ReduceAction845 */;
val* var847 /* : ReduceAction846 */;
val* var848 /* : ReduceAction847 */;
val* var849 /* : ReduceAction181 */;
val* var850 /* : ReduceAction329 */;
val* var851 /* : ReduceAction846 */;
val* var852 /* : ReduceAction847 */;
val* var853 /* : ReduceAction189 */;
val* var854 /* : ReduceAction345 */;
val* var855 /* : ReduceAction854 */;
val* var856 /* : ReduceAction855 */;
val* var857 /* : ReduceAction351 */;
val* var858 /* : ReduceAction352 */;
val* var859 /* : ReduceAction353 */;
val* var860 /* : ReduceAction354 */;
val* var861 /* : ReduceAction355 */;
val* var862 /* : ReduceAction356 */;
val* var863 /* : ReduceAction353 */;
val* var864 /* : ReduceAction354 */;
val* var865 /* : ReduceAction359 */;
val* var866 /* : ReduceAction360 */;
val* var867 /* : ReduceAction361 */;
val* var868 /* : ReduceAction157 */;
val* var869 /* : ReduceAction363 */;
val* var870 /* : ReduceAction364 */;
val* var871 /* : ReduceAction365 */;
val* var872 /* : ReduceAction366 */;
val* var873 /* : ReduceAction367 */;
val* var874 /* : ReduceAction368 */;
val* var875 /* : ReduceAction369 */;
val* var876 /* : ReduceAction370 */;
val* var877 /* : ReduceAction371 */;
val* var878 /* : ReduceAction372 */;
val* var879 /* : ReduceAction373 */;
val* var880 /* : ReduceAction157 */;
val* var881 /* : ReduceAction880 */;
val* var882 /* : ReduceAction881 */;
val* var883 /* : ReduceAction154 */;
val* var884 /* : ReduceAction155 */;
val* var885 /* : ReduceAction156 */;
val* var886 /* : ReduceAction157 */;
val* var887 /* : ReduceAction157 */;
val* var888 /* : ReduceAction157 */;
val* var889 /* : ReduceAction167 */;
val* var890 /* : ReduceAction168 */;
val* var891 /* : ReduceAction169 */;
val* var892 /* : ReduceAction170 */;
val* var893 /* : ReduceAction171 */;
val* var894 /* : ReduceAction172 */;
val* var895 /* : ReduceAction173 */;
val* var896 /* : ReduceAction157 */;
val* var897 /* : ReduceAction157 */;
val* var898 /* : ReduceAction157 */;
val* var899 /* : ReduceAction157 */;
val* var900 /* : ReduceAction157 */;
val* var901 /* : ReduceAction157 */;
val* var902 /* : ReduceAction157 */;
val* var903 /* : ReduceAction181 */;
val* var904 /* : ReduceAction182 */;
val* var905 /* : ReduceAction183 */;
val* var906 /* : ReduceAction182 */;
val* var907 /* : ReduceAction185 */;
val* var908 /* : ReduceAction186 */;
val* var909 /* : ReduceAction187 */;
val* var910 /* : ReduceAction186 */;
val* var911 /* : ReduceAction189 */;
val* var912 /* : ReduceAction190 */;
val* var913 /* : ReduceAction191 */;
val* var914 /* : ReduceAction192 */;
val* var915 /* : ReduceAction193 */;
val* var916 /* : ReduceAction192 */;
val* var917 /* : ReduceAction195 */;
val* var918 /* : ReduceAction196 */;
val* var919 /* : ReduceAction195 */;
val* var920 /* : ReduceAction198 */;
val* var921 /* : ReduceAction254 */;
val* var922 /* : ReduceAction255 */;
val* var923 /* : ReduceAction256 */;
val* var924 /* : ReduceAction263 */;
val* var925 /* : ReduceAction264 */;
val* var926 /* : ReduceAction265 */;
val* var927 /* : ReduceAction266 */;
val* var928 /* : ReduceAction267 */;
val* var929 /* : ReduceAction268 */;
val* var930 /* : ReduceAction269 */;
val* var931 /* : ReduceAction270 */;
val* var932 /* : ReduceAction274 */;
val* var933 /* : ReduceAction275 */;
val* var934 /* : ReduceAction157 */;
val* var935 /* : ReduceAction157 */;
val* var936 /* : ReduceAction167 */;
val* var937 /* : ReduceAction168 */;
val* var938 /* : ReduceAction169 */;
val* var939 /* : ReduceAction170 */;
val* var940 /* : ReduceAction171 */;
val* var941 /* : ReduceAction172 */;
val* var942 /* : ReduceAction173 */;
val* var943 /* : ReduceAction157 */;
val* var944 /* : ReduceAction157 */;
val* var945 /* : ReduceAction157 */;
val* var946 /* : ReduceAction157 */;
val* var947 /* : ReduceAction157 */;
val* var948 /* : ReduceAction157 */;
val* var949 /* : ReduceAction157 */;
val* var950 /* : ReduceAction181 */;
val* var951 /* : ReduceAction182 */;
val* var952 /* : ReduceAction183 */;
val* var953 /* : ReduceAction182 */;
val* var954 /* : ReduceAction185 */;
val* var955 /* : ReduceAction186 */;
val* var956 /* : ReduceAction187 */;
val* var957 /* : ReduceAction186 */;
val* var958 /* : ReduceAction189 */;
val* var959 /* : ReduceAction190 */;
val* var960 /* : ReduceAction191 */;
val* var961 /* : ReduceAction192 */;
val* var962 /* : ReduceAction193 */;
val* var963 /* : ReduceAction192 */;
val* var964 /* : ReduceAction195 */;
val* var965 /* : ReduceAction196 */;
val* var966 /* : ReduceAction195 */;
val* var967 /* : ReduceAction198 */;
val* var968 /* : ReduceAction154 */;
val* var969 /* : ReduceAction155 */;
val* var970 /* : ReduceAction156 */;
val* var971 /* : ReduceAction154 */;
val* var972 /* : ReduceAction155 */;
val* var973 /* : ReduceAction156 */;
val* var974 /* : ReduceAction157 */;
val* var975 /* : ReduceAction157 */;
val* var976 /* : ReduceAction167 */;
val* var977 /* : ReduceAction168 */;
val* var978 /* : ReduceAction169 */;
val* var979 /* : ReduceAction170 */;
val* var980 /* : ReduceAction171 */;
val* var981 /* : ReduceAction172 */;
val* var982 /* : ReduceAction173 */;
val* var983 /* : ReduceAction157 */;
val* var984 /* : ReduceAction157 */;
val* var985 /* : ReduceAction157 */;
val* var986 /* : ReduceAction157 */;
val* var987 /* : ReduceAction157 */;
val* var988 /* : ReduceAction157 */;
val* var989 /* : ReduceAction198 */;
val* var990 /* : ReduceAction157 */;
val* var991 /* : ReduceAction157 */;
val* var992 /* : ReduceAction167 */;
val* var993 /* : ReduceAction168 */;
val* var994 /* : ReduceAction169 */;
val* var995 /* : ReduceAction170 */;
val* var996 /* : ReduceAction171 */;
val* var997 /* : ReduceAction172 */;
val* var998 /* : ReduceAction173 */;
val* var999 /* : ReduceAction157 */;
val* var1000 /* : ReduceAction157 */;
val* var1001 /* : ReduceAction157 */;
val* var1002 /* : ReduceAction157 */;
val* var1003 /* : ReduceAction157 */;
val* var1004 /* : ReduceAction157 */;
val* var1005 /* : ReduceAction198 */;
val* var1006 /* : ReduceAction157 */;
val* var1007 /* : ReduceAction157 */;
val* var1008 /* : ReduceAction167 */;
val* var1009 /* : ReduceAction168 */;
val* var1010 /* : ReduceAction169 */;
val* var1011 /* : ReduceAction170 */;
val* var1012 /* : ReduceAction171 */;
val* var1013 /* : ReduceAction172 */;
val* var1014 /* : ReduceAction173 */;
val* var1015 /* : ReduceAction157 */;
val* var1016 /* : ReduceAction157 */;
val* var1017 /* : ReduceAction157 */;
val* var1018 /* : ReduceAction157 */;
val* var1019 /* : ReduceAction157 */;
val* var1020 /* : ReduceAction157 */;
val* var1021 /* : ReduceAction198 */;
val* var1022 /* : ReduceAction157 */;
val* var1023 /* : ReduceAction157 */;
val* var1024 /* : ReduceAction167 */;
val* var1025 /* : ReduceAction168 */;
val* var1026 /* : ReduceAction169 */;
val* var1027 /* : ReduceAction170 */;
val* var1028 /* : ReduceAction171 */;
val* var1029 /* : ReduceAction172 */;
val* var1030 /* : ReduceAction173 */;
val* var1031 /* : ReduceAction157 */;
val* var1032 /* : ReduceAction157 */;
val* var1033 /* : ReduceAction157 */;
val* var1034 /* : ReduceAction157 */;
val* var1035 /* : ReduceAction157 */;
val* var1036 /* : ReduceAction157 */;
val* var1037 /* : ReduceAction198 */;
val* var1038 /* : ReduceAction432 */;
val* var1039 /* : ReduceAction434 */;
val* var1040 /* : ReduceAction1039 */;
val* var1041 /* : ReduceAction1040 */;
val* var1042 /* : ReduceAction1041 */;
val* var1043 /* : ReduceAction1042 */;
val* var1044 /* : ReduceAction1043 */;
val* var1045 /* : ReduceAction1044 */;
val* var1046 /* : ReduceAction1045 */;
val* var1047 /* : ReduceAction1046 */;
val* var1048 /* : ReduceAction43 */;
val* var1049 /* : ReduceAction1048 */;
val* var1050 /* : ReduceAction1049 */;
val* var1051 /* : ReduceAction1050 */;
val* var1052 /* : ReduceAction1051 */;
val* var1053 /* : ReduceAction1052 */;
val* var1054 /* : ReduceAction148 */;
val* var1055 /* : ReduceAction1054 */;
val* var1056 /* : ReduceAction383 */;
val* var1057 /* : ReduceAction1056 */;
val* var1058 /* : ReduceAction383 */;
val* var1059 /* : ReduceAction1056 */;
val* var1060 /* : ReduceAction383 */;
val* var1061 /* : ReduceAction1056 */;
val* var1062 /* : ReduceAction446 */;
val* var1063 /* : ReduceAction1062 */;
val* var1064 /* : ReduceAction405 */;
val* var1065 /* : ReduceAction1064 */;
val* var1066 /* : ReduceAction405 */;
val* var1067 /* : ReduceAction1064 */;
val* var1068 /* : ReduceAction383 */;
val* var1069 /* : ReduceAction1056 */;
val* var1070 /* : ReduceAction383 */;
val* var1071 /* : ReduceAction1056 */;
val* var1072 /* : ReduceAction447 */;
val* var1073 /* : ReduceAction1072 */;
val* var1074 /* : ReduceAction1073 */;
val* var1075 /* : ReduceAction1074 */;
val* var1076 /* : ReduceAction1075 */;
val* var1077 /* : ReduceAction1076 */;
val* var1078 /* : Array[nullable Object] */;
val* var1079 /* : NativeArray[nullable Object] */;
var = NEW_standard__Array(&type_standard__Array__nit__parser_work__ReduceAction);
var1 = NEW_nit__parser__ReduceAction0(&type_nit__parser__ReduceAction0);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1, 0l); /* goto= on <var1:ReduceAction0>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:ReduceAction0>*/
}
var2 = NEW_nit__parser__ReduceAction1(&type_nit__parser__ReduceAction1);
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var2, 0l); /* goto= on <var2:ReduceAction1>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:ReduceAction1>*/
}
var3 = NEW_nit__parser__ReduceAction2(&type_nit__parser__ReduceAction2);
{
((void(*)(val* self, long p0))(var3->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var3, 0l); /* goto= on <var3:ReduceAction2>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:ReduceAction2>*/
}
var4 = NEW_nit__parser__ReduceAction3(&type_nit__parser__ReduceAction3);
{
((void(*)(val* self, long p0))(var4->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var4, 0l); /* goto= on <var4:ReduceAction3>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:ReduceAction3>*/
}
var5 = NEW_nit__parser__ReduceAction4(&type_nit__parser__ReduceAction4);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var5, 0l); /* goto= on <var5:ReduceAction4>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:ReduceAction4>*/
}
var6 = NEW_nit__parser__ReduceAction5(&type_nit__parser__ReduceAction5);
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var6, 0l); /* goto= on <var6:ReduceAction5>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:ReduceAction5>*/
}
var7 = NEW_nit__parser__ReduceAction6(&type_nit__parser__ReduceAction6);
{
((void(*)(val* self, long p0))(var7->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var7, 0l); /* goto= on <var7:ReduceAction6>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:ReduceAction6>*/
}
var8 = NEW_nit__parser__ReduceAction7(&type_nit__parser__ReduceAction7);
{
((void(*)(val* self, long p0))(var8->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var8, 0l); /* goto= on <var8:ReduceAction7>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:ReduceAction7>*/
}
var9 = NEW_nit__parser__ReduceAction8(&type_nit__parser__ReduceAction8);
{
((void(*)(val* self, long p0))(var9->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var9, 0l); /* goto= on <var9:ReduceAction8>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:ReduceAction8>*/
}
var10 = NEW_nit__parser__ReduceAction9(&type_nit__parser__ReduceAction9);
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var10, 0l); /* goto= on <var10:ReduceAction9>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:ReduceAction9>*/
}
var11 = NEW_nit__parser__ReduceAction10(&type_nit__parser__ReduceAction10);
{
((void(*)(val* self, long p0))(var11->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var11, 0l); /* goto= on <var11:ReduceAction10>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11); /* init on <var11:ReduceAction10>*/
}
var12 = NEW_nit__parser__ReduceAction11(&type_nit__parser__ReduceAction11);
{
((void(*)(val* self, long p0))(var12->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var12, 0l); /* goto= on <var12:ReduceAction11>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_standard__kernel__Object__init]))(var12); /* init on <var12:ReduceAction11>*/
}
var13 = NEW_nit__parser__ReduceAction12(&type_nit__parser__ReduceAction12);
{
((void(*)(val* self, long p0))(var13->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var13, 0l); /* goto= on <var13:ReduceAction12>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13); /* init on <var13:ReduceAction12>*/
}
var14 = NEW_nit__parser__ReduceAction13(&type_nit__parser__ReduceAction13);
{
((void(*)(val* self, long p0))(var14->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var14, 0l); /* goto= on <var14:ReduceAction13>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14); /* init on <var14:ReduceAction13>*/
}
var15 = NEW_nit__parser__ReduceAction14(&type_nit__parser__ReduceAction14);
{
((void(*)(val* self, long p0))(var15->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var15, 0l); /* goto= on <var15:ReduceAction14>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_standard__kernel__Object__init]))(var15); /* init on <var15:ReduceAction14>*/
}
var16 = NEW_nit__parser__ReduceAction15(&type_nit__parser__ReduceAction15);
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var16, 0l); /* goto= on <var16:ReduceAction15>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_standard__kernel__Object__init]))(var16); /* init on <var16:ReduceAction15>*/
}
var17 = NEW_nit__parser__ReduceAction16(&type_nit__parser__ReduceAction16);
{
((void(*)(val* self, long p0))(var17->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var17, 1l); /* goto= on <var17:ReduceAction16>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_standard__kernel__Object__init]))(var17); /* init on <var17:ReduceAction16>*/
}
var18 = NEW_nit__parser__ReduceAction17(&type_nit__parser__ReduceAction17);
{
((void(*)(val* self, long p0))(var18->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var18, 2l); /* goto= on <var18:ReduceAction17>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:ReduceAction17>*/
}
var19 = NEW_nit__parser__ReduceAction18(&type_nit__parser__ReduceAction18);
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var19, 2l); /* goto= on <var19:ReduceAction18>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_standard__kernel__Object__init]))(var19); /* init on <var19:ReduceAction18>*/
}
var20 = NEW_nit__parser__ReduceAction19(&type_nit__parser__ReduceAction19);
{
((void(*)(val* self, long p0))(var20->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var20, 3l); /* goto= on <var20:ReduceAction19>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_standard__kernel__Object__init]))(var20); /* init on <var20:ReduceAction19>*/
}
var21 = NEW_nit__parser__ReduceAction20(&type_nit__parser__ReduceAction20);
{
((void(*)(val* self, long p0))(var21->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var21, 3l); /* goto= on <var21:ReduceAction20>*/
}
{
((void(*)(val* self))(var21->class->vft[COLOR_standard__kernel__Object__init]))(var21); /* init on <var21:ReduceAction20>*/
}
var22 = NEW_nit__parser__ReduceAction21(&type_nit__parser__ReduceAction21);
{
((void(*)(val* self, long p0))(var22->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var22, 4l); /* goto= on <var22:ReduceAction21>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:ReduceAction21>*/
}
var23 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var23, 4l); /* goto= on <var23:ReduceAction22>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:ReduceAction22>*/
}
var24 = NEW_nit__parser__ReduceAction23(&type_nit__parser__ReduceAction23);
{
((void(*)(val* self, long p0))(var24->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var24, 4l); /* goto= on <var24:ReduceAction23>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_standard__kernel__Object__init]))(var24); /* init on <var24:ReduceAction23>*/
}
var25 = NEW_nit__parser__ReduceAction24(&type_nit__parser__ReduceAction24);
{
((void(*)(val* self, long p0))(var25->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var25, 5l); /* goto= on <var25:ReduceAction24>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_standard__kernel__Object__init]))(var25); /* init on <var25:ReduceAction24>*/
}
var26 = NEW_nit__parser__ReduceAction24(&type_nit__parser__ReduceAction24);
{
((void(*)(val* self, long p0))(var26->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var26, 5l); /* goto= on <var26:ReduceAction24>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_standard__kernel__Object__init]))(var26); /* init on <var26:ReduceAction24>*/
}
var27 = NEW_nit__parser__ReduceAction26(&type_nit__parser__ReduceAction26);
{
((void(*)(val* self, long p0))(var27->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var27, 6l); /* goto= on <var27:ReduceAction26>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_standard__kernel__Object__init]))(var27); /* init on <var27:ReduceAction26>*/
}
var28 = NEW_nit__parser__ReduceAction27(&type_nit__parser__ReduceAction27);
{
((void(*)(val* self, long p0))(var28->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var28, 6l); /* goto= on <var28:ReduceAction27>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_standard__kernel__Object__init]))(var28); /* init on <var28:ReduceAction27>*/
}
var29 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var29, 7l); /* goto= on <var29:ReduceAction22>*/
}
{
((void(*)(val* self))(var29->class->vft[COLOR_standard__kernel__Object__init]))(var29); /* init on <var29:ReduceAction22>*/
}
var30 = NEW_nit__parser__ReduceAction29(&type_nit__parser__ReduceAction29);
{
((void(*)(val* self, long p0))(var30->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var30, 7l); /* goto= on <var30:ReduceAction29>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_standard__kernel__Object__init]))(var30); /* init on <var30:ReduceAction29>*/
}
var31 = NEW_nit__parser__ReduceAction30(&type_nit__parser__ReduceAction30);
{
((void(*)(val* self, long p0))(var31->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var31, 8l); /* goto= on <var31:ReduceAction30>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_standard__kernel__Object__init]))(var31); /* init on <var31:ReduceAction30>*/
}
var32 = NEW_nit__parser__ReduceAction31(&type_nit__parser__ReduceAction31);
{
((void(*)(val* self, long p0))(var32->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var32, 8l); /* goto= on <var32:ReduceAction31>*/
}
{
((void(*)(val* self))(var32->class->vft[COLOR_standard__kernel__Object__init]))(var32); /* init on <var32:ReduceAction31>*/
}
var33 = NEW_nit__parser__ReduceAction32(&type_nit__parser__ReduceAction32);
{
((void(*)(val* self, long p0))(var33->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var33, 8l); /* goto= on <var33:ReduceAction32>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_standard__kernel__Object__init]))(var33); /* init on <var33:ReduceAction32>*/
}
var34 = NEW_nit__parser__ReduceAction33(&type_nit__parser__ReduceAction33);
{
((void(*)(val* self, long p0))(var34->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var34, 8l); /* goto= on <var34:ReduceAction33>*/
}
{
((void(*)(val* self))(var34->class->vft[COLOR_standard__kernel__Object__init]))(var34); /* init on <var34:ReduceAction33>*/
}
var35 = NEW_nit__parser__ReduceAction34(&type_nit__parser__ReduceAction34);
{
((void(*)(val* self, long p0))(var35->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var35, 8l); /* goto= on <var35:ReduceAction34>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_standard__kernel__Object__init]))(var35); /* init on <var35:ReduceAction34>*/
}
var36 = NEW_nit__parser__ReduceAction35(&type_nit__parser__ReduceAction35);
{
((void(*)(val* self, long p0))(var36->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var36, 9l); /* goto= on <var36:ReduceAction35>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_standard__kernel__Object__init]))(var36); /* init on <var36:ReduceAction35>*/
}
var37 = NEW_nit__parser__ReduceAction36(&type_nit__parser__ReduceAction36);
{
((void(*)(val* self, long p0))(var37->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var37, 9l); /* goto= on <var37:ReduceAction36>*/
}
{
((void(*)(val* self))(var37->class->vft[COLOR_standard__kernel__Object__init]))(var37); /* init on <var37:ReduceAction36>*/
}
var38 = NEW_nit__parser__ReduceAction37(&type_nit__parser__ReduceAction37);
{
((void(*)(val* self, long p0))(var38->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var38, 9l); /* goto= on <var38:ReduceAction37>*/
}
{
((void(*)(val* self))(var38->class->vft[COLOR_standard__kernel__Object__init]))(var38); /* init on <var38:ReduceAction37>*/
}
var39 = NEW_nit__parser__ReduceAction38(&type_nit__parser__ReduceAction38);
{
((void(*)(val* self, long p0))(var39->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var39, 10l); /* goto= on <var39:ReduceAction38>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39); /* init on <var39:ReduceAction38>*/
}
var40 = NEW_nit__parser__ReduceAction39(&type_nit__parser__ReduceAction39);
{
((void(*)(val* self, long p0))(var40->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var40, 11l); /* goto= on <var40:ReduceAction39>*/
}
{
((void(*)(val* self))(var40->class->vft[COLOR_standard__kernel__Object__init]))(var40); /* init on <var40:ReduceAction39>*/
}
var41 = NEW_nit__parser__ReduceAction40(&type_nit__parser__ReduceAction40);
{
((void(*)(val* self, long p0))(var41->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var41, 11l); /* goto= on <var41:ReduceAction40>*/
}
{
((void(*)(val* self))(var41->class->vft[COLOR_standard__kernel__Object__init]))(var41); /* init on <var41:ReduceAction40>*/
}
var42 = NEW_nit__parser__ReduceAction41(&type_nit__parser__ReduceAction41);
{
((void(*)(val* self, long p0))(var42->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var42, 12l); /* goto= on <var42:ReduceAction41>*/
}
{
((void(*)(val* self))(var42->class->vft[COLOR_standard__kernel__Object__init]))(var42); /* init on <var42:ReduceAction41>*/
}
var43 = NEW_nit__parser__ReduceAction42(&type_nit__parser__ReduceAction42);
{
((void(*)(val* self, long p0))(var43->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var43, 13l); /* goto= on <var43:ReduceAction42>*/
}
{
((void(*)(val* self))(var43->class->vft[COLOR_standard__kernel__Object__init]))(var43); /* init on <var43:ReduceAction42>*/
}
var44 = NEW_nit__parser__ReduceAction43(&type_nit__parser__ReduceAction43);
{
((void(*)(val* self, long p0))(var44->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var44, 13l); /* goto= on <var44:ReduceAction43>*/
}
{
((void(*)(val* self))(var44->class->vft[COLOR_standard__kernel__Object__init]))(var44); /* init on <var44:ReduceAction43>*/
}
var45 = NEW_nit__parser__ReduceAction44(&type_nit__parser__ReduceAction44);
{
((void(*)(val* self, long p0))(var45->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var45, 13l); /* goto= on <var45:ReduceAction44>*/
}
{
((void(*)(val* self))(var45->class->vft[COLOR_standard__kernel__Object__init]))(var45); /* init on <var45:ReduceAction44>*/
}
var46 = NEW_nit__parser__ReduceAction45(&type_nit__parser__ReduceAction45);
{
((void(*)(val* self, long p0))(var46->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var46, 14l); /* goto= on <var46:ReduceAction45>*/
}
{
((void(*)(val* self))(var46->class->vft[COLOR_standard__kernel__Object__init]))(var46); /* init on <var46:ReduceAction45>*/
}
var47 = NEW_nit__parser__ReduceAction46(&type_nit__parser__ReduceAction46);
{
((void(*)(val* self, long p0))(var47->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var47, 15l); /* goto= on <var47:ReduceAction46>*/
}
{
((void(*)(val* self))(var47->class->vft[COLOR_standard__kernel__Object__init]))(var47); /* init on <var47:ReduceAction46>*/
}
var48 = NEW_nit__parser__ReduceAction47(&type_nit__parser__ReduceAction47);
{
((void(*)(val* self, long p0))(var48->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var48, 15l); /* goto= on <var48:ReduceAction47>*/
}
{
((void(*)(val* self))(var48->class->vft[COLOR_standard__kernel__Object__init]))(var48); /* init on <var48:ReduceAction47>*/
}
var49 = NEW_nit__parser__ReduceAction48(&type_nit__parser__ReduceAction48);
{
((void(*)(val* self, long p0))(var49->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var49, 15l); /* goto= on <var49:ReduceAction48>*/
}
{
((void(*)(val* self))(var49->class->vft[COLOR_standard__kernel__Object__init]))(var49); /* init on <var49:ReduceAction48>*/
}
var50 = NEW_nit__parser__ReduceAction49(&type_nit__parser__ReduceAction49);
{
((void(*)(val* self, long p0))(var50->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var50, 15l); /* goto= on <var50:ReduceAction49>*/
}
{
((void(*)(val* self))(var50->class->vft[COLOR_standard__kernel__Object__init]))(var50); /* init on <var50:ReduceAction49>*/
}
var51 = NEW_nit__parser__ReduceAction50(&type_nit__parser__ReduceAction50);
{
((void(*)(val* self, long p0))(var51->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var51, 15l); /* goto= on <var51:ReduceAction50>*/
}
{
((void(*)(val* self))(var51->class->vft[COLOR_standard__kernel__Object__init]))(var51); /* init on <var51:ReduceAction50>*/
}
var52 = NEW_nit__parser__ReduceAction51(&type_nit__parser__ReduceAction51);
{
((void(*)(val* self, long p0))(var52->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var52, 15l); /* goto= on <var52:ReduceAction51>*/
}
{
((void(*)(val* self))(var52->class->vft[COLOR_standard__kernel__Object__init]))(var52); /* init on <var52:ReduceAction51>*/
}
var53 = NEW_nit__parser__ReduceAction52(&type_nit__parser__ReduceAction52);
{
((void(*)(val* self, long p0))(var53->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var53, 15l); /* goto= on <var53:ReduceAction52>*/
}
{
((void(*)(val* self))(var53->class->vft[COLOR_standard__kernel__Object__init]))(var53); /* init on <var53:ReduceAction52>*/
}
var54 = NEW_nit__parser__ReduceAction53(&type_nit__parser__ReduceAction53);
{
((void(*)(val* self, long p0))(var54->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var54, 15l); /* goto= on <var54:ReduceAction53>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_standard__kernel__Object__init]))(var54); /* init on <var54:ReduceAction53>*/
}
var55 = NEW_nit__parser__ReduceAction54(&type_nit__parser__ReduceAction54);
{
((void(*)(val* self, long p0))(var55->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var55, 15l); /* goto= on <var55:ReduceAction54>*/
}
{
((void(*)(val* self))(var55->class->vft[COLOR_standard__kernel__Object__init]))(var55); /* init on <var55:ReduceAction54>*/
}
var56 = NEW_nit__parser__ReduceAction55(&type_nit__parser__ReduceAction55);
{
((void(*)(val* self, long p0))(var56->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var56, 15l); /* goto= on <var56:ReduceAction55>*/
}
{
((void(*)(val* self))(var56->class->vft[COLOR_standard__kernel__Object__init]))(var56); /* init on <var56:ReduceAction55>*/
}
var57 = NEW_nit__parser__ReduceAction56(&type_nit__parser__ReduceAction56);
{
((void(*)(val* self, long p0))(var57->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var57, 15l); /* goto= on <var57:ReduceAction56>*/
}
{
((void(*)(val* self))(var57->class->vft[COLOR_standard__kernel__Object__init]))(var57); /* init on <var57:ReduceAction56>*/
}
var58 = NEW_nit__parser__ReduceAction57(&type_nit__parser__ReduceAction57);
{
((void(*)(val* self, long p0))(var58->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var58, 15l); /* goto= on <var58:ReduceAction57>*/
}
{
((void(*)(val* self))(var58->class->vft[COLOR_standard__kernel__Object__init]))(var58); /* init on <var58:ReduceAction57>*/
}
var59 = NEW_nit__parser__ReduceAction58(&type_nit__parser__ReduceAction58);
{
((void(*)(val* self, long p0))(var59->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var59, 15l); /* goto= on <var59:ReduceAction58>*/
}
{
((void(*)(val* self))(var59->class->vft[COLOR_standard__kernel__Object__init]))(var59); /* init on <var59:ReduceAction58>*/
}
var60 = NEW_nit__parser__ReduceAction59(&type_nit__parser__ReduceAction59);
{
((void(*)(val* self, long p0))(var60->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var60, 15l); /* goto= on <var60:ReduceAction59>*/
}
{
((void(*)(val* self))(var60->class->vft[COLOR_standard__kernel__Object__init]))(var60); /* init on <var60:ReduceAction59>*/
}
var61 = NEW_nit__parser__ReduceAction60(&type_nit__parser__ReduceAction60);
{
((void(*)(val* self, long p0))(var61->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var61, 15l); /* goto= on <var61:ReduceAction60>*/
}
{
((void(*)(val* self))(var61->class->vft[COLOR_standard__kernel__Object__init]))(var61); /* init on <var61:ReduceAction60>*/
}
var62 = NEW_nit__parser__ReduceAction61(&type_nit__parser__ReduceAction61);
{
((void(*)(val* self, long p0))(var62->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var62, 15l); /* goto= on <var62:ReduceAction61>*/
}
{
((void(*)(val* self))(var62->class->vft[COLOR_standard__kernel__Object__init]))(var62); /* init on <var62:ReduceAction61>*/
}
var63 = NEW_nit__parser__ReduceAction62(&type_nit__parser__ReduceAction62);
{
((void(*)(val* self, long p0))(var63->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var63, 15l); /* goto= on <var63:ReduceAction62>*/
}
{
((void(*)(val* self))(var63->class->vft[COLOR_standard__kernel__Object__init]))(var63); /* init on <var63:ReduceAction62>*/
}
var64 = NEW_nit__parser__ReduceAction63(&type_nit__parser__ReduceAction63);
{
((void(*)(val* self, long p0))(var64->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var64, 15l); /* goto= on <var64:ReduceAction63>*/
}
{
((void(*)(val* self))(var64->class->vft[COLOR_standard__kernel__Object__init]))(var64); /* init on <var64:ReduceAction63>*/
}
var65 = NEW_nit__parser__ReduceAction64(&type_nit__parser__ReduceAction64);
{
((void(*)(val* self, long p0))(var65->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var65, 15l); /* goto= on <var65:ReduceAction64>*/
}
{
((void(*)(val* self))(var65->class->vft[COLOR_standard__kernel__Object__init]))(var65); /* init on <var65:ReduceAction64>*/
}
var66 = NEW_nit__parser__ReduceAction65(&type_nit__parser__ReduceAction65);
{
((void(*)(val* self, long p0))(var66->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var66, 15l); /* goto= on <var66:ReduceAction65>*/
}
{
((void(*)(val* self))(var66->class->vft[COLOR_standard__kernel__Object__init]))(var66); /* init on <var66:ReduceAction65>*/
}
var67 = NEW_nit__parser__ReduceAction66(&type_nit__parser__ReduceAction66);
{
((void(*)(val* self, long p0))(var67->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var67, 15l); /* goto= on <var67:ReduceAction66>*/
}
{
((void(*)(val* self))(var67->class->vft[COLOR_standard__kernel__Object__init]))(var67); /* init on <var67:ReduceAction66>*/
}
var68 = NEW_nit__parser__ReduceAction67(&type_nit__parser__ReduceAction67);
{
((void(*)(val* self, long p0))(var68->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var68, 15l); /* goto= on <var68:ReduceAction67>*/
}
{
((void(*)(val* self))(var68->class->vft[COLOR_standard__kernel__Object__init]))(var68); /* init on <var68:ReduceAction67>*/
}
var69 = NEW_nit__parser__ReduceAction68(&type_nit__parser__ReduceAction68);
{
((void(*)(val* self, long p0))(var69->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var69, 15l); /* goto= on <var69:ReduceAction68>*/
}
{
((void(*)(val* self))(var69->class->vft[COLOR_standard__kernel__Object__init]))(var69); /* init on <var69:ReduceAction68>*/
}
var70 = NEW_nit__parser__ReduceAction69(&type_nit__parser__ReduceAction69);
{
((void(*)(val* self, long p0))(var70->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var70, 15l); /* goto= on <var70:ReduceAction69>*/
}
{
((void(*)(val* self))(var70->class->vft[COLOR_standard__kernel__Object__init]))(var70); /* init on <var70:ReduceAction69>*/
}
var71 = NEW_nit__parser__ReduceAction70(&type_nit__parser__ReduceAction70);
{
((void(*)(val* self, long p0))(var71->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var71, 15l); /* goto= on <var71:ReduceAction70>*/
}
{
((void(*)(val* self))(var71->class->vft[COLOR_standard__kernel__Object__init]))(var71); /* init on <var71:ReduceAction70>*/
}
var72 = NEW_nit__parser__ReduceAction71(&type_nit__parser__ReduceAction71);
{
((void(*)(val* self, long p0))(var72->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var72, 15l); /* goto= on <var72:ReduceAction71>*/
}
{
((void(*)(val* self))(var72->class->vft[COLOR_standard__kernel__Object__init]))(var72); /* init on <var72:ReduceAction71>*/
}
var73 = NEW_nit__parser__ReduceAction72(&type_nit__parser__ReduceAction72);
{
((void(*)(val* self, long p0))(var73->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var73, 15l); /* goto= on <var73:ReduceAction72>*/
}
{
((void(*)(val* self))(var73->class->vft[COLOR_standard__kernel__Object__init]))(var73); /* init on <var73:ReduceAction72>*/
}
var74 = NEW_nit__parser__ReduceAction72(&type_nit__parser__ReduceAction72);
{
((void(*)(val* self, long p0))(var74->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var74, 15l); /* goto= on <var74:ReduceAction72>*/
}
{
((void(*)(val* self))(var74->class->vft[COLOR_standard__kernel__Object__init]))(var74); /* init on <var74:ReduceAction72>*/
}
var75 = NEW_nit__parser__ReduceAction74(&type_nit__parser__ReduceAction74);
{
((void(*)(val* self, long p0))(var75->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var75, 16l); /* goto= on <var75:ReduceAction74>*/
}
{
((void(*)(val* self))(var75->class->vft[COLOR_standard__kernel__Object__init]))(var75); /* init on <var75:ReduceAction74>*/
}
var76 = NEW_nit__parser__ReduceAction75(&type_nit__parser__ReduceAction75);
{
((void(*)(val* self, long p0))(var76->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var76, 16l); /* goto= on <var76:ReduceAction75>*/
}
{
((void(*)(val* self))(var76->class->vft[COLOR_standard__kernel__Object__init]))(var76); /* init on <var76:ReduceAction75>*/
}
var77 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var77->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var77, 16l); /* goto= on <var77:ReduceAction22>*/
}
{
((void(*)(val* self))(var77->class->vft[COLOR_standard__kernel__Object__init]))(var77); /* init on <var77:ReduceAction22>*/
}
var78 = NEW_nit__parser__ReduceAction74(&type_nit__parser__ReduceAction74);
{
((void(*)(val* self, long p0))(var78->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var78, 17l); /* goto= on <var78:ReduceAction74>*/
}
{
((void(*)(val* self))(var78->class->vft[COLOR_standard__kernel__Object__init]))(var78); /* init on <var78:ReduceAction74>*/
}
var79 = NEW_nit__parser__ReduceAction78(&type_nit__parser__ReduceAction78);
{
((void(*)(val* self, long p0))(var79->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var79, 17l); /* goto= on <var79:ReduceAction78>*/
}
{
((void(*)(val* self))(var79->class->vft[COLOR_standard__kernel__Object__init]))(var79); /* init on <var79:ReduceAction78>*/
}
var80 = NEW_nit__parser__ReduceAction79(&type_nit__parser__ReduceAction79);
{
((void(*)(val* self, long p0))(var80->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var80, 18l); /* goto= on <var80:ReduceAction79>*/
}
{
((void(*)(val* self))(var80->class->vft[COLOR_standard__kernel__Object__init]))(var80); /* init on <var80:ReduceAction79>*/
}
var81 = NEW_nit__parser__ReduceAction80(&type_nit__parser__ReduceAction80);
{
((void(*)(val* self, long p0))(var81->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var81, 18l); /* goto= on <var81:ReduceAction80>*/
}
{
((void(*)(val* self))(var81->class->vft[COLOR_standard__kernel__Object__init]))(var81); /* init on <var81:ReduceAction80>*/
}
var82 = NEW_nit__parser__ReduceAction81(&type_nit__parser__ReduceAction81);
{
((void(*)(val* self, long p0))(var82->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var82, 18l); /* goto= on <var82:ReduceAction81>*/
}
{
((void(*)(val* self))(var82->class->vft[COLOR_standard__kernel__Object__init]))(var82); /* init on <var82:ReduceAction81>*/
}
var83 = NEW_nit__parser__ReduceAction82(&type_nit__parser__ReduceAction82);
{
((void(*)(val* self, long p0))(var83->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var83, 18l); /* goto= on <var83:ReduceAction82>*/
}
{
((void(*)(val* self))(var83->class->vft[COLOR_standard__kernel__Object__init]))(var83); /* init on <var83:ReduceAction82>*/
}
var84 = NEW_nit__parser__ReduceAction83(&type_nit__parser__ReduceAction83);
{
((void(*)(val* self, long p0))(var84->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var84, 18l); /* goto= on <var84:ReduceAction83>*/
}
{
((void(*)(val* self))(var84->class->vft[COLOR_standard__kernel__Object__init]))(var84); /* init on <var84:ReduceAction83>*/
}
var85 = NEW_nit__parser__ReduceAction84(&type_nit__parser__ReduceAction84);
{
((void(*)(val* self, long p0))(var85->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var85, 19l); /* goto= on <var85:ReduceAction84>*/
}
{
((void(*)(val* self))(var85->class->vft[COLOR_standard__kernel__Object__init]))(var85); /* init on <var85:ReduceAction84>*/
}
var86 = NEW_nit__parser__ReduceAction85(&type_nit__parser__ReduceAction85);
{
((void(*)(val* self, long p0))(var86->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var86, 19l); /* goto= on <var86:ReduceAction85>*/
}
{
((void(*)(val* self))(var86->class->vft[COLOR_standard__kernel__Object__init]))(var86); /* init on <var86:ReduceAction85>*/
}
var87 = NEW_nit__parser__ReduceAction86(&type_nit__parser__ReduceAction86);
{
((void(*)(val* self, long p0))(var87->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var87, 19l); /* goto= on <var87:ReduceAction86>*/
}
{
((void(*)(val* self))(var87->class->vft[COLOR_standard__kernel__Object__init]))(var87); /* init on <var87:ReduceAction86>*/
}
var88 = NEW_nit__parser__ReduceAction87(&type_nit__parser__ReduceAction87);
{
((void(*)(val* self, long p0))(var88->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var88, 19l); /* goto= on <var88:ReduceAction87>*/
}
{
((void(*)(val* self))(var88->class->vft[COLOR_standard__kernel__Object__init]))(var88); /* init on <var88:ReduceAction87>*/
}
var89 = NEW_nit__parser__ReduceAction88(&type_nit__parser__ReduceAction88);
{
((void(*)(val* self, long p0))(var89->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var89, 19l); /* goto= on <var89:ReduceAction88>*/
}
{
((void(*)(val* self))(var89->class->vft[COLOR_standard__kernel__Object__init]))(var89); /* init on <var89:ReduceAction88>*/
}
var90 = NEW_nit__parser__ReduceAction89(&type_nit__parser__ReduceAction89);
{
((void(*)(val* self, long p0))(var90->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var90, 19l); /* goto= on <var90:ReduceAction89>*/
}
{
((void(*)(val* self))(var90->class->vft[COLOR_standard__kernel__Object__init]))(var90); /* init on <var90:ReduceAction89>*/
}
var91 = NEW_nit__parser__ReduceAction90(&type_nit__parser__ReduceAction90);
{
((void(*)(val* self, long p0))(var91->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var91, 19l); /* goto= on <var91:ReduceAction90>*/
}
{
((void(*)(val* self))(var91->class->vft[COLOR_standard__kernel__Object__init]))(var91); /* init on <var91:ReduceAction90>*/
}
var92 = NEW_nit__parser__ReduceAction91(&type_nit__parser__ReduceAction91);
{
((void(*)(val* self, long p0))(var92->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var92, 19l); /* goto= on <var92:ReduceAction91>*/
}
{
((void(*)(val* self))(var92->class->vft[COLOR_standard__kernel__Object__init]))(var92); /* init on <var92:ReduceAction91>*/
}
var93 = NEW_nit__parser__ReduceAction92(&type_nit__parser__ReduceAction92);
{
((void(*)(val* self, long p0))(var93->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var93, 19l); /* goto= on <var93:ReduceAction92>*/
}
{
((void(*)(val* self))(var93->class->vft[COLOR_standard__kernel__Object__init]))(var93); /* init on <var93:ReduceAction92>*/
}
var94 = NEW_nit__parser__ReduceAction93(&type_nit__parser__ReduceAction93);
{
((void(*)(val* self, long p0))(var94->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var94, 19l); /* goto= on <var94:ReduceAction93>*/
}
{
((void(*)(val* self))(var94->class->vft[COLOR_standard__kernel__Object__init]))(var94); /* init on <var94:ReduceAction93>*/
}
var95 = NEW_nit__parser__ReduceAction94(&type_nit__parser__ReduceAction94);
{
((void(*)(val* self, long p0))(var95->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var95, 19l); /* goto= on <var95:ReduceAction94>*/
}
{
((void(*)(val* self))(var95->class->vft[COLOR_standard__kernel__Object__init]))(var95); /* init on <var95:ReduceAction94>*/
}
var96 = NEW_nit__parser__ReduceAction95(&type_nit__parser__ReduceAction95);
{
((void(*)(val* self, long p0))(var96->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var96, 19l); /* goto= on <var96:ReduceAction95>*/
}
{
((void(*)(val* self))(var96->class->vft[COLOR_standard__kernel__Object__init]))(var96); /* init on <var96:ReduceAction95>*/
}
var97 = NEW_nit__parser__ReduceAction96(&type_nit__parser__ReduceAction96);
{
((void(*)(val* self, long p0))(var97->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var97, 19l); /* goto= on <var97:ReduceAction96>*/
}
{
((void(*)(val* self))(var97->class->vft[COLOR_standard__kernel__Object__init]))(var97); /* init on <var97:ReduceAction96>*/
}
var98 = NEW_nit__parser__ReduceAction97(&type_nit__parser__ReduceAction97);
{
((void(*)(val* self, long p0))(var98->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var98, 19l); /* goto= on <var98:ReduceAction97>*/
}
{
((void(*)(val* self))(var98->class->vft[COLOR_standard__kernel__Object__init]))(var98); /* init on <var98:ReduceAction97>*/
}
var99 = NEW_nit__parser__ReduceAction98(&type_nit__parser__ReduceAction98);
{
((void(*)(val* self, long p0))(var99->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var99, 19l); /* goto= on <var99:ReduceAction98>*/
}
{
((void(*)(val* self))(var99->class->vft[COLOR_standard__kernel__Object__init]))(var99); /* init on <var99:ReduceAction98>*/
}
var100 = NEW_nit__parser__ReduceAction99(&type_nit__parser__ReduceAction99);
{
((void(*)(val* self, long p0))(var100->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var100, 19l); /* goto= on <var100:ReduceAction99>*/
}
{
((void(*)(val* self))(var100->class->vft[COLOR_standard__kernel__Object__init]))(var100); /* init on <var100:ReduceAction99>*/
}
var101 = NEW_nit__parser__ReduceAction100(&type_nit__parser__ReduceAction100);
{
((void(*)(val* self, long p0))(var101->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var101, 19l); /* goto= on <var101:ReduceAction100>*/
}
{
((void(*)(val* self))(var101->class->vft[COLOR_standard__kernel__Object__init]))(var101); /* init on <var101:ReduceAction100>*/
}
var102 = NEW_nit__parser__ReduceAction101(&type_nit__parser__ReduceAction101);
{
((void(*)(val* self, long p0))(var102->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var102, 19l); /* goto= on <var102:ReduceAction101>*/
}
{
((void(*)(val* self))(var102->class->vft[COLOR_standard__kernel__Object__init]))(var102); /* init on <var102:ReduceAction101>*/
}
var103 = NEW_nit__parser__ReduceAction102(&type_nit__parser__ReduceAction102);
{
((void(*)(val* self, long p0))(var103->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var103, 19l); /* goto= on <var103:ReduceAction102>*/
}
{
((void(*)(val* self))(var103->class->vft[COLOR_standard__kernel__Object__init]))(var103); /* init on <var103:ReduceAction102>*/
}
var104 = NEW_nit__parser__ReduceAction103(&type_nit__parser__ReduceAction103);
{
((void(*)(val* self, long p0))(var104->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var104, 19l); /* goto= on <var104:ReduceAction103>*/
}
{
((void(*)(val* self))(var104->class->vft[COLOR_standard__kernel__Object__init]))(var104); /* init on <var104:ReduceAction103>*/
}
var105 = NEW_nit__parser__ReduceAction104(&type_nit__parser__ReduceAction104);
{
((void(*)(val* self, long p0))(var105->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var105, 19l); /* goto= on <var105:ReduceAction104>*/
}
{
((void(*)(val* self))(var105->class->vft[COLOR_standard__kernel__Object__init]))(var105); /* init on <var105:ReduceAction104>*/
}
var106 = NEW_nit__parser__ReduceAction105(&type_nit__parser__ReduceAction105);
{
((void(*)(val* self, long p0))(var106->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var106, 19l); /* goto= on <var106:ReduceAction105>*/
}
{
((void(*)(val* self))(var106->class->vft[COLOR_standard__kernel__Object__init]))(var106); /* init on <var106:ReduceAction105>*/
}
var107 = NEW_nit__parser__ReduceAction106(&type_nit__parser__ReduceAction106);
{
((void(*)(val* self, long p0))(var107->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var107, 19l); /* goto= on <var107:ReduceAction106>*/
}
{
((void(*)(val* self))(var107->class->vft[COLOR_standard__kernel__Object__init]))(var107); /* init on <var107:ReduceAction106>*/
}
var108 = NEW_nit__parser__ReduceAction107(&type_nit__parser__ReduceAction107);
{
((void(*)(val* self, long p0))(var108->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var108, 20l); /* goto= on <var108:ReduceAction107>*/
}
{
((void(*)(val* self))(var108->class->vft[COLOR_standard__kernel__Object__init]))(var108); /* init on <var108:ReduceAction107>*/
}
var109 = NEW_nit__parser__ReduceAction108(&type_nit__parser__ReduceAction108);
{
((void(*)(val* self, long p0))(var109->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var109, 20l); /* goto= on <var109:ReduceAction108>*/
}
{
((void(*)(val* self))(var109->class->vft[COLOR_standard__kernel__Object__init]))(var109); /* init on <var109:ReduceAction108>*/
}
var110 = NEW_nit__parser__ReduceAction109(&type_nit__parser__ReduceAction109);
{
((void(*)(val* self, long p0))(var110->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var110, 20l); /* goto= on <var110:ReduceAction109>*/
}
{
((void(*)(val* self))(var110->class->vft[COLOR_standard__kernel__Object__init]))(var110); /* init on <var110:ReduceAction109>*/
}
var111 = NEW_nit__parser__ReduceAction110(&type_nit__parser__ReduceAction110);
{
((void(*)(val* self, long p0))(var111->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var111, 20l); /* goto= on <var111:ReduceAction110>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_standard__kernel__Object__init]))(var111); /* init on <var111:ReduceAction110>*/
}
var112 = NEW_nit__parser__ReduceAction111(&type_nit__parser__ReduceAction111);
{
((void(*)(val* self, long p0))(var112->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var112, 21l); /* goto= on <var112:ReduceAction111>*/
}
{
((void(*)(val* self))(var112->class->vft[COLOR_standard__kernel__Object__init]))(var112); /* init on <var112:ReduceAction111>*/
}
var113 = NEW_nit__parser__ReduceAction112(&type_nit__parser__ReduceAction112);
{
((void(*)(val* self, long p0))(var113->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var113, 21l); /* goto= on <var113:ReduceAction112>*/
}
{
((void(*)(val* self))(var113->class->vft[COLOR_standard__kernel__Object__init]))(var113); /* init on <var113:ReduceAction112>*/
}
var114 = NEW_nit__parser__ReduceAction37(&type_nit__parser__ReduceAction37);
{
((void(*)(val* self, long p0))(var114->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var114, 21l); /* goto= on <var114:ReduceAction37>*/
}
{
((void(*)(val* self))(var114->class->vft[COLOR_standard__kernel__Object__init]))(var114); /* init on <var114:ReduceAction37>*/
}
var115 = NEW_nit__parser__ReduceAction114(&type_nit__parser__ReduceAction114);
{
((void(*)(val* self, long p0))(var115->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var115, 22l); /* goto= on <var115:ReduceAction114>*/
}
{
((void(*)(val* self))(var115->class->vft[COLOR_standard__kernel__Object__init]))(var115); /* init on <var115:ReduceAction114>*/
}
var116 = NEW_nit__parser__ReduceAction115(&type_nit__parser__ReduceAction115);
{
((void(*)(val* self, long p0))(var116->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var116, 23l); /* goto= on <var116:ReduceAction115>*/
}
{
((void(*)(val* self))(var116->class->vft[COLOR_standard__kernel__Object__init]))(var116); /* init on <var116:ReduceAction115>*/
}
var117 = NEW_nit__parser__ReduceAction116(&type_nit__parser__ReduceAction116);
{
((void(*)(val* self, long p0))(var117->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var117, 23l); /* goto= on <var117:ReduceAction116>*/
}
{
((void(*)(val* self))(var117->class->vft[COLOR_standard__kernel__Object__init]))(var117); /* init on <var117:ReduceAction116>*/
}
var118 = NEW_nit__parser__ReduceAction117(&type_nit__parser__ReduceAction117);
{
((void(*)(val* self, long p0))(var118->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var118, 23l); /* goto= on <var118:ReduceAction117>*/
}
{
((void(*)(val* self))(var118->class->vft[COLOR_standard__kernel__Object__init]))(var118); /* init on <var118:ReduceAction117>*/
}
var119 = NEW_nit__parser__ReduceAction118(&type_nit__parser__ReduceAction118);
{
((void(*)(val* self, long p0))(var119->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var119, 23l); /* goto= on <var119:ReduceAction118>*/
}
{
((void(*)(val* self))(var119->class->vft[COLOR_standard__kernel__Object__init]))(var119); /* init on <var119:ReduceAction118>*/
}
var120 = NEW_nit__parser__ReduceAction119(&type_nit__parser__ReduceAction119);
{
((void(*)(val* self, long p0))(var120->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var120, 23l); /* goto= on <var120:ReduceAction119>*/
}
{
((void(*)(val* self))(var120->class->vft[COLOR_standard__kernel__Object__init]))(var120); /* init on <var120:ReduceAction119>*/
}
var121 = NEW_nit__parser__ReduceAction120(&type_nit__parser__ReduceAction120);
{
((void(*)(val* self, long p0))(var121->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var121, 24l); /* goto= on <var121:ReduceAction120>*/
}
{
((void(*)(val* self))(var121->class->vft[COLOR_standard__kernel__Object__init]))(var121); /* init on <var121:ReduceAction120>*/
}
var122 = NEW_nit__parser__ReduceAction121(&type_nit__parser__ReduceAction121);
{
((void(*)(val* self, long p0))(var122->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var122, 24l); /* goto= on <var122:ReduceAction121>*/
}
{
((void(*)(val* self))(var122->class->vft[COLOR_standard__kernel__Object__init]))(var122); /* init on <var122:ReduceAction121>*/
}
var123 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var123->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var123, 24l); /* goto= on <var123:ReduceAction22>*/
}
{
((void(*)(val* self))(var123->class->vft[COLOR_standard__kernel__Object__init]))(var123); /* init on <var123:ReduceAction22>*/
}
var124 = NEW_nit__parser__ReduceAction123(&type_nit__parser__ReduceAction123);
{
((void(*)(val* self, long p0))(var124->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var124, 25l); /* goto= on <var124:ReduceAction123>*/
}
{
((void(*)(val* self))(var124->class->vft[COLOR_standard__kernel__Object__init]))(var124); /* init on <var124:ReduceAction123>*/
}
var125 = NEW_nit__parser__ReduceAction124(&type_nit__parser__ReduceAction124);
{
((void(*)(val* self, long p0))(var125->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var125, 26l); /* goto= on <var125:ReduceAction124>*/
}
{
((void(*)(val* self))(var125->class->vft[COLOR_standard__kernel__Object__init]))(var125); /* init on <var125:ReduceAction124>*/
}
var126 = NEW_nit__parser__ReduceAction124(&type_nit__parser__ReduceAction124);
{
((void(*)(val* self, long p0))(var126->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var126, 26l); /* goto= on <var126:ReduceAction124>*/
}
{
((void(*)(val* self))(var126->class->vft[COLOR_standard__kernel__Object__init]))(var126); /* init on <var126:ReduceAction124>*/
}
var127 = NEW_nit__parser__ReduceAction126(&type_nit__parser__ReduceAction126);
{
((void(*)(val* self, long p0))(var127->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var127, 26l); /* goto= on <var127:ReduceAction126>*/
}
{
((void(*)(val* self))(var127->class->vft[COLOR_standard__kernel__Object__init]))(var127); /* init on <var127:ReduceAction126>*/
}
var128 = NEW_nit__parser__ReduceAction127(&type_nit__parser__ReduceAction127);
{
((void(*)(val* self, long p0))(var128->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var128, 27l); /* goto= on <var128:ReduceAction127>*/
}
{
((void(*)(val* self))(var128->class->vft[COLOR_standard__kernel__Object__init]))(var128); /* init on <var128:ReduceAction127>*/
}
var129 = NEW_nit__parser__ReduceAction128(&type_nit__parser__ReduceAction128);
{
((void(*)(val* self, long p0))(var129->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var129, 27l); /* goto= on <var129:ReduceAction128>*/
}
{
((void(*)(val* self))(var129->class->vft[COLOR_standard__kernel__Object__init]))(var129); /* init on <var129:ReduceAction128>*/
}
var130 = NEW_nit__parser__ReduceAction129(&type_nit__parser__ReduceAction129);
{
((void(*)(val* self, long p0))(var130->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var130, 27l); /* goto= on <var130:ReduceAction129>*/
}
{
((void(*)(val* self))(var130->class->vft[COLOR_standard__kernel__Object__init]))(var130); /* init on <var130:ReduceAction129>*/
}
var131 = NEW_nit__parser__ReduceAction130(&type_nit__parser__ReduceAction130);
{
((void(*)(val* self, long p0))(var131->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var131, 28l); /* goto= on <var131:ReduceAction130>*/
}
{
((void(*)(val* self))(var131->class->vft[COLOR_standard__kernel__Object__init]))(var131); /* init on <var131:ReduceAction130>*/
}
var132 = NEW_nit__parser__ReduceAction131(&type_nit__parser__ReduceAction131);
{
((void(*)(val* self, long p0))(var132->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var132, 28l); /* goto= on <var132:ReduceAction131>*/
}
{
((void(*)(val* self))(var132->class->vft[COLOR_standard__kernel__Object__init]))(var132); /* init on <var132:ReduceAction131>*/
}
var133 = NEW_nit__parser__ReduceAction132(&type_nit__parser__ReduceAction132);
{
((void(*)(val* self, long p0))(var133->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var133, 28l); /* goto= on <var133:ReduceAction132>*/
}
{
((void(*)(val* self))(var133->class->vft[COLOR_standard__kernel__Object__init]))(var133); /* init on <var133:ReduceAction132>*/
}
var134 = NEW_nit__parser__ReduceAction133(&type_nit__parser__ReduceAction133);
{
((void(*)(val* self, long p0))(var134->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var134, 28l); /* goto= on <var134:ReduceAction133>*/
}
{
((void(*)(val* self))(var134->class->vft[COLOR_standard__kernel__Object__init]))(var134); /* init on <var134:ReduceAction133>*/
}
var135 = NEW_nit__parser__ReduceAction134(&type_nit__parser__ReduceAction134);
{
((void(*)(val* self, long p0))(var135->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var135, 28l); /* goto= on <var135:ReduceAction134>*/
}
{
((void(*)(val* self))(var135->class->vft[COLOR_standard__kernel__Object__init]))(var135); /* init on <var135:ReduceAction134>*/
}
var136 = NEW_nit__parser__ReduceAction135(&type_nit__parser__ReduceAction135);
{
((void(*)(val* self, long p0))(var136->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var136, 28l); /* goto= on <var136:ReduceAction135>*/
}
{
((void(*)(val* self))(var136->class->vft[COLOR_standard__kernel__Object__init]))(var136); /* init on <var136:ReduceAction135>*/
}
var137 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var137->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var137, 29l); /* goto= on <var137:ReduceAction22>*/
}
{
((void(*)(val* self))(var137->class->vft[COLOR_standard__kernel__Object__init]))(var137); /* init on <var137:ReduceAction22>*/
}
var138 = NEW_nit__parser__ReduceAction137(&type_nit__parser__ReduceAction137);
{
((void(*)(val* self, long p0))(var138->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var138, 29l); /* goto= on <var138:ReduceAction137>*/
}
{
((void(*)(val* self))(var138->class->vft[COLOR_standard__kernel__Object__init]))(var138); /* init on <var138:ReduceAction137>*/
}
var139 = NEW_nit__parser__ReduceAction138(&type_nit__parser__ReduceAction138);
{
((void(*)(val* self, long p0))(var139->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var139, 30l); /* goto= on <var139:ReduceAction138>*/
}
{
((void(*)(val* self))(var139->class->vft[COLOR_standard__kernel__Object__init]))(var139); /* init on <var139:ReduceAction138>*/
}
var140 = NEW_nit__parser__ReduceAction139(&type_nit__parser__ReduceAction139);
{
((void(*)(val* self, long p0))(var140->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var140, 31l); /* goto= on <var140:ReduceAction139>*/
}
{
((void(*)(val* self))(var140->class->vft[COLOR_standard__kernel__Object__init]))(var140); /* init on <var140:ReduceAction139>*/
}
var141 = NEW_nit__parser__ReduceAction140(&type_nit__parser__ReduceAction140);
{
((void(*)(val* self, long p0))(var141->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var141, 31l); /* goto= on <var141:ReduceAction140>*/
}
{
((void(*)(val* self))(var141->class->vft[COLOR_standard__kernel__Object__init]))(var141); /* init on <var141:ReduceAction140>*/
}
var142 = NEW_nit__parser__ReduceAction141(&type_nit__parser__ReduceAction141);
{
((void(*)(val* self, long p0))(var142->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var142, 32l); /* goto= on <var142:ReduceAction141>*/
}
{
((void(*)(val* self))(var142->class->vft[COLOR_standard__kernel__Object__init]))(var142); /* init on <var142:ReduceAction141>*/
}
var143 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var143->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var143, 32l); /* goto= on <var143:ReduceAction22>*/
}
{
((void(*)(val* self))(var143->class->vft[COLOR_standard__kernel__Object__init]))(var143); /* init on <var143:ReduceAction22>*/
}
var144 = NEW_nit__parser__ReduceAction143(&type_nit__parser__ReduceAction143);
{
((void(*)(val* self, long p0))(var144->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var144, 33l); /* goto= on <var144:ReduceAction143>*/
}
{
((void(*)(val* self))(var144->class->vft[COLOR_standard__kernel__Object__init]))(var144); /* init on <var144:ReduceAction143>*/
}
var145 = NEW_nit__parser__ReduceAction144(&type_nit__parser__ReduceAction144);
{
((void(*)(val* self, long p0))(var145->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var145, 34l); /* goto= on <var145:ReduceAction144>*/
}
{
((void(*)(val* self))(var145->class->vft[COLOR_standard__kernel__Object__init]))(var145); /* init on <var145:ReduceAction144>*/
}
var146 = NEW_nit__parser__ReduceAction145(&type_nit__parser__ReduceAction145);
{
((void(*)(val* self, long p0))(var146->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var146, 34l); /* goto= on <var146:ReduceAction145>*/
}
{
((void(*)(val* self))(var146->class->vft[COLOR_standard__kernel__Object__init]))(var146); /* init on <var146:ReduceAction145>*/
}
var147 = NEW_nit__parser__ReduceAction146(&type_nit__parser__ReduceAction146);
{
((void(*)(val* self, long p0))(var147->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var147, 34l); /* goto= on <var147:ReduceAction146>*/
}
{
((void(*)(val* self))(var147->class->vft[COLOR_standard__kernel__Object__init]))(var147); /* init on <var147:ReduceAction146>*/
}
var148 = NEW_nit__parser__ReduceAction147(&type_nit__parser__ReduceAction147);
{
((void(*)(val* self, long p0))(var148->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var148, 34l); /* goto= on <var148:ReduceAction147>*/
}
{
((void(*)(val* self))(var148->class->vft[COLOR_standard__kernel__Object__init]))(var148); /* init on <var148:ReduceAction147>*/
}
var149 = NEW_nit__parser__ReduceAction148(&type_nit__parser__ReduceAction148);
{
((void(*)(val* self, long p0))(var149->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var149, 35l); /* goto= on <var149:ReduceAction148>*/
}
{
((void(*)(val* self))(var149->class->vft[COLOR_standard__kernel__Object__init]))(var149); /* init on <var149:ReduceAction148>*/
}
var150 = NEW_nit__parser__ReduceAction149(&type_nit__parser__ReduceAction149);
{
((void(*)(val* self, long p0))(var150->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var150, 35l); /* goto= on <var150:ReduceAction149>*/
}
{
((void(*)(val* self))(var150->class->vft[COLOR_standard__kernel__Object__init]))(var150); /* init on <var150:ReduceAction149>*/
}
var151 = NEW_nit__parser__ReduceAction150(&type_nit__parser__ReduceAction150);
{
((void(*)(val* self, long p0))(var151->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var151, 36l); /* goto= on <var151:ReduceAction150>*/
}
{
((void(*)(val* self))(var151->class->vft[COLOR_standard__kernel__Object__init]))(var151); /* init on <var151:ReduceAction150>*/
}
var152 = NEW_nit__parser__ReduceAction150(&type_nit__parser__ReduceAction150);
{
((void(*)(val* self, long p0))(var152->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var152, 37l); /* goto= on <var152:ReduceAction150>*/
}
{
((void(*)(val* self))(var152->class->vft[COLOR_standard__kernel__Object__init]))(var152); /* init on <var152:ReduceAction150>*/
}
var153 = NEW_nit__parser__ReduceAction150(&type_nit__parser__ReduceAction150);
{
((void(*)(val* self, long p0))(var153->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var153, 38l); /* goto= on <var153:ReduceAction150>*/
}
{
((void(*)(val* self))(var153->class->vft[COLOR_standard__kernel__Object__init]))(var153); /* init on <var153:ReduceAction150>*/
}
var154 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var154->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var154, 38l); /* goto= on <var154:ReduceAction22>*/
}
{
((void(*)(val* self))(var154->class->vft[COLOR_standard__kernel__Object__init]))(var154); /* init on <var154:ReduceAction22>*/
}
var155 = NEW_nit__parser__ReduceAction154(&type_nit__parser__ReduceAction154);
{
((void(*)(val* self, long p0))(var155->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var155, 39l); /* goto= on <var155:ReduceAction154>*/
}
{
((void(*)(val* self))(var155->class->vft[COLOR_standard__kernel__Object__init]))(var155); /* init on <var155:ReduceAction154>*/
}
var156 = NEW_nit__parser__ReduceAction155(&type_nit__parser__ReduceAction155);
{
((void(*)(val* self, long p0))(var156->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var156, 39l); /* goto= on <var156:ReduceAction155>*/
}
{
((void(*)(val* self))(var156->class->vft[COLOR_standard__kernel__Object__init]))(var156); /* init on <var156:ReduceAction155>*/
}
var157 = NEW_nit__parser__ReduceAction156(&type_nit__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var157->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var157, 39l); /* goto= on <var157:ReduceAction156>*/
}
{
((void(*)(val* self))(var157->class->vft[COLOR_standard__kernel__Object__init]))(var157); /* init on <var157:ReduceAction156>*/
}
var158 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var158->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var158, 39l); /* goto= on <var158:ReduceAction157>*/
}
{
((void(*)(val* self))(var158->class->vft[COLOR_standard__kernel__Object__init]))(var158); /* init on <var158:ReduceAction157>*/
}
var159 = NEW_nit__parser__ReduceAction158(&type_nit__parser__ReduceAction158);
{
((void(*)(val* self, long p0))(var159->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var159, 40l); /* goto= on <var159:ReduceAction158>*/
}
{
((void(*)(val* self))(var159->class->vft[COLOR_standard__kernel__Object__init]))(var159); /* init on <var159:ReduceAction158>*/
}
var160 = NEW_nit__parser__ReduceAction159(&type_nit__parser__ReduceAction159);
{
((void(*)(val* self, long p0))(var160->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var160, 40l); /* goto= on <var160:ReduceAction159>*/
}
{
((void(*)(val* self))(var160->class->vft[COLOR_standard__kernel__Object__init]))(var160); /* init on <var160:ReduceAction159>*/
}
var161 = NEW_nit__parser__ReduceAction160(&type_nit__parser__ReduceAction160);
{
((void(*)(val* self, long p0))(var161->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var161, 41l); /* goto= on <var161:ReduceAction160>*/
}
{
((void(*)(val* self))(var161->class->vft[COLOR_standard__kernel__Object__init]))(var161); /* init on <var161:ReduceAction160>*/
}
var162 = NEW_nit__parser__ReduceAction161(&type_nit__parser__ReduceAction161);
{
((void(*)(val* self, long p0))(var162->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var162, 41l); /* goto= on <var162:ReduceAction161>*/
}
{
((void(*)(val* self))(var162->class->vft[COLOR_standard__kernel__Object__init]))(var162); /* init on <var162:ReduceAction161>*/
}
var163 = NEW_nit__parser__ReduceAction162(&type_nit__parser__ReduceAction162);
{
((void(*)(val* self, long p0))(var163->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var163, 42l); /* goto= on <var163:ReduceAction162>*/
}
{
((void(*)(val* self))(var163->class->vft[COLOR_standard__kernel__Object__init]))(var163); /* init on <var163:ReduceAction162>*/
}
var164 = NEW_nit__parser__ReduceAction163(&type_nit__parser__ReduceAction163);
{
((void(*)(val* self, long p0))(var164->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var164, 42l); /* goto= on <var164:ReduceAction163>*/
}
{
((void(*)(val* self))(var164->class->vft[COLOR_standard__kernel__Object__init]))(var164); /* init on <var164:ReduceAction163>*/
}
var165 = NEW_nit__parser__ReduceAction154(&type_nit__parser__ReduceAction154);
{
((void(*)(val* self, long p0))(var165->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var165, 43l); /* goto= on <var165:ReduceAction154>*/
}
{
((void(*)(val* self))(var165->class->vft[COLOR_standard__kernel__Object__init]))(var165); /* init on <var165:ReduceAction154>*/
}
var166 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var166->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var166, 44l); /* goto= on <var166:ReduceAction157>*/
}
{
((void(*)(val* self))(var166->class->vft[COLOR_standard__kernel__Object__init]))(var166); /* init on <var166:ReduceAction157>*/
}
var167 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var167->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var167, 44l); /* goto= on <var167:ReduceAction157>*/
}
{
((void(*)(val* self))(var167->class->vft[COLOR_standard__kernel__Object__init]))(var167); /* init on <var167:ReduceAction157>*/
}
var168 = NEW_nit__parser__ReduceAction167(&type_nit__parser__ReduceAction167);
{
((void(*)(val* self, long p0))(var168->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var168, 44l); /* goto= on <var168:ReduceAction167>*/
}
{
((void(*)(val* self))(var168->class->vft[COLOR_standard__kernel__Object__init]))(var168); /* init on <var168:ReduceAction167>*/
}
var169 = NEW_nit__parser__ReduceAction168(&type_nit__parser__ReduceAction168);
{
((void(*)(val* self, long p0))(var169->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var169, 44l); /* goto= on <var169:ReduceAction168>*/
}
{
((void(*)(val* self))(var169->class->vft[COLOR_standard__kernel__Object__init]))(var169); /* init on <var169:ReduceAction168>*/
}
var170 = NEW_nit__parser__ReduceAction169(&type_nit__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var170->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var170, 44l); /* goto= on <var170:ReduceAction169>*/
}
{
((void(*)(val* self))(var170->class->vft[COLOR_standard__kernel__Object__init]))(var170); /* init on <var170:ReduceAction169>*/
}
var171 = NEW_nit__parser__ReduceAction170(&type_nit__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var171->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var171, 44l); /* goto= on <var171:ReduceAction170>*/
}
{
((void(*)(val* self))(var171->class->vft[COLOR_standard__kernel__Object__init]))(var171); /* init on <var171:ReduceAction170>*/
}
var172 = NEW_nit__parser__ReduceAction171(&type_nit__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var172->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var172, 44l); /* goto= on <var172:ReduceAction171>*/
}
{
((void(*)(val* self))(var172->class->vft[COLOR_standard__kernel__Object__init]))(var172); /* init on <var172:ReduceAction171>*/
}
var173 = NEW_nit__parser__ReduceAction172(&type_nit__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var173->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var173, 44l); /* goto= on <var173:ReduceAction172>*/
}
{
((void(*)(val* self))(var173->class->vft[COLOR_standard__kernel__Object__init]))(var173); /* init on <var173:ReduceAction172>*/
}
var174 = NEW_nit__parser__ReduceAction173(&type_nit__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var174->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var174, 44l); /* goto= on <var174:ReduceAction173>*/
}
{
((void(*)(val* self))(var174->class->vft[COLOR_standard__kernel__Object__init]))(var174); /* init on <var174:ReduceAction173>*/
}
var175 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var175->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var175, 44l); /* goto= on <var175:ReduceAction157>*/
}
{
((void(*)(val* self))(var175->class->vft[COLOR_standard__kernel__Object__init]))(var175); /* init on <var175:ReduceAction157>*/
}
var176 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var176->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var176, 44l); /* goto= on <var176:ReduceAction157>*/
}
{
((void(*)(val* self))(var176->class->vft[COLOR_standard__kernel__Object__init]))(var176); /* init on <var176:ReduceAction157>*/
}
var177 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var177->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var177, 44l); /* goto= on <var177:ReduceAction157>*/
}
{
((void(*)(val* self))(var177->class->vft[COLOR_standard__kernel__Object__init]))(var177); /* init on <var177:ReduceAction157>*/
}
var178 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var178->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var178, 44l); /* goto= on <var178:ReduceAction157>*/
}
{
((void(*)(val* self))(var178->class->vft[COLOR_standard__kernel__Object__init]))(var178); /* init on <var178:ReduceAction157>*/
}
var179 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var179->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var179, 44l); /* goto= on <var179:ReduceAction157>*/
}
{
((void(*)(val* self))(var179->class->vft[COLOR_standard__kernel__Object__init]))(var179); /* init on <var179:ReduceAction157>*/
}
var180 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var180->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var180, 44l); /* goto= on <var180:ReduceAction157>*/
}
{
((void(*)(val* self))(var180->class->vft[COLOR_standard__kernel__Object__init]))(var180); /* init on <var180:ReduceAction157>*/
}
var181 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var181->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var181, 44l); /* goto= on <var181:ReduceAction157>*/
}
{
((void(*)(val* self))(var181->class->vft[COLOR_standard__kernel__Object__init]))(var181); /* init on <var181:ReduceAction157>*/
}
var182 = NEW_nit__parser__ReduceAction181(&type_nit__parser__ReduceAction181);
{
((void(*)(val* self, long p0))(var182->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var182, 44l); /* goto= on <var182:ReduceAction181>*/
}
{
((void(*)(val* self))(var182->class->vft[COLOR_standard__kernel__Object__init]))(var182); /* init on <var182:ReduceAction181>*/
}
var183 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var183->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var183, 44l); /* goto= on <var183:ReduceAction182>*/
}
{
((void(*)(val* self))(var183->class->vft[COLOR_standard__kernel__Object__init]))(var183); /* init on <var183:ReduceAction182>*/
}
var184 = NEW_nit__parser__ReduceAction183(&type_nit__parser__ReduceAction183);
{
((void(*)(val* self, long p0))(var184->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var184, 44l); /* goto= on <var184:ReduceAction183>*/
}
{
((void(*)(val* self))(var184->class->vft[COLOR_standard__kernel__Object__init]))(var184); /* init on <var184:ReduceAction183>*/
}
var185 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var185->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var185, 44l); /* goto= on <var185:ReduceAction182>*/
}
{
((void(*)(val* self))(var185->class->vft[COLOR_standard__kernel__Object__init]))(var185); /* init on <var185:ReduceAction182>*/
}
var186 = NEW_nit__parser__ReduceAction185(&type_nit__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var186->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var186, 44l); /* goto= on <var186:ReduceAction185>*/
}
{
((void(*)(val* self))(var186->class->vft[COLOR_standard__kernel__Object__init]))(var186); /* init on <var186:ReduceAction185>*/
}
var187 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var187->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var187, 44l); /* goto= on <var187:ReduceAction186>*/
}
{
((void(*)(val* self))(var187->class->vft[COLOR_standard__kernel__Object__init]))(var187); /* init on <var187:ReduceAction186>*/
}
var188 = NEW_nit__parser__ReduceAction187(&type_nit__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var188->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var188, 44l); /* goto= on <var188:ReduceAction187>*/
}
{
((void(*)(val* self))(var188->class->vft[COLOR_standard__kernel__Object__init]))(var188); /* init on <var188:ReduceAction187>*/
}
var189 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var189->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var189, 44l); /* goto= on <var189:ReduceAction186>*/
}
{
((void(*)(val* self))(var189->class->vft[COLOR_standard__kernel__Object__init]))(var189); /* init on <var189:ReduceAction186>*/
}
var190 = NEW_nit__parser__ReduceAction189(&type_nit__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var190->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var190, 44l); /* goto= on <var190:ReduceAction189>*/
}
{
((void(*)(val* self))(var190->class->vft[COLOR_standard__kernel__Object__init]))(var190); /* init on <var190:ReduceAction189>*/
}
var191 = NEW_nit__parser__ReduceAction190(&type_nit__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var191->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var191, 44l); /* goto= on <var191:ReduceAction190>*/
}
{
((void(*)(val* self))(var191->class->vft[COLOR_standard__kernel__Object__init]))(var191); /* init on <var191:ReduceAction190>*/
}
var192 = NEW_nit__parser__ReduceAction191(&type_nit__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var192->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var192, 44l); /* goto= on <var192:ReduceAction191>*/
}
{
((void(*)(val* self))(var192->class->vft[COLOR_standard__kernel__Object__init]))(var192); /* init on <var192:ReduceAction191>*/
}
var193 = NEW_nit__parser__ReduceAction192(&type_nit__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var193->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var193, 44l); /* goto= on <var193:ReduceAction192>*/
}
{
((void(*)(val* self))(var193->class->vft[COLOR_standard__kernel__Object__init]))(var193); /* init on <var193:ReduceAction192>*/
}
var194 = NEW_nit__parser__ReduceAction193(&type_nit__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var194->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var194, 44l); /* goto= on <var194:ReduceAction193>*/
}
{
((void(*)(val* self))(var194->class->vft[COLOR_standard__kernel__Object__init]))(var194); /* init on <var194:ReduceAction193>*/
}
var195 = NEW_nit__parser__ReduceAction192(&type_nit__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var195->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var195, 44l); /* goto= on <var195:ReduceAction192>*/
}
{
((void(*)(val* self))(var195->class->vft[COLOR_standard__kernel__Object__init]))(var195); /* init on <var195:ReduceAction192>*/
}
var196 = NEW_nit__parser__ReduceAction195(&type_nit__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var196->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var196, 44l); /* goto= on <var196:ReduceAction195>*/
}
{
((void(*)(val* self))(var196->class->vft[COLOR_standard__kernel__Object__init]))(var196); /* init on <var196:ReduceAction195>*/
}
var197 = NEW_nit__parser__ReduceAction196(&type_nit__parser__ReduceAction196);
{
((void(*)(val* self, long p0))(var197->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var197, 44l); /* goto= on <var197:ReduceAction196>*/
}
{
((void(*)(val* self))(var197->class->vft[COLOR_standard__kernel__Object__init]))(var197); /* init on <var197:ReduceAction196>*/
}
var198 = NEW_nit__parser__ReduceAction195(&type_nit__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var198->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var198, 44l); /* goto= on <var198:ReduceAction195>*/
}
{
((void(*)(val* self))(var198->class->vft[COLOR_standard__kernel__Object__init]))(var198); /* init on <var198:ReduceAction195>*/
}
var199 = NEW_nit__parser__ReduceAction198(&type_nit__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var199->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var199, 44l); /* goto= on <var199:ReduceAction198>*/
}
{
((void(*)(val* self))(var199->class->vft[COLOR_standard__kernel__Object__init]))(var199); /* init on <var199:ReduceAction198>*/
}
var200 = NEW_nit__parser__ReduceAction199(&type_nit__parser__ReduceAction199);
{
((void(*)(val* self, long p0))(var200->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var200, 45l); /* goto= on <var200:ReduceAction199>*/
}
{
((void(*)(val* self))(var200->class->vft[COLOR_standard__kernel__Object__init]))(var200); /* init on <var200:ReduceAction199>*/
}
var201 = NEW_nit__parser__ReduceAction200(&type_nit__parser__ReduceAction200);
{
((void(*)(val* self, long p0))(var201->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var201, 45l); /* goto= on <var201:ReduceAction200>*/
}
{
((void(*)(val* self))(var201->class->vft[COLOR_standard__kernel__Object__init]))(var201); /* init on <var201:ReduceAction200>*/
}
var202 = NEW_nit__parser__ReduceAction201(&type_nit__parser__ReduceAction201);
{
((void(*)(val* self, long p0))(var202->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var202, 46l); /* goto= on <var202:ReduceAction201>*/
}
{
((void(*)(val* self))(var202->class->vft[COLOR_standard__kernel__Object__init]))(var202); /* init on <var202:ReduceAction201>*/
}
var203 = NEW_nit__parser__ReduceAction202(&type_nit__parser__ReduceAction202);
{
((void(*)(val* self, long p0))(var203->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var203, 46l); /* goto= on <var203:ReduceAction202>*/
}
{
((void(*)(val* self))(var203->class->vft[COLOR_standard__kernel__Object__init]))(var203); /* init on <var203:ReduceAction202>*/
}
var204 = NEW_nit__parser__ReduceAction203(&type_nit__parser__ReduceAction203);
{
((void(*)(val* self, long p0))(var204->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var204, 46l); /* goto= on <var204:ReduceAction203>*/
}
{
((void(*)(val* self))(var204->class->vft[COLOR_standard__kernel__Object__init]))(var204); /* init on <var204:ReduceAction203>*/
}
var205 = NEW_nit__parser__ReduceAction204(&type_nit__parser__ReduceAction204);
{
((void(*)(val* self, long p0))(var205->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var205, 46l); /* goto= on <var205:ReduceAction204>*/
}
{
((void(*)(val* self))(var205->class->vft[COLOR_standard__kernel__Object__init]))(var205); /* init on <var205:ReduceAction204>*/
}
var206 = NEW_nit__parser__ReduceAction205(&type_nit__parser__ReduceAction205);
{
((void(*)(val* self, long p0))(var206->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var206, 47l); /* goto= on <var206:ReduceAction205>*/
}
{
((void(*)(val* self))(var206->class->vft[COLOR_standard__kernel__Object__init]))(var206); /* init on <var206:ReduceAction205>*/
}
var207 = NEW_nit__parser__ReduceAction206(&type_nit__parser__ReduceAction206);
{
((void(*)(val* self, long p0))(var207->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var207, 47l); /* goto= on <var207:ReduceAction206>*/
}
{
((void(*)(val* self))(var207->class->vft[COLOR_standard__kernel__Object__init]))(var207); /* init on <var207:ReduceAction206>*/
}
var208 = NEW_nit__parser__ReduceAction207(&type_nit__parser__ReduceAction207);
{
((void(*)(val* self, long p0))(var208->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var208, 47l); /* goto= on <var208:ReduceAction207>*/
}
{
((void(*)(val* self))(var208->class->vft[COLOR_standard__kernel__Object__init]))(var208); /* init on <var208:ReduceAction207>*/
}
var209 = NEW_nit__parser__ReduceAction208(&type_nit__parser__ReduceAction208);
{
((void(*)(val* self, long p0))(var209->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var209, 47l); /* goto= on <var209:ReduceAction208>*/
}
{
((void(*)(val* self))(var209->class->vft[COLOR_standard__kernel__Object__init]))(var209); /* init on <var209:ReduceAction208>*/
}
var210 = NEW_nit__parser__ReduceAction209(&type_nit__parser__ReduceAction209);
{
((void(*)(val* self, long p0))(var210->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var210, 47l); /* goto= on <var210:ReduceAction209>*/
}
{
((void(*)(val* self))(var210->class->vft[COLOR_standard__kernel__Object__init]))(var210); /* init on <var210:ReduceAction209>*/
}
var211 = NEW_nit__parser__ReduceAction210(&type_nit__parser__ReduceAction210);
{
((void(*)(val* self, long p0))(var211->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var211, 47l); /* goto= on <var211:ReduceAction210>*/
}
{
((void(*)(val* self))(var211->class->vft[COLOR_standard__kernel__Object__init]))(var211); /* init on <var211:ReduceAction210>*/
}
var212 = NEW_nit__parser__ReduceAction211(&type_nit__parser__ReduceAction211);
{
((void(*)(val* self, long p0))(var212->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var212, 47l); /* goto= on <var212:ReduceAction211>*/
}
{
((void(*)(val* self))(var212->class->vft[COLOR_standard__kernel__Object__init]))(var212); /* init on <var212:ReduceAction211>*/
}
var213 = NEW_nit__parser__ReduceAction212(&type_nit__parser__ReduceAction212);
{
((void(*)(val* self, long p0))(var213->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var213, 47l); /* goto= on <var213:ReduceAction212>*/
}
{
((void(*)(val* self))(var213->class->vft[COLOR_standard__kernel__Object__init]))(var213); /* init on <var213:ReduceAction212>*/
}
var214 = NEW_nit__parser__ReduceAction209(&type_nit__parser__ReduceAction209);
{
((void(*)(val* self, long p0))(var214->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var214, 47l); /* goto= on <var214:ReduceAction209>*/
}
{
((void(*)(val* self))(var214->class->vft[COLOR_standard__kernel__Object__init]))(var214); /* init on <var214:ReduceAction209>*/
}
var215 = NEW_nit__parser__ReduceAction210(&type_nit__parser__ReduceAction210);
{
((void(*)(val* self, long p0))(var215->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var215, 47l); /* goto= on <var215:ReduceAction210>*/
}
{
((void(*)(val* self))(var215->class->vft[COLOR_standard__kernel__Object__init]))(var215); /* init on <var215:ReduceAction210>*/
}
var216 = NEW_nit__parser__ReduceAction215(&type_nit__parser__ReduceAction215);
{
((void(*)(val* self, long p0))(var216->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var216, 47l); /* goto= on <var216:ReduceAction215>*/
}
{
((void(*)(val* self))(var216->class->vft[COLOR_standard__kernel__Object__init]))(var216); /* init on <var216:ReduceAction215>*/
}
var217 = NEW_nit__parser__ReduceAction216(&type_nit__parser__ReduceAction216);
{
((void(*)(val* self, long p0))(var217->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var217, 47l); /* goto= on <var217:ReduceAction216>*/
}
{
((void(*)(val* self))(var217->class->vft[COLOR_standard__kernel__Object__init]))(var217); /* init on <var217:ReduceAction216>*/
}
var218 = NEW_nit__parser__ReduceAction217(&type_nit__parser__ReduceAction217);
{
((void(*)(val* self, long p0))(var218->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var218, 47l); /* goto= on <var218:ReduceAction217>*/
}
{
((void(*)(val* self))(var218->class->vft[COLOR_standard__kernel__Object__init]))(var218); /* init on <var218:ReduceAction217>*/
}
var219 = NEW_nit__parser__ReduceAction218(&type_nit__parser__ReduceAction218);
{
((void(*)(val* self, long p0))(var219->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var219, 47l); /* goto= on <var219:ReduceAction218>*/
}
{
((void(*)(val* self))(var219->class->vft[COLOR_standard__kernel__Object__init]))(var219); /* init on <var219:ReduceAction218>*/
}
var220 = NEW_nit__parser__ReduceAction219(&type_nit__parser__ReduceAction219);
{
((void(*)(val* self, long p0))(var220->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var220, 47l); /* goto= on <var220:ReduceAction219>*/
}
{
((void(*)(val* self))(var220->class->vft[COLOR_standard__kernel__Object__init]))(var220); /* init on <var220:ReduceAction219>*/
}
var221 = NEW_nit__parser__ReduceAction220(&type_nit__parser__ReduceAction220);
{
((void(*)(val* self, long p0))(var221->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var221, 47l); /* goto= on <var221:ReduceAction220>*/
}
{
((void(*)(val* self))(var221->class->vft[COLOR_standard__kernel__Object__init]))(var221); /* init on <var221:ReduceAction220>*/
}
var222 = NEW_nit__parser__ReduceAction217(&type_nit__parser__ReduceAction217);
{
((void(*)(val* self, long p0))(var222->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var222, 47l); /* goto= on <var222:ReduceAction217>*/
}
{
((void(*)(val* self))(var222->class->vft[COLOR_standard__kernel__Object__init]))(var222); /* init on <var222:ReduceAction217>*/
}
var223 = NEW_nit__parser__ReduceAction218(&type_nit__parser__ReduceAction218);
{
((void(*)(val* self, long p0))(var223->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var223, 47l); /* goto= on <var223:ReduceAction218>*/
}
{
((void(*)(val* self))(var223->class->vft[COLOR_standard__kernel__Object__init]))(var223); /* init on <var223:ReduceAction218>*/
}
var224 = NEW_nit__parser__ReduceAction223(&type_nit__parser__ReduceAction223);
{
((void(*)(val* self, long p0))(var224->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var224, 47l); /* goto= on <var224:ReduceAction223>*/
}
{
((void(*)(val* self))(var224->class->vft[COLOR_standard__kernel__Object__init]))(var224); /* init on <var224:ReduceAction223>*/
}
var225 = NEW_nit__parser__ReduceAction224(&type_nit__parser__ReduceAction224);
{
((void(*)(val* self, long p0))(var225->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var225, 47l); /* goto= on <var225:ReduceAction224>*/
}
{
((void(*)(val* self))(var225->class->vft[COLOR_standard__kernel__Object__init]))(var225); /* init on <var225:ReduceAction224>*/
}
var226 = NEW_nit__parser__ReduceAction225(&type_nit__parser__ReduceAction225);
{
((void(*)(val* self, long p0))(var226->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var226, 47l); /* goto= on <var226:ReduceAction225>*/
}
{
((void(*)(val* self))(var226->class->vft[COLOR_standard__kernel__Object__init]))(var226); /* init on <var226:ReduceAction225>*/
}
var227 = NEW_nit__parser__ReduceAction226(&type_nit__parser__ReduceAction226);
{
((void(*)(val* self, long p0))(var227->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var227, 47l); /* goto= on <var227:ReduceAction226>*/
}
{
((void(*)(val* self))(var227->class->vft[COLOR_standard__kernel__Object__init]))(var227); /* init on <var227:ReduceAction226>*/
}
var228 = NEW_nit__parser__ReduceAction227(&type_nit__parser__ReduceAction227);
{
((void(*)(val* self, long p0))(var228->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var228, 47l); /* goto= on <var228:ReduceAction227>*/
}
{
((void(*)(val* self))(var228->class->vft[COLOR_standard__kernel__Object__init]))(var228); /* init on <var228:ReduceAction227>*/
}
var229 = NEW_nit__parser__ReduceAction228(&type_nit__parser__ReduceAction228);
{
((void(*)(val* self, long p0))(var229->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var229, 47l); /* goto= on <var229:ReduceAction228>*/
}
{
((void(*)(val* self))(var229->class->vft[COLOR_standard__kernel__Object__init]))(var229); /* init on <var229:ReduceAction228>*/
}
var230 = NEW_nit__parser__ReduceAction229(&type_nit__parser__ReduceAction229);
{
((void(*)(val* self, long p0))(var230->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var230, 47l); /* goto= on <var230:ReduceAction229>*/
}
{
((void(*)(val* self))(var230->class->vft[COLOR_standard__kernel__Object__init]))(var230); /* init on <var230:ReduceAction229>*/
}
var231 = NEW_nit__parser__ReduceAction230(&type_nit__parser__ReduceAction230);
{
((void(*)(val* self, long p0))(var231->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var231, 47l); /* goto= on <var231:ReduceAction230>*/
}
{
((void(*)(val* self))(var231->class->vft[COLOR_standard__kernel__Object__init]))(var231); /* init on <var231:ReduceAction230>*/
}
var232 = NEW_nit__parser__ReduceAction231(&type_nit__parser__ReduceAction231);
{
((void(*)(val* self, long p0))(var232->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var232, 47l); /* goto= on <var232:ReduceAction231>*/
}
{
((void(*)(val* self))(var232->class->vft[COLOR_standard__kernel__Object__init]))(var232); /* init on <var232:ReduceAction231>*/
}
var233 = NEW_nit__parser__ReduceAction228(&type_nit__parser__ReduceAction228);
{
((void(*)(val* self, long p0))(var233->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var233, 47l); /* goto= on <var233:ReduceAction228>*/
}
{
((void(*)(val* self))(var233->class->vft[COLOR_standard__kernel__Object__init]))(var233); /* init on <var233:ReduceAction228>*/
}
var234 = NEW_nit__parser__ReduceAction229(&type_nit__parser__ReduceAction229);
{
((void(*)(val* self, long p0))(var234->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var234, 47l); /* goto= on <var234:ReduceAction229>*/
}
{
((void(*)(val* self))(var234->class->vft[COLOR_standard__kernel__Object__init]))(var234); /* init on <var234:ReduceAction229>*/
}
var235 = NEW_nit__parser__ReduceAction234(&type_nit__parser__ReduceAction234);
{
((void(*)(val* self, long p0))(var235->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var235, 47l); /* goto= on <var235:ReduceAction234>*/
}
{
((void(*)(val* self))(var235->class->vft[COLOR_standard__kernel__Object__init]))(var235); /* init on <var235:ReduceAction234>*/
}
var236 = NEW_nit__parser__ReduceAction235(&type_nit__parser__ReduceAction235);
{
((void(*)(val* self, long p0))(var236->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var236, 47l); /* goto= on <var236:ReduceAction235>*/
}
{
((void(*)(val* self))(var236->class->vft[COLOR_standard__kernel__Object__init]))(var236); /* init on <var236:ReduceAction235>*/
}
var237 = NEW_nit__parser__ReduceAction236(&type_nit__parser__ReduceAction236);
{
((void(*)(val* self, long p0))(var237->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var237, 47l); /* goto= on <var237:ReduceAction236>*/
}
{
((void(*)(val* self))(var237->class->vft[COLOR_standard__kernel__Object__init]))(var237); /* init on <var237:ReduceAction236>*/
}
var238 = NEW_nit__parser__ReduceAction237(&type_nit__parser__ReduceAction237);
{
((void(*)(val* self, long p0))(var238->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var238, 47l); /* goto= on <var238:ReduceAction237>*/
}
{
((void(*)(val* self))(var238->class->vft[COLOR_standard__kernel__Object__init]))(var238); /* init on <var238:ReduceAction237>*/
}
var239 = NEW_nit__parser__ReduceAction238(&type_nit__parser__ReduceAction238);
{
((void(*)(val* self, long p0))(var239->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var239, 47l); /* goto= on <var239:ReduceAction238>*/
}
{
((void(*)(val* self))(var239->class->vft[COLOR_standard__kernel__Object__init]))(var239); /* init on <var239:ReduceAction238>*/
}
var240 = NEW_nit__parser__ReduceAction239(&type_nit__parser__ReduceAction239);
{
((void(*)(val* self, long p0))(var240->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var240, 47l); /* goto= on <var240:ReduceAction239>*/
}
{
((void(*)(val* self))(var240->class->vft[COLOR_standard__kernel__Object__init]))(var240); /* init on <var240:ReduceAction239>*/
}
var241 = NEW_nit__parser__ReduceAction236(&type_nit__parser__ReduceAction236);
{
((void(*)(val* self, long p0))(var241->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var241, 47l); /* goto= on <var241:ReduceAction236>*/
}
{
((void(*)(val* self))(var241->class->vft[COLOR_standard__kernel__Object__init]))(var241); /* init on <var241:ReduceAction236>*/
}
var242 = NEW_nit__parser__ReduceAction237(&type_nit__parser__ReduceAction237);
{
((void(*)(val* self, long p0))(var242->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var242, 47l); /* goto= on <var242:ReduceAction237>*/
}
{
((void(*)(val* self))(var242->class->vft[COLOR_standard__kernel__Object__init]))(var242); /* init on <var242:ReduceAction237>*/
}
var243 = NEW_nit__parser__ReduceAction242(&type_nit__parser__ReduceAction242);
{
((void(*)(val* self, long p0))(var243->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var243, 47l); /* goto= on <var243:ReduceAction242>*/
}
{
((void(*)(val* self))(var243->class->vft[COLOR_standard__kernel__Object__init]))(var243); /* init on <var243:ReduceAction242>*/
}
var244 = NEW_nit__parser__ReduceAction243(&type_nit__parser__ReduceAction243);
{
((void(*)(val* self, long p0))(var244->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var244, 48l); /* goto= on <var244:ReduceAction243>*/
}
{
((void(*)(val* self))(var244->class->vft[COLOR_standard__kernel__Object__init]))(var244); /* init on <var244:ReduceAction243>*/
}
var245 = NEW_nit__parser__ReduceAction244(&type_nit__parser__ReduceAction244);
{
((void(*)(val* self, long p0))(var245->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var245, 48l); /* goto= on <var245:ReduceAction244>*/
}
{
((void(*)(val* self))(var245->class->vft[COLOR_standard__kernel__Object__init]))(var245); /* init on <var245:ReduceAction244>*/
}
var246 = NEW_nit__parser__ReduceAction245(&type_nit__parser__ReduceAction245);
{
((void(*)(val* self, long p0))(var246->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var246, 48l); /* goto= on <var246:ReduceAction245>*/
}
{
((void(*)(val* self))(var246->class->vft[COLOR_standard__kernel__Object__init]))(var246); /* init on <var246:ReduceAction245>*/
}
var247 = NEW_nit__parser__ReduceAction246(&type_nit__parser__ReduceAction246);
{
((void(*)(val* self, long p0))(var247->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var247, 48l); /* goto= on <var247:ReduceAction246>*/
}
{
((void(*)(val* self))(var247->class->vft[COLOR_standard__kernel__Object__init]))(var247); /* init on <var247:ReduceAction246>*/
}
var248 = NEW_nit__parser__ReduceAction247(&type_nit__parser__ReduceAction247);
{
((void(*)(val* self, long p0))(var248->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var248, 48l); /* goto= on <var248:ReduceAction247>*/
}
{
((void(*)(val* self))(var248->class->vft[COLOR_standard__kernel__Object__init]))(var248); /* init on <var248:ReduceAction247>*/
}
var249 = NEW_nit__parser__ReduceAction248(&type_nit__parser__ReduceAction248);
{
((void(*)(val* self, long p0))(var249->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var249, 48l); /* goto= on <var249:ReduceAction248>*/
}
{
((void(*)(val* self))(var249->class->vft[COLOR_standard__kernel__Object__init]))(var249); /* init on <var249:ReduceAction248>*/
}
var250 = NEW_nit__parser__ReduceAction249(&type_nit__parser__ReduceAction249);
{
((void(*)(val* self, long p0))(var250->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var250, 48l); /* goto= on <var250:ReduceAction249>*/
}
{
((void(*)(val* self))(var250->class->vft[COLOR_standard__kernel__Object__init]))(var250); /* init on <var250:ReduceAction249>*/
}
var251 = NEW_nit__parser__ReduceAction250(&type_nit__parser__ReduceAction250);
{
((void(*)(val* self, long p0))(var251->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var251, 48l); /* goto= on <var251:ReduceAction250>*/
}
{
((void(*)(val* self))(var251->class->vft[COLOR_standard__kernel__Object__init]))(var251); /* init on <var251:ReduceAction250>*/
}
var252 = NEW_nit__parser__ReduceAction251(&type_nit__parser__ReduceAction251);
{
((void(*)(val* self, long p0))(var252->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var252, 48l); /* goto= on <var252:ReduceAction251>*/
}
{
((void(*)(val* self))(var252->class->vft[COLOR_standard__kernel__Object__init]))(var252); /* init on <var252:ReduceAction251>*/
}
var253 = NEW_nit__parser__ReduceAction252(&type_nit__parser__ReduceAction252);
{
((void(*)(val* self, long p0))(var253->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var253, 48l); /* goto= on <var253:ReduceAction252>*/
}
{
((void(*)(val* self))(var253->class->vft[COLOR_standard__kernel__Object__init]))(var253); /* init on <var253:ReduceAction252>*/
}
var254 = NEW_nit__parser__ReduceAction253(&type_nit__parser__ReduceAction253);
{
((void(*)(val* self, long p0))(var254->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var254, 48l); /* goto= on <var254:ReduceAction253>*/
}
{
((void(*)(val* self))(var254->class->vft[COLOR_standard__kernel__Object__init]))(var254); /* init on <var254:ReduceAction253>*/
}
var255 = NEW_nit__parser__ReduceAction254(&type_nit__parser__ReduceAction254);
{
((void(*)(val* self, long p0))(var255->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var255, 49l); /* goto= on <var255:ReduceAction254>*/
}
{
((void(*)(val* self))(var255->class->vft[COLOR_standard__kernel__Object__init]))(var255); /* init on <var255:ReduceAction254>*/
}
var256 = NEW_nit__parser__ReduceAction255(&type_nit__parser__ReduceAction255);
{
((void(*)(val* self, long p0))(var256->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var256, 49l); /* goto= on <var256:ReduceAction255>*/
}
{
((void(*)(val* self))(var256->class->vft[COLOR_standard__kernel__Object__init]))(var256); /* init on <var256:ReduceAction255>*/
}
var257 = NEW_nit__parser__ReduceAction256(&type_nit__parser__ReduceAction256);
{
((void(*)(val* self, long p0))(var257->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var257, 50l); /* goto= on <var257:ReduceAction256>*/
}
{
((void(*)(val* self))(var257->class->vft[COLOR_standard__kernel__Object__init]))(var257); /* init on <var257:ReduceAction256>*/
}
var258 = NEW_nit__parser__ReduceAction257(&type_nit__parser__ReduceAction257);
{
((void(*)(val* self, long p0))(var258->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var258, 50l); /* goto= on <var258:ReduceAction257>*/
}
{
((void(*)(val* self))(var258->class->vft[COLOR_standard__kernel__Object__init]))(var258); /* init on <var258:ReduceAction257>*/
}
var259 = NEW_nit__parser__ReduceAction258(&type_nit__parser__ReduceAction258);
{
((void(*)(val* self, long p0))(var259->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var259, 50l); /* goto= on <var259:ReduceAction258>*/
}
{
((void(*)(val* self))(var259->class->vft[COLOR_standard__kernel__Object__init]))(var259); /* init on <var259:ReduceAction258>*/
}
var260 = NEW_nit__parser__ReduceAction259(&type_nit__parser__ReduceAction259);
{
((void(*)(val* self, long p0))(var260->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var260, 50l); /* goto= on <var260:ReduceAction259>*/
}
{
((void(*)(val* self))(var260->class->vft[COLOR_standard__kernel__Object__init]))(var260); /* init on <var260:ReduceAction259>*/
}
var261 = NEW_nit__parser__ReduceAction260(&type_nit__parser__ReduceAction260);
{
((void(*)(val* self, long p0))(var261->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var261, 50l); /* goto= on <var261:ReduceAction260>*/
}
{
((void(*)(val* self))(var261->class->vft[COLOR_standard__kernel__Object__init]))(var261); /* init on <var261:ReduceAction260>*/
}
var262 = NEW_nit__parser__ReduceAction154(&type_nit__parser__ReduceAction154);
{
((void(*)(val* self, long p0))(var262->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var262, 51l); /* goto= on <var262:ReduceAction154>*/
}
{
((void(*)(val* self))(var262->class->vft[COLOR_standard__kernel__Object__init]))(var262); /* init on <var262:ReduceAction154>*/
}
var263 = NEW_nit__parser__ReduceAction156(&type_nit__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var263->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var263, 51l); /* goto= on <var263:ReduceAction156>*/
}
{
((void(*)(val* self))(var263->class->vft[COLOR_standard__kernel__Object__init]))(var263); /* init on <var263:ReduceAction156>*/
}
var264 = NEW_nit__parser__ReduceAction263(&type_nit__parser__ReduceAction263);
{
((void(*)(val* self, long p0))(var264->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var264, 52l); /* goto= on <var264:ReduceAction263>*/
}
{
((void(*)(val* self))(var264->class->vft[COLOR_standard__kernel__Object__init]))(var264); /* init on <var264:ReduceAction263>*/
}
var265 = NEW_nit__parser__ReduceAction264(&type_nit__parser__ReduceAction264);
{
((void(*)(val* self, long p0))(var265->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var265, 52l); /* goto= on <var265:ReduceAction264>*/
}
{
((void(*)(val* self))(var265->class->vft[COLOR_standard__kernel__Object__init]))(var265); /* init on <var265:ReduceAction264>*/
}
var266 = NEW_nit__parser__ReduceAction265(&type_nit__parser__ReduceAction265);
{
((void(*)(val* self, long p0))(var266->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var266, 53l); /* goto= on <var266:ReduceAction265>*/
}
{
((void(*)(val* self))(var266->class->vft[COLOR_standard__kernel__Object__init]))(var266); /* init on <var266:ReduceAction265>*/
}
var267 = NEW_nit__parser__ReduceAction266(&type_nit__parser__ReduceAction266);
{
((void(*)(val* self, long p0))(var267->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var267, 53l); /* goto= on <var267:ReduceAction266>*/
}
{
((void(*)(val* self))(var267->class->vft[COLOR_standard__kernel__Object__init]))(var267); /* init on <var267:ReduceAction266>*/
}
var268 = NEW_nit__parser__ReduceAction267(&type_nit__parser__ReduceAction267);
{
((void(*)(val* self, long p0))(var268->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var268, 54l); /* goto= on <var268:ReduceAction267>*/
}
{
((void(*)(val* self))(var268->class->vft[COLOR_standard__kernel__Object__init]))(var268); /* init on <var268:ReduceAction267>*/
}
var269 = NEW_nit__parser__ReduceAction268(&type_nit__parser__ReduceAction268);
{
((void(*)(val* self, long p0))(var269->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var269, 54l); /* goto= on <var269:ReduceAction268>*/
}
{
((void(*)(val* self))(var269->class->vft[COLOR_standard__kernel__Object__init]))(var269); /* init on <var269:ReduceAction268>*/
}
var270 = NEW_nit__parser__ReduceAction269(&type_nit__parser__ReduceAction269);
{
((void(*)(val* self, long p0))(var270->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var270, 55l); /* goto= on <var270:ReduceAction269>*/
}
{
((void(*)(val* self))(var270->class->vft[COLOR_standard__kernel__Object__init]))(var270); /* init on <var270:ReduceAction269>*/
}
var271 = NEW_nit__parser__ReduceAction270(&type_nit__parser__ReduceAction270);
{
((void(*)(val* self, long p0))(var271->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var271, 55l); /* goto= on <var271:ReduceAction270>*/
}
{
((void(*)(val* self))(var271->class->vft[COLOR_standard__kernel__Object__init]))(var271); /* init on <var271:ReduceAction270>*/
}
var272 = NEW_nit__parser__ReduceAction271(&type_nit__parser__ReduceAction271);
{
((void(*)(val* self, long p0))(var272->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var272, 56l); /* goto= on <var272:ReduceAction271>*/
}
{
((void(*)(val* self))(var272->class->vft[COLOR_standard__kernel__Object__init]))(var272); /* init on <var272:ReduceAction271>*/
}
var273 = NEW_nit__parser__ReduceAction272(&type_nit__parser__ReduceAction272);
{
((void(*)(val* self, long p0))(var273->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var273, 56l); /* goto= on <var273:ReduceAction272>*/
}
{
((void(*)(val* self))(var273->class->vft[COLOR_standard__kernel__Object__init]))(var273); /* init on <var273:ReduceAction272>*/
}
var274 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var274->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var274, 56l); /* goto= on <var274:ReduceAction157>*/
}
{
((void(*)(val* self))(var274->class->vft[COLOR_standard__kernel__Object__init]))(var274); /* init on <var274:ReduceAction157>*/
}
var275 = NEW_nit__parser__ReduceAction274(&type_nit__parser__ReduceAction274);
{
((void(*)(val* self, long p0))(var275->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var275, 57l); /* goto= on <var275:ReduceAction274>*/
}
{
((void(*)(val* self))(var275->class->vft[COLOR_standard__kernel__Object__init]))(var275); /* init on <var275:ReduceAction274>*/
}
var276 = NEW_nit__parser__ReduceAction275(&type_nit__parser__ReduceAction275);
{
((void(*)(val* self, long p0))(var276->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var276, 57l); /* goto= on <var276:ReduceAction275>*/
}
{
((void(*)(val* self))(var276->class->vft[COLOR_standard__kernel__Object__init]))(var276); /* init on <var276:ReduceAction275>*/
}
var277 = NEW_nit__parser__ReduceAction276(&type_nit__parser__ReduceAction276);
{
((void(*)(val* self, long p0))(var277->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var277, 57l); /* goto= on <var277:ReduceAction276>*/
}
{
((void(*)(val* self))(var277->class->vft[COLOR_standard__kernel__Object__init]))(var277); /* init on <var277:ReduceAction276>*/
}
var278 = NEW_nit__parser__ReduceAction277(&type_nit__parser__ReduceAction277);
{
((void(*)(val* self, long p0))(var278->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var278, 57l); /* goto= on <var278:ReduceAction277>*/
}
{
((void(*)(val* self))(var278->class->vft[COLOR_standard__kernel__Object__init]))(var278); /* init on <var278:ReduceAction277>*/
}
var279 = NEW_nit__parser__ReduceAction278(&type_nit__parser__ReduceAction278);
{
((void(*)(val* self, long p0))(var279->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var279, 58l); /* goto= on <var279:ReduceAction278>*/
}
{
((void(*)(val* self))(var279->class->vft[COLOR_standard__kernel__Object__init]))(var279); /* init on <var279:ReduceAction278>*/
}
var280 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var280->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var280, 59l); /* goto= on <var280:ReduceAction157>*/
}
{
((void(*)(val* self))(var280->class->vft[COLOR_standard__kernel__Object__init]))(var280); /* init on <var280:ReduceAction157>*/
}
var281 = NEW_nit__parser__ReduceAction280(&type_nit__parser__ReduceAction280);
{
((void(*)(val* self, long p0))(var281->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var281, 59l); /* goto= on <var281:ReduceAction280>*/
}
{
((void(*)(val* self))(var281->class->vft[COLOR_standard__kernel__Object__init]))(var281); /* init on <var281:ReduceAction280>*/
}
var282 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var282->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var282, 60l); /* goto= on <var282:ReduceAction157>*/
}
{
((void(*)(val* self))(var282->class->vft[COLOR_standard__kernel__Object__init]))(var282); /* init on <var282:ReduceAction157>*/
}
var283 = NEW_nit__parser__ReduceAction282(&type_nit__parser__ReduceAction282);
{
((void(*)(val* self, long p0))(var283->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var283, 60l); /* goto= on <var283:ReduceAction282>*/
}
{
((void(*)(val* self))(var283->class->vft[COLOR_standard__kernel__Object__init]))(var283); /* init on <var283:ReduceAction282>*/
}
var284 = NEW_nit__parser__ReduceAction283(&type_nit__parser__ReduceAction283);
{
((void(*)(val* self, long p0))(var284->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var284, 60l); /* goto= on <var284:ReduceAction283>*/
}
{
((void(*)(val* self))(var284->class->vft[COLOR_standard__kernel__Object__init]))(var284); /* init on <var284:ReduceAction283>*/
}
var285 = NEW_nit__parser__ReduceAction284(&type_nit__parser__ReduceAction284);
{
((void(*)(val* self, long p0))(var285->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var285, 60l); /* goto= on <var285:ReduceAction284>*/
}
{
((void(*)(val* self))(var285->class->vft[COLOR_standard__kernel__Object__init]))(var285); /* init on <var285:ReduceAction284>*/
}
var286 = NEW_nit__parser__ReduceAction285(&type_nit__parser__ReduceAction285);
{
((void(*)(val* self, long p0))(var286->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var286, 60l); /* goto= on <var286:ReduceAction285>*/
}
{
((void(*)(val* self))(var286->class->vft[COLOR_standard__kernel__Object__init]))(var286); /* init on <var286:ReduceAction285>*/
}
var287 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var287->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var287, 61l); /* goto= on <var287:ReduceAction157>*/
}
{
((void(*)(val* self))(var287->class->vft[COLOR_standard__kernel__Object__init]))(var287); /* init on <var287:ReduceAction157>*/
}
var288 = NEW_nit__parser__ReduceAction287(&type_nit__parser__ReduceAction287);
{
((void(*)(val* self, long p0))(var288->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var288, 61l); /* goto= on <var288:ReduceAction287>*/
}
{
((void(*)(val* self))(var288->class->vft[COLOR_standard__kernel__Object__init]))(var288); /* init on <var288:ReduceAction287>*/
}
var289 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var289->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var289, 62l); /* goto= on <var289:ReduceAction157>*/
}
{
((void(*)(val* self))(var289->class->vft[COLOR_standard__kernel__Object__init]))(var289); /* init on <var289:ReduceAction157>*/
}
var290 = NEW_nit__parser__ReduceAction289(&type_nit__parser__ReduceAction289);
{
((void(*)(val* self, long p0))(var290->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var290, 62l); /* goto= on <var290:ReduceAction289>*/
}
{
((void(*)(val* self))(var290->class->vft[COLOR_standard__kernel__Object__init]))(var290); /* init on <var290:ReduceAction289>*/
}
var291 = NEW_nit__parser__ReduceAction290(&type_nit__parser__ReduceAction290);
{
((void(*)(val* self, long p0))(var291->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var291, 62l); /* goto= on <var291:ReduceAction290>*/
}
{
((void(*)(val* self))(var291->class->vft[COLOR_standard__kernel__Object__init]))(var291); /* init on <var291:ReduceAction290>*/
}
var292 = NEW_nit__parser__ReduceAction291(&type_nit__parser__ReduceAction291);
{
((void(*)(val* self, long p0))(var292->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var292, 62l); /* goto= on <var292:ReduceAction291>*/
}
{
((void(*)(val* self))(var292->class->vft[COLOR_standard__kernel__Object__init]))(var292); /* init on <var292:ReduceAction291>*/
}
var293 = NEW_nit__parser__ReduceAction292(&type_nit__parser__ReduceAction292);
{
((void(*)(val* self, long p0))(var293->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var293, 62l); /* goto= on <var293:ReduceAction292>*/
}
{
((void(*)(val* self))(var293->class->vft[COLOR_standard__kernel__Object__init]))(var293); /* init on <var293:ReduceAction292>*/
}
var294 = NEW_nit__parser__ReduceAction293(&type_nit__parser__ReduceAction293);
{
((void(*)(val* self, long p0))(var294->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var294, 62l); /* goto= on <var294:ReduceAction293>*/
}
{
((void(*)(val* self))(var294->class->vft[COLOR_standard__kernel__Object__init]))(var294); /* init on <var294:ReduceAction293>*/
}
var295 = NEW_nit__parser__ReduceAction294(&type_nit__parser__ReduceAction294);
{
((void(*)(val* self, long p0))(var295->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var295, 62l); /* goto= on <var295:ReduceAction294>*/
}
{
((void(*)(val* self))(var295->class->vft[COLOR_standard__kernel__Object__init]))(var295); /* init on <var295:ReduceAction294>*/
}
var296 = NEW_nit__parser__ReduceAction295(&type_nit__parser__ReduceAction295);
{
((void(*)(val* self, long p0))(var296->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var296, 62l); /* goto= on <var296:ReduceAction295>*/
}
{
((void(*)(val* self))(var296->class->vft[COLOR_standard__kernel__Object__init]))(var296); /* init on <var296:ReduceAction295>*/
}
var297 = NEW_nit__parser__ReduceAction296(&type_nit__parser__ReduceAction296);
{
((void(*)(val* self, long p0))(var297->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var297, 62l); /* goto= on <var297:ReduceAction296>*/
}
{
((void(*)(val* self))(var297->class->vft[COLOR_standard__kernel__Object__init]))(var297); /* init on <var297:ReduceAction296>*/
}
var298 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var298->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var298, 63l); /* goto= on <var298:ReduceAction157>*/
}
{
((void(*)(val* self))(var298->class->vft[COLOR_standard__kernel__Object__init]))(var298); /* init on <var298:ReduceAction157>*/
}
var299 = NEW_nit__parser__ReduceAction298(&type_nit__parser__ReduceAction298);
{
((void(*)(val* self, long p0))(var299->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var299, 63l); /* goto= on <var299:ReduceAction298>*/
}
{
((void(*)(val* self))(var299->class->vft[COLOR_standard__kernel__Object__init]))(var299); /* init on <var299:ReduceAction298>*/
}
var300 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var300->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var300, 64l); /* goto= on <var300:ReduceAction157>*/
}
{
((void(*)(val* self))(var300->class->vft[COLOR_standard__kernel__Object__init]))(var300); /* init on <var300:ReduceAction157>*/
}
var301 = NEW_nit__parser__ReduceAction300(&type_nit__parser__ReduceAction300);
{
((void(*)(val* self, long p0))(var301->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var301, 64l); /* goto= on <var301:ReduceAction300>*/
}
{
((void(*)(val* self))(var301->class->vft[COLOR_standard__kernel__Object__init]))(var301); /* init on <var301:ReduceAction300>*/
}
var302 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var302->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var302, 65l); /* goto= on <var302:ReduceAction157>*/
}
{
((void(*)(val* self))(var302->class->vft[COLOR_standard__kernel__Object__init]))(var302); /* init on <var302:ReduceAction157>*/
}
var303 = NEW_nit__parser__ReduceAction302(&type_nit__parser__ReduceAction302);
{
((void(*)(val* self, long p0))(var303->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var303, 65l); /* goto= on <var303:ReduceAction302>*/
}
{
((void(*)(val* self))(var303->class->vft[COLOR_standard__kernel__Object__init]))(var303); /* init on <var303:ReduceAction302>*/
}
var304 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var304->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var304, 66l); /* goto= on <var304:ReduceAction157>*/
}
{
((void(*)(val* self))(var304->class->vft[COLOR_standard__kernel__Object__init]))(var304); /* init on <var304:ReduceAction157>*/
}
var305 = NEW_nit__parser__ReduceAction304(&type_nit__parser__ReduceAction304);
{
((void(*)(val* self, long p0))(var305->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var305, 66l); /* goto= on <var305:ReduceAction304>*/
}
{
((void(*)(val* self))(var305->class->vft[COLOR_standard__kernel__Object__init]))(var305); /* init on <var305:ReduceAction304>*/
}
var306 = NEW_nit__parser__ReduceAction305(&type_nit__parser__ReduceAction305);
{
((void(*)(val* self, long p0))(var306->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var306, 66l); /* goto= on <var306:ReduceAction305>*/
}
{
((void(*)(val* self))(var306->class->vft[COLOR_standard__kernel__Object__init]))(var306); /* init on <var306:ReduceAction305>*/
}
var307 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var307->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var307, 67l); /* goto= on <var307:ReduceAction157>*/
}
{
((void(*)(val* self))(var307->class->vft[COLOR_standard__kernel__Object__init]))(var307); /* init on <var307:ReduceAction157>*/
}
var308 = NEW_nit__parser__ReduceAction307(&type_nit__parser__ReduceAction307);
{
((void(*)(val* self, long p0))(var308->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var308, 67l); /* goto= on <var308:ReduceAction307>*/
}
{
((void(*)(val* self))(var308->class->vft[COLOR_standard__kernel__Object__init]))(var308); /* init on <var308:ReduceAction307>*/
}
var309 = NEW_nit__parser__ReduceAction308(&type_nit__parser__ReduceAction308);
{
((void(*)(val* self, long p0))(var309->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var309, 67l); /* goto= on <var309:ReduceAction308>*/
}
{
((void(*)(val* self))(var309->class->vft[COLOR_standard__kernel__Object__init]))(var309); /* init on <var309:ReduceAction308>*/
}
var310 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var310->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var310, 68l); /* goto= on <var310:ReduceAction157>*/
}
{
((void(*)(val* self))(var310->class->vft[COLOR_standard__kernel__Object__init]))(var310); /* init on <var310:ReduceAction157>*/
}
var311 = NEW_nit__parser__ReduceAction310(&type_nit__parser__ReduceAction310);
{
((void(*)(val* self, long p0))(var311->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var311, 68l); /* goto= on <var311:ReduceAction310>*/
}
{
((void(*)(val* self))(var311->class->vft[COLOR_standard__kernel__Object__init]))(var311); /* init on <var311:ReduceAction310>*/
}
var312 = NEW_nit__parser__ReduceAction311(&type_nit__parser__ReduceAction311);
{
((void(*)(val* self, long p0))(var312->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var312, 68l); /* goto= on <var312:ReduceAction311>*/
}
{
((void(*)(val* self))(var312->class->vft[COLOR_standard__kernel__Object__init]))(var312); /* init on <var312:ReduceAction311>*/
}
var313 = NEW_nit__parser__ReduceAction312(&type_nit__parser__ReduceAction312);
{
((void(*)(val* self, long p0))(var313->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var313, 68l); /* goto= on <var313:ReduceAction312>*/
}
{
((void(*)(val* self))(var313->class->vft[COLOR_standard__kernel__Object__init]))(var313); /* init on <var313:ReduceAction312>*/
}
var314 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var314->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var314, 69l); /* goto= on <var314:ReduceAction157>*/
}
{
((void(*)(val* self))(var314->class->vft[COLOR_standard__kernel__Object__init]))(var314); /* init on <var314:ReduceAction157>*/
}
var315 = NEW_nit__parser__ReduceAction314(&type_nit__parser__ReduceAction314);
{
((void(*)(val* self, long p0))(var315->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var315, 69l); /* goto= on <var315:ReduceAction314>*/
}
{
((void(*)(val* self))(var315->class->vft[COLOR_standard__kernel__Object__init]))(var315); /* init on <var315:ReduceAction314>*/
}
var316 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var316->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var316, 70l); /* goto= on <var316:ReduceAction157>*/
}
{
((void(*)(val* self))(var316->class->vft[COLOR_standard__kernel__Object__init]))(var316); /* init on <var316:ReduceAction157>*/
}
var317 = NEW_nit__parser__ReduceAction316(&type_nit__parser__ReduceAction316);
{
((void(*)(val* self, long p0))(var317->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var317, 70l); /* goto= on <var317:ReduceAction316>*/
}
{
((void(*)(val* self))(var317->class->vft[COLOR_standard__kernel__Object__init]))(var317); /* init on <var317:ReduceAction316>*/
}
var318 = NEW_nit__parser__ReduceAction317(&type_nit__parser__ReduceAction317);
{
((void(*)(val* self, long p0))(var318->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var318, 70l); /* goto= on <var318:ReduceAction317>*/
}
{
((void(*)(val* self))(var318->class->vft[COLOR_standard__kernel__Object__init]))(var318); /* init on <var318:ReduceAction317>*/
}
var319 = NEW_nit__parser__ReduceAction318(&type_nit__parser__ReduceAction318);
{
((void(*)(val* self, long p0))(var319->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var319, 70l); /* goto= on <var319:ReduceAction318>*/
}
{
((void(*)(val* self))(var319->class->vft[COLOR_standard__kernel__Object__init]))(var319); /* init on <var319:ReduceAction318>*/
}
var320 = NEW_nit__parser__ReduceAction319(&type_nit__parser__ReduceAction319);
{
((void(*)(val* self, long p0))(var320->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var320, 70l); /* goto= on <var320:ReduceAction319>*/
}
{
((void(*)(val* self))(var320->class->vft[COLOR_standard__kernel__Object__init]))(var320); /* init on <var320:ReduceAction319>*/
}
var321 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var321->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var321, 71l); /* goto= on <var321:ReduceAction157>*/
}
{
((void(*)(val* self))(var321->class->vft[COLOR_standard__kernel__Object__init]))(var321); /* init on <var321:ReduceAction157>*/
}
var322 = NEW_nit__parser__ReduceAction321(&type_nit__parser__ReduceAction321);
{
((void(*)(val* self, long p0))(var322->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var322, 71l); /* goto= on <var322:ReduceAction321>*/
}
{
((void(*)(val* self))(var322->class->vft[COLOR_standard__kernel__Object__init]))(var322); /* init on <var322:ReduceAction321>*/
}
var323 = NEW_nit__parser__ReduceAction322(&type_nit__parser__ReduceAction322);
{
((void(*)(val* self, long p0))(var323->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var323, 71l); /* goto= on <var323:ReduceAction322>*/
}
{
((void(*)(val* self))(var323->class->vft[COLOR_standard__kernel__Object__init]))(var323); /* init on <var323:ReduceAction322>*/
}
var324 = NEW_nit__parser__ReduceAction323(&type_nit__parser__ReduceAction323);
{
((void(*)(val* self, long p0))(var324->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var324, 71l); /* goto= on <var324:ReduceAction323>*/
}
{
((void(*)(val* self))(var324->class->vft[COLOR_standard__kernel__Object__init]))(var324); /* init on <var324:ReduceAction323>*/
}
var325 = NEW_nit__parser__ReduceAction324(&type_nit__parser__ReduceAction324);
{
((void(*)(val* self, long p0))(var325->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var325, 71l); /* goto= on <var325:ReduceAction324>*/
}
{
((void(*)(val* self))(var325->class->vft[COLOR_standard__kernel__Object__init]))(var325); /* init on <var325:ReduceAction324>*/
}
var326 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var326->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var326, 72l); /* goto= on <var326:ReduceAction157>*/
}
{
((void(*)(val* self))(var326->class->vft[COLOR_standard__kernel__Object__init]))(var326); /* init on <var326:ReduceAction157>*/
}
var327 = NEW_nit__parser__ReduceAction326(&type_nit__parser__ReduceAction326);
{
((void(*)(val* self, long p0))(var327->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var327, 72l); /* goto= on <var327:ReduceAction326>*/
}
{
((void(*)(val* self))(var327->class->vft[COLOR_standard__kernel__Object__init]))(var327); /* init on <var327:ReduceAction326>*/
}
var328 = NEW_nit__parser__ReduceAction327(&type_nit__parser__ReduceAction327);
{
((void(*)(val* self, long p0))(var328->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var328, 72l); /* goto= on <var328:ReduceAction327>*/
}
{
((void(*)(val* self))(var328->class->vft[COLOR_standard__kernel__Object__init]))(var328); /* init on <var328:ReduceAction327>*/
}
var329 = NEW_nit__parser__ReduceAction181(&type_nit__parser__ReduceAction181);
{
((void(*)(val* self, long p0))(var329->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var329, 72l); /* goto= on <var329:ReduceAction181>*/
}
{
((void(*)(val* self))(var329->class->vft[COLOR_standard__kernel__Object__init]))(var329); /* init on <var329:ReduceAction181>*/
}
var330 = NEW_nit__parser__ReduceAction329(&type_nit__parser__ReduceAction329);
{
((void(*)(val* self, long p0))(var330->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var330, 72l); /* goto= on <var330:ReduceAction329>*/
}
{
((void(*)(val* self))(var330->class->vft[COLOR_standard__kernel__Object__init]))(var330); /* init on <var330:ReduceAction329>*/
}
var331 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var331->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var331, 72l); /* goto= on <var331:ReduceAction182>*/
}
{
((void(*)(val* self))(var331->class->vft[COLOR_standard__kernel__Object__init]))(var331); /* init on <var331:ReduceAction182>*/
}
var332 = NEW_nit__parser__ReduceAction331(&type_nit__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var332->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var332, 72l); /* goto= on <var332:ReduceAction331>*/
}
{
((void(*)(val* self))(var332->class->vft[COLOR_standard__kernel__Object__init]))(var332); /* init on <var332:ReduceAction331>*/
}
var333 = NEW_nit__parser__ReduceAction183(&type_nit__parser__ReduceAction183);
{
((void(*)(val* self, long p0))(var333->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var333, 72l); /* goto= on <var333:ReduceAction183>*/
}
{
((void(*)(val* self))(var333->class->vft[COLOR_standard__kernel__Object__init]))(var333); /* init on <var333:ReduceAction183>*/
}
var334 = NEW_nit__parser__ReduceAction333(&type_nit__parser__ReduceAction333);
{
((void(*)(val* self, long p0))(var334->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var334, 72l); /* goto= on <var334:ReduceAction333>*/
}
{
((void(*)(val* self))(var334->class->vft[COLOR_standard__kernel__Object__init]))(var334); /* init on <var334:ReduceAction333>*/
}
var335 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var335->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var335, 72l); /* goto= on <var335:ReduceAction182>*/
}
{
((void(*)(val* self))(var335->class->vft[COLOR_standard__kernel__Object__init]))(var335); /* init on <var335:ReduceAction182>*/
}
var336 = NEW_nit__parser__ReduceAction331(&type_nit__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var336->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var336, 72l); /* goto= on <var336:ReduceAction331>*/
}
{
((void(*)(val* self))(var336->class->vft[COLOR_standard__kernel__Object__init]))(var336); /* init on <var336:ReduceAction331>*/
}
var337 = NEW_nit__parser__ReduceAction185(&type_nit__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var337->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var337, 72l); /* goto= on <var337:ReduceAction185>*/
}
{
((void(*)(val* self))(var337->class->vft[COLOR_standard__kernel__Object__init]))(var337); /* init on <var337:ReduceAction185>*/
}
var338 = NEW_nit__parser__ReduceAction337(&type_nit__parser__ReduceAction337);
{
((void(*)(val* self, long p0))(var338->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var338, 72l); /* goto= on <var338:ReduceAction337>*/
}
{
((void(*)(val* self))(var338->class->vft[COLOR_standard__kernel__Object__init]))(var338); /* init on <var338:ReduceAction337>*/
}
var339 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var339->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var339, 72l); /* goto= on <var339:ReduceAction186>*/
}
{
((void(*)(val* self))(var339->class->vft[COLOR_standard__kernel__Object__init]))(var339); /* init on <var339:ReduceAction186>*/
}
var340 = NEW_nit__parser__ReduceAction339(&type_nit__parser__ReduceAction339);
{
((void(*)(val* self, long p0))(var340->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var340, 72l); /* goto= on <var340:ReduceAction339>*/
}
{
((void(*)(val* self))(var340->class->vft[COLOR_standard__kernel__Object__init]))(var340); /* init on <var340:ReduceAction339>*/
}
var341 = NEW_nit__parser__ReduceAction187(&type_nit__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var341->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var341, 72l); /* goto= on <var341:ReduceAction187>*/
}
{
((void(*)(val* self))(var341->class->vft[COLOR_standard__kernel__Object__init]))(var341); /* init on <var341:ReduceAction187>*/
}
var342 = NEW_nit__parser__ReduceAction341(&type_nit__parser__ReduceAction341);
{
((void(*)(val* self, long p0))(var342->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var342, 72l); /* goto= on <var342:ReduceAction341>*/
}
{
((void(*)(val* self))(var342->class->vft[COLOR_standard__kernel__Object__init]))(var342); /* init on <var342:ReduceAction341>*/
}
var343 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var343->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var343, 72l); /* goto= on <var343:ReduceAction186>*/
}
{
((void(*)(val* self))(var343->class->vft[COLOR_standard__kernel__Object__init]))(var343); /* init on <var343:ReduceAction186>*/
}
var344 = NEW_nit__parser__ReduceAction339(&type_nit__parser__ReduceAction339);
{
((void(*)(val* self, long p0))(var344->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var344, 72l); /* goto= on <var344:ReduceAction339>*/
}
{
((void(*)(val* self))(var344->class->vft[COLOR_standard__kernel__Object__init]))(var344); /* init on <var344:ReduceAction339>*/
}
var345 = NEW_nit__parser__ReduceAction189(&type_nit__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var345->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var345, 72l); /* goto= on <var345:ReduceAction189>*/
}
{
((void(*)(val* self))(var345->class->vft[COLOR_standard__kernel__Object__init]))(var345); /* init on <var345:ReduceAction189>*/
}
var346 = NEW_nit__parser__ReduceAction345(&type_nit__parser__ReduceAction345);
{
((void(*)(val* self, long p0))(var346->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var346, 72l); /* goto= on <var346:ReduceAction345>*/
}
{
((void(*)(val* self))(var346->class->vft[COLOR_standard__kernel__Object__init]))(var346); /* init on <var346:ReduceAction345>*/
}
var347 = NEW_nit__parser__ReduceAction190(&type_nit__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var347->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var347, 72l); /* goto= on <var347:ReduceAction190>*/
}
{
((void(*)(val* self))(var347->class->vft[COLOR_standard__kernel__Object__init]))(var347); /* init on <var347:ReduceAction190>*/
}
var348 = NEW_nit__parser__ReduceAction347(&type_nit__parser__ReduceAction347);
{
((void(*)(val* self, long p0))(var348->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var348, 72l); /* goto= on <var348:ReduceAction347>*/
}
{
((void(*)(val* self))(var348->class->vft[COLOR_standard__kernel__Object__init]))(var348); /* init on <var348:ReduceAction347>*/
}
var349 = NEW_nit__parser__ReduceAction191(&type_nit__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var349->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var349, 72l); /* goto= on <var349:ReduceAction191>*/
}
{
((void(*)(val* self))(var349->class->vft[COLOR_standard__kernel__Object__init]))(var349); /* init on <var349:ReduceAction191>*/
}
var350 = NEW_nit__parser__ReduceAction349(&type_nit__parser__ReduceAction349);
{
((void(*)(val* self, long p0))(var350->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var350, 72l); /* goto= on <var350:ReduceAction349>*/
}
{
((void(*)(val* self))(var350->class->vft[COLOR_standard__kernel__Object__init]))(var350); /* init on <var350:ReduceAction349>*/
}
var351 = NEW_nit__parser__ReduceAction350(&type_nit__parser__ReduceAction350);
{
((void(*)(val* self, long p0))(var351->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var351, 72l); /* goto= on <var351:ReduceAction350>*/
}
{
((void(*)(val* self))(var351->class->vft[COLOR_standard__kernel__Object__init]))(var351); /* init on <var351:ReduceAction350>*/
}
var352 = NEW_nit__parser__ReduceAction351(&type_nit__parser__ReduceAction351);
{
((void(*)(val* self, long p0))(var352->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var352, 72l); /* goto= on <var352:ReduceAction351>*/
}
{
((void(*)(val* self))(var352->class->vft[COLOR_standard__kernel__Object__init]))(var352); /* init on <var352:ReduceAction351>*/
}
var353 = NEW_nit__parser__ReduceAction352(&type_nit__parser__ReduceAction352);
{
((void(*)(val* self, long p0))(var353->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var353, 72l); /* goto= on <var353:ReduceAction352>*/
}
{
((void(*)(val* self))(var353->class->vft[COLOR_standard__kernel__Object__init]))(var353); /* init on <var353:ReduceAction352>*/
}
var354 = NEW_nit__parser__ReduceAction353(&type_nit__parser__ReduceAction353);
{
((void(*)(val* self, long p0))(var354->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var354, 72l); /* goto= on <var354:ReduceAction353>*/
}
{
((void(*)(val* self))(var354->class->vft[COLOR_standard__kernel__Object__init]))(var354); /* init on <var354:ReduceAction353>*/
}
var355 = NEW_nit__parser__ReduceAction354(&type_nit__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var355->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var355, 72l); /* goto= on <var355:ReduceAction354>*/
}
{
((void(*)(val* self))(var355->class->vft[COLOR_standard__kernel__Object__init]))(var355); /* init on <var355:ReduceAction354>*/
}
var356 = NEW_nit__parser__ReduceAction355(&type_nit__parser__ReduceAction355);
{
((void(*)(val* self, long p0))(var356->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var356, 72l); /* goto= on <var356:ReduceAction355>*/
}
{
((void(*)(val* self))(var356->class->vft[COLOR_standard__kernel__Object__init]))(var356); /* init on <var356:ReduceAction355>*/
}
var357 = NEW_nit__parser__ReduceAction356(&type_nit__parser__ReduceAction356);
{
((void(*)(val* self, long p0))(var357->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var357, 72l); /* goto= on <var357:ReduceAction356>*/
}
{
((void(*)(val* self))(var357->class->vft[COLOR_standard__kernel__Object__init]))(var357); /* init on <var357:ReduceAction356>*/
}
var358 = NEW_nit__parser__ReduceAction353(&type_nit__parser__ReduceAction353);
{
((void(*)(val* self, long p0))(var358->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var358, 72l); /* goto= on <var358:ReduceAction353>*/
}
{
((void(*)(val* self))(var358->class->vft[COLOR_standard__kernel__Object__init]))(var358); /* init on <var358:ReduceAction353>*/
}
var359 = NEW_nit__parser__ReduceAction354(&type_nit__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var359->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var359, 72l); /* goto= on <var359:ReduceAction354>*/
}
{
((void(*)(val* self))(var359->class->vft[COLOR_standard__kernel__Object__init]))(var359); /* init on <var359:ReduceAction354>*/
}
var360 = NEW_nit__parser__ReduceAction359(&type_nit__parser__ReduceAction359);
{
((void(*)(val* self, long p0))(var360->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var360, 72l); /* goto= on <var360:ReduceAction359>*/
}
{
((void(*)(val* self))(var360->class->vft[COLOR_standard__kernel__Object__init]))(var360); /* init on <var360:ReduceAction359>*/
}
var361 = NEW_nit__parser__ReduceAction360(&type_nit__parser__ReduceAction360);
{
((void(*)(val* self, long p0))(var361->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var361, 72l); /* goto= on <var361:ReduceAction360>*/
}
{
((void(*)(val* self))(var361->class->vft[COLOR_standard__kernel__Object__init]))(var361); /* init on <var361:ReduceAction360>*/
}
var362 = NEW_nit__parser__ReduceAction361(&type_nit__parser__ReduceAction361);
{
((void(*)(val* self, long p0))(var362->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var362, 72l); /* goto= on <var362:ReduceAction361>*/
}
{
((void(*)(val* self))(var362->class->vft[COLOR_standard__kernel__Object__init]))(var362); /* init on <var362:ReduceAction361>*/
}
var363 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var363->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var363, 73l); /* goto= on <var363:ReduceAction157>*/
}
{
((void(*)(val* self))(var363->class->vft[COLOR_standard__kernel__Object__init]))(var363); /* init on <var363:ReduceAction157>*/
}
var364 = NEW_nit__parser__ReduceAction363(&type_nit__parser__ReduceAction363);
{
((void(*)(val* self, long p0))(var364->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var364, 73l); /* goto= on <var364:ReduceAction363>*/
}
{
((void(*)(val* self))(var364->class->vft[COLOR_standard__kernel__Object__init]))(var364); /* init on <var364:ReduceAction363>*/
}
var365 = NEW_nit__parser__ReduceAction364(&type_nit__parser__ReduceAction364);
{
((void(*)(val* self, long p0))(var365->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var365, 73l); /* goto= on <var365:ReduceAction364>*/
}
{
((void(*)(val* self))(var365->class->vft[COLOR_standard__kernel__Object__init]))(var365); /* init on <var365:ReduceAction364>*/
}
var366 = NEW_nit__parser__ReduceAction365(&type_nit__parser__ReduceAction365);
{
((void(*)(val* self, long p0))(var366->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var366, 74l); /* goto= on <var366:ReduceAction365>*/
}
{
((void(*)(val* self))(var366->class->vft[COLOR_standard__kernel__Object__init]))(var366); /* init on <var366:ReduceAction365>*/
}
var367 = NEW_nit__parser__ReduceAction366(&type_nit__parser__ReduceAction366);
{
((void(*)(val* self, long p0))(var367->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var367, 74l); /* goto= on <var367:ReduceAction366>*/
}
{
((void(*)(val* self))(var367->class->vft[COLOR_standard__kernel__Object__init]))(var367); /* init on <var367:ReduceAction366>*/
}
var368 = NEW_nit__parser__ReduceAction367(&type_nit__parser__ReduceAction367);
{
((void(*)(val* self, long p0))(var368->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var368, 74l); /* goto= on <var368:ReduceAction367>*/
}
{
((void(*)(val* self))(var368->class->vft[COLOR_standard__kernel__Object__init]))(var368); /* init on <var368:ReduceAction367>*/
}
var369 = NEW_nit__parser__ReduceAction368(&type_nit__parser__ReduceAction368);
{
((void(*)(val* self, long p0))(var369->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var369, 74l); /* goto= on <var369:ReduceAction368>*/
}
{
((void(*)(val* self))(var369->class->vft[COLOR_standard__kernel__Object__init]))(var369); /* init on <var369:ReduceAction368>*/
}
var370 = NEW_nit__parser__ReduceAction369(&type_nit__parser__ReduceAction369);
{
((void(*)(val* self, long p0))(var370->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var370, 74l); /* goto= on <var370:ReduceAction369>*/
}
{
((void(*)(val* self))(var370->class->vft[COLOR_standard__kernel__Object__init]))(var370); /* init on <var370:ReduceAction369>*/
}
var371 = NEW_nit__parser__ReduceAction370(&type_nit__parser__ReduceAction370);
{
((void(*)(val* self, long p0))(var371->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var371, 74l); /* goto= on <var371:ReduceAction370>*/
}
{
((void(*)(val* self))(var371->class->vft[COLOR_standard__kernel__Object__init]))(var371); /* init on <var371:ReduceAction370>*/
}
var372 = NEW_nit__parser__ReduceAction371(&type_nit__parser__ReduceAction371);
{
((void(*)(val* self, long p0))(var372->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var372, 74l); /* goto= on <var372:ReduceAction371>*/
}
{
((void(*)(val* self))(var372->class->vft[COLOR_standard__kernel__Object__init]))(var372); /* init on <var372:ReduceAction371>*/
}
var373 = NEW_nit__parser__ReduceAction372(&type_nit__parser__ReduceAction372);
{
((void(*)(val* self, long p0))(var373->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var373, 74l); /* goto= on <var373:ReduceAction372>*/
}
{
((void(*)(val* self))(var373->class->vft[COLOR_standard__kernel__Object__init]))(var373); /* init on <var373:ReduceAction372>*/
}
var374 = NEW_nit__parser__ReduceAction373(&type_nit__parser__ReduceAction373);
{
((void(*)(val* self, long p0))(var374->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var374, 74l); /* goto= on <var374:ReduceAction373>*/
}
{
((void(*)(val* self))(var374->class->vft[COLOR_standard__kernel__Object__init]))(var374); /* init on <var374:ReduceAction373>*/
}
var375 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var375->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var375, 74l); /* goto= on <var375:ReduceAction157>*/
}
{
((void(*)(val* self))(var375->class->vft[COLOR_standard__kernel__Object__init]))(var375); /* init on <var375:ReduceAction157>*/
}
var376 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var376->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var376, 74l); /* goto= on <var376:ReduceAction157>*/
}
{
((void(*)(val* self))(var376->class->vft[COLOR_standard__kernel__Object__init]))(var376); /* init on <var376:ReduceAction157>*/
}
var377 = NEW_nit__parser__ReduceAction376(&type_nit__parser__ReduceAction376);
{
((void(*)(val* self, long p0))(var377->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var377, 74l); /* goto= on <var377:ReduceAction376>*/
}
{
((void(*)(val* self))(var377->class->vft[COLOR_standard__kernel__Object__init]))(var377); /* init on <var377:ReduceAction376>*/
}
var378 = NEW_nit__parser__ReduceAction377(&type_nit__parser__ReduceAction377);
{
((void(*)(val* self, long p0))(var378->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var378, 74l); /* goto= on <var378:ReduceAction377>*/
}
{
((void(*)(val* self))(var378->class->vft[COLOR_standard__kernel__Object__init]))(var378); /* init on <var378:ReduceAction377>*/
}
var379 = NEW_nit__parser__ReduceAction378(&type_nit__parser__ReduceAction378);
{
((void(*)(val* self, long p0))(var379->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var379, 74l); /* goto= on <var379:ReduceAction378>*/
}
{
((void(*)(val* self))(var379->class->vft[COLOR_standard__kernel__Object__init]))(var379); /* init on <var379:ReduceAction378>*/
}
var380 = NEW_nit__parser__ReduceAction379(&type_nit__parser__ReduceAction379);
{
((void(*)(val* self, long p0))(var380->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var380, 75l); /* goto= on <var380:ReduceAction379>*/
}
{
((void(*)(val* self))(var380->class->vft[COLOR_standard__kernel__Object__init]))(var380); /* init on <var380:ReduceAction379>*/
}
var381 = NEW_nit__parser__ReduceAction379(&type_nit__parser__ReduceAction379);
{
((void(*)(val* self, long p0))(var381->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var381, 75l); /* goto= on <var381:ReduceAction379>*/
}
{
((void(*)(val* self))(var381->class->vft[COLOR_standard__kernel__Object__init]))(var381); /* init on <var381:ReduceAction379>*/
}
var382 = NEW_nit__parser__ReduceAction381(&type_nit__parser__ReduceAction381);
{
((void(*)(val* self, long p0))(var382->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var382, 76l); /* goto= on <var382:ReduceAction381>*/
}
{
((void(*)(val* self))(var382->class->vft[COLOR_standard__kernel__Object__init]))(var382); /* init on <var382:ReduceAction381>*/
}
var383 = NEW_nit__parser__ReduceAction382(&type_nit__parser__ReduceAction382);
{
((void(*)(val* self, long p0))(var383->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var383, 77l); /* goto= on <var383:ReduceAction382>*/
}
{
((void(*)(val* self))(var383->class->vft[COLOR_standard__kernel__Object__init]))(var383); /* init on <var383:ReduceAction382>*/
}
var384 = NEW_nit__parser__ReduceAction383(&type_nit__parser__ReduceAction383);
{
((void(*)(val* self, long p0))(var384->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var384, 78l); /* goto= on <var384:ReduceAction383>*/
}
{
((void(*)(val* self))(var384->class->vft[COLOR_standard__kernel__Object__init]))(var384); /* init on <var384:ReduceAction383>*/
}
var385 = NEW_nit__parser__ReduceAction384(&type_nit__parser__ReduceAction384);
{
((void(*)(val* self, long p0))(var385->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var385, 78l); /* goto= on <var385:ReduceAction384>*/
}
{
((void(*)(val* self))(var385->class->vft[COLOR_standard__kernel__Object__init]))(var385); /* init on <var385:ReduceAction384>*/
}
var386 = NEW_nit__parser__ReduceAction382(&type_nit__parser__ReduceAction382);
{
((void(*)(val* self, long p0))(var386->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var386, 79l); /* goto= on <var386:ReduceAction382>*/
}
{
((void(*)(val* self))(var386->class->vft[COLOR_standard__kernel__Object__init]))(var386); /* init on <var386:ReduceAction382>*/
}
var387 = NEW_nit__parser__ReduceAction386(&type_nit__parser__ReduceAction386);
{
((void(*)(val* self, long p0))(var387->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var387, 80l); /* goto= on <var387:ReduceAction386>*/
}
{
((void(*)(val* self))(var387->class->vft[COLOR_standard__kernel__Object__init]))(var387); /* init on <var387:ReduceAction386>*/
}
var388 = NEW_nit__parser__ReduceAction268(&type_nit__parser__ReduceAction268);
{
((void(*)(val* self, long p0))(var388->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var388, 80l); /* goto= on <var388:ReduceAction268>*/
}
{
((void(*)(val* self))(var388->class->vft[COLOR_standard__kernel__Object__init]))(var388); /* init on <var388:ReduceAction268>*/
}
var389 = NEW_nit__parser__ReduceAction388(&type_nit__parser__ReduceAction388);
{
((void(*)(val* self, long p0))(var389->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var389, 80l); /* goto= on <var389:ReduceAction388>*/
}
{
((void(*)(val* self))(var389->class->vft[COLOR_standard__kernel__Object__init]))(var389); /* init on <var389:ReduceAction388>*/
}
var390 = NEW_nit__parser__ReduceAction389(&type_nit__parser__ReduceAction389);
{
((void(*)(val* self, long p0))(var390->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var390, 81l); /* goto= on <var390:ReduceAction389>*/
}
{
((void(*)(val* self))(var390->class->vft[COLOR_standard__kernel__Object__init]))(var390); /* init on <var390:ReduceAction389>*/
}
var391 = NEW_nit__parser__ReduceAction390(&type_nit__parser__ReduceAction390);
{
((void(*)(val* self, long p0))(var391->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var391, 81l); /* goto= on <var391:ReduceAction390>*/
}
{
((void(*)(val* self))(var391->class->vft[COLOR_standard__kernel__Object__init]))(var391); /* init on <var391:ReduceAction390>*/
}
var392 = NEW_nit__parser__ReduceAction391(&type_nit__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var392->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var392, 82l); /* goto= on <var392:ReduceAction391>*/
}
{
((void(*)(val* self))(var392->class->vft[COLOR_standard__kernel__Object__init]))(var392); /* init on <var392:ReduceAction391>*/
}
var393 = NEW_nit__parser__ReduceAction392(&type_nit__parser__ReduceAction392);
{
((void(*)(val* self, long p0))(var393->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var393, 82l); /* goto= on <var393:ReduceAction392>*/
}
{
((void(*)(val* self))(var393->class->vft[COLOR_standard__kernel__Object__init]))(var393); /* init on <var393:ReduceAction392>*/
}
var394 = NEW_nit__parser__ReduceAction393(&type_nit__parser__ReduceAction393);
{
((void(*)(val* self, long p0))(var394->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var394, 83l); /* goto= on <var394:ReduceAction393>*/
}
{
((void(*)(val* self))(var394->class->vft[COLOR_standard__kernel__Object__init]))(var394); /* init on <var394:ReduceAction393>*/
}
var395 = NEW_nit__parser__ReduceAction391(&type_nit__parser__ReduceAction391);
{
((void(*)(val* self, long p0))(var395->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var395, 84l); /* goto= on <var395:ReduceAction391>*/
}
{
((void(*)(val* self))(var395->class->vft[COLOR_standard__kernel__Object__init]))(var395); /* init on <var395:ReduceAction391>*/
}
var396 = NEW_nit__parser__ReduceAction392(&type_nit__parser__ReduceAction392);
{
((void(*)(val* self, long p0))(var396->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var396, 84l); /* goto= on <var396:ReduceAction392>*/
}
{
((void(*)(val* self))(var396->class->vft[COLOR_standard__kernel__Object__init]))(var396); /* init on <var396:ReduceAction392>*/
}
var397 = NEW_nit__parser__ReduceAction396(&type_nit__parser__ReduceAction396);
{
((void(*)(val* self, long p0))(var397->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var397, 85l); /* goto= on <var397:ReduceAction396>*/
}
{
((void(*)(val* self))(var397->class->vft[COLOR_standard__kernel__Object__init]))(var397); /* init on <var397:ReduceAction396>*/
}
var398 = NEW_nit__parser__ReduceAction397(&type_nit__parser__ReduceAction397);
{
((void(*)(val* self, long p0))(var398->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var398, 86l); /* goto= on <var398:ReduceAction397>*/
}
{
((void(*)(val* self))(var398->class->vft[COLOR_standard__kernel__Object__init]))(var398); /* init on <var398:ReduceAction397>*/
}
var399 = NEW_nit__parser__ReduceAction398(&type_nit__parser__ReduceAction398);
{
((void(*)(val* self, long p0))(var399->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var399, 87l); /* goto= on <var399:ReduceAction398>*/
}
{
((void(*)(val* self))(var399->class->vft[COLOR_standard__kernel__Object__init]))(var399); /* init on <var399:ReduceAction398>*/
}
var400 = NEW_nit__parser__ReduceAction399(&type_nit__parser__ReduceAction399);
{
((void(*)(val* self, long p0))(var400->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var400, 87l); /* goto= on <var400:ReduceAction399>*/
}
{
((void(*)(val* self))(var400->class->vft[COLOR_standard__kernel__Object__init]))(var400); /* init on <var400:ReduceAction399>*/
}
var401 = NEW_nit__parser__ReduceAction400(&type_nit__parser__ReduceAction400);
{
((void(*)(val* self, long p0))(var401->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var401, 88l); /* goto= on <var401:ReduceAction400>*/
}
{
((void(*)(val* self))(var401->class->vft[COLOR_standard__kernel__Object__init]))(var401); /* init on <var401:ReduceAction400>*/
}
var402 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var402->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var402, 88l); /* goto= on <var402:ReduceAction22>*/
}
{
((void(*)(val* self))(var402->class->vft[COLOR_standard__kernel__Object__init]))(var402); /* init on <var402:ReduceAction22>*/
}
var403 = NEW_nit__parser__ReduceAction402(&type_nit__parser__ReduceAction402);
{
((void(*)(val* self, long p0))(var403->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var403, 89l); /* goto= on <var403:ReduceAction402>*/
}
{
((void(*)(val* self))(var403->class->vft[COLOR_standard__kernel__Object__init]))(var403); /* init on <var403:ReduceAction402>*/
}
var404 = NEW_nit__parser__ReduceAction403(&type_nit__parser__ReduceAction403);
{
((void(*)(val* self, long p0))(var404->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var404, 89l); /* goto= on <var404:ReduceAction403>*/
}
{
((void(*)(val* self))(var404->class->vft[COLOR_standard__kernel__Object__init]))(var404); /* init on <var404:ReduceAction403>*/
}
var405 = NEW_nit__parser__ReduceAction404(&type_nit__parser__ReduceAction404);
{
((void(*)(val* self, long p0))(var405->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var405, 90l); /* goto= on <var405:ReduceAction404>*/
}
{
((void(*)(val* self))(var405->class->vft[COLOR_standard__kernel__Object__init]))(var405); /* init on <var405:ReduceAction404>*/
}
var406 = NEW_nit__parser__ReduceAction405(&type_nit__parser__ReduceAction405);
{
((void(*)(val* self, long p0))(var406->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var406, 91l); /* goto= on <var406:ReduceAction405>*/
}
{
((void(*)(val* self))(var406->class->vft[COLOR_standard__kernel__Object__init]))(var406); /* init on <var406:ReduceAction405>*/
}
var407 = NEW_nit__parser__ReduceAction406(&type_nit__parser__ReduceAction406);
{
((void(*)(val* self, long p0))(var407->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var407, 91l); /* goto= on <var407:ReduceAction406>*/
}
{
((void(*)(val* self))(var407->class->vft[COLOR_standard__kernel__Object__init]))(var407); /* init on <var407:ReduceAction406>*/
}
var408 = NEW_nit__parser__ReduceAction402(&type_nit__parser__ReduceAction402);
{
((void(*)(val* self, long p0))(var408->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var408, 92l); /* goto= on <var408:ReduceAction402>*/
}
{
((void(*)(val* self))(var408->class->vft[COLOR_standard__kernel__Object__init]))(var408); /* init on <var408:ReduceAction402>*/
}
var409 = NEW_nit__parser__ReduceAction403(&type_nit__parser__ReduceAction403);
{
((void(*)(val* self, long p0))(var409->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var409, 92l); /* goto= on <var409:ReduceAction403>*/
}
{
((void(*)(val* self))(var409->class->vft[COLOR_standard__kernel__Object__init]))(var409); /* init on <var409:ReduceAction403>*/
}
var410 = NEW_nit__parser__ReduceAction409(&type_nit__parser__ReduceAction409);
{
((void(*)(val* self, long p0))(var410->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var410, 92l); /* goto= on <var410:ReduceAction409>*/
}
{
((void(*)(val* self))(var410->class->vft[COLOR_standard__kernel__Object__init]))(var410); /* init on <var410:ReduceAction409>*/
}
var411 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var411->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var411, 93l); /* goto= on <var411:ReduceAction157>*/
}
{
((void(*)(val* self))(var411->class->vft[COLOR_standard__kernel__Object__init]))(var411); /* init on <var411:ReduceAction157>*/
}
var412 = NEW_nit__parser__ReduceAction411(&type_nit__parser__ReduceAction411);
{
((void(*)(val* self, long p0))(var412->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var412, 94l); /* goto= on <var412:ReduceAction411>*/
}
{
((void(*)(val* self))(var412->class->vft[COLOR_standard__kernel__Object__init]))(var412); /* init on <var412:ReduceAction411>*/
}
var413 = NEW_nit__parser__ReduceAction404(&type_nit__parser__ReduceAction404);
{
((void(*)(val* self, long p0))(var413->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var413, 95l); /* goto= on <var413:ReduceAction404>*/
}
{
((void(*)(val* self))(var413->class->vft[COLOR_standard__kernel__Object__init]))(var413); /* init on <var413:ReduceAction404>*/
}
var414 = NEW_nit__parser__ReduceAction413(&type_nit__parser__ReduceAction413);
{
((void(*)(val* self, long p0))(var414->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var414, 96l); /* goto= on <var414:ReduceAction413>*/
}
{
((void(*)(val* self))(var414->class->vft[COLOR_standard__kernel__Object__init]))(var414); /* init on <var414:ReduceAction413>*/
}
var415 = NEW_nit__parser__ReduceAction414(&type_nit__parser__ReduceAction414);
{
((void(*)(val* self, long p0))(var415->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var415, 96l); /* goto= on <var415:ReduceAction414>*/
}
{
((void(*)(val* self))(var415->class->vft[COLOR_standard__kernel__Object__init]))(var415); /* init on <var415:ReduceAction414>*/
}
var416 = NEW_nit__parser__ReduceAction415(&type_nit__parser__ReduceAction415);
{
((void(*)(val* self, long p0))(var416->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var416, 96l); /* goto= on <var416:ReduceAction415>*/
}
{
((void(*)(val* self))(var416->class->vft[COLOR_standard__kernel__Object__init]))(var416); /* init on <var416:ReduceAction415>*/
}
var417 = NEW_nit__parser__ReduceAction416(&type_nit__parser__ReduceAction416);
{
((void(*)(val* self, long p0))(var417->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var417, 96l); /* goto= on <var417:ReduceAction416>*/
}
{
((void(*)(val* self))(var417->class->vft[COLOR_standard__kernel__Object__init]))(var417); /* init on <var417:ReduceAction416>*/
}
var418 = NEW_nit__parser__ReduceAction417(&type_nit__parser__ReduceAction417);
{
((void(*)(val* self, long p0))(var418->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var418, 96l); /* goto= on <var418:ReduceAction417>*/
}
{
((void(*)(val* self))(var418->class->vft[COLOR_standard__kernel__Object__init]))(var418); /* init on <var418:ReduceAction417>*/
}
var419 = NEW_nit__parser__ReduceAction418(&type_nit__parser__ReduceAction418);
{
((void(*)(val* self, long p0))(var419->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var419, 97l); /* goto= on <var419:ReduceAction418>*/
}
{
((void(*)(val* self))(var419->class->vft[COLOR_standard__kernel__Object__init]))(var419); /* init on <var419:ReduceAction418>*/
}
var420 = NEW_nit__parser__ReduceAction419(&type_nit__parser__ReduceAction419);
{
((void(*)(val* self, long p0))(var420->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var420, 97l); /* goto= on <var420:ReduceAction419>*/
}
{
((void(*)(val* self))(var420->class->vft[COLOR_standard__kernel__Object__init]))(var420); /* init on <var420:ReduceAction419>*/
}
var421 = NEW_nit__parser__ReduceAction420(&type_nit__parser__ReduceAction420);
{
((void(*)(val* self, long p0))(var421->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var421, 97l); /* goto= on <var421:ReduceAction420>*/
}
{
((void(*)(val* self))(var421->class->vft[COLOR_standard__kernel__Object__init]))(var421); /* init on <var421:ReduceAction420>*/
}
var422 = NEW_nit__parser__ReduceAction421(&type_nit__parser__ReduceAction421);
{
((void(*)(val* self, long p0))(var422->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var422, 97l); /* goto= on <var422:ReduceAction421>*/
}
{
((void(*)(val* self))(var422->class->vft[COLOR_standard__kernel__Object__init]))(var422); /* init on <var422:ReduceAction421>*/
}
var423 = NEW_nit__parser__ReduceAction422(&type_nit__parser__ReduceAction422);
{
((void(*)(val* self, long p0))(var423->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var423, 97l); /* goto= on <var423:ReduceAction422>*/
}
{
((void(*)(val* self))(var423->class->vft[COLOR_standard__kernel__Object__init]))(var423); /* init on <var423:ReduceAction422>*/
}
var424 = NEW_nit__parser__ReduceAction383(&type_nit__parser__ReduceAction383);
{
((void(*)(val* self, long p0))(var424->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var424, 98l); /* goto= on <var424:ReduceAction383>*/
}
{
((void(*)(val* self))(var424->class->vft[COLOR_standard__kernel__Object__init]))(var424); /* init on <var424:ReduceAction383>*/
}
var425 = NEW_nit__parser__ReduceAction384(&type_nit__parser__ReduceAction384);
{
((void(*)(val* self, long p0))(var425->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var425, 98l); /* goto= on <var425:ReduceAction384>*/
}
{
((void(*)(val* self))(var425->class->vft[COLOR_standard__kernel__Object__init]))(var425); /* init on <var425:ReduceAction384>*/
}
var426 = NEW_nit__parser__ReduceAction382(&type_nit__parser__ReduceAction382);
{
((void(*)(val* self, long p0))(var426->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var426, 99l); /* goto= on <var426:ReduceAction382>*/
}
{
((void(*)(val* self))(var426->class->vft[COLOR_standard__kernel__Object__init]))(var426); /* init on <var426:ReduceAction382>*/
}
var427 = NEW_nit__parser__ReduceAction426(&type_nit__parser__ReduceAction426);
{
((void(*)(val* self, long p0))(var427->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var427, 100l); /* goto= on <var427:ReduceAction426>*/
}
{
((void(*)(val* self))(var427->class->vft[COLOR_standard__kernel__Object__init]))(var427); /* init on <var427:ReduceAction426>*/
}
var428 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var428->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var428, 100l); /* goto= on <var428:ReduceAction157>*/
}
{
((void(*)(val* self))(var428->class->vft[COLOR_standard__kernel__Object__init]))(var428); /* init on <var428:ReduceAction157>*/
}
var429 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var429->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var429, 100l); /* goto= on <var429:ReduceAction157>*/
}
{
((void(*)(val* self))(var429->class->vft[COLOR_standard__kernel__Object__init]))(var429); /* init on <var429:ReduceAction157>*/
}
var430 = NEW_nit__parser__ReduceAction429(&type_nit__parser__ReduceAction429);
{
((void(*)(val* self, long p0))(var430->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var430, 100l); /* goto= on <var430:ReduceAction429>*/
}
{
((void(*)(val* self))(var430->class->vft[COLOR_standard__kernel__Object__init]))(var430); /* init on <var430:ReduceAction429>*/
}
var431 = NEW_nit__parser__ReduceAction430(&type_nit__parser__ReduceAction430);
{
((void(*)(val* self, long p0))(var431->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var431, 100l); /* goto= on <var431:ReduceAction430>*/
}
{
((void(*)(val* self))(var431->class->vft[COLOR_standard__kernel__Object__init]))(var431); /* init on <var431:ReduceAction430>*/
}
var432 = NEW_nit__parser__ReduceAction431(&type_nit__parser__ReduceAction431);
{
((void(*)(val* self, long p0))(var432->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var432, 100l); /* goto= on <var432:ReduceAction431>*/
}
{
((void(*)(val* self))(var432->class->vft[COLOR_standard__kernel__Object__init]))(var432); /* init on <var432:ReduceAction431>*/
}
var433 = NEW_nit__parser__ReduceAction432(&type_nit__parser__ReduceAction432);
{
((void(*)(val* self, long p0))(var433->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var433, 101l); /* goto= on <var433:ReduceAction432>*/
}
{
((void(*)(val* self))(var433->class->vft[COLOR_standard__kernel__Object__init]))(var433); /* init on <var433:ReduceAction432>*/
}
var434 = NEW_nit__parser__ReduceAction433(&type_nit__parser__ReduceAction433);
{
((void(*)(val* self, long p0))(var434->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var434, 101l); /* goto= on <var434:ReduceAction433>*/
}
{
((void(*)(val* self))(var434->class->vft[COLOR_standard__kernel__Object__init]))(var434); /* init on <var434:ReduceAction433>*/
}
var435 = NEW_nit__parser__ReduceAction434(&type_nit__parser__ReduceAction434);
{
((void(*)(val* self, long p0))(var435->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var435, 101l); /* goto= on <var435:ReduceAction434>*/
}
{
((void(*)(val* self))(var435->class->vft[COLOR_standard__kernel__Object__init]))(var435); /* init on <var435:ReduceAction434>*/
}
var436 = NEW_nit__parser__ReduceAction435(&type_nit__parser__ReduceAction435);
{
((void(*)(val* self, long p0))(var436->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var436, 102l); /* goto= on <var436:ReduceAction435>*/
}
{
((void(*)(val* self))(var436->class->vft[COLOR_standard__kernel__Object__init]))(var436); /* init on <var436:ReduceAction435>*/
}
var437 = NEW_nit__parser__ReduceAction436(&type_nit__parser__ReduceAction436);
{
((void(*)(val* self, long p0))(var437->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var437, 102l); /* goto= on <var437:ReduceAction436>*/
}
{
((void(*)(val* self))(var437->class->vft[COLOR_standard__kernel__Object__init]))(var437); /* init on <var437:ReduceAction436>*/
}
var438 = NEW_nit__parser__ReduceAction435(&type_nit__parser__ReduceAction435);
{
((void(*)(val* self, long p0))(var438->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var438, 103l); /* goto= on <var438:ReduceAction435>*/
}
{
((void(*)(val* self))(var438->class->vft[COLOR_standard__kernel__Object__init]))(var438); /* init on <var438:ReduceAction435>*/
}
var439 = NEW_nit__parser__ReduceAction438(&type_nit__parser__ReduceAction438);
{
((void(*)(val* self, long p0))(var439->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var439, 103l); /* goto= on <var439:ReduceAction438>*/
}
{
((void(*)(val* self))(var439->class->vft[COLOR_standard__kernel__Object__init]))(var439); /* init on <var439:ReduceAction438>*/
}
var440 = NEW_nit__parser__ReduceAction436(&type_nit__parser__ReduceAction436);
{
((void(*)(val* self, long p0))(var440->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var440, 103l); /* goto= on <var440:ReduceAction436>*/
}
{
((void(*)(val* self))(var440->class->vft[COLOR_standard__kernel__Object__init]))(var440); /* init on <var440:ReduceAction436>*/
}
var441 = NEW_nit__parser__ReduceAction440(&type_nit__parser__ReduceAction440);
{
((void(*)(val* self, long p0))(var441->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var441, 103l); /* goto= on <var441:ReduceAction440>*/
}
{
((void(*)(val* self))(var441->class->vft[COLOR_standard__kernel__Object__init]))(var441); /* init on <var441:ReduceAction440>*/
}
var442 = NEW_nit__parser__ReduceAction441(&type_nit__parser__ReduceAction441);
{
((void(*)(val* self, long p0))(var442->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var442, 104l); /* goto= on <var442:ReduceAction441>*/
}
{
((void(*)(val* self))(var442->class->vft[COLOR_standard__kernel__Object__init]))(var442); /* init on <var442:ReduceAction441>*/
}
var443 = NEW_nit__parser__ReduceAction392(&type_nit__parser__ReduceAction392);
{
((void(*)(val* self, long p0))(var443->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var443, 105l); /* goto= on <var443:ReduceAction392>*/
}
{
((void(*)(val* self))(var443->class->vft[COLOR_standard__kernel__Object__init]))(var443); /* init on <var443:ReduceAction392>*/
}
var444 = NEW_nit__parser__ReduceAction443(&type_nit__parser__ReduceAction443);
{
((void(*)(val* self, long p0))(var444->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var444, 105l); /* goto= on <var444:ReduceAction443>*/
}
{
((void(*)(val* self))(var444->class->vft[COLOR_standard__kernel__Object__init]))(var444); /* init on <var444:ReduceAction443>*/
}
var445 = NEW_nit__parser__ReduceAction444(&type_nit__parser__ReduceAction444);
{
((void(*)(val* self, long p0))(var445->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var445, 106l); /* goto= on <var445:ReduceAction444>*/
}
{
((void(*)(val* self))(var445->class->vft[COLOR_standard__kernel__Object__init]))(var445); /* init on <var445:ReduceAction444>*/
}
var446 = NEW_nit__parser__ReduceAction445(&type_nit__parser__ReduceAction445);
{
((void(*)(val* self, long p0))(var446->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var446, 107l); /* goto= on <var446:ReduceAction445>*/
}
{
((void(*)(val* self))(var446->class->vft[COLOR_standard__kernel__Object__init]))(var446); /* init on <var446:ReduceAction445>*/
}
var447 = NEW_nit__parser__ReduceAction446(&type_nit__parser__ReduceAction446);
{
((void(*)(val* self, long p0))(var447->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var447, 107l); /* goto= on <var447:ReduceAction446>*/
}
{
((void(*)(val* self))(var447->class->vft[COLOR_standard__kernel__Object__init]))(var447); /* init on <var447:ReduceAction446>*/
}
var448 = NEW_nit__parser__ReduceAction447(&type_nit__parser__ReduceAction447);
{
((void(*)(val* self, long p0))(var448->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var448, 108l); /* goto= on <var448:ReduceAction447>*/
}
{
((void(*)(val* self))(var448->class->vft[COLOR_standard__kernel__Object__init]))(var448); /* init on <var448:ReduceAction447>*/
}
var449 = NEW_nit__parser__ReduceAction448(&type_nit__parser__ReduceAction448);
{
((void(*)(val* self, long p0))(var449->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var449, 108l); /* goto= on <var449:ReduceAction448>*/
}
{
((void(*)(val* self))(var449->class->vft[COLOR_standard__kernel__Object__init]))(var449); /* init on <var449:ReduceAction448>*/
}
var450 = NEW_nit__parser__ReduceAction449(&type_nit__parser__ReduceAction449);
{
((void(*)(val* self, long p0))(var450->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var450, 109l); /* goto= on <var450:ReduceAction449>*/
}
{
((void(*)(val* self))(var450->class->vft[COLOR_standard__kernel__Object__init]))(var450); /* init on <var450:ReduceAction449>*/
}
var451 = NEW_nit__parser__ReduceAction450(&type_nit__parser__ReduceAction450);
{
((void(*)(val* self, long p0))(var451->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var451, 109l); /* goto= on <var451:ReduceAction450>*/
}
{
((void(*)(val* self))(var451->class->vft[COLOR_standard__kernel__Object__init]))(var451); /* init on <var451:ReduceAction450>*/
}
var452 = NEW_nit__parser__ReduceAction451(&type_nit__parser__ReduceAction451);
{
((void(*)(val* self, long p0))(var452->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var452, 109l); /* goto= on <var452:ReduceAction451>*/
}
{
((void(*)(val* self))(var452->class->vft[COLOR_standard__kernel__Object__init]))(var452); /* init on <var452:ReduceAction451>*/
}
var453 = NEW_nit__parser__ReduceAction452(&type_nit__parser__ReduceAction452);
{
((void(*)(val* self, long p0))(var453->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var453, 109l); /* goto= on <var453:ReduceAction452>*/
}
{
((void(*)(val* self))(var453->class->vft[COLOR_standard__kernel__Object__init]))(var453); /* init on <var453:ReduceAction452>*/
}
var454 = NEW_nit__parser__ReduceAction453(&type_nit__parser__ReduceAction453);
{
((void(*)(val* self, long p0))(var454->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var454, 110l); /* goto= on <var454:ReduceAction453>*/
}
{
((void(*)(val* self))(var454->class->vft[COLOR_standard__kernel__Object__init]))(var454); /* init on <var454:ReduceAction453>*/
}
var455 = NEW_nit__parser__ReduceAction454(&type_nit__parser__ReduceAction454);
{
((void(*)(val* self, long p0))(var455->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var455, 110l); /* goto= on <var455:ReduceAction454>*/
}
{
((void(*)(val* self))(var455->class->vft[COLOR_standard__kernel__Object__init]))(var455); /* init on <var455:ReduceAction454>*/
}
var456 = NEW_nit__parser__ReduceAction455(&type_nit__parser__ReduceAction455);
{
((void(*)(val* self, long p0))(var456->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var456, 110l); /* goto= on <var456:ReduceAction455>*/
}
{
((void(*)(val* self))(var456->class->vft[COLOR_standard__kernel__Object__init]))(var456); /* init on <var456:ReduceAction455>*/
}
var457 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var457->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var457, 110l); /* goto= on <var457:ReduceAction22>*/
}
{
((void(*)(val* self))(var457->class->vft[COLOR_standard__kernel__Object__init]))(var457); /* init on <var457:ReduceAction22>*/
}
var458 = NEW_nit__parser__ReduceAction457(&type_nit__parser__ReduceAction457);
{
((void(*)(val* self, long p0))(var458->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var458, 111l); /* goto= on <var458:ReduceAction457>*/
}
{
((void(*)(val* self))(var458->class->vft[COLOR_standard__kernel__Object__init]))(var458); /* init on <var458:ReduceAction457>*/
}
var459 = NEW_nit__parser__ReduceAction458(&type_nit__parser__ReduceAction458);
{
((void(*)(val* self, long p0))(var459->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var459, 111l); /* goto= on <var459:ReduceAction458>*/
}
{
((void(*)(val* self))(var459->class->vft[COLOR_standard__kernel__Object__init]))(var459); /* init on <var459:ReduceAction458>*/
}
var460 = NEW_nit__parser__ReduceAction459(&type_nit__parser__ReduceAction459);
{
((void(*)(val* self, long p0))(var460->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var460, 111l); /* goto= on <var460:ReduceAction459>*/
}
{
((void(*)(val* self))(var460->class->vft[COLOR_standard__kernel__Object__init]))(var460); /* init on <var460:ReduceAction459>*/
}
var461 = NEW_nit__parser__ReduceAction458(&type_nit__parser__ReduceAction458);
{
((void(*)(val* self, long p0))(var461->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var461, 111l); /* goto= on <var461:ReduceAction458>*/
}
{
((void(*)(val* self))(var461->class->vft[COLOR_standard__kernel__Object__init]))(var461); /* init on <var461:ReduceAction458>*/
}
var462 = NEW_nit__parser__ReduceAction461(&type_nit__parser__ReduceAction461);
{
((void(*)(val* self, long p0))(var462->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var462, 112l); /* goto= on <var462:ReduceAction461>*/
}
{
((void(*)(val* self))(var462->class->vft[COLOR_standard__kernel__Object__init]))(var462); /* init on <var462:ReduceAction461>*/
}
var463 = NEW_nit__parser__ReduceAction462(&type_nit__parser__ReduceAction462);
{
((void(*)(val* self, long p0))(var463->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var463, 112l); /* goto= on <var463:ReduceAction462>*/
}
{
((void(*)(val* self))(var463->class->vft[COLOR_standard__kernel__Object__init]))(var463); /* init on <var463:ReduceAction462>*/
}
var464 = NEW_nit__parser__ReduceAction463(&type_nit__parser__ReduceAction463);
{
((void(*)(val* self, long p0))(var464->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var464, 112l); /* goto= on <var464:ReduceAction463>*/
}
{
((void(*)(val* self))(var464->class->vft[COLOR_standard__kernel__Object__init]))(var464); /* init on <var464:ReduceAction463>*/
}
var465 = NEW_nit__parser__ReduceAction462(&type_nit__parser__ReduceAction462);
{
((void(*)(val* self, long p0))(var465->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var465, 112l); /* goto= on <var465:ReduceAction462>*/
}
{
((void(*)(val* self))(var465->class->vft[COLOR_standard__kernel__Object__init]))(var465); /* init on <var465:ReduceAction462>*/
}
var466 = NEW_nit__parser__ReduceAction465(&type_nit__parser__ReduceAction465);
{
((void(*)(val* self, long p0))(var466->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var466, 113l); /* goto= on <var466:ReduceAction465>*/
}
{
((void(*)(val* self))(var466->class->vft[COLOR_standard__kernel__Object__init]))(var466); /* init on <var466:ReduceAction465>*/
}
var467 = NEW_nit__parser__ReduceAction466(&type_nit__parser__ReduceAction466);
{
((void(*)(val* self, long p0))(var467->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var467, 114l); /* goto= on <var467:ReduceAction466>*/
}
{
((void(*)(val* self))(var467->class->vft[COLOR_standard__kernel__Object__init]))(var467); /* init on <var467:ReduceAction466>*/
}
var468 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var468->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var468, 115l); /* goto= on <var468:ReduceAction22>*/
}
{
((void(*)(val* self))(var468->class->vft[COLOR_standard__kernel__Object__init]))(var468); /* init on <var468:ReduceAction22>*/
}
var469 = NEW_nit__parser__ReduceAction468(&type_nit__parser__ReduceAction468);
{
((void(*)(val* self, long p0))(var469->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var469, 115l); /* goto= on <var469:ReduceAction468>*/
}
{
((void(*)(val* self))(var469->class->vft[COLOR_standard__kernel__Object__init]))(var469); /* init on <var469:ReduceAction468>*/
}
var470 = NEW_nit__parser__ReduceAction469(&type_nit__parser__ReduceAction469);
{
((void(*)(val* self, long p0))(var470->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var470, 116l); /* goto= on <var470:ReduceAction469>*/
}
{
((void(*)(val* self))(var470->class->vft[COLOR_standard__kernel__Object__init]))(var470); /* init on <var470:ReduceAction469>*/
}
var471 = NEW_nit__parser__ReduceAction469(&type_nit__parser__ReduceAction469);
{
((void(*)(val* self, long p0))(var471->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var471, 116l); /* goto= on <var471:ReduceAction469>*/
}
{
((void(*)(val* self))(var471->class->vft[COLOR_standard__kernel__Object__init]))(var471); /* init on <var471:ReduceAction469>*/
}
var472 = NEW_nit__parser__ReduceAction471(&type_nit__parser__ReduceAction471);
{
((void(*)(val* self, long p0))(var472->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var472, 117l); /* goto= on <var472:ReduceAction471>*/
}
{
((void(*)(val* self))(var472->class->vft[COLOR_standard__kernel__Object__init]))(var472); /* init on <var472:ReduceAction471>*/
}
var473 = NEW_nit__parser__ReduceAction472(&type_nit__parser__ReduceAction472);
{
((void(*)(val* self, long p0))(var473->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var473, 117l); /* goto= on <var473:ReduceAction472>*/
}
{
((void(*)(val* self))(var473->class->vft[COLOR_standard__kernel__Object__init]))(var473); /* init on <var473:ReduceAction472>*/
}
var474 = NEW_nit__parser__ReduceAction23(&type_nit__parser__ReduceAction23);
{
((void(*)(val* self, long p0))(var474->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var474, 117l); /* goto= on <var474:ReduceAction23>*/
}
{
((void(*)(val* self))(var474->class->vft[COLOR_standard__kernel__Object__init]))(var474); /* init on <var474:ReduceAction23>*/
}
var475 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var475->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var475, 118l); /* goto= on <var475:ReduceAction22>*/
}
{
((void(*)(val* self))(var475->class->vft[COLOR_standard__kernel__Object__init]))(var475); /* init on <var475:ReduceAction22>*/
}
var476 = NEW_nit__parser__ReduceAction475(&type_nit__parser__ReduceAction475);
{
((void(*)(val* self, long p0))(var476->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var476, 118l); /* goto= on <var476:ReduceAction475>*/
}
{
((void(*)(val* self))(var476->class->vft[COLOR_standard__kernel__Object__init]))(var476); /* init on <var476:ReduceAction475>*/
}
var477 = NEW_nit__parser__ReduceAction476(&type_nit__parser__ReduceAction476);
{
((void(*)(val* self, long p0))(var477->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var477, 119l); /* goto= on <var477:ReduceAction476>*/
}
{
((void(*)(val* self))(var477->class->vft[COLOR_standard__kernel__Object__init]))(var477); /* init on <var477:ReduceAction476>*/
}
var478 = NEW_nit__parser__ReduceAction477(&type_nit__parser__ReduceAction477);
{
((void(*)(val* self, long p0))(var478->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var478, 119l); /* goto= on <var478:ReduceAction477>*/
}
{
((void(*)(val* self))(var478->class->vft[COLOR_standard__kernel__Object__init]))(var478); /* init on <var478:ReduceAction477>*/
}
var479 = NEW_nit__parser__ReduceAction469(&type_nit__parser__ReduceAction469);
{
((void(*)(val* self, long p0))(var479->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var479, 119l); /* goto= on <var479:ReduceAction469>*/
}
{
((void(*)(val* self))(var479->class->vft[COLOR_standard__kernel__Object__init]))(var479); /* init on <var479:ReduceAction469>*/
}
var480 = NEW_nit__parser__ReduceAction46(&type_nit__parser__ReduceAction46);
{
((void(*)(val* self, long p0))(var480->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var480, 120l); /* goto= on <var480:ReduceAction46>*/
}
{
((void(*)(val* self))(var480->class->vft[COLOR_standard__kernel__Object__init]))(var480); /* init on <var480:ReduceAction46>*/
}
var481 = NEW_nit__parser__ReduceAction47(&type_nit__parser__ReduceAction47);
{
((void(*)(val* self, long p0))(var481->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var481, 120l); /* goto= on <var481:ReduceAction47>*/
}
{
((void(*)(val* self))(var481->class->vft[COLOR_standard__kernel__Object__init]))(var481); /* init on <var481:ReduceAction47>*/
}
var482 = NEW_nit__parser__ReduceAction48(&type_nit__parser__ReduceAction48);
{
((void(*)(val* self, long p0))(var482->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var482, 120l); /* goto= on <var482:ReduceAction48>*/
}
{
((void(*)(val* self))(var482->class->vft[COLOR_standard__kernel__Object__init]))(var482); /* init on <var482:ReduceAction48>*/
}
var483 = NEW_nit__parser__ReduceAction55(&type_nit__parser__ReduceAction55);
{
((void(*)(val* self, long p0))(var483->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var483, 120l); /* goto= on <var483:ReduceAction55>*/
}
{
((void(*)(val* self))(var483->class->vft[COLOR_standard__kernel__Object__init]))(var483); /* init on <var483:ReduceAction55>*/
}
var484 = NEW_nit__parser__ReduceAction56(&type_nit__parser__ReduceAction56);
{
((void(*)(val* self, long p0))(var484->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var484, 120l); /* goto= on <var484:ReduceAction56>*/
}
{
((void(*)(val* self))(var484->class->vft[COLOR_standard__kernel__Object__init]))(var484); /* init on <var484:ReduceAction56>*/
}
var485 = NEW_nit__parser__ReduceAction74(&type_nit__parser__ReduceAction74);
{
((void(*)(val* self, long p0))(var485->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var485, 121l); /* goto= on <var485:ReduceAction74>*/
}
{
((void(*)(val* self))(var485->class->vft[COLOR_standard__kernel__Object__init]))(var485); /* init on <var485:ReduceAction74>*/
}
var486 = NEW_nit__parser__ReduceAction75(&type_nit__parser__ReduceAction75);
{
((void(*)(val* self, long p0))(var486->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var486, 121l); /* goto= on <var486:ReduceAction75>*/
}
{
((void(*)(val* self))(var486->class->vft[COLOR_standard__kernel__Object__init]))(var486); /* init on <var486:ReduceAction75>*/
}
var487 = NEW_nit__parser__ReduceAction84(&type_nit__parser__ReduceAction84);
{
((void(*)(val* self, long p0))(var487->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var487, 122l); /* goto= on <var487:ReduceAction84>*/
}
{
((void(*)(val* self))(var487->class->vft[COLOR_standard__kernel__Object__init]))(var487); /* init on <var487:ReduceAction84>*/
}
var488 = NEW_nit__parser__ReduceAction85(&type_nit__parser__ReduceAction85);
{
((void(*)(val* self, long p0))(var488->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var488, 122l); /* goto= on <var488:ReduceAction85>*/
}
{
((void(*)(val* self))(var488->class->vft[COLOR_standard__kernel__Object__init]))(var488); /* init on <var488:ReduceAction85>*/
}
var489 = NEW_nit__parser__ReduceAction86(&type_nit__parser__ReduceAction86);
{
((void(*)(val* self, long p0))(var489->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var489, 122l); /* goto= on <var489:ReduceAction86>*/
}
{
((void(*)(val* self))(var489->class->vft[COLOR_standard__kernel__Object__init]))(var489); /* init on <var489:ReduceAction86>*/
}
var490 = NEW_nit__parser__ReduceAction87(&type_nit__parser__ReduceAction87);
{
((void(*)(val* self, long p0))(var490->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var490, 122l); /* goto= on <var490:ReduceAction87>*/
}
{
((void(*)(val* self))(var490->class->vft[COLOR_standard__kernel__Object__init]))(var490); /* init on <var490:ReduceAction87>*/
}
var491 = NEW_nit__parser__ReduceAction88(&type_nit__parser__ReduceAction88);
{
((void(*)(val* self, long p0))(var491->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var491, 122l); /* goto= on <var491:ReduceAction88>*/
}
{
((void(*)(val* self))(var491->class->vft[COLOR_standard__kernel__Object__init]))(var491); /* init on <var491:ReduceAction88>*/
}
var492 = NEW_nit__parser__ReduceAction89(&type_nit__parser__ReduceAction89);
{
((void(*)(val* self, long p0))(var492->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var492, 122l); /* goto= on <var492:ReduceAction89>*/
}
{
((void(*)(val* self))(var492->class->vft[COLOR_standard__kernel__Object__init]))(var492); /* init on <var492:ReduceAction89>*/
}
var493 = NEW_nit__parser__ReduceAction90(&type_nit__parser__ReduceAction90);
{
((void(*)(val* self, long p0))(var493->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var493, 122l); /* goto= on <var493:ReduceAction90>*/
}
{
((void(*)(val* self))(var493->class->vft[COLOR_standard__kernel__Object__init]))(var493); /* init on <var493:ReduceAction90>*/
}
var494 = NEW_nit__parser__ReduceAction91(&type_nit__parser__ReduceAction91);
{
((void(*)(val* self, long p0))(var494->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var494, 122l); /* goto= on <var494:ReduceAction91>*/
}
{
((void(*)(val* self))(var494->class->vft[COLOR_standard__kernel__Object__init]))(var494); /* init on <var494:ReduceAction91>*/
}
var495 = NEW_nit__parser__ReduceAction92(&type_nit__parser__ReduceAction92);
{
((void(*)(val* self, long p0))(var495->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var495, 122l); /* goto= on <var495:ReduceAction92>*/
}
{
((void(*)(val* self))(var495->class->vft[COLOR_standard__kernel__Object__init]))(var495); /* init on <var495:ReduceAction92>*/
}
var496 = NEW_nit__parser__ReduceAction93(&type_nit__parser__ReduceAction93);
{
((void(*)(val* self, long p0))(var496->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var496, 122l); /* goto= on <var496:ReduceAction93>*/
}
{
((void(*)(val* self))(var496->class->vft[COLOR_standard__kernel__Object__init]))(var496); /* init on <var496:ReduceAction93>*/
}
var497 = NEW_nit__parser__ReduceAction94(&type_nit__parser__ReduceAction94);
{
((void(*)(val* self, long p0))(var497->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var497, 122l); /* goto= on <var497:ReduceAction94>*/
}
{
((void(*)(val* self))(var497->class->vft[COLOR_standard__kernel__Object__init]))(var497); /* init on <var497:ReduceAction94>*/
}
var498 = NEW_nit__parser__ReduceAction95(&type_nit__parser__ReduceAction95);
{
((void(*)(val* self, long p0))(var498->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var498, 122l); /* goto= on <var498:ReduceAction95>*/
}
{
((void(*)(val* self))(var498->class->vft[COLOR_standard__kernel__Object__init]))(var498); /* init on <var498:ReduceAction95>*/
}
var499 = NEW_nit__parser__ReduceAction96(&type_nit__parser__ReduceAction96);
{
((void(*)(val* self, long p0))(var499->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var499, 122l); /* goto= on <var499:ReduceAction96>*/
}
{
((void(*)(val* self))(var499->class->vft[COLOR_standard__kernel__Object__init]))(var499); /* init on <var499:ReduceAction96>*/
}
var500 = NEW_nit__parser__ReduceAction97(&type_nit__parser__ReduceAction97);
{
((void(*)(val* self, long p0))(var500->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var500, 122l); /* goto= on <var500:ReduceAction97>*/
}
{
((void(*)(val* self))(var500->class->vft[COLOR_standard__kernel__Object__init]))(var500); /* init on <var500:ReduceAction97>*/
}
var501 = NEW_nit__parser__ReduceAction98(&type_nit__parser__ReduceAction98);
{
((void(*)(val* self, long p0))(var501->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var501, 122l); /* goto= on <var501:ReduceAction98>*/
}
{
((void(*)(val* self))(var501->class->vft[COLOR_standard__kernel__Object__init]))(var501); /* init on <var501:ReduceAction98>*/
}
var502 = NEW_nit__parser__ReduceAction99(&type_nit__parser__ReduceAction99);
{
((void(*)(val* self, long p0))(var502->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var502, 122l); /* goto= on <var502:ReduceAction99>*/
}
{
((void(*)(val* self))(var502->class->vft[COLOR_standard__kernel__Object__init]))(var502); /* init on <var502:ReduceAction99>*/
}
var503 = NEW_nit__parser__ReduceAction100(&type_nit__parser__ReduceAction100);
{
((void(*)(val* self, long p0))(var503->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var503, 122l); /* goto= on <var503:ReduceAction100>*/
}
{
((void(*)(val* self))(var503->class->vft[COLOR_standard__kernel__Object__init]))(var503); /* init on <var503:ReduceAction100>*/
}
var504 = NEW_nit__parser__ReduceAction101(&type_nit__parser__ReduceAction101);
{
((void(*)(val* self, long p0))(var504->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var504, 122l); /* goto= on <var504:ReduceAction101>*/
}
{
((void(*)(val* self))(var504->class->vft[COLOR_standard__kernel__Object__init]))(var504); /* init on <var504:ReduceAction101>*/
}
var505 = NEW_nit__parser__ReduceAction102(&type_nit__parser__ReduceAction102);
{
((void(*)(val* self, long p0))(var505->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var505, 122l); /* goto= on <var505:ReduceAction102>*/
}
{
((void(*)(val* self))(var505->class->vft[COLOR_standard__kernel__Object__init]))(var505); /* init on <var505:ReduceAction102>*/
}
var506 = NEW_nit__parser__ReduceAction103(&type_nit__parser__ReduceAction103);
{
((void(*)(val* self, long p0))(var506->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var506, 122l); /* goto= on <var506:ReduceAction103>*/
}
{
((void(*)(val* self))(var506->class->vft[COLOR_standard__kernel__Object__init]))(var506); /* init on <var506:ReduceAction103>*/
}
var507 = NEW_nit__parser__ReduceAction104(&type_nit__parser__ReduceAction104);
{
((void(*)(val* self, long p0))(var507->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var507, 122l); /* goto= on <var507:ReduceAction104>*/
}
{
((void(*)(val* self))(var507->class->vft[COLOR_standard__kernel__Object__init]))(var507); /* init on <var507:ReduceAction104>*/
}
var508 = NEW_nit__parser__ReduceAction105(&type_nit__parser__ReduceAction105);
{
((void(*)(val* self, long p0))(var508->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var508, 122l); /* goto= on <var508:ReduceAction105>*/
}
{
((void(*)(val* self))(var508->class->vft[COLOR_standard__kernel__Object__init]))(var508); /* init on <var508:ReduceAction105>*/
}
var509 = NEW_nit__parser__ReduceAction461(&type_nit__parser__ReduceAction461);
{
((void(*)(val* self, long p0))(var509->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var509, 123l); /* goto= on <var509:ReduceAction461>*/
}
{
((void(*)(val* self))(var509->class->vft[COLOR_standard__kernel__Object__init]))(var509); /* init on <var509:ReduceAction461>*/
}
var510 = NEW_nit__parser__ReduceAction462(&type_nit__parser__ReduceAction462);
{
((void(*)(val* self, long p0))(var510->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var510, 123l); /* goto= on <var510:ReduceAction462>*/
}
{
((void(*)(val* self))(var510->class->vft[COLOR_standard__kernel__Object__init]))(var510); /* init on <var510:ReduceAction462>*/
}
var511 = NEW_nit__parser__ReduceAction463(&type_nit__parser__ReduceAction463);
{
((void(*)(val* self, long p0))(var511->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var511, 123l); /* goto= on <var511:ReduceAction463>*/
}
{
((void(*)(val* self))(var511->class->vft[COLOR_standard__kernel__Object__init]))(var511); /* init on <var511:ReduceAction463>*/
}
var512 = NEW_nit__parser__ReduceAction462(&type_nit__parser__ReduceAction462);
{
((void(*)(val* self, long p0))(var512->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var512, 123l); /* goto= on <var512:ReduceAction462>*/
}
{
((void(*)(val* self))(var512->class->vft[COLOR_standard__kernel__Object__init]))(var512); /* init on <var512:ReduceAction462>*/
}
var513 = NEW_nit__parser__ReduceAction144(&type_nit__parser__ReduceAction144);
{
((void(*)(val* self, long p0))(var513->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var513, 124l); /* goto= on <var513:ReduceAction144>*/
}
{
((void(*)(val* self))(var513->class->vft[COLOR_standard__kernel__Object__init]))(var513); /* init on <var513:ReduceAction144>*/
}
var514 = NEW_nit__parser__ReduceAction145(&type_nit__parser__ReduceAction145);
{
((void(*)(val* self, long p0))(var514->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var514, 124l); /* goto= on <var514:ReduceAction145>*/
}
{
((void(*)(val* self))(var514->class->vft[COLOR_standard__kernel__Object__init]))(var514); /* init on <var514:ReduceAction145>*/
}
var515 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var515->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var515, 125l); /* goto= on <var515:ReduceAction157>*/
}
{
((void(*)(val* self))(var515->class->vft[COLOR_standard__kernel__Object__init]))(var515); /* init on <var515:ReduceAction157>*/
}
var516 = NEW_nit__parser__ReduceAction280(&type_nit__parser__ReduceAction280);
{
((void(*)(val* self, long p0))(var516->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var516, 125l); /* goto= on <var516:ReduceAction280>*/
}
{
((void(*)(val* self))(var516->class->vft[COLOR_standard__kernel__Object__init]))(var516); /* init on <var516:ReduceAction280>*/
}
var517 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var517->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var517, 126l); /* goto= on <var517:ReduceAction157>*/
}
{
((void(*)(val* self))(var517->class->vft[COLOR_standard__kernel__Object__init]))(var517); /* init on <var517:ReduceAction157>*/
}
var518 = NEW_nit__parser__ReduceAction282(&type_nit__parser__ReduceAction282);
{
((void(*)(val* self, long p0))(var518->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var518, 126l); /* goto= on <var518:ReduceAction282>*/
}
{
((void(*)(val* self))(var518->class->vft[COLOR_standard__kernel__Object__init]))(var518); /* init on <var518:ReduceAction282>*/
}
var519 = NEW_nit__parser__ReduceAction283(&type_nit__parser__ReduceAction283);
{
((void(*)(val* self, long p0))(var519->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var519, 126l); /* goto= on <var519:ReduceAction283>*/
}
{
((void(*)(val* self))(var519->class->vft[COLOR_standard__kernel__Object__init]))(var519); /* init on <var519:ReduceAction283>*/
}
var520 = NEW_nit__parser__ReduceAction284(&type_nit__parser__ReduceAction284);
{
((void(*)(val* self, long p0))(var520->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var520, 126l); /* goto= on <var520:ReduceAction284>*/
}
{
((void(*)(val* self))(var520->class->vft[COLOR_standard__kernel__Object__init]))(var520); /* init on <var520:ReduceAction284>*/
}
var521 = NEW_nit__parser__ReduceAction285(&type_nit__parser__ReduceAction285);
{
((void(*)(val* self, long p0))(var521->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var521, 126l); /* goto= on <var521:ReduceAction285>*/
}
{
((void(*)(val* self))(var521->class->vft[COLOR_standard__kernel__Object__init]))(var521); /* init on <var521:ReduceAction285>*/
}
var522 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var522->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var522, 127l); /* goto= on <var522:ReduceAction157>*/
}
{
((void(*)(val* self))(var522->class->vft[COLOR_standard__kernel__Object__init]))(var522); /* init on <var522:ReduceAction157>*/
}
var523 = NEW_nit__parser__ReduceAction287(&type_nit__parser__ReduceAction287);
{
((void(*)(val* self, long p0))(var523->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var523, 127l); /* goto= on <var523:ReduceAction287>*/
}
{
((void(*)(val* self))(var523->class->vft[COLOR_standard__kernel__Object__init]))(var523); /* init on <var523:ReduceAction287>*/
}
var524 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var524->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var524, 128l); /* goto= on <var524:ReduceAction157>*/
}
{
((void(*)(val* self))(var524->class->vft[COLOR_standard__kernel__Object__init]))(var524); /* init on <var524:ReduceAction157>*/
}
var525 = NEW_nit__parser__ReduceAction289(&type_nit__parser__ReduceAction289);
{
((void(*)(val* self, long p0))(var525->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var525, 128l); /* goto= on <var525:ReduceAction289>*/
}
{
((void(*)(val* self))(var525->class->vft[COLOR_standard__kernel__Object__init]))(var525); /* init on <var525:ReduceAction289>*/
}
var526 = NEW_nit__parser__ReduceAction290(&type_nit__parser__ReduceAction290);
{
((void(*)(val* self, long p0))(var526->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var526, 128l); /* goto= on <var526:ReduceAction290>*/
}
{
((void(*)(val* self))(var526->class->vft[COLOR_standard__kernel__Object__init]))(var526); /* init on <var526:ReduceAction290>*/
}
var527 = NEW_nit__parser__ReduceAction291(&type_nit__parser__ReduceAction291);
{
((void(*)(val* self, long p0))(var527->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var527, 128l); /* goto= on <var527:ReduceAction291>*/
}
{
((void(*)(val* self))(var527->class->vft[COLOR_standard__kernel__Object__init]))(var527); /* init on <var527:ReduceAction291>*/
}
var528 = NEW_nit__parser__ReduceAction292(&type_nit__parser__ReduceAction292);
{
((void(*)(val* self, long p0))(var528->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var528, 128l); /* goto= on <var528:ReduceAction292>*/
}
{
((void(*)(val* self))(var528->class->vft[COLOR_standard__kernel__Object__init]))(var528); /* init on <var528:ReduceAction292>*/
}
var529 = NEW_nit__parser__ReduceAction293(&type_nit__parser__ReduceAction293);
{
((void(*)(val* self, long p0))(var529->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var529, 128l); /* goto= on <var529:ReduceAction293>*/
}
{
((void(*)(val* self))(var529->class->vft[COLOR_standard__kernel__Object__init]))(var529); /* init on <var529:ReduceAction293>*/
}
var530 = NEW_nit__parser__ReduceAction294(&type_nit__parser__ReduceAction294);
{
((void(*)(val* self, long p0))(var530->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var530, 128l); /* goto= on <var530:ReduceAction294>*/
}
{
((void(*)(val* self))(var530->class->vft[COLOR_standard__kernel__Object__init]))(var530); /* init on <var530:ReduceAction294>*/
}
var531 = NEW_nit__parser__ReduceAction295(&type_nit__parser__ReduceAction295);
{
((void(*)(val* self, long p0))(var531->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var531, 128l); /* goto= on <var531:ReduceAction295>*/
}
{
((void(*)(val* self))(var531->class->vft[COLOR_standard__kernel__Object__init]))(var531); /* init on <var531:ReduceAction295>*/
}
var532 = NEW_nit__parser__ReduceAction296(&type_nit__parser__ReduceAction296);
{
((void(*)(val* self, long p0))(var532->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var532, 128l); /* goto= on <var532:ReduceAction296>*/
}
{
((void(*)(val* self))(var532->class->vft[COLOR_standard__kernel__Object__init]))(var532); /* init on <var532:ReduceAction296>*/
}
var533 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var533->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var533, 129l); /* goto= on <var533:ReduceAction157>*/
}
{
((void(*)(val* self))(var533->class->vft[COLOR_standard__kernel__Object__init]))(var533); /* init on <var533:ReduceAction157>*/
}
var534 = NEW_nit__parser__ReduceAction298(&type_nit__parser__ReduceAction298);
{
((void(*)(val* self, long p0))(var534->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var534, 129l); /* goto= on <var534:ReduceAction298>*/
}
{
((void(*)(val* self))(var534->class->vft[COLOR_standard__kernel__Object__init]))(var534); /* init on <var534:ReduceAction298>*/
}
var535 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var535->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var535, 130l); /* goto= on <var535:ReduceAction157>*/
}
{
((void(*)(val* self))(var535->class->vft[COLOR_standard__kernel__Object__init]))(var535); /* init on <var535:ReduceAction157>*/
}
var536 = NEW_nit__parser__ReduceAction300(&type_nit__parser__ReduceAction300);
{
((void(*)(val* self, long p0))(var536->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var536, 130l); /* goto= on <var536:ReduceAction300>*/
}
{
((void(*)(val* self))(var536->class->vft[COLOR_standard__kernel__Object__init]))(var536); /* init on <var536:ReduceAction300>*/
}
var537 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var537->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var537, 131l); /* goto= on <var537:ReduceAction157>*/
}
{
((void(*)(val* self))(var537->class->vft[COLOR_standard__kernel__Object__init]))(var537); /* init on <var537:ReduceAction157>*/
}
var538 = NEW_nit__parser__ReduceAction302(&type_nit__parser__ReduceAction302);
{
((void(*)(val* self, long p0))(var538->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var538, 131l); /* goto= on <var538:ReduceAction302>*/
}
{
((void(*)(val* self))(var538->class->vft[COLOR_standard__kernel__Object__init]))(var538); /* init on <var538:ReduceAction302>*/
}
var539 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var539->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var539, 132l); /* goto= on <var539:ReduceAction157>*/
}
{
((void(*)(val* self))(var539->class->vft[COLOR_standard__kernel__Object__init]))(var539); /* init on <var539:ReduceAction157>*/
}
var540 = NEW_nit__parser__ReduceAction304(&type_nit__parser__ReduceAction304);
{
((void(*)(val* self, long p0))(var540->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var540, 132l); /* goto= on <var540:ReduceAction304>*/
}
{
((void(*)(val* self))(var540->class->vft[COLOR_standard__kernel__Object__init]))(var540); /* init on <var540:ReduceAction304>*/
}
var541 = NEW_nit__parser__ReduceAction305(&type_nit__parser__ReduceAction305);
{
((void(*)(val* self, long p0))(var541->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var541, 132l); /* goto= on <var541:ReduceAction305>*/
}
{
((void(*)(val* self))(var541->class->vft[COLOR_standard__kernel__Object__init]))(var541); /* init on <var541:ReduceAction305>*/
}
var542 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var542->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var542, 133l); /* goto= on <var542:ReduceAction157>*/
}
{
((void(*)(val* self))(var542->class->vft[COLOR_standard__kernel__Object__init]))(var542); /* init on <var542:ReduceAction157>*/
}
var543 = NEW_nit__parser__ReduceAction307(&type_nit__parser__ReduceAction307);
{
((void(*)(val* self, long p0))(var543->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var543, 133l); /* goto= on <var543:ReduceAction307>*/
}
{
((void(*)(val* self))(var543->class->vft[COLOR_standard__kernel__Object__init]))(var543); /* init on <var543:ReduceAction307>*/
}
var544 = NEW_nit__parser__ReduceAction308(&type_nit__parser__ReduceAction308);
{
((void(*)(val* self, long p0))(var544->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var544, 133l); /* goto= on <var544:ReduceAction308>*/
}
{
((void(*)(val* self))(var544->class->vft[COLOR_standard__kernel__Object__init]))(var544); /* init on <var544:ReduceAction308>*/
}
var545 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var545->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var545, 134l); /* goto= on <var545:ReduceAction157>*/
}
{
((void(*)(val* self))(var545->class->vft[COLOR_standard__kernel__Object__init]))(var545); /* init on <var545:ReduceAction157>*/
}
var546 = NEW_nit__parser__ReduceAction310(&type_nit__parser__ReduceAction310);
{
((void(*)(val* self, long p0))(var546->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var546, 134l); /* goto= on <var546:ReduceAction310>*/
}
{
((void(*)(val* self))(var546->class->vft[COLOR_standard__kernel__Object__init]))(var546); /* init on <var546:ReduceAction310>*/
}
var547 = NEW_nit__parser__ReduceAction311(&type_nit__parser__ReduceAction311);
{
((void(*)(val* self, long p0))(var547->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var547, 134l); /* goto= on <var547:ReduceAction311>*/
}
{
((void(*)(val* self))(var547->class->vft[COLOR_standard__kernel__Object__init]))(var547); /* init on <var547:ReduceAction311>*/
}
var548 = NEW_nit__parser__ReduceAction312(&type_nit__parser__ReduceAction312);
{
((void(*)(val* self, long p0))(var548->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var548, 134l); /* goto= on <var548:ReduceAction312>*/
}
{
((void(*)(val* self))(var548->class->vft[COLOR_standard__kernel__Object__init]))(var548); /* init on <var548:ReduceAction312>*/
}
var549 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var549->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var549, 135l); /* goto= on <var549:ReduceAction157>*/
}
{
((void(*)(val* self))(var549->class->vft[COLOR_standard__kernel__Object__init]))(var549); /* init on <var549:ReduceAction157>*/
}
var550 = NEW_nit__parser__ReduceAction314(&type_nit__parser__ReduceAction314);
{
((void(*)(val* self, long p0))(var550->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var550, 135l); /* goto= on <var550:ReduceAction314>*/
}
{
((void(*)(val* self))(var550->class->vft[COLOR_standard__kernel__Object__init]))(var550); /* init on <var550:ReduceAction314>*/
}
var551 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var551->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var551, 136l); /* goto= on <var551:ReduceAction157>*/
}
{
((void(*)(val* self))(var551->class->vft[COLOR_standard__kernel__Object__init]))(var551); /* init on <var551:ReduceAction157>*/
}
var552 = NEW_nit__parser__ReduceAction316(&type_nit__parser__ReduceAction316);
{
((void(*)(val* self, long p0))(var552->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var552, 136l); /* goto= on <var552:ReduceAction316>*/
}
{
((void(*)(val* self))(var552->class->vft[COLOR_standard__kernel__Object__init]))(var552); /* init on <var552:ReduceAction316>*/
}
var553 = NEW_nit__parser__ReduceAction317(&type_nit__parser__ReduceAction317);
{
((void(*)(val* self, long p0))(var553->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var553, 136l); /* goto= on <var553:ReduceAction317>*/
}
{
((void(*)(val* self))(var553->class->vft[COLOR_standard__kernel__Object__init]))(var553); /* init on <var553:ReduceAction317>*/
}
var554 = NEW_nit__parser__ReduceAction318(&type_nit__parser__ReduceAction318);
{
((void(*)(val* self, long p0))(var554->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var554, 136l); /* goto= on <var554:ReduceAction318>*/
}
{
((void(*)(val* self))(var554->class->vft[COLOR_standard__kernel__Object__init]))(var554); /* init on <var554:ReduceAction318>*/
}
var555 = NEW_nit__parser__ReduceAction319(&type_nit__parser__ReduceAction319);
{
((void(*)(val* self, long p0))(var555->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var555, 136l); /* goto= on <var555:ReduceAction319>*/
}
{
((void(*)(val* self))(var555->class->vft[COLOR_standard__kernel__Object__init]))(var555); /* init on <var555:ReduceAction319>*/
}
var556 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var556->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var556, 137l); /* goto= on <var556:ReduceAction157>*/
}
{
((void(*)(val* self))(var556->class->vft[COLOR_standard__kernel__Object__init]))(var556); /* init on <var556:ReduceAction157>*/
}
var557 = NEW_nit__parser__ReduceAction321(&type_nit__parser__ReduceAction321);
{
((void(*)(val* self, long p0))(var557->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var557, 137l); /* goto= on <var557:ReduceAction321>*/
}
{
((void(*)(val* self))(var557->class->vft[COLOR_standard__kernel__Object__init]))(var557); /* init on <var557:ReduceAction321>*/
}
var558 = NEW_nit__parser__ReduceAction322(&type_nit__parser__ReduceAction322);
{
((void(*)(val* self, long p0))(var558->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var558, 137l); /* goto= on <var558:ReduceAction322>*/
}
{
((void(*)(val* self))(var558->class->vft[COLOR_standard__kernel__Object__init]))(var558); /* init on <var558:ReduceAction322>*/
}
var559 = NEW_nit__parser__ReduceAction323(&type_nit__parser__ReduceAction323);
{
((void(*)(val* self, long p0))(var559->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var559, 137l); /* goto= on <var559:ReduceAction323>*/
}
{
((void(*)(val* self))(var559->class->vft[COLOR_standard__kernel__Object__init]))(var559); /* init on <var559:ReduceAction323>*/
}
var560 = NEW_nit__parser__ReduceAction324(&type_nit__parser__ReduceAction324);
{
((void(*)(val* self, long p0))(var560->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var560, 137l); /* goto= on <var560:ReduceAction324>*/
}
{
((void(*)(val* self))(var560->class->vft[COLOR_standard__kernel__Object__init]))(var560); /* init on <var560:ReduceAction324>*/
}
var561 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var561->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var561, 138l); /* goto= on <var561:ReduceAction157>*/
}
{
((void(*)(val* self))(var561->class->vft[COLOR_standard__kernel__Object__init]))(var561); /* init on <var561:ReduceAction157>*/
}
var562 = NEW_nit__parser__ReduceAction326(&type_nit__parser__ReduceAction326);
{
((void(*)(val* self, long p0))(var562->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var562, 138l); /* goto= on <var562:ReduceAction326>*/
}
{
((void(*)(val* self))(var562->class->vft[COLOR_standard__kernel__Object__init]))(var562); /* init on <var562:ReduceAction326>*/
}
var563 = NEW_nit__parser__ReduceAction327(&type_nit__parser__ReduceAction327);
{
((void(*)(val* self, long p0))(var563->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var563, 138l); /* goto= on <var563:ReduceAction327>*/
}
{
((void(*)(val* self))(var563->class->vft[COLOR_standard__kernel__Object__init]))(var563); /* init on <var563:ReduceAction327>*/
}
var564 = NEW_nit__parser__ReduceAction181(&type_nit__parser__ReduceAction181);
{
((void(*)(val* self, long p0))(var564->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var564, 138l); /* goto= on <var564:ReduceAction181>*/
}
{
((void(*)(val* self))(var564->class->vft[COLOR_standard__kernel__Object__init]))(var564); /* init on <var564:ReduceAction181>*/
}
var565 = NEW_nit__parser__ReduceAction185(&type_nit__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var565->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var565, 138l); /* goto= on <var565:ReduceAction185>*/
}
{
((void(*)(val* self))(var565->class->vft[COLOR_standard__kernel__Object__init]))(var565); /* init on <var565:ReduceAction185>*/
}
var566 = NEW_nit__parser__ReduceAction329(&type_nit__parser__ReduceAction329);
{
((void(*)(val* self, long p0))(var566->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var566, 138l); /* goto= on <var566:ReduceAction329>*/
}
{
((void(*)(val* self))(var566->class->vft[COLOR_standard__kernel__Object__init]))(var566); /* init on <var566:ReduceAction329>*/
}
var567 = NEW_nit__parser__ReduceAction337(&type_nit__parser__ReduceAction337);
{
((void(*)(val* self, long p0))(var567->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var567, 138l); /* goto= on <var567:ReduceAction337>*/
}
{
((void(*)(val* self))(var567->class->vft[COLOR_standard__kernel__Object__init]))(var567); /* init on <var567:ReduceAction337>*/
}
var568 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var568->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var568, 138l); /* goto= on <var568:ReduceAction182>*/
}
{
((void(*)(val* self))(var568->class->vft[COLOR_standard__kernel__Object__init]))(var568); /* init on <var568:ReduceAction182>*/
}
var569 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var569->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var569, 138l); /* goto= on <var569:ReduceAction186>*/
}
{
((void(*)(val* self))(var569->class->vft[COLOR_standard__kernel__Object__init]))(var569); /* init on <var569:ReduceAction186>*/
}
var570 = NEW_nit__parser__ReduceAction331(&type_nit__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var570->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var570, 138l); /* goto= on <var570:ReduceAction331>*/
}
{
((void(*)(val* self))(var570->class->vft[COLOR_standard__kernel__Object__init]))(var570); /* init on <var570:ReduceAction331>*/
}
var571 = NEW_nit__parser__ReduceAction339(&type_nit__parser__ReduceAction339);
{
((void(*)(val* self, long p0))(var571->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var571, 138l); /* goto= on <var571:ReduceAction339>*/
}
{
((void(*)(val* self))(var571->class->vft[COLOR_standard__kernel__Object__init]))(var571); /* init on <var571:ReduceAction339>*/
}
var572 = NEW_nit__parser__ReduceAction183(&type_nit__parser__ReduceAction183);
{
((void(*)(val* self, long p0))(var572->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var572, 138l); /* goto= on <var572:ReduceAction183>*/
}
{
((void(*)(val* self))(var572->class->vft[COLOR_standard__kernel__Object__init]))(var572); /* init on <var572:ReduceAction183>*/
}
var573 = NEW_nit__parser__ReduceAction187(&type_nit__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var573->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var573, 138l); /* goto= on <var573:ReduceAction187>*/
}
{
((void(*)(val* self))(var573->class->vft[COLOR_standard__kernel__Object__init]))(var573); /* init on <var573:ReduceAction187>*/
}
var574 = NEW_nit__parser__ReduceAction333(&type_nit__parser__ReduceAction333);
{
((void(*)(val* self, long p0))(var574->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var574, 138l); /* goto= on <var574:ReduceAction333>*/
}
{
((void(*)(val* self))(var574->class->vft[COLOR_standard__kernel__Object__init]))(var574); /* init on <var574:ReduceAction333>*/
}
var575 = NEW_nit__parser__ReduceAction341(&type_nit__parser__ReduceAction341);
{
((void(*)(val* self, long p0))(var575->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var575, 138l); /* goto= on <var575:ReduceAction341>*/
}
{
((void(*)(val* self))(var575->class->vft[COLOR_standard__kernel__Object__init]))(var575); /* init on <var575:ReduceAction341>*/
}
var576 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var576->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var576, 138l); /* goto= on <var576:ReduceAction182>*/
}
{
((void(*)(val* self))(var576->class->vft[COLOR_standard__kernel__Object__init]))(var576); /* init on <var576:ReduceAction182>*/
}
var577 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var577->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var577, 138l); /* goto= on <var577:ReduceAction186>*/
}
{
((void(*)(val* self))(var577->class->vft[COLOR_standard__kernel__Object__init]))(var577); /* init on <var577:ReduceAction186>*/
}
var578 = NEW_nit__parser__ReduceAction331(&type_nit__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var578->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var578, 138l); /* goto= on <var578:ReduceAction331>*/
}
{
((void(*)(val* self))(var578->class->vft[COLOR_standard__kernel__Object__init]))(var578); /* init on <var578:ReduceAction331>*/
}
var579 = NEW_nit__parser__ReduceAction339(&type_nit__parser__ReduceAction339);
{
((void(*)(val* self, long p0))(var579->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var579, 138l); /* goto= on <var579:ReduceAction339>*/
}
{
((void(*)(val* self))(var579->class->vft[COLOR_standard__kernel__Object__init]))(var579); /* init on <var579:ReduceAction339>*/
}
var580 = NEW_nit__parser__ReduceAction189(&type_nit__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var580->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var580, 138l); /* goto= on <var580:ReduceAction189>*/
}
{
((void(*)(val* self))(var580->class->vft[COLOR_standard__kernel__Object__init]))(var580); /* init on <var580:ReduceAction189>*/
}
var581 = NEW_nit__parser__ReduceAction345(&type_nit__parser__ReduceAction345);
{
((void(*)(val* self, long p0))(var581->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var581, 138l); /* goto= on <var581:ReduceAction345>*/
}
{
((void(*)(val* self))(var581->class->vft[COLOR_standard__kernel__Object__init]))(var581); /* init on <var581:ReduceAction345>*/
}
var582 = NEW_nit__parser__ReduceAction190(&type_nit__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var582->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var582, 138l); /* goto= on <var582:ReduceAction190>*/
}
{
((void(*)(val* self))(var582->class->vft[COLOR_standard__kernel__Object__init]))(var582); /* init on <var582:ReduceAction190>*/
}
var583 = NEW_nit__parser__ReduceAction191(&type_nit__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var583->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var583, 138l); /* goto= on <var583:ReduceAction191>*/
}
{
((void(*)(val* self))(var583->class->vft[COLOR_standard__kernel__Object__init]))(var583); /* init on <var583:ReduceAction191>*/
}
var584 = NEW_nit__parser__ReduceAction347(&type_nit__parser__ReduceAction347);
{
((void(*)(val* self, long p0))(var584->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var584, 138l); /* goto= on <var584:ReduceAction347>*/
}
{
((void(*)(val* self))(var584->class->vft[COLOR_standard__kernel__Object__init]))(var584); /* init on <var584:ReduceAction347>*/
}
var585 = NEW_nit__parser__ReduceAction349(&type_nit__parser__ReduceAction349);
{
((void(*)(val* self, long p0))(var585->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var585, 138l); /* goto= on <var585:ReduceAction349>*/
}
{
((void(*)(val* self))(var585->class->vft[COLOR_standard__kernel__Object__init]))(var585); /* init on <var585:ReduceAction349>*/
}
var586 = NEW_nit__parser__ReduceAction351(&type_nit__parser__ReduceAction351);
{
((void(*)(val* self, long p0))(var586->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var586, 138l); /* goto= on <var586:ReduceAction351>*/
}
{
((void(*)(val* self))(var586->class->vft[COLOR_standard__kernel__Object__init]))(var586); /* init on <var586:ReduceAction351>*/
}
var587 = NEW_nit__parser__ReduceAction352(&type_nit__parser__ReduceAction352);
{
((void(*)(val* self, long p0))(var587->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var587, 138l); /* goto= on <var587:ReduceAction352>*/
}
{
((void(*)(val* self))(var587->class->vft[COLOR_standard__kernel__Object__init]))(var587); /* init on <var587:ReduceAction352>*/
}
var588 = NEW_nit__parser__ReduceAction353(&type_nit__parser__ReduceAction353);
{
((void(*)(val* self, long p0))(var588->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var588, 138l); /* goto= on <var588:ReduceAction353>*/
}
{
((void(*)(val* self))(var588->class->vft[COLOR_standard__kernel__Object__init]))(var588); /* init on <var588:ReduceAction353>*/
}
var589 = NEW_nit__parser__ReduceAction354(&type_nit__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var589->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var589, 138l); /* goto= on <var589:ReduceAction354>*/
}
{
((void(*)(val* self))(var589->class->vft[COLOR_standard__kernel__Object__init]))(var589); /* init on <var589:ReduceAction354>*/
}
var590 = NEW_nit__parser__ReduceAction355(&type_nit__parser__ReduceAction355);
{
((void(*)(val* self, long p0))(var590->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var590, 138l); /* goto= on <var590:ReduceAction355>*/
}
{
((void(*)(val* self))(var590->class->vft[COLOR_standard__kernel__Object__init]))(var590); /* init on <var590:ReduceAction355>*/
}
var591 = NEW_nit__parser__ReduceAction356(&type_nit__parser__ReduceAction356);
{
((void(*)(val* self, long p0))(var591->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var591, 138l); /* goto= on <var591:ReduceAction356>*/
}
{
((void(*)(val* self))(var591->class->vft[COLOR_standard__kernel__Object__init]))(var591); /* init on <var591:ReduceAction356>*/
}
var592 = NEW_nit__parser__ReduceAction353(&type_nit__parser__ReduceAction353);
{
((void(*)(val* self, long p0))(var592->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var592, 138l); /* goto= on <var592:ReduceAction353>*/
}
{
((void(*)(val* self))(var592->class->vft[COLOR_standard__kernel__Object__init]))(var592); /* init on <var592:ReduceAction353>*/
}
var593 = NEW_nit__parser__ReduceAction354(&type_nit__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var593->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var593, 138l); /* goto= on <var593:ReduceAction354>*/
}
{
((void(*)(val* self))(var593->class->vft[COLOR_standard__kernel__Object__init]))(var593); /* init on <var593:ReduceAction354>*/
}
var594 = NEW_nit__parser__ReduceAction359(&type_nit__parser__ReduceAction359);
{
((void(*)(val* self, long p0))(var594->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var594, 138l); /* goto= on <var594:ReduceAction359>*/
}
{
((void(*)(val* self))(var594->class->vft[COLOR_standard__kernel__Object__init]))(var594); /* init on <var594:ReduceAction359>*/
}
var595 = NEW_nit__parser__ReduceAction360(&type_nit__parser__ReduceAction360);
{
((void(*)(val* self, long p0))(var595->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var595, 138l); /* goto= on <var595:ReduceAction360>*/
}
{
((void(*)(val* self))(var595->class->vft[COLOR_standard__kernel__Object__init]))(var595); /* init on <var595:ReduceAction360>*/
}
var596 = NEW_nit__parser__ReduceAction361(&type_nit__parser__ReduceAction361);
{
((void(*)(val* self, long p0))(var596->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var596, 138l); /* goto= on <var596:ReduceAction361>*/
}
{
((void(*)(val* self))(var596->class->vft[COLOR_standard__kernel__Object__init]))(var596); /* init on <var596:ReduceAction361>*/
}
var597 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var597->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var597, 139l); /* goto= on <var597:ReduceAction157>*/
}
{
((void(*)(val* self))(var597->class->vft[COLOR_standard__kernel__Object__init]))(var597); /* init on <var597:ReduceAction157>*/
}
var598 = NEW_nit__parser__ReduceAction363(&type_nit__parser__ReduceAction363);
{
((void(*)(val* self, long p0))(var598->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var598, 139l); /* goto= on <var598:ReduceAction363>*/
}
{
((void(*)(val* self))(var598->class->vft[COLOR_standard__kernel__Object__init]))(var598); /* init on <var598:ReduceAction363>*/
}
var599 = NEW_nit__parser__ReduceAction364(&type_nit__parser__ReduceAction364);
{
((void(*)(val* self, long p0))(var599->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var599, 139l); /* goto= on <var599:ReduceAction364>*/
}
{
((void(*)(val* self))(var599->class->vft[COLOR_standard__kernel__Object__init]))(var599); /* init on <var599:ReduceAction364>*/
}
var600 = NEW_nit__parser__ReduceAction365(&type_nit__parser__ReduceAction365);
{
((void(*)(val* self, long p0))(var600->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var600, 140l); /* goto= on <var600:ReduceAction365>*/
}
{
((void(*)(val* self))(var600->class->vft[COLOR_standard__kernel__Object__init]))(var600); /* init on <var600:ReduceAction365>*/
}
var601 = NEW_nit__parser__ReduceAction366(&type_nit__parser__ReduceAction366);
{
((void(*)(val* self, long p0))(var601->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var601, 140l); /* goto= on <var601:ReduceAction366>*/
}
{
((void(*)(val* self))(var601->class->vft[COLOR_standard__kernel__Object__init]))(var601); /* init on <var601:ReduceAction366>*/
}
var602 = NEW_nit__parser__ReduceAction367(&type_nit__parser__ReduceAction367);
{
((void(*)(val* self, long p0))(var602->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var602, 140l); /* goto= on <var602:ReduceAction367>*/
}
{
((void(*)(val* self))(var602->class->vft[COLOR_standard__kernel__Object__init]))(var602); /* init on <var602:ReduceAction367>*/
}
var603 = NEW_nit__parser__ReduceAction368(&type_nit__parser__ReduceAction368);
{
((void(*)(val* self, long p0))(var603->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var603, 140l); /* goto= on <var603:ReduceAction368>*/
}
{
((void(*)(val* self))(var603->class->vft[COLOR_standard__kernel__Object__init]))(var603); /* init on <var603:ReduceAction368>*/
}
var604 = NEW_nit__parser__ReduceAction369(&type_nit__parser__ReduceAction369);
{
((void(*)(val* self, long p0))(var604->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var604, 140l); /* goto= on <var604:ReduceAction369>*/
}
{
((void(*)(val* self))(var604->class->vft[COLOR_standard__kernel__Object__init]))(var604); /* init on <var604:ReduceAction369>*/
}
var605 = NEW_nit__parser__ReduceAction370(&type_nit__parser__ReduceAction370);
{
((void(*)(val* self, long p0))(var605->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var605, 140l); /* goto= on <var605:ReduceAction370>*/
}
{
((void(*)(val* self))(var605->class->vft[COLOR_standard__kernel__Object__init]))(var605); /* init on <var605:ReduceAction370>*/
}
var606 = NEW_nit__parser__ReduceAction371(&type_nit__parser__ReduceAction371);
{
((void(*)(val* self, long p0))(var606->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var606, 140l); /* goto= on <var606:ReduceAction371>*/
}
{
((void(*)(val* self))(var606->class->vft[COLOR_standard__kernel__Object__init]))(var606); /* init on <var606:ReduceAction371>*/
}
var607 = NEW_nit__parser__ReduceAction372(&type_nit__parser__ReduceAction372);
{
((void(*)(val* self, long p0))(var607->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var607, 140l); /* goto= on <var607:ReduceAction372>*/
}
{
((void(*)(val* self))(var607->class->vft[COLOR_standard__kernel__Object__init]))(var607); /* init on <var607:ReduceAction372>*/
}
var608 = NEW_nit__parser__ReduceAction373(&type_nit__parser__ReduceAction373);
{
((void(*)(val* self, long p0))(var608->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var608, 140l); /* goto= on <var608:ReduceAction373>*/
}
{
((void(*)(val* self))(var608->class->vft[COLOR_standard__kernel__Object__init]))(var608); /* init on <var608:ReduceAction373>*/
}
var609 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var609->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var609, 140l); /* goto= on <var609:ReduceAction157>*/
}
{
((void(*)(val* self))(var609->class->vft[COLOR_standard__kernel__Object__init]))(var609); /* init on <var609:ReduceAction157>*/
}
var610 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var610->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var610, 140l); /* goto= on <var610:ReduceAction157>*/
}
{
((void(*)(val* self))(var610->class->vft[COLOR_standard__kernel__Object__init]))(var610); /* init on <var610:ReduceAction157>*/
}
var611 = NEW_nit__parser__ReduceAction144(&type_nit__parser__ReduceAction144);
{
((void(*)(val* self, long p0))(var611->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var611, 141l); /* goto= on <var611:ReduceAction144>*/
}
{
((void(*)(val* self))(var611->class->vft[COLOR_standard__kernel__Object__init]))(var611); /* init on <var611:ReduceAction144>*/
}
var612 = NEW_nit__parser__ReduceAction145(&type_nit__parser__ReduceAction145);
{
((void(*)(val* self, long p0))(var612->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var612, 141l); /* goto= on <var612:ReduceAction145>*/
}
{
((void(*)(val* self))(var612->class->vft[COLOR_standard__kernel__Object__init]))(var612); /* init on <var612:ReduceAction145>*/
}
var613 = NEW_nit__parser__ReduceAction146(&type_nit__parser__ReduceAction146);
{
((void(*)(val* self, long p0))(var613->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var613, 141l); /* goto= on <var613:ReduceAction146>*/
}
{
((void(*)(val* self))(var613->class->vft[COLOR_standard__kernel__Object__init]))(var613); /* init on <var613:ReduceAction146>*/
}
var614 = NEW_nit__parser__ReduceAction147(&type_nit__parser__ReduceAction147);
{
((void(*)(val* self, long p0))(var614->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var614, 141l); /* goto= on <var614:ReduceAction147>*/
}
{
((void(*)(val* self))(var614->class->vft[COLOR_standard__kernel__Object__init]))(var614); /* init on <var614:ReduceAction147>*/
}
var615 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var615->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var615, 142l); /* goto= on <var615:ReduceAction157>*/
}
{
((void(*)(val* self))(var615->class->vft[COLOR_standard__kernel__Object__init]))(var615); /* init on <var615:ReduceAction157>*/
}
var616 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var616->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var616, 142l); /* goto= on <var616:ReduceAction157>*/
}
{
((void(*)(val* self))(var616->class->vft[COLOR_standard__kernel__Object__init]))(var616); /* init on <var616:ReduceAction157>*/
}
var617 = NEW_nit__parser__ReduceAction167(&type_nit__parser__ReduceAction167);
{
((void(*)(val* self, long p0))(var617->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var617, 142l); /* goto= on <var617:ReduceAction167>*/
}
{
((void(*)(val* self))(var617->class->vft[COLOR_standard__kernel__Object__init]))(var617); /* init on <var617:ReduceAction167>*/
}
var618 = NEW_nit__parser__ReduceAction168(&type_nit__parser__ReduceAction168);
{
((void(*)(val* self, long p0))(var618->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var618, 142l); /* goto= on <var618:ReduceAction168>*/
}
{
((void(*)(val* self))(var618->class->vft[COLOR_standard__kernel__Object__init]))(var618); /* init on <var618:ReduceAction168>*/
}
var619 = NEW_nit__parser__ReduceAction169(&type_nit__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var619->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var619, 142l); /* goto= on <var619:ReduceAction169>*/
}
{
((void(*)(val* self))(var619->class->vft[COLOR_standard__kernel__Object__init]))(var619); /* init on <var619:ReduceAction169>*/
}
var620 = NEW_nit__parser__ReduceAction170(&type_nit__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var620->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var620, 142l); /* goto= on <var620:ReduceAction170>*/
}
{
((void(*)(val* self))(var620->class->vft[COLOR_standard__kernel__Object__init]))(var620); /* init on <var620:ReduceAction170>*/
}
var621 = NEW_nit__parser__ReduceAction171(&type_nit__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var621->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var621, 142l); /* goto= on <var621:ReduceAction171>*/
}
{
((void(*)(val* self))(var621->class->vft[COLOR_standard__kernel__Object__init]))(var621); /* init on <var621:ReduceAction171>*/
}
var622 = NEW_nit__parser__ReduceAction172(&type_nit__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var622->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var622, 142l); /* goto= on <var622:ReduceAction172>*/
}
{
((void(*)(val* self))(var622->class->vft[COLOR_standard__kernel__Object__init]))(var622); /* init on <var622:ReduceAction172>*/
}
var623 = NEW_nit__parser__ReduceAction173(&type_nit__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var623->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var623, 142l); /* goto= on <var623:ReduceAction173>*/
}
{
((void(*)(val* self))(var623->class->vft[COLOR_standard__kernel__Object__init]))(var623); /* init on <var623:ReduceAction173>*/
}
var624 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var624->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var624, 142l); /* goto= on <var624:ReduceAction157>*/
}
{
((void(*)(val* self))(var624->class->vft[COLOR_standard__kernel__Object__init]))(var624); /* init on <var624:ReduceAction157>*/
}
var625 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var625->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var625, 142l); /* goto= on <var625:ReduceAction157>*/
}
{
((void(*)(val* self))(var625->class->vft[COLOR_standard__kernel__Object__init]))(var625); /* init on <var625:ReduceAction157>*/
}
var626 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var626->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var626, 142l); /* goto= on <var626:ReduceAction157>*/
}
{
((void(*)(val* self))(var626->class->vft[COLOR_standard__kernel__Object__init]))(var626); /* init on <var626:ReduceAction157>*/
}
var627 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var627->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var627, 142l); /* goto= on <var627:ReduceAction157>*/
}
{
((void(*)(val* self))(var627->class->vft[COLOR_standard__kernel__Object__init]))(var627); /* init on <var627:ReduceAction157>*/
}
var628 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var628->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var628, 142l); /* goto= on <var628:ReduceAction157>*/
}
{
((void(*)(val* self))(var628->class->vft[COLOR_standard__kernel__Object__init]))(var628); /* init on <var628:ReduceAction157>*/
}
var629 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var629->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var629, 142l); /* goto= on <var629:ReduceAction157>*/
}
{
((void(*)(val* self))(var629->class->vft[COLOR_standard__kernel__Object__init]))(var629); /* init on <var629:ReduceAction157>*/
}
var630 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var630->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var630, 142l); /* goto= on <var630:ReduceAction157>*/
}
{
((void(*)(val* self))(var630->class->vft[COLOR_standard__kernel__Object__init]))(var630); /* init on <var630:ReduceAction157>*/
}
var631 = NEW_nit__parser__ReduceAction181(&type_nit__parser__ReduceAction181);
{
((void(*)(val* self, long p0))(var631->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var631, 142l); /* goto= on <var631:ReduceAction181>*/
}
{
((void(*)(val* self))(var631->class->vft[COLOR_standard__kernel__Object__init]))(var631); /* init on <var631:ReduceAction181>*/
}
var632 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var632->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var632, 142l); /* goto= on <var632:ReduceAction182>*/
}
{
((void(*)(val* self))(var632->class->vft[COLOR_standard__kernel__Object__init]))(var632); /* init on <var632:ReduceAction182>*/
}
var633 = NEW_nit__parser__ReduceAction183(&type_nit__parser__ReduceAction183);
{
((void(*)(val* self, long p0))(var633->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var633, 142l); /* goto= on <var633:ReduceAction183>*/
}
{
((void(*)(val* self))(var633->class->vft[COLOR_standard__kernel__Object__init]))(var633); /* init on <var633:ReduceAction183>*/
}
var634 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var634->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var634, 142l); /* goto= on <var634:ReduceAction182>*/
}
{
((void(*)(val* self))(var634->class->vft[COLOR_standard__kernel__Object__init]))(var634); /* init on <var634:ReduceAction182>*/
}
var635 = NEW_nit__parser__ReduceAction185(&type_nit__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var635->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var635, 142l); /* goto= on <var635:ReduceAction185>*/
}
{
((void(*)(val* self))(var635->class->vft[COLOR_standard__kernel__Object__init]))(var635); /* init on <var635:ReduceAction185>*/
}
var636 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var636->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var636, 142l); /* goto= on <var636:ReduceAction186>*/
}
{
((void(*)(val* self))(var636->class->vft[COLOR_standard__kernel__Object__init]))(var636); /* init on <var636:ReduceAction186>*/
}
var637 = NEW_nit__parser__ReduceAction187(&type_nit__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var637->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var637, 142l); /* goto= on <var637:ReduceAction187>*/
}
{
((void(*)(val* self))(var637->class->vft[COLOR_standard__kernel__Object__init]))(var637); /* init on <var637:ReduceAction187>*/
}
var638 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var638->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var638, 142l); /* goto= on <var638:ReduceAction186>*/
}
{
((void(*)(val* self))(var638->class->vft[COLOR_standard__kernel__Object__init]))(var638); /* init on <var638:ReduceAction186>*/
}
var639 = NEW_nit__parser__ReduceAction189(&type_nit__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var639->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var639, 142l); /* goto= on <var639:ReduceAction189>*/
}
{
((void(*)(val* self))(var639->class->vft[COLOR_standard__kernel__Object__init]))(var639); /* init on <var639:ReduceAction189>*/
}
var640 = NEW_nit__parser__ReduceAction190(&type_nit__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var640->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var640, 142l); /* goto= on <var640:ReduceAction190>*/
}
{
((void(*)(val* self))(var640->class->vft[COLOR_standard__kernel__Object__init]))(var640); /* init on <var640:ReduceAction190>*/
}
var641 = NEW_nit__parser__ReduceAction191(&type_nit__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var641->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var641, 142l); /* goto= on <var641:ReduceAction191>*/
}
{
((void(*)(val* self))(var641->class->vft[COLOR_standard__kernel__Object__init]))(var641); /* init on <var641:ReduceAction191>*/
}
var642 = NEW_nit__parser__ReduceAction192(&type_nit__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var642->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var642, 142l); /* goto= on <var642:ReduceAction192>*/
}
{
((void(*)(val* self))(var642->class->vft[COLOR_standard__kernel__Object__init]))(var642); /* init on <var642:ReduceAction192>*/
}
var643 = NEW_nit__parser__ReduceAction193(&type_nit__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var643->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var643, 142l); /* goto= on <var643:ReduceAction193>*/
}
{
((void(*)(val* self))(var643->class->vft[COLOR_standard__kernel__Object__init]))(var643); /* init on <var643:ReduceAction193>*/
}
var644 = NEW_nit__parser__ReduceAction192(&type_nit__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var644->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var644, 142l); /* goto= on <var644:ReduceAction192>*/
}
{
((void(*)(val* self))(var644->class->vft[COLOR_standard__kernel__Object__init]))(var644); /* init on <var644:ReduceAction192>*/
}
var645 = NEW_nit__parser__ReduceAction195(&type_nit__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var645->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var645, 142l); /* goto= on <var645:ReduceAction195>*/
}
{
((void(*)(val* self))(var645->class->vft[COLOR_standard__kernel__Object__init]))(var645); /* init on <var645:ReduceAction195>*/
}
var646 = NEW_nit__parser__ReduceAction196(&type_nit__parser__ReduceAction196);
{
((void(*)(val* self, long p0))(var646->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var646, 142l); /* goto= on <var646:ReduceAction196>*/
}
{
((void(*)(val* self))(var646->class->vft[COLOR_standard__kernel__Object__init]))(var646); /* init on <var646:ReduceAction196>*/
}
var647 = NEW_nit__parser__ReduceAction195(&type_nit__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var647->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var647, 142l); /* goto= on <var647:ReduceAction195>*/
}
{
((void(*)(val* self))(var647->class->vft[COLOR_standard__kernel__Object__init]))(var647); /* init on <var647:ReduceAction195>*/
}
var648 = NEW_nit__parser__ReduceAction198(&type_nit__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var648->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var648, 142l); /* goto= on <var648:ReduceAction198>*/
}
{
((void(*)(val* self))(var648->class->vft[COLOR_standard__kernel__Object__init]))(var648); /* init on <var648:ReduceAction198>*/
}
var649 = NEW_nit__parser__ReduceAction205(&type_nit__parser__ReduceAction205);
{
((void(*)(val* self, long p0))(var649->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var649, 143l); /* goto= on <var649:ReduceAction205>*/
}
{
((void(*)(val* self))(var649->class->vft[COLOR_standard__kernel__Object__init]))(var649); /* init on <var649:ReduceAction205>*/
}
var650 = NEW_nit__parser__ReduceAction206(&type_nit__parser__ReduceAction206);
{
((void(*)(val* self, long p0))(var650->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var650, 143l); /* goto= on <var650:ReduceAction206>*/
}
{
((void(*)(val* self))(var650->class->vft[COLOR_standard__kernel__Object__init]))(var650); /* init on <var650:ReduceAction206>*/
}
var651 = NEW_nit__parser__ReduceAction207(&type_nit__parser__ReduceAction207);
{
((void(*)(val* self, long p0))(var651->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var651, 143l); /* goto= on <var651:ReduceAction207>*/
}
{
((void(*)(val* self))(var651->class->vft[COLOR_standard__kernel__Object__init]))(var651); /* init on <var651:ReduceAction207>*/
}
var652 = NEW_nit__parser__ReduceAction208(&type_nit__parser__ReduceAction208);
{
((void(*)(val* self, long p0))(var652->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var652, 143l); /* goto= on <var652:ReduceAction208>*/
}
{
((void(*)(val* self))(var652->class->vft[COLOR_standard__kernel__Object__init]))(var652); /* init on <var652:ReduceAction208>*/
}
var653 = NEW_nit__parser__ReduceAction209(&type_nit__parser__ReduceAction209);
{
((void(*)(val* self, long p0))(var653->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var653, 143l); /* goto= on <var653:ReduceAction209>*/
}
{
((void(*)(val* self))(var653->class->vft[COLOR_standard__kernel__Object__init]))(var653); /* init on <var653:ReduceAction209>*/
}
var654 = NEW_nit__parser__ReduceAction210(&type_nit__parser__ReduceAction210);
{
((void(*)(val* self, long p0))(var654->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var654, 143l); /* goto= on <var654:ReduceAction210>*/
}
{
((void(*)(val* self))(var654->class->vft[COLOR_standard__kernel__Object__init]))(var654); /* init on <var654:ReduceAction210>*/
}
var655 = NEW_nit__parser__ReduceAction211(&type_nit__parser__ReduceAction211);
{
((void(*)(val* self, long p0))(var655->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var655, 143l); /* goto= on <var655:ReduceAction211>*/
}
{
((void(*)(val* self))(var655->class->vft[COLOR_standard__kernel__Object__init]))(var655); /* init on <var655:ReduceAction211>*/
}
var656 = NEW_nit__parser__ReduceAction212(&type_nit__parser__ReduceAction212);
{
((void(*)(val* self, long p0))(var656->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var656, 143l); /* goto= on <var656:ReduceAction212>*/
}
{
((void(*)(val* self))(var656->class->vft[COLOR_standard__kernel__Object__init]))(var656); /* init on <var656:ReduceAction212>*/
}
var657 = NEW_nit__parser__ReduceAction209(&type_nit__parser__ReduceAction209);
{
((void(*)(val* self, long p0))(var657->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var657, 143l); /* goto= on <var657:ReduceAction209>*/
}
{
((void(*)(val* self))(var657->class->vft[COLOR_standard__kernel__Object__init]))(var657); /* init on <var657:ReduceAction209>*/
}
var658 = NEW_nit__parser__ReduceAction210(&type_nit__parser__ReduceAction210);
{
((void(*)(val* self, long p0))(var658->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var658, 143l); /* goto= on <var658:ReduceAction210>*/
}
{
((void(*)(val* self))(var658->class->vft[COLOR_standard__kernel__Object__init]))(var658); /* init on <var658:ReduceAction210>*/
}
var659 = NEW_nit__parser__ReduceAction215(&type_nit__parser__ReduceAction215);
{
((void(*)(val* self, long p0))(var659->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var659, 143l); /* goto= on <var659:ReduceAction215>*/
}
{
((void(*)(val* self))(var659->class->vft[COLOR_standard__kernel__Object__init]))(var659); /* init on <var659:ReduceAction215>*/
}
var660 = NEW_nit__parser__ReduceAction216(&type_nit__parser__ReduceAction216);
{
((void(*)(val* self, long p0))(var660->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var660, 143l); /* goto= on <var660:ReduceAction216>*/
}
{
((void(*)(val* self))(var660->class->vft[COLOR_standard__kernel__Object__init]))(var660); /* init on <var660:ReduceAction216>*/
}
var661 = NEW_nit__parser__ReduceAction217(&type_nit__parser__ReduceAction217);
{
((void(*)(val* self, long p0))(var661->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var661, 143l); /* goto= on <var661:ReduceAction217>*/
}
{
((void(*)(val* self))(var661->class->vft[COLOR_standard__kernel__Object__init]))(var661); /* init on <var661:ReduceAction217>*/
}
var662 = NEW_nit__parser__ReduceAction218(&type_nit__parser__ReduceAction218);
{
((void(*)(val* self, long p0))(var662->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var662, 143l); /* goto= on <var662:ReduceAction218>*/
}
{
((void(*)(val* self))(var662->class->vft[COLOR_standard__kernel__Object__init]))(var662); /* init on <var662:ReduceAction218>*/
}
var663 = NEW_nit__parser__ReduceAction219(&type_nit__parser__ReduceAction219);
{
((void(*)(val* self, long p0))(var663->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var663, 143l); /* goto= on <var663:ReduceAction219>*/
}
{
((void(*)(val* self))(var663->class->vft[COLOR_standard__kernel__Object__init]))(var663); /* init on <var663:ReduceAction219>*/
}
var664 = NEW_nit__parser__ReduceAction220(&type_nit__parser__ReduceAction220);
{
((void(*)(val* self, long p0))(var664->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var664, 143l); /* goto= on <var664:ReduceAction220>*/
}
{
((void(*)(val* self))(var664->class->vft[COLOR_standard__kernel__Object__init]))(var664); /* init on <var664:ReduceAction220>*/
}
var665 = NEW_nit__parser__ReduceAction217(&type_nit__parser__ReduceAction217);
{
((void(*)(val* self, long p0))(var665->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var665, 143l); /* goto= on <var665:ReduceAction217>*/
}
{
((void(*)(val* self))(var665->class->vft[COLOR_standard__kernel__Object__init]))(var665); /* init on <var665:ReduceAction217>*/
}
var666 = NEW_nit__parser__ReduceAction218(&type_nit__parser__ReduceAction218);
{
((void(*)(val* self, long p0))(var666->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var666, 143l); /* goto= on <var666:ReduceAction218>*/
}
{
((void(*)(val* self))(var666->class->vft[COLOR_standard__kernel__Object__init]))(var666); /* init on <var666:ReduceAction218>*/
}
var667 = NEW_nit__parser__ReduceAction223(&type_nit__parser__ReduceAction223);
{
((void(*)(val* self, long p0))(var667->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var667, 143l); /* goto= on <var667:ReduceAction223>*/
}
{
((void(*)(val* self))(var667->class->vft[COLOR_standard__kernel__Object__init]))(var667); /* init on <var667:ReduceAction223>*/
}
var668 = NEW_nit__parser__ReduceAction224(&type_nit__parser__ReduceAction224);
{
((void(*)(val* self, long p0))(var668->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var668, 143l); /* goto= on <var668:ReduceAction224>*/
}
{
((void(*)(val* self))(var668->class->vft[COLOR_standard__kernel__Object__init]))(var668); /* init on <var668:ReduceAction224>*/
}
var669 = NEW_nit__parser__ReduceAction225(&type_nit__parser__ReduceAction225);
{
((void(*)(val* self, long p0))(var669->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var669, 143l); /* goto= on <var669:ReduceAction225>*/
}
{
((void(*)(val* self))(var669->class->vft[COLOR_standard__kernel__Object__init]))(var669); /* init on <var669:ReduceAction225>*/
}
var670 = NEW_nit__parser__ReduceAction226(&type_nit__parser__ReduceAction226);
{
((void(*)(val* self, long p0))(var670->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var670, 143l); /* goto= on <var670:ReduceAction226>*/
}
{
((void(*)(val* self))(var670->class->vft[COLOR_standard__kernel__Object__init]))(var670); /* init on <var670:ReduceAction226>*/
}
var671 = NEW_nit__parser__ReduceAction227(&type_nit__parser__ReduceAction227);
{
((void(*)(val* self, long p0))(var671->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var671, 143l); /* goto= on <var671:ReduceAction227>*/
}
{
((void(*)(val* self))(var671->class->vft[COLOR_standard__kernel__Object__init]))(var671); /* init on <var671:ReduceAction227>*/
}
var672 = NEW_nit__parser__ReduceAction228(&type_nit__parser__ReduceAction228);
{
((void(*)(val* self, long p0))(var672->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var672, 143l); /* goto= on <var672:ReduceAction228>*/
}
{
((void(*)(val* self))(var672->class->vft[COLOR_standard__kernel__Object__init]))(var672); /* init on <var672:ReduceAction228>*/
}
var673 = NEW_nit__parser__ReduceAction229(&type_nit__parser__ReduceAction229);
{
((void(*)(val* self, long p0))(var673->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var673, 143l); /* goto= on <var673:ReduceAction229>*/
}
{
((void(*)(val* self))(var673->class->vft[COLOR_standard__kernel__Object__init]))(var673); /* init on <var673:ReduceAction229>*/
}
var674 = NEW_nit__parser__ReduceAction230(&type_nit__parser__ReduceAction230);
{
((void(*)(val* self, long p0))(var674->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var674, 143l); /* goto= on <var674:ReduceAction230>*/
}
{
((void(*)(val* self))(var674->class->vft[COLOR_standard__kernel__Object__init]))(var674); /* init on <var674:ReduceAction230>*/
}
var675 = NEW_nit__parser__ReduceAction231(&type_nit__parser__ReduceAction231);
{
((void(*)(val* self, long p0))(var675->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var675, 143l); /* goto= on <var675:ReduceAction231>*/
}
{
((void(*)(val* self))(var675->class->vft[COLOR_standard__kernel__Object__init]))(var675); /* init on <var675:ReduceAction231>*/
}
var676 = NEW_nit__parser__ReduceAction228(&type_nit__parser__ReduceAction228);
{
((void(*)(val* self, long p0))(var676->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var676, 143l); /* goto= on <var676:ReduceAction228>*/
}
{
((void(*)(val* self))(var676->class->vft[COLOR_standard__kernel__Object__init]))(var676); /* init on <var676:ReduceAction228>*/
}
var677 = NEW_nit__parser__ReduceAction229(&type_nit__parser__ReduceAction229);
{
((void(*)(val* self, long p0))(var677->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var677, 143l); /* goto= on <var677:ReduceAction229>*/
}
{
((void(*)(val* self))(var677->class->vft[COLOR_standard__kernel__Object__init]))(var677); /* init on <var677:ReduceAction229>*/
}
var678 = NEW_nit__parser__ReduceAction234(&type_nit__parser__ReduceAction234);
{
((void(*)(val* self, long p0))(var678->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var678, 143l); /* goto= on <var678:ReduceAction234>*/
}
{
((void(*)(val* self))(var678->class->vft[COLOR_standard__kernel__Object__init]))(var678); /* init on <var678:ReduceAction234>*/
}
var679 = NEW_nit__parser__ReduceAction235(&type_nit__parser__ReduceAction235);
{
((void(*)(val* self, long p0))(var679->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var679, 143l); /* goto= on <var679:ReduceAction235>*/
}
{
((void(*)(val* self))(var679->class->vft[COLOR_standard__kernel__Object__init]))(var679); /* init on <var679:ReduceAction235>*/
}
var680 = NEW_nit__parser__ReduceAction236(&type_nit__parser__ReduceAction236);
{
((void(*)(val* self, long p0))(var680->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var680, 143l); /* goto= on <var680:ReduceAction236>*/
}
{
((void(*)(val* self))(var680->class->vft[COLOR_standard__kernel__Object__init]))(var680); /* init on <var680:ReduceAction236>*/
}
var681 = NEW_nit__parser__ReduceAction237(&type_nit__parser__ReduceAction237);
{
((void(*)(val* self, long p0))(var681->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var681, 143l); /* goto= on <var681:ReduceAction237>*/
}
{
((void(*)(val* self))(var681->class->vft[COLOR_standard__kernel__Object__init]))(var681); /* init on <var681:ReduceAction237>*/
}
var682 = NEW_nit__parser__ReduceAction238(&type_nit__parser__ReduceAction238);
{
((void(*)(val* self, long p0))(var682->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var682, 143l); /* goto= on <var682:ReduceAction238>*/
}
{
((void(*)(val* self))(var682->class->vft[COLOR_standard__kernel__Object__init]))(var682); /* init on <var682:ReduceAction238>*/
}
var683 = NEW_nit__parser__ReduceAction239(&type_nit__parser__ReduceAction239);
{
((void(*)(val* self, long p0))(var683->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var683, 143l); /* goto= on <var683:ReduceAction239>*/
}
{
((void(*)(val* self))(var683->class->vft[COLOR_standard__kernel__Object__init]))(var683); /* init on <var683:ReduceAction239>*/
}
var684 = NEW_nit__parser__ReduceAction236(&type_nit__parser__ReduceAction236);
{
((void(*)(val* self, long p0))(var684->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var684, 143l); /* goto= on <var684:ReduceAction236>*/
}
{
((void(*)(val* self))(var684->class->vft[COLOR_standard__kernel__Object__init]))(var684); /* init on <var684:ReduceAction236>*/
}
var685 = NEW_nit__parser__ReduceAction237(&type_nit__parser__ReduceAction237);
{
((void(*)(val* self, long p0))(var685->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var685, 143l); /* goto= on <var685:ReduceAction237>*/
}
{
((void(*)(val* self))(var685->class->vft[COLOR_standard__kernel__Object__init]))(var685); /* init on <var685:ReduceAction237>*/
}
var686 = NEW_nit__parser__ReduceAction242(&type_nit__parser__ReduceAction242);
{
((void(*)(val* self, long p0))(var686->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var686, 143l); /* goto= on <var686:ReduceAction242>*/
}
{
((void(*)(val* self))(var686->class->vft[COLOR_standard__kernel__Object__init]))(var686); /* init on <var686:ReduceAction242>*/
}
var687 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var687->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var687, 144l); /* goto= on <var687:ReduceAction157>*/
}
{
((void(*)(val* self))(var687->class->vft[COLOR_standard__kernel__Object__init]))(var687); /* init on <var687:ReduceAction157>*/
}
var688 = NEW_nit__parser__ReduceAction280(&type_nit__parser__ReduceAction280);
{
((void(*)(val* self, long p0))(var688->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var688, 144l); /* goto= on <var688:ReduceAction280>*/
}
{
((void(*)(val* self))(var688->class->vft[COLOR_standard__kernel__Object__init]))(var688); /* init on <var688:ReduceAction280>*/
}
var689 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var689->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var689, 145l); /* goto= on <var689:ReduceAction157>*/
}
{
((void(*)(val* self))(var689->class->vft[COLOR_standard__kernel__Object__init]))(var689); /* init on <var689:ReduceAction157>*/
}
var690 = NEW_nit__parser__ReduceAction282(&type_nit__parser__ReduceAction282);
{
((void(*)(val* self, long p0))(var690->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var690, 145l); /* goto= on <var690:ReduceAction282>*/
}
{
((void(*)(val* self))(var690->class->vft[COLOR_standard__kernel__Object__init]))(var690); /* init on <var690:ReduceAction282>*/
}
var691 = NEW_nit__parser__ReduceAction283(&type_nit__parser__ReduceAction283);
{
((void(*)(val* self, long p0))(var691->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var691, 145l); /* goto= on <var691:ReduceAction283>*/
}
{
((void(*)(val* self))(var691->class->vft[COLOR_standard__kernel__Object__init]))(var691); /* init on <var691:ReduceAction283>*/
}
var692 = NEW_nit__parser__ReduceAction284(&type_nit__parser__ReduceAction284);
{
((void(*)(val* self, long p0))(var692->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var692, 145l); /* goto= on <var692:ReduceAction284>*/
}
{
((void(*)(val* self))(var692->class->vft[COLOR_standard__kernel__Object__init]))(var692); /* init on <var692:ReduceAction284>*/
}
var693 = NEW_nit__parser__ReduceAction285(&type_nit__parser__ReduceAction285);
{
((void(*)(val* self, long p0))(var693->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var693, 145l); /* goto= on <var693:ReduceAction285>*/
}
{
((void(*)(val* self))(var693->class->vft[COLOR_standard__kernel__Object__init]))(var693); /* init on <var693:ReduceAction285>*/
}
var694 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var694->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var694, 146l); /* goto= on <var694:ReduceAction157>*/
}
{
((void(*)(val* self))(var694->class->vft[COLOR_standard__kernel__Object__init]))(var694); /* init on <var694:ReduceAction157>*/
}
var695 = NEW_nit__parser__ReduceAction287(&type_nit__parser__ReduceAction287);
{
((void(*)(val* self, long p0))(var695->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var695, 146l); /* goto= on <var695:ReduceAction287>*/
}
{
((void(*)(val* self))(var695->class->vft[COLOR_standard__kernel__Object__init]))(var695); /* init on <var695:ReduceAction287>*/
}
var696 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var696->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var696, 147l); /* goto= on <var696:ReduceAction157>*/
}
{
((void(*)(val* self))(var696->class->vft[COLOR_standard__kernel__Object__init]))(var696); /* init on <var696:ReduceAction157>*/
}
var697 = NEW_nit__parser__ReduceAction289(&type_nit__parser__ReduceAction289);
{
((void(*)(val* self, long p0))(var697->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var697, 147l); /* goto= on <var697:ReduceAction289>*/
}
{
((void(*)(val* self))(var697->class->vft[COLOR_standard__kernel__Object__init]))(var697); /* init on <var697:ReduceAction289>*/
}
var698 = NEW_nit__parser__ReduceAction290(&type_nit__parser__ReduceAction290);
{
((void(*)(val* self, long p0))(var698->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var698, 147l); /* goto= on <var698:ReduceAction290>*/
}
{
((void(*)(val* self))(var698->class->vft[COLOR_standard__kernel__Object__init]))(var698); /* init on <var698:ReduceAction290>*/
}
var699 = NEW_nit__parser__ReduceAction291(&type_nit__parser__ReduceAction291);
{
((void(*)(val* self, long p0))(var699->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var699, 147l); /* goto= on <var699:ReduceAction291>*/
}
{
((void(*)(val* self))(var699->class->vft[COLOR_standard__kernel__Object__init]))(var699); /* init on <var699:ReduceAction291>*/
}
var700 = NEW_nit__parser__ReduceAction292(&type_nit__parser__ReduceAction292);
{
((void(*)(val* self, long p0))(var700->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var700, 147l); /* goto= on <var700:ReduceAction292>*/
}
{
((void(*)(val* self))(var700->class->vft[COLOR_standard__kernel__Object__init]))(var700); /* init on <var700:ReduceAction292>*/
}
var701 = NEW_nit__parser__ReduceAction293(&type_nit__parser__ReduceAction293);
{
((void(*)(val* self, long p0))(var701->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var701, 147l); /* goto= on <var701:ReduceAction293>*/
}
{
((void(*)(val* self))(var701->class->vft[COLOR_standard__kernel__Object__init]))(var701); /* init on <var701:ReduceAction293>*/
}
var702 = NEW_nit__parser__ReduceAction294(&type_nit__parser__ReduceAction294);
{
((void(*)(val* self, long p0))(var702->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var702, 147l); /* goto= on <var702:ReduceAction294>*/
}
{
((void(*)(val* self))(var702->class->vft[COLOR_standard__kernel__Object__init]))(var702); /* init on <var702:ReduceAction294>*/
}
var703 = NEW_nit__parser__ReduceAction295(&type_nit__parser__ReduceAction295);
{
((void(*)(val* self, long p0))(var703->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var703, 147l); /* goto= on <var703:ReduceAction295>*/
}
{
((void(*)(val* self))(var703->class->vft[COLOR_standard__kernel__Object__init]))(var703); /* init on <var703:ReduceAction295>*/
}
var704 = NEW_nit__parser__ReduceAction296(&type_nit__parser__ReduceAction296);
{
((void(*)(val* self, long p0))(var704->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var704, 147l); /* goto= on <var704:ReduceAction296>*/
}
{
((void(*)(val* self))(var704->class->vft[COLOR_standard__kernel__Object__init]))(var704); /* init on <var704:ReduceAction296>*/
}
var705 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var705->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var705, 148l); /* goto= on <var705:ReduceAction157>*/
}
{
((void(*)(val* self))(var705->class->vft[COLOR_standard__kernel__Object__init]))(var705); /* init on <var705:ReduceAction157>*/
}
var706 = NEW_nit__parser__ReduceAction298(&type_nit__parser__ReduceAction298);
{
((void(*)(val* self, long p0))(var706->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var706, 148l); /* goto= on <var706:ReduceAction298>*/
}
{
((void(*)(val* self))(var706->class->vft[COLOR_standard__kernel__Object__init]))(var706); /* init on <var706:ReduceAction298>*/
}
var707 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var707->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var707, 149l); /* goto= on <var707:ReduceAction157>*/
}
{
((void(*)(val* self))(var707->class->vft[COLOR_standard__kernel__Object__init]))(var707); /* init on <var707:ReduceAction157>*/
}
var708 = NEW_nit__parser__ReduceAction300(&type_nit__parser__ReduceAction300);
{
((void(*)(val* self, long p0))(var708->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var708, 149l); /* goto= on <var708:ReduceAction300>*/
}
{
((void(*)(val* self))(var708->class->vft[COLOR_standard__kernel__Object__init]))(var708); /* init on <var708:ReduceAction300>*/
}
var709 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var709->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var709, 150l); /* goto= on <var709:ReduceAction157>*/
}
{
((void(*)(val* self))(var709->class->vft[COLOR_standard__kernel__Object__init]))(var709); /* init on <var709:ReduceAction157>*/
}
var710 = NEW_nit__parser__ReduceAction302(&type_nit__parser__ReduceAction302);
{
((void(*)(val* self, long p0))(var710->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var710, 150l); /* goto= on <var710:ReduceAction302>*/
}
{
((void(*)(val* self))(var710->class->vft[COLOR_standard__kernel__Object__init]))(var710); /* init on <var710:ReduceAction302>*/
}
var711 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var711->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var711, 151l); /* goto= on <var711:ReduceAction157>*/
}
{
((void(*)(val* self))(var711->class->vft[COLOR_standard__kernel__Object__init]))(var711); /* init on <var711:ReduceAction157>*/
}
var712 = NEW_nit__parser__ReduceAction304(&type_nit__parser__ReduceAction304);
{
((void(*)(val* self, long p0))(var712->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var712, 151l); /* goto= on <var712:ReduceAction304>*/
}
{
((void(*)(val* self))(var712->class->vft[COLOR_standard__kernel__Object__init]))(var712); /* init on <var712:ReduceAction304>*/
}
var713 = NEW_nit__parser__ReduceAction305(&type_nit__parser__ReduceAction305);
{
((void(*)(val* self, long p0))(var713->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var713, 151l); /* goto= on <var713:ReduceAction305>*/
}
{
((void(*)(val* self))(var713->class->vft[COLOR_standard__kernel__Object__init]))(var713); /* init on <var713:ReduceAction305>*/
}
var714 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var714->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var714, 152l); /* goto= on <var714:ReduceAction157>*/
}
{
((void(*)(val* self))(var714->class->vft[COLOR_standard__kernel__Object__init]))(var714); /* init on <var714:ReduceAction157>*/
}
var715 = NEW_nit__parser__ReduceAction307(&type_nit__parser__ReduceAction307);
{
((void(*)(val* self, long p0))(var715->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var715, 152l); /* goto= on <var715:ReduceAction307>*/
}
{
((void(*)(val* self))(var715->class->vft[COLOR_standard__kernel__Object__init]))(var715); /* init on <var715:ReduceAction307>*/
}
var716 = NEW_nit__parser__ReduceAction308(&type_nit__parser__ReduceAction308);
{
((void(*)(val* self, long p0))(var716->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var716, 152l); /* goto= on <var716:ReduceAction308>*/
}
{
((void(*)(val* self))(var716->class->vft[COLOR_standard__kernel__Object__init]))(var716); /* init on <var716:ReduceAction308>*/
}
var717 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var717->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var717, 153l); /* goto= on <var717:ReduceAction157>*/
}
{
((void(*)(val* self))(var717->class->vft[COLOR_standard__kernel__Object__init]))(var717); /* init on <var717:ReduceAction157>*/
}
var718 = NEW_nit__parser__ReduceAction310(&type_nit__parser__ReduceAction310);
{
((void(*)(val* self, long p0))(var718->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var718, 153l); /* goto= on <var718:ReduceAction310>*/
}
{
((void(*)(val* self))(var718->class->vft[COLOR_standard__kernel__Object__init]))(var718); /* init on <var718:ReduceAction310>*/
}
var719 = NEW_nit__parser__ReduceAction311(&type_nit__parser__ReduceAction311);
{
((void(*)(val* self, long p0))(var719->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var719, 153l); /* goto= on <var719:ReduceAction311>*/
}
{
((void(*)(val* self))(var719->class->vft[COLOR_standard__kernel__Object__init]))(var719); /* init on <var719:ReduceAction311>*/
}
var720 = NEW_nit__parser__ReduceAction312(&type_nit__parser__ReduceAction312);
{
((void(*)(val* self, long p0))(var720->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var720, 153l); /* goto= on <var720:ReduceAction312>*/
}
{
((void(*)(val* self))(var720->class->vft[COLOR_standard__kernel__Object__init]))(var720); /* init on <var720:ReduceAction312>*/
}
var721 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var721->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var721, 154l); /* goto= on <var721:ReduceAction157>*/
}
{
((void(*)(val* self))(var721->class->vft[COLOR_standard__kernel__Object__init]))(var721); /* init on <var721:ReduceAction157>*/
}
var722 = NEW_nit__parser__ReduceAction314(&type_nit__parser__ReduceAction314);
{
((void(*)(val* self, long p0))(var722->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var722, 154l); /* goto= on <var722:ReduceAction314>*/
}
{
((void(*)(val* self))(var722->class->vft[COLOR_standard__kernel__Object__init]))(var722); /* init on <var722:ReduceAction314>*/
}
var723 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var723->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var723, 155l); /* goto= on <var723:ReduceAction157>*/
}
{
((void(*)(val* self))(var723->class->vft[COLOR_standard__kernel__Object__init]))(var723); /* init on <var723:ReduceAction157>*/
}
var724 = NEW_nit__parser__ReduceAction316(&type_nit__parser__ReduceAction316);
{
((void(*)(val* self, long p0))(var724->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var724, 155l); /* goto= on <var724:ReduceAction316>*/
}
{
((void(*)(val* self))(var724->class->vft[COLOR_standard__kernel__Object__init]))(var724); /* init on <var724:ReduceAction316>*/
}
var725 = NEW_nit__parser__ReduceAction317(&type_nit__parser__ReduceAction317);
{
((void(*)(val* self, long p0))(var725->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var725, 155l); /* goto= on <var725:ReduceAction317>*/
}
{
((void(*)(val* self))(var725->class->vft[COLOR_standard__kernel__Object__init]))(var725); /* init on <var725:ReduceAction317>*/
}
var726 = NEW_nit__parser__ReduceAction318(&type_nit__parser__ReduceAction318);
{
((void(*)(val* self, long p0))(var726->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var726, 155l); /* goto= on <var726:ReduceAction318>*/
}
{
((void(*)(val* self))(var726->class->vft[COLOR_standard__kernel__Object__init]))(var726); /* init on <var726:ReduceAction318>*/
}
var727 = NEW_nit__parser__ReduceAction319(&type_nit__parser__ReduceAction319);
{
((void(*)(val* self, long p0))(var727->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var727, 155l); /* goto= on <var727:ReduceAction319>*/
}
{
((void(*)(val* self))(var727->class->vft[COLOR_standard__kernel__Object__init]))(var727); /* init on <var727:ReduceAction319>*/
}
var728 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var728->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var728, 156l); /* goto= on <var728:ReduceAction157>*/
}
{
((void(*)(val* self))(var728->class->vft[COLOR_standard__kernel__Object__init]))(var728); /* init on <var728:ReduceAction157>*/
}
var729 = NEW_nit__parser__ReduceAction321(&type_nit__parser__ReduceAction321);
{
((void(*)(val* self, long p0))(var729->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var729, 156l); /* goto= on <var729:ReduceAction321>*/
}
{
((void(*)(val* self))(var729->class->vft[COLOR_standard__kernel__Object__init]))(var729); /* init on <var729:ReduceAction321>*/
}
var730 = NEW_nit__parser__ReduceAction322(&type_nit__parser__ReduceAction322);
{
((void(*)(val* self, long p0))(var730->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var730, 156l); /* goto= on <var730:ReduceAction322>*/
}
{
((void(*)(val* self))(var730->class->vft[COLOR_standard__kernel__Object__init]))(var730); /* init on <var730:ReduceAction322>*/
}
var731 = NEW_nit__parser__ReduceAction323(&type_nit__parser__ReduceAction323);
{
((void(*)(val* self, long p0))(var731->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var731, 156l); /* goto= on <var731:ReduceAction323>*/
}
{
((void(*)(val* self))(var731->class->vft[COLOR_standard__kernel__Object__init]))(var731); /* init on <var731:ReduceAction323>*/
}
var732 = NEW_nit__parser__ReduceAction324(&type_nit__parser__ReduceAction324);
{
((void(*)(val* self, long p0))(var732->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var732, 156l); /* goto= on <var732:ReduceAction324>*/
}
{
((void(*)(val* self))(var732->class->vft[COLOR_standard__kernel__Object__init]))(var732); /* init on <var732:ReduceAction324>*/
}
var733 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var733->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var733, 157l); /* goto= on <var733:ReduceAction157>*/
}
{
((void(*)(val* self))(var733->class->vft[COLOR_standard__kernel__Object__init]))(var733); /* init on <var733:ReduceAction157>*/
}
var734 = NEW_nit__parser__ReduceAction326(&type_nit__parser__ReduceAction326);
{
((void(*)(val* self, long p0))(var734->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var734, 157l); /* goto= on <var734:ReduceAction326>*/
}
{
((void(*)(val* self))(var734->class->vft[COLOR_standard__kernel__Object__init]))(var734); /* init on <var734:ReduceAction326>*/
}
var735 = NEW_nit__parser__ReduceAction327(&type_nit__parser__ReduceAction327);
{
((void(*)(val* self, long p0))(var735->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var735, 157l); /* goto= on <var735:ReduceAction327>*/
}
{
((void(*)(val* self))(var735->class->vft[COLOR_standard__kernel__Object__init]))(var735); /* init on <var735:ReduceAction327>*/
}
var736 = NEW_nit__parser__ReduceAction181(&type_nit__parser__ReduceAction181);
{
((void(*)(val* self, long p0))(var736->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var736, 157l); /* goto= on <var736:ReduceAction181>*/
}
{
((void(*)(val* self))(var736->class->vft[COLOR_standard__kernel__Object__init]))(var736); /* init on <var736:ReduceAction181>*/
}
var737 = NEW_nit__parser__ReduceAction329(&type_nit__parser__ReduceAction329);
{
((void(*)(val* self, long p0))(var737->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var737, 157l); /* goto= on <var737:ReduceAction329>*/
}
{
((void(*)(val* self))(var737->class->vft[COLOR_standard__kernel__Object__init]))(var737); /* init on <var737:ReduceAction329>*/
}
var738 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var738->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var738, 157l); /* goto= on <var738:ReduceAction182>*/
}
{
((void(*)(val* self))(var738->class->vft[COLOR_standard__kernel__Object__init]))(var738); /* init on <var738:ReduceAction182>*/
}
var739 = NEW_nit__parser__ReduceAction331(&type_nit__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var739->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var739, 157l); /* goto= on <var739:ReduceAction331>*/
}
{
((void(*)(val* self))(var739->class->vft[COLOR_standard__kernel__Object__init]))(var739); /* init on <var739:ReduceAction331>*/
}
var740 = NEW_nit__parser__ReduceAction183(&type_nit__parser__ReduceAction183);
{
((void(*)(val* self, long p0))(var740->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var740, 157l); /* goto= on <var740:ReduceAction183>*/
}
{
((void(*)(val* self))(var740->class->vft[COLOR_standard__kernel__Object__init]))(var740); /* init on <var740:ReduceAction183>*/
}
var741 = NEW_nit__parser__ReduceAction333(&type_nit__parser__ReduceAction333);
{
((void(*)(val* self, long p0))(var741->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var741, 157l); /* goto= on <var741:ReduceAction333>*/
}
{
((void(*)(val* self))(var741->class->vft[COLOR_standard__kernel__Object__init]))(var741); /* init on <var741:ReduceAction333>*/
}
var742 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var742->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var742, 157l); /* goto= on <var742:ReduceAction182>*/
}
{
((void(*)(val* self))(var742->class->vft[COLOR_standard__kernel__Object__init]))(var742); /* init on <var742:ReduceAction182>*/
}
var743 = NEW_nit__parser__ReduceAction331(&type_nit__parser__ReduceAction331);
{
((void(*)(val* self, long p0))(var743->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var743, 157l); /* goto= on <var743:ReduceAction331>*/
}
{
((void(*)(val* self))(var743->class->vft[COLOR_standard__kernel__Object__init]))(var743); /* init on <var743:ReduceAction331>*/
}
var744 = NEW_nit__parser__ReduceAction185(&type_nit__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var744->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var744, 157l); /* goto= on <var744:ReduceAction185>*/
}
{
((void(*)(val* self))(var744->class->vft[COLOR_standard__kernel__Object__init]))(var744); /* init on <var744:ReduceAction185>*/
}
var745 = NEW_nit__parser__ReduceAction337(&type_nit__parser__ReduceAction337);
{
((void(*)(val* self, long p0))(var745->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var745, 157l); /* goto= on <var745:ReduceAction337>*/
}
{
((void(*)(val* self))(var745->class->vft[COLOR_standard__kernel__Object__init]))(var745); /* init on <var745:ReduceAction337>*/
}
var746 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var746->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var746, 157l); /* goto= on <var746:ReduceAction186>*/
}
{
((void(*)(val* self))(var746->class->vft[COLOR_standard__kernel__Object__init]))(var746); /* init on <var746:ReduceAction186>*/
}
var747 = NEW_nit__parser__ReduceAction339(&type_nit__parser__ReduceAction339);
{
((void(*)(val* self, long p0))(var747->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var747, 157l); /* goto= on <var747:ReduceAction339>*/
}
{
((void(*)(val* self))(var747->class->vft[COLOR_standard__kernel__Object__init]))(var747); /* init on <var747:ReduceAction339>*/
}
var748 = NEW_nit__parser__ReduceAction187(&type_nit__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var748->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var748, 157l); /* goto= on <var748:ReduceAction187>*/
}
{
((void(*)(val* self))(var748->class->vft[COLOR_standard__kernel__Object__init]))(var748); /* init on <var748:ReduceAction187>*/
}
var749 = NEW_nit__parser__ReduceAction341(&type_nit__parser__ReduceAction341);
{
((void(*)(val* self, long p0))(var749->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var749, 157l); /* goto= on <var749:ReduceAction341>*/
}
{
((void(*)(val* self))(var749->class->vft[COLOR_standard__kernel__Object__init]))(var749); /* init on <var749:ReduceAction341>*/
}
var750 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var750->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var750, 157l); /* goto= on <var750:ReduceAction186>*/
}
{
((void(*)(val* self))(var750->class->vft[COLOR_standard__kernel__Object__init]))(var750); /* init on <var750:ReduceAction186>*/
}
var751 = NEW_nit__parser__ReduceAction339(&type_nit__parser__ReduceAction339);
{
((void(*)(val* self, long p0))(var751->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var751, 157l); /* goto= on <var751:ReduceAction339>*/
}
{
((void(*)(val* self))(var751->class->vft[COLOR_standard__kernel__Object__init]))(var751); /* init on <var751:ReduceAction339>*/
}
var752 = NEW_nit__parser__ReduceAction189(&type_nit__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var752->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var752, 157l); /* goto= on <var752:ReduceAction189>*/
}
{
((void(*)(val* self))(var752->class->vft[COLOR_standard__kernel__Object__init]))(var752); /* init on <var752:ReduceAction189>*/
}
var753 = NEW_nit__parser__ReduceAction345(&type_nit__parser__ReduceAction345);
{
((void(*)(val* self, long p0))(var753->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var753, 157l); /* goto= on <var753:ReduceAction345>*/
}
{
((void(*)(val* self))(var753->class->vft[COLOR_standard__kernel__Object__init]))(var753); /* init on <var753:ReduceAction345>*/
}
var754 = NEW_nit__parser__ReduceAction190(&type_nit__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var754->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var754, 157l); /* goto= on <var754:ReduceAction190>*/
}
{
((void(*)(val* self))(var754->class->vft[COLOR_standard__kernel__Object__init]))(var754); /* init on <var754:ReduceAction190>*/
}
var755 = NEW_nit__parser__ReduceAction347(&type_nit__parser__ReduceAction347);
{
((void(*)(val* self, long p0))(var755->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var755, 157l); /* goto= on <var755:ReduceAction347>*/
}
{
((void(*)(val* self))(var755->class->vft[COLOR_standard__kernel__Object__init]))(var755); /* init on <var755:ReduceAction347>*/
}
var756 = NEW_nit__parser__ReduceAction191(&type_nit__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var756->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var756, 157l); /* goto= on <var756:ReduceAction191>*/
}
{
((void(*)(val* self))(var756->class->vft[COLOR_standard__kernel__Object__init]))(var756); /* init on <var756:ReduceAction191>*/
}
var757 = NEW_nit__parser__ReduceAction349(&type_nit__parser__ReduceAction349);
{
((void(*)(val* self, long p0))(var757->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var757, 157l); /* goto= on <var757:ReduceAction349>*/
}
{
((void(*)(val* self))(var757->class->vft[COLOR_standard__kernel__Object__init]))(var757); /* init on <var757:ReduceAction349>*/
}
var758 = NEW_nit__parser__ReduceAction350(&type_nit__parser__ReduceAction350);
{
((void(*)(val* self, long p0))(var758->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var758, 157l); /* goto= on <var758:ReduceAction350>*/
}
{
((void(*)(val* self))(var758->class->vft[COLOR_standard__kernel__Object__init]))(var758); /* init on <var758:ReduceAction350>*/
}
var759 = NEW_nit__parser__ReduceAction351(&type_nit__parser__ReduceAction351);
{
((void(*)(val* self, long p0))(var759->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var759, 157l); /* goto= on <var759:ReduceAction351>*/
}
{
((void(*)(val* self))(var759->class->vft[COLOR_standard__kernel__Object__init]))(var759); /* init on <var759:ReduceAction351>*/
}
var760 = NEW_nit__parser__ReduceAction352(&type_nit__parser__ReduceAction352);
{
((void(*)(val* self, long p0))(var760->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var760, 157l); /* goto= on <var760:ReduceAction352>*/
}
{
((void(*)(val* self))(var760->class->vft[COLOR_standard__kernel__Object__init]))(var760); /* init on <var760:ReduceAction352>*/
}
var761 = NEW_nit__parser__ReduceAction353(&type_nit__parser__ReduceAction353);
{
((void(*)(val* self, long p0))(var761->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var761, 157l); /* goto= on <var761:ReduceAction353>*/
}
{
((void(*)(val* self))(var761->class->vft[COLOR_standard__kernel__Object__init]))(var761); /* init on <var761:ReduceAction353>*/
}
var762 = NEW_nit__parser__ReduceAction354(&type_nit__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var762->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var762, 157l); /* goto= on <var762:ReduceAction354>*/
}
{
((void(*)(val* self))(var762->class->vft[COLOR_standard__kernel__Object__init]))(var762); /* init on <var762:ReduceAction354>*/
}
var763 = NEW_nit__parser__ReduceAction355(&type_nit__parser__ReduceAction355);
{
((void(*)(val* self, long p0))(var763->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var763, 157l); /* goto= on <var763:ReduceAction355>*/
}
{
((void(*)(val* self))(var763->class->vft[COLOR_standard__kernel__Object__init]))(var763); /* init on <var763:ReduceAction355>*/
}
var764 = NEW_nit__parser__ReduceAction356(&type_nit__parser__ReduceAction356);
{
((void(*)(val* self, long p0))(var764->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var764, 157l); /* goto= on <var764:ReduceAction356>*/
}
{
((void(*)(val* self))(var764->class->vft[COLOR_standard__kernel__Object__init]))(var764); /* init on <var764:ReduceAction356>*/
}
var765 = NEW_nit__parser__ReduceAction353(&type_nit__parser__ReduceAction353);
{
((void(*)(val* self, long p0))(var765->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var765, 157l); /* goto= on <var765:ReduceAction353>*/
}
{
((void(*)(val* self))(var765->class->vft[COLOR_standard__kernel__Object__init]))(var765); /* init on <var765:ReduceAction353>*/
}
var766 = NEW_nit__parser__ReduceAction354(&type_nit__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var766->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var766, 157l); /* goto= on <var766:ReduceAction354>*/
}
{
((void(*)(val* self))(var766->class->vft[COLOR_standard__kernel__Object__init]))(var766); /* init on <var766:ReduceAction354>*/
}
var767 = NEW_nit__parser__ReduceAction359(&type_nit__parser__ReduceAction359);
{
((void(*)(val* self, long p0))(var767->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var767, 157l); /* goto= on <var767:ReduceAction359>*/
}
{
((void(*)(val* self))(var767->class->vft[COLOR_standard__kernel__Object__init]))(var767); /* init on <var767:ReduceAction359>*/
}
var768 = NEW_nit__parser__ReduceAction360(&type_nit__parser__ReduceAction360);
{
((void(*)(val* self, long p0))(var768->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var768, 157l); /* goto= on <var768:ReduceAction360>*/
}
{
((void(*)(val* self))(var768->class->vft[COLOR_standard__kernel__Object__init]))(var768); /* init on <var768:ReduceAction360>*/
}
var769 = NEW_nit__parser__ReduceAction361(&type_nit__parser__ReduceAction361);
{
((void(*)(val* self, long p0))(var769->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var769, 157l); /* goto= on <var769:ReduceAction361>*/
}
{
((void(*)(val* self))(var769->class->vft[COLOR_standard__kernel__Object__init]))(var769); /* init on <var769:ReduceAction361>*/
}
var770 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var770->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var770, 158l); /* goto= on <var770:ReduceAction157>*/
}
{
((void(*)(val* self))(var770->class->vft[COLOR_standard__kernel__Object__init]))(var770); /* init on <var770:ReduceAction157>*/
}
var771 = NEW_nit__parser__ReduceAction363(&type_nit__parser__ReduceAction363);
{
((void(*)(val* self, long p0))(var771->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var771, 158l); /* goto= on <var771:ReduceAction363>*/
}
{
((void(*)(val* self))(var771->class->vft[COLOR_standard__kernel__Object__init]))(var771); /* init on <var771:ReduceAction363>*/
}
var772 = NEW_nit__parser__ReduceAction364(&type_nit__parser__ReduceAction364);
{
((void(*)(val* self, long p0))(var772->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var772, 158l); /* goto= on <var772:ReduceAction364>*/
}
{
((void(*)(val* self))(var772->class->vft[COLOR_standard__kernel__Object__init]))(var772); /* init on <var772:ReduceAction364>*/
}
var773 = NEW_nit__parser__ReduceAction365(&type_nit__parser__ReduceAction365);
{
((void(*)(val* self, long p0))(var773->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var773, 159l); /* goto= on <var773:ReduceAction365>*/
}
{
((void(*)(val* self))(var773->class->vft[COLOR_standard__kernel__Object__init]))(var773); /* init on <var773:ReduceAction365>*/
}
var774 = NEW_nit__parser__ReduceAction366(&type_nit__parser__ReduceAction366);
{
((void(*)(val* self, long p0))(var774->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var774, 159l); /* goto= on <var774:ReduceAction366>*/
}
{
((void(*)(val* self))(var774->class->vft[COLOR_standard__kernel__Object__init]))(var774); /* init on <var774:ReduceAction366>*/
}
var775 = NEW_nit__parser__ReduceAction367(&type_nit__parser__ReduceAction367);
{
((void(*)(val* self, long p0))(var775->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var775, 159l); /* goto= on <var775:ReduceAction367>*/
}
{
((void(*)(val* self))(var775->class->vft[COLOR_standard__kernel__Object__init]))(var775); /* init on <var775:ReduceAction367>*/
}
var776 = NEW_nit__parser__ReduceAction368(&type_nit__parser__ReduceAction368);
{
((void(*)(val* self, long p0))(var776->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var776, 159l); /* goto= on <var776:ReduceAction368>*/
}
{
((void(*)(val* self))(var776->class->vft[COLOR_standard__kernel__Object__init]))(var776); /* init on <var776:ReduceAction368>*/
}
var777 = NEW_nit__parser__ReduceAction369(&type_nit__parser__ReduceAction369);
{
((void(*)(val* self, long p0))(var777->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var777, 159l); /* goto= on <var777:ReduceAction369>*/
}
{
((void(*)(val* self))(var777->class->vft[COLOR_standard__kernel__Object__init]))(var777); /* init on <var777:ReduceAction369>*/
}
var778 = NEW_nit__parser__ReduceAction370(&type_nit__parser__ReduceAction370);
{
((void(*)(val* self, long p0))(var778->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var778, 159l); /* goto= on <var778:ReduceAction370>*/
}
{
((void(*)(val* self))(var778->class->vft[COLOR_standard__kernel__Object__init]))(var778); /* init on <var778:ReduceAction370>*/
}
var779 = NEW_nit__parser__ReduceAction371(&type_nit__parser__ReduceAction371);
{
((void(*)(val* self, long p0))(var779->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var779, 159l); /* goto= on <var779:ReduceAction371>*/
}
{
((void(*)(val* self))(var779->class->vft[COLOR_standard__kernel__Object__init]))(var779); /* init on <var779:ReduceAction371>*/
}
var780 = NEW_nit__parser__ReduceAction372(&type_nit__parser__ReduceAction372);
{
((void(*)(val* self, long p0))(var780->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var780, 159l); /* goto= on <var780:ReduceAction372>*/
}
{
((void(*)(val* self))(var780->class->vft[COLOR_standard__kernel__Object__init]))(var780); /* init on <var780:ReduceAction372>*/
}
var781 = NEW_nit__parser__ReduceAction373(&type_nit__parser__ReduceAction373);
{
((void(*)(val* self, long p0))(var781->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var781, 159l); /* goto= on <var781:ReduceAction373>*/
}
{
((void(*)(val* self))(var781->class->vft[COLOR_standard__kernel__Object__init]))(var781); /* init on <var781:ReduceAction373>*/
}
var782 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var782->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var782, 159l); /* goto= on <var782:ReduceAction157>*/
}
{
((void(*)(val* self))(var782->class->vft[COLOR_standard__kernel__Object__init]))(var782); /* init on <var782:ReduceAction157>*/
}
var783 = NEW_nit__parser__ReduceAction398(&type_nit__parser__ReduceAction398);
{
((void(*)(val* self, long p0))(var783->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var783, 160l); /* goto= on <var783:ReduceAction398>*/
}
{
((void(*)(val* self))(var783->class->vft[COLOR_standard__kernel__Object__init]))(var783); /* init on <var783:ReduceAction398>*/
}
var784 = NEW_nit__parser__ReduceAction399(&type_nit__parser__ReduceAction399);
{
((void(*)(val* self, long p0))(var784->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var784, 160l); /* goto= on <var784:ReduceAction399>*/
}
{
((void(*)(val* self))(var784->class->vft[COLOR_standard__kernel__Object__init]))(var784); /* init on <var784:ReduceAction399>*/
}
var785 = NEW_nit__parser__ReduceAction400(&type_nit__parser__ReduceAction400);
{
((void(*)(val* self, long p0))(var785->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var785, 161l); /* goto= on <var785:ReduceAction400>*/
}
{
((void(*)(val* self))(var785->class->vft[COLOR_standard__kernel__Object__init]))(var785); /* init on <var785:ReduceAction400>*/
}
var786 = NEW_nit__parser__ReduceAction22(&type_nit__parser__ReduceAction22);
{
((void(*)(val* self, long p0))(var786->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var786, 161l); /* goto= on <var786:ReduceAction22>*/
}
{
((void(*)(val* self))(var786->class->vft[COLOR_standard__kernel__Object__init]))(var786); /* init on <var786:ReduceAction22>*/
}
var787 = NEW_nit__parser__ReduceAction402(&type_nit__parser__ReduceAction402);
{
((void(*)(val* self, long p0))(var787->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var787, 162l); /* goto= on <var787:ReduceAction402>*/
}
{
((void(*)(val* self))(var787->class->vft[COLOR_standard__kernel__Object__init]))(var787); /* init on <var787:ReduceAction402>*/
}
var788 = NEW_nit__parser__ReduceAction402(&type_nit__parser__ReduceAction402);
{
((void(*)(val* self, long p0))(var788->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var788, 163l); /* goto= on <var788:ReduceAction402>*/
}
{
((void(*)(val* self))(var788->class->vft[COLOR_standard__kernel__Object__init]))(var788); /* init on <var788:ReduceAction402>*/
}
var789 = NEW_nit__parser__ReduceAction383(&type_nit__parser__ReduceAction383);
{
((void(*)(val* self, long p0))(var789->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var789, 164l); /* goto= on <var789:ReduceAction383>*/
}
{
((void(*)(val* self))(var789->class->vft[COLOR_standard__kernel__Object__init]))(var789); /* init on <var789:ReduceAction383>*/
}
var790 = NEW_nit__parser__ReduceAction384(&type_nit__parser__ReduceAction384);
{
((void(*)(val* self, long p0))(var790->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var790, 164l); /* goto= on <var790:ReduceAction384>*/
}
{
((void(*)(val* self))(var790->class->vft[COLOR_standard__kernel__Object__init]))(var790); /* init on <var790:ReduceAction384>*/
}
var791 = NEW_nit__parser__ReduceAction426(&type_nit__parser__ReduceAction426);
{
((void(*)(val* self, long p0))(var791->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var791, 165l); /* goto= on <var791:ReduceAction426>*/
}
{
((void(*)(val* self))(var791->class->vft[COLOR_standard__kernel__Object__init]))(var791); /* init on <var791:ReduceAction426>*/
}
var792 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var792->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var792, 165l); /* goto= on <var792:ReduceAction157>*/
}
{
((void(*)(val* self))(var792->class->vft[COLOR_standard__kernel__Object__init]))(var792); /* init on <var792:ReduceAction157>*/
}
var793 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var793->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var793, 165l); /* goto= on <var793:ReduceAction157>*/
}
{
((void(*)(val* self))(var793->class->vft[COLOR_standard__kernel__Object__init]))(var793); /* init on <var793:ReduceAction157>*/
}
var794 = NEW_nit__parser__ReduceAction429(&type_nit__parser__ReduceAction429);
{
((void(*)(val* self, long p0))(var794->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var794, 165l); /* goto= on <var794:ReduceAction429>*/
}
{
((void(*)(val* self))(var794->class->vft[COLOR_standard__kernel__Object__init]))(var794); /* init on <var794:ReduceAction429>*/
}
var795 = NEW_nit__parser__ReduceAction430(&type_nit__parser__ReduceAction430);
{
((void(*)(val* self, long p0))(var795->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var795, 165l); /* goto= on <var795:ReduceAction430>*/
}
{
((void(*)(val* self))(var795->class->vft[COLOR_standard__kernel__Object__init]))(var795); /* init on <var795:ReduceAction430>*/
}
var796 = NEW_nit__parser__ReduceAction144(&type_nit__parser__ReduceAction144);
{
((void(*)(val* self, long p0))(var796->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var796, 166l); /* goto= on <var796:ReduceAction144>*/
}
{
((void(*)(val* self))(var796->class->vft[COLOR_standard__kernel__Object__init]))(var796); /* init on <var796:ReduceAction144>*/
}
var797 = NEW_nit__parser__ReduceAction145(&type_nit__parser__ReduceAction145);
{
((void(*)(val* self, long p0))(var797->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var797, 166l); /* goto= on <var797:ReduceAction145>*/
}
{
((void(*)(val* self))(var797->class->vft[COLOR_standard__kernel__Object__init]))(var797); /* init on <var797:ReduceAction145>*/
}
var798 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var798->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var798, 167l); /* goto= on <var798:ReduceAction157>*/
}
{
((void(*)(val* self))(var798->class->vft[COLOR_standard__kernel__Object__init]))(var798); /* init on <var798:ReduceAction157>*/
}
var799 = NEW_nit__parser__ReduceAction280(&type_nit__parser__ReduceAction280);
{
((void(*)(val* self, long p0))(var799->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var799, 167l); /* goto= on <var799:ReduceAction280>*/
}
{
((void(*)(val* self))(var799->class->vft[COLOR_standard__kernel__Object__init]))(var799); /* init on <var799:ReduceAction280>*/
}
var800 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var800->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var800, 168l); /* goto= on <var800:ReduceAction157>*/
}
{
((void(*)(val* self))(var800->class->vft[COLOR_standard__kernel__Object__init]))(var800); /* init on <var800:ReduceAction157>*/
}
var801 = NEW_nit__parser__ReduceAction282(&type_nit__parser__ReduceAction282);
{
((void(*)(val* self, long p0))(var801->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var801, 168l); /* goto= on <var801:ReduceAction282>*/
}
{
((void(*)(val* self))(var801->class->vft[COLOR_standard__kernel__Object__init]))(var801); /* init on <var801:ReduceAction282>*/
}
var802 = NEW_nit__parser__ReduceAction283(&type_nit__parser__ReduceAction283);
{
((void(*)(val* self, long p0))(var802->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var802, 168l); /* goto= on <var802:ReduceAction283>*/
}
{
((void(*)(val* self))(var802->class->vft[COLOR_standard__kernel__Object__init]))(var802); /* init on <var802:ReduceAction283>*/
}
var803 = NEW_nit__parser__ReduceAction284(&type_nit__parser__ReduceAction284);
{
((void(*)(val* self, long p0))(var803->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var803, 168l); /* goto= on <var803:ReduceAction284>*/
}
{
((void(*)(val* self))(var803->class->vft[COLOR_standard__kernel__Object__init]))(var803); /* init on <var803:ReduceAction284>*/
}
var804 = NEW_nit__parser__ReduceAction285(&type_nit__parser__ReduceAction285);
{
((void(*)(val* self, long p0))(var804->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var804, 168l); /* goto= on <var804:ReduceAction285>*/
}
{
((void(*)(val* self))(var804->class->vft[COLOR_standard__kernel__Object__init]))(var804); /* init on <var804:ReduceAction285>*/
}
var805 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var805->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var805, 169l); /* goto= on <var805:ReduceAction157>*/
}
{
((void(*)(val* self))(var805->class->vft[COLOR_standard__kernel__Object__init]))(var805); /* init on <var805:ReduceAction157>*/
}
var806 = NEW_nit__parser__ReduceAction287(&type_nit__parser__ReduceAction287);
{
((void(*)(val* self, long p0))(var806->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var806, 169l); /* goto= on <var806:ReduceAction287>*/
}
{
((void(*)(val* self))(var806->class->vft[COLOR_standard__kernel__Object__init]))(var806); /* init on <var806:ReduceAction287>*/
}
var807 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var807->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var807, 170l); /* goto= on <var807:ReduceAction157>*/
}
{
((void(*)(val* self))(var807->class->vft[COLOR_standard__kernel__Object__init]))(var807); /* init on <var807:ReduceAction157>*/
}
var808 = NEW_nit__parser__ReduceAction289(&type_nit__parser__ReduceAction289);
{
((void(*)(val* self, long p0))(var808->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var808, 170l); /* goto= on <var808:ReduceAction289>*/
}
{
((void(*)(val* self))(var808->class->vft[COLOR_standard__kernel__Object__init]))(var808); /* init on <var808:ReduceAction289>*/
}
var809 = NEW_nit__parser__ReduceAction290(&type_nit__parser__ReduceAction290);
{
((void(*)(val* self, long p0))(var809->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var809, 170l); /* goto= on <var809:ReduceAction290>*/
}
{
((void(*)(val* self))(var809->class->vft[COLOR_standard__kernel__Object__init]))(var809); /* init on <var809:ReduceAction290>*/
}
var810 = NEW_nit__parser__ReduceAction291(&type_nit__parser__ReduceAction291);
{
((void(*)(val* self, long p0))(var810->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var810, 170l); /* goto= on <var810:ReduceAction291>*/
}
{
((void(*)(val* self))(var810->class->vft[COLOR_standard__kernel__Object__init]))(var810); /* init on <var810:ReduceAction291>*/
}
var811 = NEW_nit__parser__ReduceAction292(&type_nit__parser__ReduceAction292);
{
((void(*)(val* self, long p0))(var811->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var811, 170l); /* goto= on <var811:ReduceAction292>*/
}
{
((void(*)(val* self))(var811->class->vft[COLOR_standard__kernel__Object__init]))(var811); /* init on <var811:ReduceAction292>*/
}
var812 = NEW_nit__parser__ReduceAction293(&type_nit__parser__ReduceAction293);
{
((void(*)(val* self, long p0))(var812->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var812, 170l); /* goto= on <var812:ReduceAction293>*/
}
{
((void(*)(val* self))(var812->class->vft[COLOR_standard__kernel__Object__init]))(var812); /* init on <var812:ReduceAction293>*/
}
var813 = NEW_nit__parser__ReduceAction294(&type_nit__parser__ReduceAction294);
{
((void(*)(val* self, long p0))(var813->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var813, 170l); /* goto= on <var813:ReduceAction294>*/
}
{
((void(*)(val* self))(var813->class->vft[COLOR_standard__kernel__Object__init]))(var813); /* init on <var813:ReduceAction294>*/
}
var814 = NEW_nit__parser__ReduceAction295(&type_nit__parser__ReduceAction295);
{
((void(*)(val* self, long p0))(var814->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var814, 170l); /* goto= on <var814:ReduceAction295>*/
}
{
((void(*)(val* self))(var814->class->vft[COLOR_standard__kernel__Object__init]))(var814); /* init on <var814:ReduceAction295>*/
}
var815 = NEW_nit__parser__ReduceAction296(&type_nit__parser__ReduceAction296);
{
((void(*)(val* self, long p0))(var815->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var815, 170l); /* goto= on <var815:ReduceAction296>*/
}
{
((void(*)(val* self))(var815->class->vft[COLOR_standard__kernel__Object__init]))(var815); /* init on <var815:ReduceAction296>*/
}
var816 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var816->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var816, 171l); /* goto= on <var816:ReduceAction157>*/
}
{
((void(*)(val* self))(var816->class->vft[COLOR_standard__kernel__Object__init]))(var816); /* init on <var816:ReduceAction157>*/
}
var817 = NEW_nit__parser__ReduceAction298(&type_nit__parser__ReduceAction298);
{
((void(*)(val* self, long p0))(var817->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var817, 171l); /* goto= on <var817:ReduceAction298>*/
}
{
((void(*)(val* self))(var817->class->vft[COLOR_standard__kernel__Object__init]))(var817); /* init on <var817:ReduceAction298>*/
}
var818 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var818->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var818, 172l); /* goto= on <var818:ReduceAction157>*/
}
{
((void(*)(val* self))(var818->class->vft[COLOR_standard__kernel__Object__init]))(var818); /* init on <var818:ReduceAction157>*/
}
var819 = NEW_nit__parser__ReduceAction300(&type_nit__parser__ReduceAction300);
{
((void(*)(val* self, long p0))(var819->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var819, 172l); /* goto= on <var819:ReduceAction300>*/
}
{
((void(*)(val* self))(var819->class->vft[COLOR_standard__kernel__Object__init]))(var819); /* init on <var819:ReduceAction300>*/
}
var820 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var820->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var820, 173l); /* goto= on <var820:ReduceAction157>*/
}
{
((void(*)(val* self))(var820->class->vft[COLOR_standard__kernel__Object__init]))(var820); /* init on <var820:ReduceAction157>*/
}
var821 = NEW_nit__parser__ReduceAction302(&type_nit__parser__ReduceAction302);
{
((void(*)(val* self, long p0))(var821->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var821, 173l); /* goto= on <var821:ReduceAction302>*/
}
{
((void(*)(val* self))(var821->class->vft[COLOR_standard__kernel__Object__init]))(var821); /* init on <var821:ReduceAction302>*/
}
var822 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var822->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var822, 174l); /* goto= on <var822:ReduceAction157>*/
}
{
((void(*)(val* self))(var822->class->vft[COLOR_standard__kernel__Object__init]))(var822); /* init on <var822:ReduceAction157>*/
}
var823 = NEW_nit__parser__ReduceAction304(&type_nit__parser__ReduceAction304);
{
((void(*)(val* self, long p0))(var823->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var823, 174l); /* goto= on <var823:ReduceAction304>*/
}
{
((void(*)(val* self))(var823->class->vft[COLOR_standard__kernel__Object__init]))(var823); /* init on <var823:ReduceAction304>*/
}
var824 = NEW_nit__parser__ReduceAction305(&type_nit__parser__ReduceAction305);
{
((void(*)(val* self, long p0))(var824->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var824, 174l); /* goto= on <var824:ReduceAction305>*/
}
{
((void(*)(val* self))(var824->class->vft[COLOR_standard__kernel__Object__init]))(var824); /* init on <var824:ReduceAction305>*/
}
var825 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var825->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var825, 175l); /* goto= on <var825:ReduceAction157>*/
}
{
((void(*)(val* self))(var825->class->vft[COLOR_standard__kernel__Object__init]))(var825); /* init on <var825:ReduceAction157>*/
}
var826 = NEW_nit__parser__ReduceAction307(&type_nit__parser__ReduceAction307);
{
((void(*)(val* self, long p0))(var826->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var826, 175l); /* goto= on <var826:ReduceAction307>*/
}
{
((void(*)(val* self))(var826->class->vft[COLOR_standard__kernel__Object__init]))(var826); /* init on <var826:ReduceAction307>*/
}
var827 = NEW_nit__parser__ReduceAction308(&type_nit__parser__ReduceAction308);
{
((void(*)(val* self, long p0))(var827->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var827, 175l); /* goto= on <var827:ReduceAction308>*/
}
{
((void(*)(val* self))(var827->class->vft[COLOR_standard__kernel__Object__init]))(var827); /* init on <var827:ReduceAction308>*/
}
var828 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var828->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var828, 176l); /* goto= on <var828:ReduceAction157>*/
}
{
((void(*)(val* self))(var828->class->vft[COLOR_standard__kernel__Object__init]))(var828); /* init on <var828:ReduceAction157>*/
}
var829 = NEW_nit__parser__ReduceAction310(&type_nit__parser__ReduceAction310);
{
((void(*)(val* self, long p0))(var829->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var829, 176l); /* goto= on <var829:ReduceAction310>*/
}
{
((void(*)(val* self))(var829->class->vft[COLOR_standard__kernel__Object__init]))(var829); /* init on <var829:ReduceAction310>*/
}
var830 = NEW_nit__parser__ReduceAction311(&type_nit__parser__ReduceAction311);
{
((void(*)(val* self, long p0))(var830->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var830, 176l); /* goto= on <var830:ReduceAction311>*/
}
{
((void(*)(val* self))(var830->class->vft[COLOR_standard__kernel__Object__init]))(var830); /* init on <var830:ReduceAction311>*/
}
var831 = NEW_nit__parser__ReduceAction312(&type_nit__parser__ReduceAction312);
{
((void(*)(val* self, long p0))(var831->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var831, 176l); /* goto= on <var831:ReduceAction312>*/
}
{
((void(*)(val* self))(var831->class->vft[COLOR_standard__kernel__Object__init]))(var831); /* init on <var831:ReduceAction312>*/
}
var832 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var832->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var832, 177l); /* goto= on <var832:ReduceAction157>*/
}
{
((void(*)(val* self))(var832->class->vft[COLOR_standard__kernel__Object__init]))(var832); /* init on <var832:ReduceAction157>*/
}
var833 = NEW_nit__parser__ReduceAction314(&type_nit__parser__ReduceAction314);
{
((void(*)(val* self, long p0))(var833->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var833, 177l); /* goto= on <var833:ReduceAction314>*/
}
{
((void(*)(val* self))(var833->class->vft[COLOR_standard__kernel__Object__init]))(var833); /* init on <var833:ReduceAction314>*/
}
var834 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var834->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var834, 178l); /* goto= on <var834:ReduceAction157>*/
}
{
((void(*)(val* self))(var834->class->vft[COLOR_standard__kernel__Object__init]))(var834); /* init on <var834:ReduceAction157>*/
}
var835 = NEW_nit__parser__ReduceAction316(&type_nit__parser__ReduceAction316);
{
((void(*)(val* self, long p0))(var835->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var835, 178l); /* goto= on <var835:ReduceAction316>*/
}
{
((void(*)(val* self))(var835->class->vft[COLOR_standard__kernel__Object__init]))(var835); /* init on <var835:ReduceAction316>*/
}
var836 = NEW_nit__parser__ReduceAction317(&type_nit__parser__ReduceAction317);
{
((void(*)(val* self, long p0))(var836->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var836, 178l); /* goto= on <var836:ReduceAction317>*/
}
{
((void(*)(val* self))(var836->class->vft[COLOR_standard__kernel__Object__init]))(var836); /* init on <var836:ReduceAction317>*/
}
var837 = NEW_nit__parser__ReduceAction318(&type_nit__parser__ReduceAction318);
{
((void(*)(val* self, long p0))(var837->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var837, 178l); /* goto= on <var837:ReduceAction318>*/
}
{
((void(*)(val* self))(var837->class->vft[COLOR_standard__kernel__Object__init]))(var837); /* init on <var837:ReduceAction318>*/
}
var838 = NEW_nit__parser__ReduceAction319(&type_nit__parser__ReduceAction319);
{
((void(*)(val* self, long p0))(var838->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var838, 178l); /* goto= on <var838:ReduceAction319>*/
}
{
((void(*)(val* self))(var838->class->vft[COLOR_standard__kernel__Object__init]))(var838); /* init on <var838:ReduceAction319>*/
}
var839 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var839->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var839, 179l); /* goto= on <var839:ReduceAction157>*/
}
{
((void(*)(val* self))(var839->class->vft[COLOR_standard__kernel__Object__init]))(var839); /* init on <var839:ReduceAction157>*/
}
var840 = NEW_nit__parser__ReduceAction321(&type_nit__parser__ReduceAction321);
{
((void(*)(val* self, long p0))(var840->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var840, 179l); /* goto= on <var840:ReduceAction321>*/
}
{
((void(*)(val* self))(var840->class->vft[COLOR_standard__kernel__Object__init]))(var840); /* init on <var840:ReduceAction321>*/
}
var841 = NEW_nit__parser__ReduceAction322(&type_nit__parser__ReduceAction322);
{
((void(*)(val* self, long p0))(var841->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var841, 179l); /* goto= on <var841:ReduceAction322>*/
}
{
((void(*)(val* self))(var841->class->vft[COLOR_standard__kernel__Object__init]))(var841); /* init on <var841:ReduceAction322>*/
}
var842 = NEW_nit__parser__ReduceAction841(&type_nit__parser__ReduceAction841);
{
((void(*)(val* self, long p0))(var842->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var842, 179l); /* goto= on <var842:ReduceAction841>*/
}
{
((void(*)(val* self))(var842->class->vft[COLOR_standard__kernel__Object__init]))(var842); /* init on <var842:ReduceAction841>*/
}
var843 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var843->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var843, 180l); /* goto= on <var843:ReduceAction157>*/
}
{
((void(*)(val* self))(var843->class->vft[COLOR_standard__kernel__Object__init]))(var843); /* init on <var843:ReduceAction157>*/
}
var844 = NEW_nit__parser__ReduceAction843(&type_nit__parser__ReduceAction843);
{
((void(*)(val* self, long p0))(var844->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var844, 180l); /* goto= on <var844:ReduceAction843>*/
}
{
((void(*)(val* self))(var844->class->vft[COLOR_standard__kernel__Object__init]))(var844); /* init on <var844:ReduceAction843>*/
}
var845 = NEW_nit__parser__ReduceAction844(&type_nit__parser__ReduceAction844);
{
((void(*)(val* self, long p0))(var845->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var845, 180l); /* goto= on <var845:ReduceAction844>*/
}
{
((void(*)(val* self))(var845->class->vft[COLOR_standard__kernel__Object__init]))(var845); /* init on <var845:ReduceAction844>*/
}
var846 = NEW_nit__parser__ReduceAction845(&type_nit__parser__ReduceAction845);
{
((void(*)(val* self, long p0))(var846->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var846, 180l); /* goto= on <var846:ReduceAction845>*/
}
{
((void(*)(val* self))(var846->class->vft[COLOR_standard__kernel__Object__init]))(var846); /* init on <var846:ReduceAction845>*/
}
var847 = NEW_nit__parser__ReduceAction846(&type_nit__parser__ReduceAction846);
{
((void(*)(val* self, long p0))(var847->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var847, 180l); /* goto= on <var847:ReduceAction846>*/
}
{
((void(*)(val* self))(var847->class->vft[COLOR_standard__kernel__Object__init]))(var847); /* init on <var847:ReduceAction846>*/
}
var848 = NEW_nit__parser__ReduceAction847(&type_nit__parser__ReduceAction847);
{
((void(*)(val* self, long p0))(var848->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var848, 180l); /* goto= on <var848:ReduceAction847>*/
}
{
((void(*)(val* self))(var848->class->vft[COLOR_standard__kernel__Object__init]))(var848); /* init on <var848:ReduceAction847>*/
}
var849 = NEW_nit__parser__ReduceAction181(&type_nit__parser__ReduceAction181);
{
((void(*)(val* self, long p0))(var849->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var849, 180l); /* goto= on <var849:ReduceAction181>*/
}
{
((void(*)(val* self))(var849->class->vft[COLOR_standard__kernel__Object__init]))(var849); /* init on <var849:ReduceAction181>*/
}
var850 = NEW_nit__parser__ReduceAction329(&type_nit__parser__ReduceAction329);
{
((void(*)(val* self, long p0))(var850->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var850, 180l); /* goto= on <var850:ReduceAction329>*/
}
{
((void(*)(val* self))(var850->class->vft[COLOR_standard__kernel__Object__init]))(var850); /* init on <var850:ReduceAction329>*/
}
var851 = NEW_nit__parser__ReduceAction846(&type_nit__parser__ReduceAction846);
{
((void(*)(val* self, long p0))(var851->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var851, 180l); /* goto= on <var851:ReduceAction846>*/
}
{
((void(*)(val* self))(var851->class->vft[COLOR_standard__kernel__Object__init]))(var851); /* init on <var851:ReduceAction846>*/
}
var852 = NEW_nit__parser__ReduceAction847(&type_nit__parser__ReduceAction847);
{
((void(*)(val* self, long p0))(var852->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var852, 180l); /* goto= on <var852:ReduceAction847>*/
}
{
((void(*)(val* self))(var852->class->vft[COLOR_standard__kernel__Object__init]))(var852); /* init on <var852:ReduceAction847>*/
}
var853 = NEW_nit__parser__ReduceAction189(&type_nit__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var853->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var853, 180l); /* goto= on <var853:ReduceAction189>*/
}
{
((void(*)(val* self))(var853->class->vft[COLOR_standard__kernel__Object__init]))(var853); /* init on <var853:ReduceAction189>*/
}
var854 = NEW_nit__parser__ReduceAction345(&type_nit__parser__ReduceAction345);
{
((void(*)(val* self, long p0))(var854->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var854, 180l); /* goto= on <var854:ReduceAction345>*/
}
{
((void(*)(val* self))(var854->class->vft[COLOR_standard__kernel__Object__init]))(var854); /* init on <var854:ReduceAction345>*/
}
var855 = NEW_nit__parser__ReduceAction854(&type_nit__parser__ReduceAction854);
{
((void(*)(val* self, long p0))(var855->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var855, 180l); /* goto= on <var855:ReduceAction854>*/
}
{
((void(*)(val* self))(var855->class->vft[COLOR_standard__kernel__Object__init]))(var855); /* init on <var855:ReduceAction854>*/
}
var856 = NEW_nit__parser__ReduceAction855(&type_nit__parser__ReduceAction855);
{
((void(*)(val* self, long p0))(var856->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var856, 180l); /* goto= on <var856:ReduceAction855>*/
}
{
((void(*)(val* self))(var856->class->vft[COLOR_standard__kernel__Object__init]))(var856); /* init on <var856:ReduceAction855>*/
}
var857 = NEW_nit__parser__ReduceAction351(&type_nit__parser__ReduceAction351);
{
((void(*)(val* self, long p0))(var857->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var857, 180l); /* goto= on <var857:ReduceAction351>*/
}
{
((void(*)(val* self))(var857->class->vft[COLOR_standard__kernel__Object__init]))(var857); /* init on <var857:ReduceAction351>*/
}
var858 = NEW_nit__parser__ReduceAction352(&type_nit__parser__ReduceAction352);
{
((void(*)(val* self, long p0))(var858->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var858, 180l); /* goto= on <var858:ReduceAction352>*/
}
{
((void(*)(val* self))(var858->class->vft[COLOR_standard__kernel__Object__init]))(var858); /* init on <var858:ReduceAction352>*/
}
var859 = NEW_nit__parser__ReduceAction353(&type_nit__parser__ReduceAction353);
{
((void(*)(val* self, long p0))(var859->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var859, 180l); /* goto= on <var859:ReduceAction353>*/
}
{
((void(*)(val* self))(var859->class->vft[COLOR_standard__kernel__Object__init]))(var859); /* init on <var859:ReduceAction353>*/
}
var860 = NEW_nit__parser__ReduceAction354(&type_nit__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var860->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var860, 180l); /* goto= on <var860:ReduceAction354>*/
}
{
((void(*)(val* self))(var860->class->vft[COLOR_standard__kernel__Object__init]))(var860); /* init on <var860:ReduceAction354>*/
}
var861 = NEW_nit__parser__ReduceAction355(&type_nit__parser__ReduceAction355);
{
((void(*)(val* self, long p0))(var861->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var861, 180l); /* goto= on <var861:ReduceAction355>*/
}
{
((void(*)(val* self))(var861->class->vft[COLOR_standard__kernel__Object__init]))(var861); /* init on <var861:ReduceAction355>*/
}
var862 = NEW_nit__parser__ReduceAction356(&type_nit__parser__ReduceAction356);
{
((void(*)(val* self, long p0))(var862->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var862, 180l); /* goto= on <var862:ReduceAction356>*/
}
{
((void(*)(val* self))(var862->class->vft[COLOR_standard__kernel__Object__init]))(var862); /* init on <var862:ReduceAction356>*/
}
var863 = NEW_nit__parser__ReduceAction353(&type_nit__parser__ReduceAction353);
{
((void(*)(val* self, long p0))(var863->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var863, 180l); /* goto= on <var863:ReduceAction353>*/
}
{
((void(*)(val* self))(var863->class->vft[COLOR_standard__kernel__Object__init]))(var863); /* init on <var863:ReduceAction353>*/
}
var864 = NEW_nit__parser__ReduceAction354(&type_nit__parser__ReduceAction354);
{
((void(*)(val* self, long p0))(var864->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var864, 180l); /* goto= on <var864:ReduceAction354>*/
}
{
((void(*)(val* self))(var864->class->vft[COLOR_standard__kernel__Object__init]))(var864); /* init on <var864:ReduceAction354>*/
}
var865 = NEW_nit__parser__ReduceAction359(&type_nit__parser__ReduceAction359);
{
((void(*)(val* self, long p0))(var865->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var865, 180l); /* goto= on <var865:ReduceAction359>*/
}
{
((void(*)(val* self))(var865->class->vft[COLOR_standard__kernel__Object__init]))(var865); /* init on <var865:ReduceAction359>*/
}
var866 = NEW_nit__parser__ReduceAction360(&type_nit__parser__ReduceAction360);
{
((void(*)(val* self, long p0))(var866->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var866, 180l); /* goto= on <var866:ReduceAction360>*/
}
{
((void(*)(val* self))(var866->class->vft[COLOR_standard__kernel__Object__init]))(var866); /* init on <var866:ReduceAction360>*/
}
var867 = NEW_nit__parser__ReduceAction361(&type_nit__parser__ReduceAction361);
{
((void(*)(val* self, long p0))(var867->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var867, 180l); /* goto= on <var867:ReduceAction361>*/
}
{
((void(*)(val* self))(var867->class->vft[COLOR_standard__kernel__Object__init]))(var867); /* init on <var867:ReduceAction361>*/
}
var868 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var868->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var868, 181l); /* goto= on <var868:ReduceAction157>*/
}
{
((void(*)(val* self))(var868->class->vft[COLOR_standard__kernel__Object__init]))(var868); /* init on <var868:ReduceAction157>*/
}
var869 = NEW_nit__parser__ReduceAction363(&type_nit__parser__ReduceAction363);
{
((void(*)(val* self, long p0))(var869->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var869, 181l); /* goto= on <var869:ReduceAction363>*/
}
{
((void(*)(val* self))(var869->class->vft[COLOR_standard__kernel__Object__init]))(var869); /* init on <var869:ReduceAction363>*/
}
var870 = NEW_nit__parser__ReduceAction364(&type_nit__parser__ReduceAction364);
{
((void(*)(val* self, long p0))(var870->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var870, 181l); /* goto= on <var870:ReduceAction364>*/
}
{
((void(*)(val* self))(var870->class->vft[COLOR_standard__kernel__Object__init]))(var870); /* init on <var870:ReduceAction364>*/
}
var871 = NEW_nit__parser__ReduceAction365(&type_nit__parser__ReduceAction365);
{
((void(*)(val* self, long p0))(var871->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var871, 182l); /* goto= on <var871:ReduceAction365>*/
}
{
((void(*)(val* self))(var871->class->vft[COLOR_standard__kernel__Object__init]))(var871); /* init on <var871:ReduceAction365>*/
}
var872 = NEW_nit__parser__ReduceAction366(&type_nit__parser__ReduceAction366);
{
((void(*)(val* self, long p0))(var872->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var872, 182l); /* goto= on <var872:ReduceAction366>*/
}
{
((void(*)(val* self))(var872->class->vft[COLOR_standard__kernel__Object__init]))(var872); /* init on <var872:ReduceAction366>*/
}
var873 = NEW_nit__parser__ReduceAction367(&type_nit__parser__ReduceAction367);
{
((void(*)(val* self, long p0))(var873->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var873, 182l); /* goto= on <var873:ReduceAction367>*/
}
{
((void(*)(val* self))(var873->class->vft[COLOR_standard__kernel__Object__init]))(var873); /* init on <var873:ReduceAction367>*/
}
var874 = NEW_nit__parser__ReduceAction368(&type_nit__parser__ReduceAction368);
{
((void(*)(val* self, long p0))(var874->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var874, 182l); /* goto= on <var874:ReduceAction368>*/
}
{
((void(*)(val* self))(var874->class->vft[COLOR_standard__kernel__Object__init]))(var874); /* init on <var874:ReduceAction368>*/
}
var875 = NEW_nit__parser__ReduceAction369(&type_nit__parser__ReduceAction369);
{
((void(*)(val* self, long p0))(var875->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var875, 182l); /* goto= on <var875:ReduceAction369>*/
}
{
((void(*)(val* self))(var875->class->vft[COLOR_standard__kernel__Object__init]))(var875); /* init on <var875:ReduceAction369>*/
}
var876 = NEW_nit__parser__ReduceAction370(&type_nit__parser__ReduceAction370);
{
((void(*)(val* self, long p0))(var876->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var876, 182l); /* goto= on <var876:ReduceAction370>*/
}
{
((void(*)(val* self))(var876->class->vft[COLOR_standard__kernel__Object__init]))(var876); /* init on <var876:ReduceAction370>*/
}
var877 = NEW_nit__parser__ReduceAction371(&type_nit__parser__ReduceAction371);
{
((void(*)(val* self, long p0))(var877->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var877, 182l); /* goto= on <var877:ReduceAction371>*/
}
{
((void(*)(val* self))(var877->class->vft[COLOR_standard__kernel__Object__init]))(var877); /* init on <var877:ReduceAction371>*/
}
var878 = NEW_nit__parser__ReduceAction372(&type_nit__parser__ReduceAction372);
{
((void(*)(val* self, long p0))(var878->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var878, 182l); /* goto= on <var878:ReduceAction372>*/
}
{
((void(*)(val* self))(var878->class->vft[COLOR_standard__kernel__Object__init]))(var878); /* init on <var878:ReduceAction372>*/
}
var879 = NEW_nit__parser__ReduceAction373(&type_nit__parser__ReduceAction373);
{
((void(*)(val* self, long p0))(var879->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var879, 182l); /* goto= on <var879:ReduceAction373>*/
}
{
((void(*)(val* self))(var879->class->vft[COLOR_standard__kernel__Object__init]))(var879); /* init on <var879:ReduceAction373>*/
}
var880 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var880->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var880, 182l); /* goto= on <var880:ReduceAction157>*/
}
{
((void(*)(val* self))(var880->class->vft[COLOR_standard__kernel__Object__init]))(var880); /* init on <var880:ReduceAction157>*/
}
var881 = NEW_nit__parser__ReduceAction880(&type_nit__parser__ReduceAction880);
{
((void(*)(val* self, long p0))(var881->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var881, 183l); /* goto= on <var881:ReduceAction880>*/
}
{
((void(*)(val* self))(var881->class->vft[COLOR_standard__kernel__Object__init]))(var881); /* init on <var881:ReduceAction880>*/
}
var882 = NEW_nit__parser__ReduceAction881(&type_nit__parser__ReduceAction881);
{
((void(*)(val* self, long p0))(var882->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var882, 183l); /* goto= on <var882:ReduceAction881>*/
}
{
((void(*)(val* self))(var882->class->vft[COLOR_standard__kernel__Object__init]))(var882); /* init on <var882:ReduceAction881>*/
}
var883 = NEW_nit__parser__ReduceAction154(&type_nit__parser__ReduceAction154);
{
((void(*)(val* self, long p0))(var883->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var883, 184l); /* goto= on <var883:ReduceAction154>*/
}
{
((void(*)(val* self))(var883->class->vft[COLOR_standard__kernel__Object__init]))(var883); /* init on <var883:ReduceAction154>*/
}
var884 = NEW_nit__parser__ReduceAction155(&type_nit__parser__ReduceAction155);
{
((void(*)(val* self, long p0))(var884->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var884, 184l); /* goto= on <var884:ReduceAction155>*/
}
{
((void(*)(val* self))(var884->class->vft[COLOR_standard__kernel__Object__init]))(var884); /* init on <var884:ReduceAction155>*/
}
var885 = NEW_nit__parser__ReduceAction156(&type_nit__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var885->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var885, 184l); /* goto= on <var885:ReduceAction156>*/
}
{
((void(*)(val* self))(var885->class->vft[COLOR_standard__kernel__Object__init]))(var885); /* init on <var885:ReduceAction156>*/
}
var886 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var886->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var886, 184l); /* goto= on <var886:ReduceAction157>*/
}
{
((void(*)(val* self))(var886->class->vft[COLOR_standard__kernel__Object__init]))(var886); /* init on <var886:ReduceAction157>*/
}
var887 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var887->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var887, 185l); /* goto= on <var887:ReduceAction157>*/
}
{
((void(*)(val* self))(var887->class->vft[COLOR_standard__kernel__Object__init]))(var887); /* init on <var887:ReduceAction157>*/
}
var888 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var888->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var888, 185l); /* goto= on <var888:ReduceAction157>*/
}
{
((void(*)(val* self))(var888->class->vft[COLOR_standard__kernel__Object__init]))(var888); /* init on <var888:ReduceAction157>*/
}
var889 = NEW_nit__parser__ReduceAction167(&type_nit__parser__ReduceAction167);
{
((void(*)(val* self, long p0))(var889->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var889, 185l); /* goto= on <var889:ReduceAction167>*/
}
{
((void(*)(val* self))(var889->class->vft[COLOR_standard__kernel__Object__init]))(var889); /* init on <var889:ReduceAction167>*/
}
var890 = NEW_nit__parser__ReduceAction168(&type_nit__parser__ReduceAction168);
{
((void(*)(val* self, long p0))(var890->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var890, 185l); /* goto= on <var890:ReduceAction168>*/
}
{
((void(*)(val* self))(var890->class->vft[COLOR_standard__kernel__Object__init]))(var890); /* init on <var890:ReduceAction168>*/
}
var891 = NEW_nit__parser__ReduceAction169(&type_nit__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var891->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var891, 185l); /* goto= on <var891:ReduceAction169>*/
}
{
((void(*)(val* self))(var891->class->vft[COLOR_standard__kernel__Object__init]))(var891); /* init on <var891:ReduceAction169>*/
}
var892 = NEW_nit__parser__ReduceAction170(&type_nit__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var892->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var892, 185l); /* goto= on <var892:ReduceAction170>*/
}
{
((void(*)(val* self))(var892->class->vft[COLOR_standard__kernel__Object__init]))(var892); /* init on <var892:ReduceAction170>*/
}
var893 = NEW_nit__parser__ReduceAction171(&type_nit__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var893->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var893, 185l); /* goto= on <var893:ReduceAction171>*/
}
{
((void(*)(val* self))(var893->class->vft[COLOR_standard__kernel__Object__init]))(var893); /* init on <var893:ReduceAction171>*/
}
var894 = NEW_nit__parser__ReduceAction172(&type_nit__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var894->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var894, 185l); /* goto= on <var894:ReduceAction172>*/
}
{
((void(*)(val* self))(var894->class->vft[COLOR_standard__kernel__Object__init]))(var894); /* init on <var894:ReduceAction172>*/
}
var895 = NEW_nit__parser__ReduceAction173(&type_nit__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var895->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var895, 185l); /* goto= on <var895:ReduceAction173>*/
}
{
((void(*)(val* self))(var895->class->vft[COLOR_standard__kernel__Object__init]))(var895); /* init on <var895:ReduceAction173>*/
}
var896 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var896->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var896, 185l); /* goto= on <var896:ReduceAction157>*/
}
{
((void(*)(val* self))(var896->class->vft[COLOR_standard__kernel__Object__init]))(var896); /* init on <var896:ReduceAction157>*/
}
var897 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var897->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var897, 185l); /* goto= on <var897:ReduceAction157>*/
}
{
((void(*)(val* self))(var897->class->vft[COLOR_standard__kernel__Object__init]))(var897); /* init on <var897:ReduceAction157>*/
}
var898 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var898->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var898, 185l); /* goto= on <var898:ReduceAction157>*/
}
{
((void(*)(val* self))(var898->class->vft[COLOR_standard__kernel__Object__init]))(var898); /* init on <var898:ReduceAction157>*/
}
var899 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var899->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var899, 185l); /* goto= on <var899:ReduceAction157>*/
}
{
((void(*)(val* self))(var899->class->vft[COLOR_standard__kernel__Object__init]))(var899); /* init on <var899:ReduceAction157>*/
}
var900 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var900->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var900, 185l); /* goto= on <var900:ReduceAction157>*/
}
{
((void(*)(val* self))(var900->class->vft[COLOR_standard__kernel__Object__init]))(var900); /* init on <var900:ReduceAction157>*/
}
var901 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var901->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var901, 185l); /* goto= on <var901:ReduceAction157>*/
}
{
((void(*)(val* self))(var901->class->vft[COLOR_standard__kernel__Object__init]))(var901); /* init on <var901:ReduceAction157>*/
}
var902 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var902->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var902, 185l); /* goto= on <var902:ReduceAction157>*/
}
{
((void(*)(val* self))(var902->class->vft[COLOR_standard__kernel__Object__init]))(var902); /* init on <var902:ReduceAction157>*/
}
var903 = NEW_nit__parser__ReduceAction181(&type_nit__parser__ReduceAction181);
{
((void(*)(val* self, long p0))(var903->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var903, 185l); /* goto= on <var903:ReduceAction181>*/
}
{
((void(*)(val* self))(var903->class->vft[COLOR_standard__kernel__Object__init]))(var903); /* init on <var903:ReduceAction181>*/
}
var904 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var904->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var904, 185l); /* goto= on <var904:ReduceAction182>*/
}
{
((void(*)(val* self))(var904->class->vft[COLOR_standard__kernel__Object__init]))(var904); /* init on <var904:ReduceAction182>*/
}
var905 = NEW_nit__parser__ReduceAction183(&type_nit__parser__ReduceAction183);
{
((void(*)(val* self, long p0))(var905->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var905, 185l); /* goto= on <var905:ReduceAction183>*/
}
{
((void(*)(val* self))(var905->class->vft[COLOR_standard__kernel__Object__init]))(var905); /* init on <var905:ReduceAction183>*/
}
var906 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var906->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var906, 185l); /* goto= on <var906:ReduceAction182>*/
}
{
((void(*)(val* self))(var906->class->vft[COLOR_standard__kernel__Object__init]))(var906); /* init on <var906:ReduceAction182>*/
}
var907 = NEW_nit__parser__ReduceAction185(&type_nit__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var907->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var907, 185l); /* goto= on <var907:ReduceAction185>*/
}
{
((void(*)(val* self))(var907->class->vft[COLOR_standard__kernel__Object__init]))(var907); /* init on <var907:ReduceAction185>*/
}
var908 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var908->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var908, 185l); /* goto= on <var908:ReduceAction186>*/
}
{
((void(*)(val* self))(var908->class->vft[COLOR_standard__kernel__Object__init]))(var908); /* init on <var908:ReduceAction186>*/
}
var909 = NEW_nit__parser__ReduceAction187(&type_nit__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var909->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var909, 185l); /* goto= on <var909:ReduceAction187>*/
}
{
((void(*)(val* self))(var909->class->vft[COLOR_standard__kernel__Object__init]))(var909); /* init on <var909:ReduceAction187>*/
}
var910 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var910->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var910, 185l); /* goto= on <var910:ReduceAction186>*/
}
{
((void(*)(val* self))(var910->class->vft[COLOR_standard__kernel__Object__init]))(var910); /* init on <var910:ReduceAction186>*/
}
var911 = NEW_nit__parser__ReduceAction189(&type_nit__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var911->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var911, 185l); /* goto= on <var911:ReduceAction189>*/
}
{
((void(*)(val* self))(var911->class->vft[COLOR_standard__kernel__Object__init]))(var911); /* init on <var911:ReduceAction189>*/
}
var912 = NEW_nit__parser__ReduceAction190(&type_nit__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var912->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var912, 185l); /* goto= on <var912:ReduceAction190>*/
}
{
((void(*)(val* self))(var912->class->vft[COLOR_standard__kernel__Object__init]))(var912); /* init on <var912:ReduceAction190>*/
}
var913 = NEW_nit__parser__ReduceAction191(&type_nit__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var913->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var913, 185l); /* goto= on <var913:ReduceAction191>*/
}
{
((void(*)(val* self))(var913->class->vft[COLOR_standard__kernel__Object__init]))(var913); /* init on <var913:ReduceAction191>*/
}
var914 = NEW_nit__parser__ReduceAction192(&type_nit__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var914->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var914, 185l); /* goto= on <var914:ReduceAction192>*/
}
{
((void(*)(val* self))(var914->class->vft[COLOR_standard__kernel__Object__init]))(var914); /* init on <var914:ReduceAction192>*/
}
var915 = NEW_nit__parser__ReduceAction193(&type_nit__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var915->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var915, 185l); /* goto= on <var915:ReduceAction193>*/
}
{
((void(*)(val* self))(var915->class->vft[COLOR_standard__kernel__Object__init]))(var915); /* init on <var915:ReduceAction193>*/
}
var916 = NEW_nit__parser__ReduceAction192(&type_nit__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var916->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var916, 185l); /* goto= on <var916:ReduceAction192>*/
}
{
((void(*)(val* self))(var916->class->vft[COLOR_standard__kernel__Object__init]))(var916); /* init on <var916:ReduceAction192>*/
}
var917 = NEW_nit__parser__ReduceAction195(&type_nit__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var917->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var917, 185l); /* goto= on <var917:ReduceAction195>*/
}
{
((void(*)(val* self))(var917->class->vft[COLOR_standard__kernel__Object__init]))(var917); /* init on <var917:ReduceAction195>*/
}
var918 = NEW_nit__parser__ReduceAction196(&type_nit__parser__ReduceAction196);
{
((void(*)(val* self, long p0))(var918->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var918, 185l); /* goto= on <var918:ReduceAction196>*/
}
{
((void(*)(val* self))(var918->class->vft[COLOR_standard__kernel__Object__init]))(var918); /* init on <var918:ReduceAction196>*/
}
var919 = NEW_nit__parser__ReduceAction195(&type_nit__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var919->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var919, 185l); /* goto= on <var919:ReduceAction195>*/
}
{
((void(*)(val* self))(var919->class->vft[COLOR_standard__kernel__Object__init]))(var919); /* init on <var919:ReduceAction195>*/
}
var920 = NEW_nit__parser__ReduceAction198(&type_nit__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var920->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var920, 185l); /* goto= on <var920:ReduceAction198>*/
}
{
((void(*)(val* self))(var920->class->vft[COLOR_standard__kernel__Object__init]))(var920); /* init on <var920:ReduceAction198>*/
}
var921 = NEW_nit__parser__ReduceAction254(&type_nit__parser__ReduceAction254);
{
((void(*)(val* self, long p0))(var921->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var921, 186l); /* goto= on <var921:ReduceAction254>*/
}
{
((void(*)(val* self))(var921->class->vft[COLOR_standard__kernel__Object__init]))(var921); /* init on <var921:ReduceAction254>*/
}
var922 = NEW_nit__parser__ReduceAction255(&type_nit__parser__ReduceAction255);
{
((void(*)(val* self, long p0))(var922->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var922, 186l); /* goto= on <var922:ReduceAction255>*/
}
{
((void(*)(val* self))(var922->class->vft[COLOR_standard__kernel__Object__init]))(var922); /* init on <var922:ReduceAction255>*/
}
var923 = NEW_nit__parser__ReduceAction256(&type_nit__parser__ReduceAction256);
{
((void(*)(val* self, long p0))(var923->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var923, 187l); /* goto= on <var923:ReduceAction256>*/
}
{
((void(*)(val* self))(var923->class->vft[COLOR_standard__kernel__Object__init]))(var923); /* init on <var923:ReduceAction256>*/
}
var924 = NEW_nit__parser__ReduceAction263(&type_nit__parser__ReduceAction263);
{
((void(*)(val* self, long p0))(var924->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var924, 188l); /* goto= on <var924:ReduceAction263>*/
}
{
((void(*)(val* self))(var924->class->vft[COLOR_standard__kernel__Object__init]))(var924); /* init on <var924:ReduceAction263>*/
}
var925 = NEW_nit__parser__ReduceAction264(&type_nit__parser__ReduceAction264);
{
((void(*)(val* self, long p0))(var925->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var925, 188l); /* goto= on <var925:ReduceAction264>*/
}
{
((void(*)(val* self))(var925->class->vft[COLOR_standard__kernel__Object__init]))(var925); /* init on <var925:ReduceAction264>*/
}
var926 = NEW_nit__parser__ReduceAction265(&type_nit__parser__ReduceAction265);
{
((void(*)(val* self, long p0))(var926->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var926, 189l); /* goto= on <var926:ReduceAction265>*/
}
{
((void(*)(val* self))(var926->class->vft[COLOR_standard__kernel__Object__init]))(var926); /* init on <var926:ReduceAction265>*/
}
var927 = NEW_nit__parser__ReduceAction266(&type_nit__parser__ReduceAction266);
{
((void(*)(val* self, long p0))(var927->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var927, 189l); /* goto= on <var927:ReduceAction266>*/
}
{
((void(*)(val* self))(var927->class->vft[COLOR_standard__kernel__Object__init]))(var927); /* init on <var927:ReduceAction266>*/
}
var928 = NEW_nit__parser__ReduceAction267(&type_nit__parser__ReduceAction267);
{
((void(*)(val* self, long p0))(var928->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var928, 190l); /* goto= on <var928:ReduceAction267>*/
}
{
((void(*)(val* self))(var928->class->vft[COLOR_standard__kernel__Object__init]))(var928); /* init on <var928:ReduceAction267>*/
}
var929 = NEW_nit__parser__ReduceAction268(&type_nit__parser__ReduceAction268);
{
((void(*)(val* self, long p0))(var929->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var929, 190l); /* goto= on <var929:ReduceAction268>*/
}
{
((void(*)(val* self))(var929->class->vft[COLOR_standard__kernel__Object__init]))(var929); /* init on <var929:ReduceAction268>*/
}
var930 = NEW_nit__parser__ReduceAction269(&type_nit__parser__ReduceAction269);
{
((void(*)(val* self, long p0))(var930->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var930, 191l); /* goto= on <var930:ReduceAction269>*/
}
{
((void(*)(val* self))(var930->class->vft[COLOR_standard__kernel__Object__init]))(var930); /* init on <var930:ReduceAction269>*/
}
var931 = NEW_nit__parser__ReduceAction270(&type_nit__parser__ReduceAction270);
{
((void(*)(val* self, long p0))(var931->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var931, 191l); /* goto= on <var931:ReduceAction270>*/
}
{
((void(*)(val* self))(var931->class->vft[COLOR_standard__kernel__Object__init]))(var931); /* init on <var931:ReduceAction270>*/
}
var932 = NEW_nit__parser__ReduceAction274(&type_nit__parser__ReduceAction274);
{
((void(*)(val* self, long p0))(var932->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var932, 192l); /* goto= on <var932:ReduceAction274>*/
}
{
((void(*)(val* self))(var932->class->vft[COLOR_standard__kernel__Object__init]))(var932); /* init on <var932:ReduceAction274>*/
}
var933 = NEW_nit__parser__ReduceAction275(&type_nit__parser__ReduceAction275);
{
((void(*)(val* self, long p0))(var933->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var933, 192l); /* goto= on <var933:ReduceAction275>*/
}
{
((void(*)(val* self))(var933->class->vft[COLOR_standard__kernel__Object__init]))(var933); /* init on <var933:ReduceAction275>*/
}
var934 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var934->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var934, 193l); /* goto= on <var934:ReduceAction157>*/
}
{
((void(*)(val* self))(var934->class->vft[COLOR_standard__kernel__Object__init]))(var934); /* init on <var934:ReduceAction157>*/
}
var935 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var935->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var935, 193l); /* goto= on <var935:ReduceAction157>*/
}
{
((void(*)(val* self))(var935->class->vft[COLOR_standard__kernel__Object__init]))(var935); /* init on <var935:ReduceAction157>*/
}
var936 = NEW_nit__parser__ReduceAction167(&type_nit__parser__ReduceAction167);
{
((void(*)(val* self, long p0))(var936->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var936, 193l); /* goto= on <var936:ReduceAction167>*/
}
{
((void(*)(val* self))(var936->class->vft[COLOR_standard__kernel__Object__init]))(var936); /* init on <var936:ReduceAction167>*/
}
var937 = NEW_nit__parser__ReduceAction168(&type_nit__parser__ReduceAction168);
{
((void(*)(val* self, long p0))(var937->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var937, 193l); /* goto= on <var937:ReduceAction168>*/
}
{
((void(*)(val* self))(var937->class->vft[COLOR_standard__kernel__Object__init]))(var937); /* init on <var937:ReduceAction168>*/
}
var938 = NEW_nit__parser__ReduceAction169(&type_nit__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var938->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var938, 193l); /* goto= on <var938:ReduceAction169>*/
}
{
((void(*)(val* self))(var938->class->vft[COLOR_standard__kernel__Object__init]))(var938); /* init on <var938:ReduceAction169>*/
}
var939 = NEW_nit__parser__ReduceAction170(&type_nit__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var939->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var939, 193l); /* goto= on <var939:ReduceAction170>*/
}
{
((void(*)(val* self))(var939->class->vft[COLOR_standard__kernel__Object__init]))(var939); /* init on <var939:ReduceAction170>*/
}
var940 = NEW_nit__parser__ReduceAction171(&type_nit__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var940->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var940, 193l); /* goto= on <var940:ReduceAction171>*/
}
{
((void(*)(val* self))(var940->class->vft[COLOR_standard__kernel__Object__init]))(var940); /* init on <var940:ReduceAction171>*/
}
var941 = NEW_nit__parser__ReduceAction172(&type_nit__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var941->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var941, 193l); /* goto= on <var941:ReduceAction172>*/
}
{
((void(*)(val* self))(var941->class->vft[COLOR_standard__kernel__Object__init]))(var941); /* init on <var941:ReduceAction172>*/
}
var942 = NEW_nit__parser__ReduceAction173(&type_nit__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var942->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var942, 193l); /* goto= on <var942:ReduceAction173>*/
}
{
((void(*)(val* self))(var942->class->vft[COLOR_standard__kernel__Object__init]))(var942); /* init on <var942:ReduceAction173>*/
}
var943 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var943->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var943, 193l); /* goto= on <var943:ReduceAction157>*/
}
{
((void(*)(val* self))(var943->class->vft[COLOR_standard__kernel__Object__init]))(var943); /* init on <var943:ReduceAction157>*/
}
var944 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var944->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var944, 193l); /* goto= on <var944:ReduceAction157>*/
}
{
((void(*)(val* self))(var944->class->vft[COLOR_standard__kernel__Object__init]))(var944); /* init on <var944:ReduceAction157>*/
}
var945 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var945->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var945, 193l); /* goto= on <var945:ReduceAction157>*/
}
{
((void(*)(val* self))(var945->class->vft[COLOR_standard__kernel__Object__init]))(var945); /* init on <var945:ReduceAction157>*/
}
var946 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var946->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var946, 193l); /* goto= on <var946:ReduceAction157>*/
}
{
((void(*)(val* self))(var946->class->vft[COLOR_standard__kernel__Object__init]))(var946); /* init on <var946:ReduceAction157>*/
}
var947 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var947->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var947, 193l); /* goto= on <var947:ReduceAction157>*/
}
{
((void(*)(val* self))(var947->class->vft[COLOR_standard__kernel__Object__init]))(var947); /* init on <var947:ReduceAction157>*/
}
var948 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var948->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var948, 193l); /* goto= on <var948:ReduceAction157>*/
}
{
((void(*)(val* self))(var948->class->vft[COLOR_standard__kernel__Object__init]))(var948); /* init on <var948:ReduceAction157>*/
}
var949 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var949->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var949, 193l); /* goto= on <var949:ReduceAction157>*/
}
{
((void(*)(val* self))(var949->class->vft[COLOR_standard__kernel__Object__init]))(var949); /* init on <var949:ReduceAction157>*/
}
var950 = NEW_nit__parser__ReduceAction181(&type_nit__parser__ReduceAction181);
{
((void(*)(val* self, long p0))(var950->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var950, 193l); /* goto= on <var950:ReduceAction181>*/
}
{
((void(*)(val* self))(var950->class->vft[COLOR_standard__kernel__Object__init]))(var950); /* init on <var950:ReduceAction181>*/
}
var951 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var951->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var951, 193l); /* goto= on <var951:ReduceAction182>*/
}
{
((void(*)(val* self))(var951->class->vft[COLOR_standard__kernel__Object__init]))(var951); /* init on <var951:ReduceAction182>*/
}
var952 = NEW_nit__parser__ReduceAction183(&type_nit__parser__ReduceAction183);
{
((void(*)(val* self, long p0))(var952->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var952, 193l); /* goto= on <var952:ReduceAction183>*/
}
{
((void(*)(val* self))(var952->class->vft[COLOR_standard__kernel__Object__init]))(var952); /* init on <var952:ReduceAction183>*/
}
var953 = NEW_nit__parser__ReduceAction182(&type_nit__parser__ReduceAction182);
{
((void(*)(val* self, long p0))(var953->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var953, 193l); /* goto= on <var953:ReduceAction182>*/
}
{
((void(*)(val* self))(var953->class->vft[COLOR_standard__kernel__Object__init]))(var953); /* init on <var953:ReduceAction182>*/
}
var954 = NEW_nit__parser__ReduceAction185(&type_nit__parser__ReduceAction185);
{
((void(*)(val* self, long p0))(var954->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var954, 193l); /* goto= on <var954:ReduceAction185>*/
}
{
((void(*)(val* self))(var954->class->vft[COLOR_standard__kernel__Object__init]))(var954); /* init on <var954:ReduceAction185>*/
}
var955 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var955->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var955, 193l); /* goto= on <var955:ReduceAction186>*/
}
{
((void(*)(val* self))(var955->class->vft[COLOR_standard__kernel__Object__init]))(var955); /* init on <var955:ReduceAction186>*/
}
var956 = NEW_nit__parser__ReduceAction187(&type_nit__parser__ReduceAction187);
{
((void(*)(val* self, long p0))(var956->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var956, 193l); /* goto= on <var956:ReduceAction187>*/
}
{
((void(*)(val* self))(var956->class->vft[COLOR_standard__kernel__Object__init]))(var956); /* init on <var956:ReduceAction187>*/
}
var957 = NEW_nit__parser__ReduceAction186(&type_nit__parser__ReduceAction186);
{
((void(*)(val* self, long p0))(var957->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var957, 193l); /* goto= on <var957:ReduceAction186>*/
}
{
((void(*)(val* self))(var957->class->vft[COLOR_standard__kernel__Object__init]))(var957); /* init on <var957:ReduceAction186>*/
}
var958 = NEW_nit__parser__ReduceAction189(&type_nit__parser__ReduceAction189);
{
((void(*)(val* self, long p0))(var958->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var958, 193l); /* goto= on <var958:ReduceAction189>*/
}
{
((void(*)(val* self))(var958->class->vft[COLOR_standard__kernel__Object__init]))(var958); /* init on <var958:ReduceAction189>*/
}
var959 = NEW_nit__parser__ReduceAction190(&type_nit__parser__ReduceAction190);
{
((void(*)(val* self, long p0))(var959->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var959, 193l); /* goto= on <var959:ReduceAction190>*/
}
{
((void(*)(val* self))(var959->class->vft[COLOR_standard__kernel__Object__init]))(var959); /* init on <var959:ReduceAction190>*/
}
var960 = NEW_nit__parser__ReduceAction191(&type_nit__parser__ReduceAction191);
{
((void(*)(val* self, long p0))(var960->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var960, 193l); /* goto= on <var960:ReduceAction191>*/
}
{
((void(*)(val* self))(var960->class->vft[COLOR_standard__kernel__Object__init]))(var960); /* init on <var960:ReduceAction191>*/
}
var961 = NEW_nit__parser__ReduceAction192(&type_nit__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var961->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var961, 193l); /* goto= on <var961:ReduceAction192>*/
}
{
((void(*)(val* self))(var961->class->vft[COLOR_standard__kernel__Object__init]))(var961); /* init on <var961:ReduceAction192>*/
}
var962 = NEW_nit__parser__ReduceAction193(&type_nit__parser__ReduceAction193);
{
((void(*)(val* self, long p0))(var962->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var962, 193l); /* goto= on <var962:ReduceAction193>*/
}
{
((void(*)(val* self))(var962->class->vft[COLOR_standard__kernel__Object__init]))(var962); /* init on <var962:ReduceAction193>*/
}
var963 = NEW_nit__parser__ReduceAction192(&type_nit__parser__ReduceAction192);
{
((void(*)(val* self, long p0))(var963->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var963, 193l); /* goto= on <var963:ReduceAction192>*/
}
{
((void(*)(val* self))(var963->class->vft[COLOR_standard__kernel__Object__init]))(var963); /* init on <var963:ReduceAction192>*/
}
var964 = NEW_nit__parser__ReduceAction195(&type_nit__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var964->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var964, 193l); /* goto= on <var964:ReduceAction195>*/
}
{
((void(*)(val* self))(var964->class->vft[COLOR_standard__kernel__Object__init]))(var964); /* init on <var964:ReduceAction195>*/
}
var965 = NEW_nit__parser__ReduceAction196(&type_nit__parser__ReduceAction196);
{
((void(*)(val* self, long p0))(var965->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var965, 193l); /* goto= on <var965:ReduceAction196>*/
}
{
((void(*)(val* self))(var965->class->vft[COLOR_standard__kernel__Object__init]))(var965); /* init on <var965:ReduceAction196>*/
}
var966 = NEW_nit__parser__ReduceAction195(&type_nit__parser__ReduceAction195);
{
((void(*)(val* self, long p0))(var966->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var966, 193l); /* goto= on <var966:ReduceAction195>*/
}
{
((void(*)(val* self))(var966->class->vft[COLOR_standard__kernel__Object__init]))(var966); /* init on <var966:ReduceAction195>*/
}
var967 = NEW_nit__parser__ReduceAction198(&type_nit__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var967->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var967, 193l); /* goto= on <var967:ReduceAction198>*/
}
{
((void(*)(val* self))(var967->class->vft[COLOR_standard__kernel__Object__init]))(var967); /* init on <var967:ReduceAction198>*/
}
var968 = NEW_nit__parser__ReduceAction154(&type_nit__parser__ReduceAction154);
{
((void(*)(val* self, long p0))(var968->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var968, 194l); /* goto= on <var968:ReduceAction154>*/
}
{
((void(*)(val* self))(var968->class->vft[COLOR_standard__kernel__Object__init]))(var968); /* init on <var968:ReduceAction154>*/
}
var969 = NEW_nit__parser__ReduceAction155(&type_nit__parser__ReduceAction155);
{
((void(*)(val* self, long p0))(var969->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var969, 194l); /* goto= on <var969:ReduceAction155>*/
}
{
((void(*)(val* self))(var969->class->vft[COLOR_standard__kernel__Object__init]))(var969); /* init on <var969:ReduceAction155>*/
}
var970 = NEW_nit__parser__ReduceAction156(&type_nit__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var970->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var970, 194l); /* goto= on <var970:ReduceAction156>*/
}
{
((void(*)(val* self))(var970->class->vft[COLOR_standard__kernel__Object__init]))(var970); /* init on <var970:ReduceAction156>*/
}
var971 = NEW_nit__parser__ReduceAction154(&type_nit__parser__ReduceAction154);
{
((void(*)(val* self, long p0))(var971->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var971, 195l); /* goto= on <var971:ReduceAction154>*/
}
{
((void(*)(val* self))(var971->class->vft[COLOR_standard__kernel__Object__init]))(var971); /* init on <var971:ReduceAction154>*/
}
var972 = NEW_nit__parser__ReduceAction155(&type_nit__parser__ReduceAction155);
{
((void(*)(val* self, long p0))(var972->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var972, 195l); /* goto= on <var972:ReduceAction155>*/
}
{
((void(*)(val* self))(var972->class->vft[COLOR_standard__kernel__Object__init]))(var972); /* init on <var972:ReduceAction155>*/
}
var973 = NEW_nit__parser__ReduceAction156(&type_nit__parser__ReduceAction156);
{
((void(*)(val* self, long p0))(var973->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var973, 195l); /* goto= on <var973:ReduceAction156>*/
}
{
((void(*)(val* self))(var973->class->vft[COLOR_standard__kernel__Object__init]))(var973); /* init on <var973:ReduceAction156>*/
}
var974 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var974->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var974, 196l); /* goto= on <var974:ReduceAction157>*/
}
{
((void(*)(val* self))(var974->class->vft[COLOR_standard__kernel__Object__init]))(var974); /* init on <var974:ReduceAction157>*/
}
var975 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var975->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var975, 196l); /* goto= on <var975:ReduceAction157>*/
}
{
((void(*)(val* self))(var975->class->vft[COLOR_standard__kernel__Object__init]))(var975); /* init on <var975:ReduceAction157>*/
}
var976 = NEW_nit__parser__ReduceAction167(&type_nit__parser__ReduceAction167);
{
((void(*)(val* self, long p0))(var976->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var976, 196l); /* goto= on <var976:ReduceAction167>*/
}
{
((void(*)(val* self))(var976->class->vft[COLOR_standard__kernel__Object__init]))(var976); /* init on <var976:ReduceAction167>*/
}
var977 = NEW_nit__parser__ReduceAction168(&type_nit__parser__ReduceAction168);
{
((void(*)(val* self, long p0))(var977->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var977, 196l); /* goto= on <var977:ReduceAction168>*/
}
{
((void(*)(val* self))(var977->class->vft[COLOR_standard__kernel__Object__init]))(var977); /* init on <var977:ReduceAction168>*/
}
var978 = NEW_nit__parser__ReduceAction169(&type_nit__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var978->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var978, 196l); /* goto= on <var978:ReduceAction169>*/
}
{
((void(*)(val* self))(var978->class->vft[COLOR_standard__kernel__Object__init]))(var978); /* init on <var978:ReduceAction169>*/
}
var979 = NEW_nit__parser__ReduceAction170(&type_nit__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var979->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var979, 196l); /* goto= on <var979:ReduceAction170>*/
}
{
((void(*)(val* self))(var979->class->vft[COLOR_standard__kernel__Object__init]))(var979); /* init on <var979:ReduceAction170>*/
}
var980 = NEW_nit__parser__ReduceAction171(&type_nit__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var980->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var980, 196l); /* goto= on <var980:ReduceAction171>*/
}
{
((void(*)(val* self))(var980->class->vft[COLOR_standard__kernel__Object__init]))(var980); /* init on <var980:ReduceAction171>*/
}
var981 = NEW_nit__parser__ReduceAction172(&type_nit__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var981->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var981, 196l); /* goto= on <var981:ReduceAction172>*/
}
{
((void(*)(val* self))(var981->class->vft[COLOR_standard__kernel__Object__init]))(var981); /* init on <var981:ReduceAction172>*/
}
var982 = NEW_nit__parser__ReduceAction173(&type_nit__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var982->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var982, 196l); /* goto= on <var982:ReduceAction173>*/
}
{
((void(*)(val* self))(var982->class->vft[COLOR_standard__kernel__Object__init]))(var982); /* init on <var982:ReduceAction173>*/
}
var983 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var983->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var983, 196l); /* goto= on <var983:ReduceAction157>*/
}
{
((void(*)(val* self))(var983->class->vft[COLOR_standard__kernel__Object__init]))(var983); /* init on <var983:ReduceAction157>*/
}
var984 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var984->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var984, 196l); /* goto= on <var984:ReduceAction157>*/
}
{
((void(*)(val* self))(var984->class->vft[COLOR_standard__kernel__Object__init]))(var984); /* init on <var984:ReduceAction157>*/
}
var985 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var985->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var985, 196l); /* goto= on <var985:ReduceAction157>*/
}
{
((void(*)(val* self))(var985->class->vft[COLOR_standard__kernel__Object__init]))(var985); /* init on <var985:ReduceAction157>*/
}
var986 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var986->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var986, 196l); /* goto= on <var986:ReduceAction157>*/
}
{
((void(*)(val* self))(var986->class->vft[COLOR_standard__kernel__Object__init]))(var986); /* init on <var986:ReduceAction157>*/
}
var987 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var987->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var987, 196l); /* goto= on <var987:ReduceAction157>*/
}
{
((void(*)(val* self))(var987->class->vft[COLOR_standard__kernel__Object__init]))(var987); /* init on <var987:ReduceAction157>*/
}
var988 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var988->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var988, 196l); /* goto= on <var988:ReduceAction157>*/
}
{
((void(*)(val* self))(var988->class->vft[COLOR_standard__kernel__Object__init]))(var988); /* init on <var988:ReduceAction157>*/
}
var989 = NEW_nit__parser__ReduceAction198(&type_nit__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var989->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var989, 196l); /* goto= on <var989:ReduceAction198>*/
}
{
((void(*)(val* self))(var989->class->vft[COLOR_standard__kernel__Object__init]))(var989); /* init on <var989:ReduceAction198>*/
}
var990 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var990->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var990, 197l); /* goto= on <var990:ReduceAction157>*/
}
{
((void(*)(val* self))(var990->class->vft[COLOR_standard__kernel__Object__init]))(var990); /* init on <var990:ReduceAction157>*/
}
var991 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var991->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var991, 197l); /* goto= on <var991:ReduceAction157>*/
}
{
((void(*)(val* self))(var991->class->vft[COLOR_standard__kernel__Object__init]))(var991); /* init on <var991:ReduceAction157>*/
}
var992 = NEW_nit__parser__ReduceAction167(&type_nit__parser__ReduceAction167);
{
((void(*)(val* self, long p0))(var992->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var992, 197l); /* goto= on <var992:ReduceAction167>*/
}
{
((void(*)(val* self))(var992->class->vft[COLOR_standard__kernel__Object__init]))(var992); /* init on <var992:ReduceAction167>*/
}
var993 = NEW_nit__parser__ReduceAction168(&type_nit__parser__ReduceAction168);
{
((void(*)(val* self, long p0))(var993->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var993, 197l); /* goto= on <var993:ReduceAction168>*/
}
{
((void(*)(val* self))(var993->class->vft[COLOR_standard__kernel__Object__init]))(var993); /* init on <var993:ReduceAction168>*/
}
var994 = NEW_nit__parser__ReduceAction169(&type_nit__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var994->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var994, 197l); /* goto= on <var994:ReduceAction169>*/
}
{
((void(*)(val* self))(var994->class->vft[COLOR_standard__kernel__Object__init]))(var994); /* init on <var994:ReduceAction169>*/
}
var995 = NEW_nit__parser__ReduceAction170(&type_nit__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var995->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var995, 197l); /* goto= on <var995:ReduceAction170>*/
}
{
((void(*)(val* self))(var995->class->vft[COLOR_standard__kernel__Object__init]))(var995); /* init on <var995:ReduceAction170>*/
}
var996 = NEW_nit__parser__ReduceAction171(&type_nit__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var996->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var996, 197l); /* goto= on <var996:ReduceAction171>*/
}
{
((void(*)(val* self))(var996->class->vft[COLOR_standard__kernel__Object__init]))(var996); /* init on <var996:ReduceAction171>*/
}
var997 = NEW_nit__parser__ReduceAction172(&type_nit__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var997->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var997, 197l); /* goto= on <var997:ReduceAction172>*/
}
{
((void(*)(val* self))(var997->class->vft[COLOR_standard__kernel__Object__init]))(var997); /* init on <var997:ReduceAction172>*/
}
var998 = NEW_nit__parser__ReduceAction173(&type_nit__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var998->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var998, 197l); /* goto= on <var998:ReduceAction173>*/
}
{
((void(*)(val* self))(var998->class->vft[COLOR_standard__kernel__Object__init]))(var998); /* init on <var998:ReduceAction173>*/
}
var999 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var999->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var999, 197l); /* goto= on <var999:ReduceAction157>*/
}
{
((void(*)(val* self))(var999->class->vft[COLOR_standard__kernel__Object__init]))(var999); /* init on <var999:ReduceAction157>*/
}
var1000 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1000->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1000, 197l); /* goto= on <var1000:ReduceAction157>*/
}
{
((void(*)(val* self))(var1000->class->vft[COLOR_standard__kernel__Object__init]))(var1000); /* init on <var1000:ReduceAction157>*/
}
var1001 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1001->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1001, 197l); /* goto= on <var1001:ReduceAction157>*/
}
{
((void(*)(val* self))(var1001->class->vft[COLOR_standard__kernel__Object__init]))(var1001); /* init on <var1001:ReduceAction157>*/
}
var1002 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1002->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1002, 197l); /* goto= on <var1002:ReduceAction157>*/
}
{
((void(*)(val* self))(var1002->class->vft[COLOR_standard__kernel__Object__init]))(var1002); /* init on <var1002:ReduceAction157>*/
}
var1003 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1003->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1003, 197l); /* goto= on <var1003:ReduceAction157>*/
}
{
((void(*)(val* self))(var1003->class->vft[COLOR_standard__kernel__Object__init]))(var1003); /* init on <var1003:ReduceAction157>*/
}
var1004 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1004->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1004, 197l); /* goto= on <var1004:ReduceAction157>*/
}
{
((void(*)(val* self))(var1004->class->vft[COLOR_standard__kernel__Object__init]))(var1004); /* init on <var1004:ReduceAction157>*/
}
var1005 = NEW_nit__parser__ReduceAction198(&type_nit__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var1005->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1005, 197l); /* goto= on <var1005:ReduceAction198>*/
}
{
((void(*)(val* self))(var1005->class->vft[COLOR_standard__kernel__Object__init]))(var1005); /* init on <var1005:ReduceAction198>*/
}
var1006 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1006->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1006, 198l); /* goto= on <var1006:ReduceAction157>*/
}
{
((void(*)(val* self))(var1006->class->vft[COLOR_standard__kernel__Object__init]))(var1006); /* init on <var1006:ReduceAction157>*/
}
var1007 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1007->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1007, 198l); /* goto= on <var1007:ReduceAction157>*/
}
{
((void(*)(val* self))(var1007->class->vft[COLOR_standard__kernel__Object__init]))(var1007); /* init on <var1007:ReduceAction157>*/
}
var1008 = NEW_nit__parser__ReduceAction167(&type_nit__parser__ReduceAction167);
{
((void(*)(val* self, long p0))(var1008->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1008, 198l); /* goto= on <var1008:ReduceAction167>*/
}
{
((void(*)(val* self))(var1008->class->vft[COLOR_standard__kernel__Object__init]))(var1008); /* init on <var1008:ReduceAction167>*/
}
var1009 = NEW_nit__parser__ReduceAction168(&type_nit__parser__ReduceAction168);
{
((void(*)(val* self, long p0))(var1009->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1009, 198l); /* goto= on <var1009:ReduceAction168>*/
}
{
((void(*)(val* self))(var1009->class->vft[COLOR_standard__kernel__Object__init]))(var1009); /* init on <var1009:ReduceAction168>*/
}
var1010 = NEW_nit__parser__ReduceAction169(&type_nit__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var1010->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1010, 198l); /* goto= on <var1010:ReduceAction169>*/
}
{
((void(*)(val* self))(var1010->class->vft[COLOR_standard__kernel__Object__init]))(var1010); /* init on <var1010:ReduceAction169>*/
}
var1011 = NEW_nit__parser__ReduceAction170(&type_nit__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var1011->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1011, 198l); /* goto= on <var1011:ReduceAction170>*/
}
{
((void(*)(val* self))(var1011->class->vft[COLOR_standard__kernel__Object__init]))(var1011); /* init on <var1011:ReduceAction170>*/
}
var1012 = NEW_nit__parser__ReduceAction171(&type_nit__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var1012->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1012, 198l); /* goto= on <var1012:ReduceAction171>*/
}
{
((void(*)(val* self))(var1012->class->vft[COLOR_standard__kernel__Object__init]))(var1012); /* init on <var1012:ReduceAction171>*/
}
var1013 = NEW_nit__parser__ReduceAction172(&type_nit__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var1013->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1013, 198l); /* goto= on <var1013:ReduceAction172>*/
}
{
((void(*)(val* self))(var1013->class->vft[COLOR_standard__kernel__Object__init]))(var1013); /* init on <var1013:ReduceAction172>*/
}
var1014 = NEW_nit__parser__ReduceAction173(&type_nit__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var1014->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1014, 198l); /* goto= on <var1014:ReduceAction173>*/
}
{
((void(*)(val* self))(var1014->class->vft[COLOR_standard__kernel__Object__init]))(var1014); /* init on <var1014:ReduceAction173>*/
}
var1015 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1015->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1015, 198l); /* goto= on <var1015:ReduceAction157>*/
}
{
((void(*)(val* self))(var1015->class->vft[COLOR_standard__kernel__Object__init]))(var1015); /* init on <var1015:ReduceAction157>*/
}
var1016 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1016->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1016, 198l); /* goto= on <var1016:ReduceAction157>*/
}
{
((void(*)(val* self))(var1016->class->vft[COLOR_standard__kernel__Object__init]))(var1016); /* init on <var1016:ReduceAction157>*/
}
var1017 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1017->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1017, 198l); /* goto= on <var1017:ReduceAction157>*/
}
{
((void(*)(val* self))(var1017->class->vft[COLOR_standard__kernel__Object__init]))(var1017); /* init on <var1017:ReduceAction157>*/
}
var1018 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1018->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1018, 198l); /* goto= on <var1018:ReduceAction157>*/
}
{
((void(*)(val* self))(var1018->class->vft[COLOR_standard__kernel__Object__init]))(var1018); /* init on <var1018:ReduceAction157>*/
}
var1019 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1019->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1019, 198l); /* goto= on <var1019:ReduceAction157>*/
}
{
((void(*)(val* self))(var1019->class->vft[COLOR_standard__kernel__Object__init]))(var1019); /* init on <var1019:ReduceAction157>*/
}
var1020 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1020->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1020, 198l); /* goto= on <var1020:ReduceAction157>*/
}
{
((void(*)(val* self))(var1020->class->vft[COLOR_standard__kernel__Object__init]))(var1020); /* init on <var1020:ReduceAction157>*/
}
var1021 = NEW_nit__parser__ReduceAction198(&type_nit__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var1021->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1021, 198l); /* goto= on <var1021:ReduceAction198>*/
}
{
((void(*)(val* self))(var1021->class->vft[COLOR_standard__kernel__Object__init]))(var1021); /* init on <var1021:ReduceAction198>*/
}
var1022 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1022->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1022, 199l); /* goto= on <var1022:ReduceAction157>*/
}
{
((void(*)(val* self))(var1022->class->vft[COLOR_standard__kernel__Object__init]))(var1022); /* init on <var1022:ReduceAction157>*/
}
var1023 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1023->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1023, 199l); /* goto= on <var1023:ReduceAction157>*/
}
{
((void(*)(val* self))(var1023->class->vft[COLOR_standard__kernel__Object__init]))(var1023); /* init on <var1023:ReduceAction157>*/
}
var1024 = NEW_nit__parser__ReduceAction167(&type_nit__parser__ReduceAction167);
{
((void(*)(val* self, long p0))(var1024->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1024, 199l); /* goto= on <var1024:ReduceAction167>*/
}
{
((void(*)(val* self))(var1024->class->vft[COLOR_standard__kernel__Object__init]))(var1024); /* init on <var1024:ReduceAction167>*/
}
var1025 = NEW_nit__parser__ReduceAction168(&type_nit__parser__ReduceAction168);
{
((void(*)(val* self, long p0))(var1025->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1025, 199l); /* goto= on <var1025:ReduceAction168>*/
}
{
((void(*)(val* self))(var1025->class->vft[COLOR_standard__kernel__Object__init]))(var1025); /* init on <var1025:ReduceAction168>*/
}
var1026 = NEW_nit__parser__ReduceAction169(&type_nit__parser__ReduceAction169);
{
((void(*)(val* self, long p0))(var1026->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1026, 199l); /* goto= on <var1026:ReduceAction169>*/
}
{
((void(*)(val* self))(var1026->class->vft[COLOR_standard__kernel__Object__init]))(var1026); /* init on <var1026:ReduceAction169>*/
}
var1027 = NEW_nit__parser__ReduceAction170(&type_nit__parser__ReduceAction170);
{
((void(*)(val* self, long p0))(var1027->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1027, 199l); /* goto= on <var1027:ReduceAction170>*/
}
{
((void(*)(val* self))(var1027->class->vft[COLOR_standard__kernel__Object__init]))(var1027); /* init on <var1027:ReduceAction170>*/
}
var1028 = NEW_nit__parser__ReduceAction171(&type_nit__parser__ReduceAction171);
{
((void(*)(val* self, long p0))(var1028->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1028, 199l); /* goto= on <var1028:ReduceAction171>*/
}
{
((void(*)(val* self))(var1028->class->vft[COLOR_standard__kernel__Object__init]))(var1028); /* init on <var1028:ReduceAction171>*/
}
var1029 = NEW_nit__parser__ReduceAction172(&type_nit__parser__ReduceAction172);
{
((void(*)(val* self, long p0))(var1029->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1029, 199l); /* goto= on <var1029:ReduceAction172>*/
}
{
((void(*)(val* self))(var1029->class->vft[COLOR_standard__kernel__Object__init]))(var1029); /* init on <var1029:ReduceAction172>*/
}
var1030 = NEW_nit__parser__ReduceAction173(&type_nit__parser__ReduceAction173);
{
((void(*)(val* self, long p0))(var1030->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1030, 199l); /* goto= on <var1030:ReduceAction173>*/
}
{
((void(*)(val* self))(var1030->class->vft[COLOR_standard__kernel__Object__init]))(var1030); /* init on <var1030:ReduceAction173>*/
}
var1031 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1031->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1031, 199l); /* goto= on <var1031:ReduceAction157>*/
}
{
((void(*)(val* self))(var1031->class->vft[COLOR_standard__kernel__Object__init]))(var1031); /* init on <var1031:ReduceAction157>*/
}
var1032 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1032->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1032, 199l); /* goto= on <var1032:ReduceAction157>*/
}
{
((void(*)(val* self))(var1032->class->vft[COLOR_standard__kernel__Object__init]))(var1032); /* init on <var1032:ReduceAction157>*/
}
var1033 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1033->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1033, 199l); /* goto= on <var1033:ReduceAction157>*/
}
{
((void(*)(val* self))(var1033->class->vft[COLOR_standard__kernel__Object__init]))(var1033); /* init on <var1033:ReduceAction157>*/
}
var1034 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1034->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1034, 199l); /* goto= on <var1034:ReduceAction157>*/
}
{
((void(*)(val* self))(var1034->class->vft[COLOR_standard__kernel__Object__init]))(var1034); /* init on <var1034:ReduceAction157>*/
}
var1035 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1035->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1035, 199l); /* goto= on <var1035:ReduceAction157>*/
}
{
((void(*)(val* self))(var1035->class->vft[COLOR_standard__kernel__Object__init]))(var1035); /* init on <var1035:ReduceAction157>*/
}
var1036 = NEW_nit__parser__ReduceAction157(&type_nit__parser__ReduceAction157);
{
((void(*)(val* self, long p0))(var1036->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1036, 199l); /* goto= on <var1036:ReduceAction157>*/
}
{
((void(*)(val* self))(var1036->class->vft[COLOR_standard__kernel__Object__init]))(var1036); /* init on <var1036:ReduceAction157>*/
}
var1037 = NEW_nit__parser__ReduceAction198(&type_nit__parser__ReduceAction198);
{
((void(*)(val* self, long p0))(var1037->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1037, 199l); /* goto= on <var1037:ReduceAction198>*/
}
{
((void(*)(val* self))(var1037->class->vft[COLOR_standard__kernel__Object__init]))(var1037); /* init on <var1037:ReduceAction198>*/
}
var1038 = NEW_nit__parser__ReduceAction432(&type_nit__parser__ReduceAction432);
{
((void(*)(val* self, long p0))(var1038->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1038, 200l); /* goto= on <var1038:ReduceAction432>*/
}
{
((void(*)(val* self))(var1038->class->vft[COLOR_standard__kernel__Object__init]))(var1038); /* init on <var1038:ReduceAction432>*/
}
var1039 = NEW_nit__parser__ReduceAction434(&type_nit__parser__ReduceAction434);
{
((void(*)(val* self, long p0))(var1039->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1039, 200l); /* goto= on <var1039:ReduceAction434>*/
}
{
((void(*)(val* self))(var1039->class->vft[COLOR_standard__kernel__Object__init]))(var1039); /* init on <var1039:ReduceAction434>*/
}
var1040 = NEW_nit__parser__ReduceAction1039(&type_nit__parser__ReduceAction1039);
{
((void(*)(val* self, long p0))(var1040->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1040, 201l); /* goto= on <var1040:ReduceAction1039>*/
}
{
((void(*)(val* self))(var1040->class->vft[COLOR_standard__kernel__Object__init]))(var1040); /* init on <var1040:ReduceAction1039>*/
}
var1041 = NEW_nit__parser__ReduceAction1040(&type_nit__parser__ReduceAction1040);
{
((void(*)(val* self, long p0))(var1041->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1041, 201l); /* goto= on <var1041:ReduceAction1040>*/
}
{
((void(*)(val* self))(var1041->class->vft[COLOR_standard__kernel__Object__init]))(var1041); /* init on <var1041:ReduceAction1040>*/
}
var1042 = NEW_nit__parser__ReduceAction1041(&type_nit__parser__ReduceAction1041);
{
((void(*)(val* self, long p0))(var1042->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1042, 202l); /* goto= on <var1042:ReduceAction1041>*/
}
{
((void(*)(val* self))(var1042->class->vft[COLOR_standard__kernel__Object__init]))(var1042); /* init on <var1042:ReduceAction1041>*/
}
var1043 = NEW_nit__parser__ReduceAction1042(&type_nit__parser__ReduceAction1042);
{
((void(*)(val* self, long p0))(var1043->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1043, 202l); /* goto= on <var1043:ReduceAction1042>*/
}
{
((void(*)(val* self))(var1043->class->vft[COLOR_standard__kernel__Object__init]))(var1043); /* init on <var1043:ReduceAction1042>*/
}
var1044 = NEW_nit__parser__ReduceAction1043(&type_nit__parser__ReduceAction1043);
{
((void(*)(val* self, long p0))(var1044->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1044, 203l); /* goto= on <var1044:ReduceAction1043>*/
}
{
((void(*)(val* self))(var1044->class->vft[COLOR_standard__kernel__Object__init]))(var1044); /* init on <var1044:ReduceAction1043>*/
}
var1045 = NEW_nit__parser__ReduceAction1044(&type_nit__parser__ReduceAction1044);
{
((void(*)(val* self, long p0))(var1045->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1045, 203l); /* goto= on <var1045:ReduceAction1044>*/
}
{
((void(*)(val* self))(var1045->class->vft[COLOR_standard__kernel__Object__init]))(var1045); /* init on <var1045:ReduceAction1044>*/
}
var1046 = NEW_nit__parser__ReduceAction1045(&type_nit__parser__ReduceAction1045);
{
((void(*)(val* self, long p0))(var1046->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1046, 204l); /* goto= on <var1046:ReduceAction1045>*/
}
{
((void(*)(val* self))(var1046->class->vft[COLOR_standard__kernel__Object__init]))(var1046); /* init on <var1046:ReduceAction1045>*/
}
var1047 = NEW_nit__parser__ReduceAction1046(&type_nit__parser__ReduceAction1046);
{
((void(*)(val* self, long p0))(var1047->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1047, 204l); /* goto= on <var1047:ReduceAction1046>*/
}
{
((void(*)(val* self))(var1047->class->vft[COLOR_standard__kernel__Object__init]))(var1047); /* init on <var1047:ReduceAction1046>*/
}
var1048 = NEW_nit__parser__ReduceAction43(&type_nit__parser__ReduceAction43);
{
((void(*)(val* self, long p0))(var1048->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1048, 205l); /* goto= on <var1048:ReduceAction43>*/
}
{
((void(*)(val* self))(var1048->class->vft[COLOR_standard__kernel__Object__init]))(var1048); /* init on <var1048:ReduceAction43>*/
}
var1049 = NEW_nit__parser__ReduceAction1048(&type_nit__parser__ReduceAction1048);
{
((void(*)(val* self, long p0))(var1049->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1049, 205l); /* goto= on <var1049:ReduceAction1048>*/
}
{
((void(*)(val* self))(var1049->class->vft[COLOR_standard__kernel__Object__init]))(var1049); /* init on <var1049:ReduceAction1048>*/
}
var1050 = NEW_nit__parser__ReduceAction1049(&type_nit__parser__ReduceAction1049);
{
((void(*)(val* self, long p0))(var1050->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1050, 206l); /* goto= on <var1050:ReduceAction1049>*/
}
{
((void(*)(val* self))(var1050->class->vft[COLOR_standard__kernel__Object__init]))(var1050); /* init on <var1050:ReduceAction1049>*/
}
var1051 = NEW_nit__parser__ReduceAction1050(&type_nit__parser__ReduceAction1050);
{
((void(*)(val* self, long p0))(var1051->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1051, 206l); /* goto= on <var1051:ReduceAction1050>*/
}
{
((void(*)(val* self))(var1051->class->vft[COLOR_standard__kernel__Object__init]))(var1051); /* init on <var1051:ReduceAction1050>*/
}
var1052 = NEW_nit__parser__ReduceAction1051(&type_nit__parser__ReduceAction1051);
{
((void(*)(val* self, long p0))(var1052->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1052, 207l); /* goto= on <var1052:ReduceAction1051>*/
}
{
((void(*)(val* self))(var1052->class->vft[COLOR_standard__kernel__Object__init]))(var1052); /* init on <var1052:ReduceAction1051>*/
}
var1053 = NEW_nit__parser__ReduceAction1052(&type_nit__parser__ReduceAction1052);
{
((void(*)(val* self, long p0))(var1053->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1053, 207l); /* goto= on <var1053:ReduceAction1052>*/
}
{
((void(*)(val* self))(var1053->class->vft[COLOR_standard__kernel__Object__init]))(var1053); /* init on <var1053:ReduceAction1052>*/
}
var1054 = NEW_nit__parser__ReduceAction148(&type_nit__parser__ReduceAction148);
{
((void(*)(val* self, long p0))(var1054->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1054, 208l); /* goto= on <var1054:ReduceAction148>*/
}
{
((void(*)(val* self))(var1054->class->vft[COLOR_standard__kernel__Object__init]))(var1054); /* init on <var1054:ReduceAction148>*/
}
var1055 = NEW_nit__parser__ReduceAction1054(&type_nit__parser__ReduceAction1054);
{
((void(*)(val* self, long p0))(var1055->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1055, 208l); /* goto= on <var1055:ReduceAction1054>*/
}
{
((void(*)(val* self))(var1055->class->vft[COLOR_standard__kernel__Object__init]))(var1055); /* init on <var1055:ReduceAction1054>*/
}
var1056 = NEW_nit__parser__ReduceAction383(&type_nit__parser__ReduceAction383);
{
((void(*)(val* self, long p0))(var1056->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1056, 209l); /* goto= on <var1056:ReduceAction383>*/
}
{
((void(*)(val* self))(var1056->class->vft[COLOR_standard__kernel__Object__init]))(var1056); /* init on <var1056:ReduceAction383>*/
}
var1057 = NEW_nit__parser__ReduceAction1056(&type_nit__parser__ReduceAction1056);
{
((void(*)(val* self, long p0))(var1057->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1057, 209l); /* goto= on <var1057:ReduceAction1056>*/
}
{
((void(*)(val* self))(var1057->class->vft[COLOR_standard__kernel__Object__init]))(var1057); /* init on <var1057:ReduceAction1056>*/
}
var1058 = NEW_nit__parser__ReduceAction383(&type_nit__parser__ReduceAction383);
{
((void(*)(val* self, long p0))(var1058->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1058, 210l); /* goto= on <var1058:ReduceAction383>*/
}
{
((void(*)(val* self))(var1058->class->vft[COLOR_standard__kernel__Object__init]))(var1058); /* init on <var1058:ReduceAction383>*/
}
var1059 = NEW_nit__parser__ReduceAction1056(&type_nit__parser__ReduceAction1056);
{
((void(*)(val* self, long p0))(var1059->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1059, 210l); /* goto= on <var1059:ReduceAction1056>*/
}
{
((void(*)(val* self))(var1059->class->vft[COLOR_standard__kernel__Object__init]))(var1059); /* init on <var1059:ReduceAction1056>*/
}
var1060 = NEW_nit__parser__ReduceAction383(&type_nit__parser__ReduceAction383);
{
((void(*)(val* self, long p0))(var1060->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1060, 211l); /* goto= on <var1060:ReduceAction383>*/
}
{
((void(*)(val* self))(var1060->class->vft[COLOR_standard__kernel__Object__init]))(var1060); /* init on <var1060:ReduceAction383>*/
}
var1061 = NEW_nit__parser__ReduceAction1056(&type_nit__parser__ReduceAction1056);
{
((void(*)(val* self, long p0))(var1061->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1061, 211l); /* goto= on <var1061:ReduceAction1056>*/
}
{
((void(*)(val* self))(var1061->class->vft[COLOR_standard__kernel__Object__init]))(var1061); /* init on <var1061:ReduceAction1056>*/
}
var1062 = NEW_nit__parser__ReduceAction446(&type_nit__parser__ReduceAction446);
{
((void(*)(val* self, long p0))(var1062->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1062, 212l); /* goto= on <var1062:ReduceAction446>*/
}
{
((void(*)(val* self))(var1062->class->vft[COLOR_standard__kernel__Object__init]))(var1062); /* init on <var1062:ReduceAction446>*/
}
var1063 = NEW_nit__parser__ReduceAction1062(&type_nit__parser__ReduceAction1062);
{
((void(*)(val* self, long p0))(var1063->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1063, 212l); /* goto= on <var1063:ReduceAction1062>*/
}
{
((void(*)(val* self))(var1063->class->vft[COLOR_standard__kernel__Object__init]))(var1063); /* init on <var1063:ReduceAction1062>*/
}
var1064 = NEW_nit__parser__ReduceAction405(&type_nit__parser__ReduceAction405);
{
((void(*)(val* self, long p0))(var1064->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1064, 213l); /* goto= on <var1064:ReduceAction405>*/
}
{
((void(*)(val* self))(var1064->class->vft[COLOR_standard__kernel__Object__init]))(var1064); /* init on <var1064:ReduceAction405>*/
}
var1065 = NEW_nit__parser__ReduceAction1064(&type_nit__parser__ReduceAction1064);
{
((void(*)(val* self, long p0))(var1065->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1065, 213l); /* goto= on <var1065:ReduceAction1064>*/
}
{
((void(*)(val* self))(var1065->class->vft[COLOR_standard__kernel__Object__init]))(var1065); /* init on <var1065:ReduceAction1064>*/
}
var1066 = NEW_nit__parser__ReduceAction405(&type_nit__parser__ReduceAction405);
{
((void(*)(val* self, long p0))(var1066->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1066, 214l); /* goto= on <var1066:ReduceAction405>*/
}
{
((void(*)(val* self))(var1066->class->vft[COLOR_standard__kernel__Object__init]))(var1066); /* init on <var1066:ReduceAction405>*/
}
var1067 = NEW_nit__parser__ReduceAction1064(&type_nit__parser__ReduceAction1064);
{
((void(*)(val* self, long p0))(var1067->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1067, 214l); /* goto= on <var1067:ReduceAction1064>*/
}
{
((void(*)(val* self))(var1067->class->vft[COLOR_standard__kernel__Object__init]))(var1067); /* init on <var1067:ReduceAction1064>*/
}
var1068 = NEW_nit__parser__ReduceAction383(&type_nit__parser__ReduceAction383);
{
((void(*)(val* self, long p0))(var1068->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1068, 215l); /* goto= on <var1068:ReduceAction383>*/
}
{
((void(*)(val* self))(var1068->class->vft[COLOR_standard__kernel__Object__init]))(var1068); /* init on <var1068:ReduceAction383>*/
}
var1069 = NEW_nit__parser__ReduceAction1056(&type_nit__parser__ReduceAction1056);
{
((void(*)(val* self, long p0))(var1069->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1069, 215l); /* goto= on <var1069:ReduceAction1056>*/
}
{
((void(*)(val* self))(var1069->class->vft[COLOR_standard__kernel__Object__init]))(var1069); /* init on <var1069:ReduceAction1056>*/
}
var1070 = NEW_nit__parser__ReduceAction383(&type_nit__parser__ReduceAction383);
{
((void(*)(val* self, long p0))(var1070->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1070, 216l); /* goto= on <var1070:ReduceAction383>*/
}
{
((void(*)(val* self))(var1070->class->vft[COLOR_standard__kernel__Object__init]))(var1070); /* init on <var1070:ReduceAction383>*/
}
var1071 = NEW_nit__parser__ReduceAction1056(&type_nit__parser__ReduceAction1056);
{
((void(*)(val* self, long p0))(var1071->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1071, 216l); /* goto= on <var1071:ReduceAction1056>*/
}
{
((void(*)(val* self))(var1071->class->vft[COLOR_standard__kernel__Object__init]))(var1071); /* init on <var1071:ReduceAction1056>*/
}
var1072 = NEW_nit__parser__ReduceAction447(&type_nit__parser__ReduceAction447);
{
((void(*)(val* self, long p0))(var1072->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1072, 217l); /* goto= on <var1072:ReduceAction447>*/
}
{
((void(*)(val* self))(var1072->class->vft[COLOR_standard__kernel__Object__init]))(var1072); /* init on <var1072:ReduceAction447>*/
}
var1073 = NEW_nit__parser__ReduceAction1072(&type_nit__parser__ReduceAction1072);
{
((void(*)(val* self, long p0))(var1073->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1073, 217l); /* goto= on <var1073:ReduceAction1072>*/
}
{
((void(*)(val* self))(var1073->class->vft[COLOR_standard__kernel__Object__init]))(var1073); /* init on <var1073:ReduceAction1072>*/
}
var1074 = NEW_nit__parser__ReduceAction1073(&type_nit__parser__ReduceAction1073);
{
((void(*)(val* self, long p0))(var1074->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1074, 218l); /* goto= on <var1074:ReduceAction1073>*/
}
{
((void(*)(val* self))(var1074->class->vft[COLOR_standard__kernel__Object__init]))(var1074); /* init on <var1074:ReduceAction1073>*/
}
var1075 = NEW_nit__parser__ReduceAction1074(&type_nit__parser__ReduceAction1074);
{
((void(*)(val* self, long p0))(var1075->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1075, 218l); /* goto= on <var1075:ReduceAction1074>*/
}
{
((void(*)(val* self))(var1075->class->vft[COLOR_standard__kernel__Object__init]))(var1075); /* init on <var1075:ReduceAction1074>*/
}
var1076 = NEW_nit__parser__ReduceAction1075(&type_nit__parser__ReduceAction1075);
{
((void(*)(val* self, long p0))(var1076->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1076, 219l); /* goto= on <var1076:ReduceAction1075>*/
}
{
((void(*)(val* self))(var1076->class->vft[COLOR_standard__kernel__Object__init]))(var1076); /* init on <var1076:ReduceAction1075>*/
}
var1077 = NEW_nit__parser__ReduceAction1076(&type_nit__parser__ReduceAction1076);
{
((void(*)(val* self, long p0))(var1077->class->vft[COLOR_nit__parser_work__ReduceAction__goto_61d]))(var1077, 219l); /* goto= on <var1077:ReduceAction1076>*/
}
{
((void(*)(val* self))(var1077->class->vft[COLOR_standard__kernel__Object__init]))(var1077); /* init on <var1077:ReduceAction1076>*/
}
var1078 = NEW_standard__Array(var->type->resolution_table->types[COLOR_standard__Array__standard__Array___35dE]);
{ /* var1078 = array_instance Array[E] */
var1079 = NEW_standard__NativeArray(1077l, var->type->resolution_table->types[COLOR_standard__NativeArray__standard__Array___35dE]);
((struct instance_standard__NativeArray*)var1079)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var1079)->values[1] = (val*) var2;
((struct instance_standard__NativeArray*)var1079)->values[2] = (val*) var3;
((struct instance_standard__NativeArray*)var1079)->values[3] = (val*) var4;
((struct instance_standard__NativeArray*)var1079)->values[4] = (val*) var5;
((struct instance_standard__NativeArray*)var1079)->values[5] = (val*) var6;
((struct instance_standard__NativeArray*)var1079)->values[6] = (val*) var7;
((struct instance_standard__NativeArray*)var1079)->values[7] = (val*) var8;
((struct instance_standard__NativeArray*)var1079)->values[8] = (val*) var9;
((struct instance_standard__NativeArray*)var1079)->values[9] = (val*) var10;
((struct instance_standard__NativeArray*)var1079)->values[10] = (val*) var11;
((struct instance_standard__NativeArray*)var1079)->values[11] = (val*) var12;
((struct instance_standard__NativeArray*)var1079)->values[12] = (val*) var13;
((struct instance_standard__NativeArray*)var1079)->values[13] = (val*) var14;
((struct instance_standard__NativeArray*)var1079)->values[14] = (val*) var15;
((struct instance_standard__NativeArray*)var1079)->values[15] = (val*) var16;
((struct instance_standard__NativeArray*)var1079)->values[16] = (val*) var17;
((struct instance_standard__NativeArray*)var1079)->values[17] = (val*) var18;
((struct instance_standard__NativeArray*)var1079)->values[18] = (val*) var19;
((struct instance_standard__NativeArray*)var1079)->values[19] = (val*) var20;
((struct instance_standard__NativeArray*)var1079)->values[20] = (val*) var21;
((struct instance_standard__NativeArray*)var1079)->values[21] = (val*) var22;
((struct instance_standard__NativeArray*)var1079)->values[22] = (val*) var23;
((struct instance_standard__NativeArray*)var1079)->values[23] = (val*) var24;
((struct instance_standard__NativeArray*)var1079)->values[24] = (val*) var25;
((struct instance_standard__NativeArray*)var1079)->values[25] = (val*) var26;
((struct instance_standard__NativeArray*)var1079)->values[26] = (val*) var27;
((struct instance_standard__NativeArray*)var1079)->values[27] = (val*) var28;
((struct instance_standard__NativeArray*)var1079)->values[28] = (val*) var29;
((struct instance_standard__NativeArray*)var1079)->values[29] = (val*) var30;
((struct instance_standard__NativeArray*)var1079)->values[30] = (val*) var31;
((struct instance_standard__NativeArray*)var1079)->values[31] = (val*) var32;
((struct instance_standard__NativeArray*)var1079)->values[32] = (val*) var33;
((struct instance_standard__NativeArray*)var1079)->values[33] = (val*) var34;
((struct instance_standard__NativeArray*)var1079)->values[34] = (val*) var35;
((struct instance_standard__NativeArray*)var1079)->values[35] = (val*) var36;
((struct instance_standard__NativeArray*)var1079)->values[36] = (val*) var37;
((struct instance_standard__NativeArray*)var1079)->values[37] = (val*) var38;
((struct instance_standard__NativeArray*)var1079)->values[38] = (val*) var39;
((struct instance_standard__NativeArray*)var1079)->values[39] = (val*) var40;
((struct instance_standard__NativeArray*)var1079)->values[40] = (val*) var41;
((struct instance_standard__NativeArray*)var1079)->values[41] = (val*) var42;
((struct instance_standard__NativeArray*)var1079)->values[42] = (val*) var43;
((struct instance_standard__NativeArray*)var1079)->values[43] = (val*) var44;
((struct instance_standard__NativeArray*)var1079)->values[44] = (val*) var45;
((struct instance_standard__NativeArray*)var1079)->values[45] = (val*) var46;
((struct instance_standard__NativeArray*)var1079)->values[46] = (val*) var47;
((struct instance_standard__NativeArray*)var1079)->values[47] = (val*) var48;
((struct instance_standard__NativeArray*)var1079)->values[48] = (val*) var49;
((struct instance_standard__NativeArray*)var1079)->values[49] = (val*) var50;
((struct instance_standard__NativeArray*)var1079)->values[50] = (val*) var51;
((struct instance_standard__NativeArray*)var1079)->values[51] = (val*) var52;
((struct instance_standard__NativeArray*)var1079)->values[52] = (val*) var53;
((struct instance_standard__NativeArray*)var1079)->values[53] = (val*) var54;
((struct instance_standard__NativeArray*)var1079)->values[54] = (val*) var55;
((struct instance_standard__NativeArray*)var1079)->values[55] = (val*) var56;
((struct instance_standard__NativeArray*)var1079)->values[56] = (val*) var57;
((struct instance_standard__NativeArray*)var1079)->values[57] = (val*) var58;
((struct instance_standard__NativeArray*)var1079)->values[58] = (val*) var59;
((struct instance_standard__NativeArray*)var1079)->values[59] = (val*) var60;
((struct instance_standard__NativeArray*)var1079)->values[60] = (val*) var61;
((struct instance_standard__NativeArray*)var1079)->values[61] = (val*) var62;
((struct instance_standard__NativeArray*)var1079)->values[62] = (val*) var63;
((struct instance_standard__NativeArray*)var1079)->values[63] = (val*) var64;
((struct instance_standard__NativeArray*)var1079)->values[64] = (val*) var65;
((struct instance_standard__NativeArray*)var1079)->values[65] = (val*) var66;
((struct instance_standard__NativeArray*)var1079)->values[66] = (val*) var67;
((struct instance_standard__NativeArray*)var1079)->values[67] = (val*) var68;
((struct instance_standard__NativeArray*)var1079)->values[68] = (val*) var69;
((struct instance_standard__NativeArray*)var1079)->values[69] = (val*) var70;
((struct instance_standard__NativeArray*)var1079)->values[70] = (val*) var71;
((struct instance_standard__NativeArray*)var1079)->values[71] = (val*) var72;
((struct instance_standard__NativeArray*)var1079)->values[72] = (val*) var73;
((struct instance_standard__NativeArray*)var1079)->values[73] = (val*) var74;
((struct instance_standard__NativeArray*)var1079)->values[74] = (val*) var75;
((struct instance_standard__NativeArray*)var1079)->values[75] = (val*) var76;
((struct instance_standard__NativeArray*)var1079)->values[76] = (val*) var77;
((struct instance_standard__NativeArray*)var1079)->values[77] = (val*) var78;
((struct instance_standard__NativeArray*)var1079)->values[78] = (val*) var79;
((struct instance_standard__NativeArray*)var1079)->values[79] = (val*) var80;
((struct instance_standard__NativeArray*)var1079)->values[80] = (val*) var81;
((struct instance_standard__NativeArray*)var1079)->values[81] = (val*) var82;
((struct instance_standard__NativeArray*)var1079)->values[82] = (val*) var83;
((struct instance_standard__NativeArray*)var1079)->values[83] = (val*) var84;
((struct instance_standard__NativeArray*)var1079)->values[84] = (val*) var85;
((struct instance_standard__NativeArray*)var1079)->values[85] = (val*) var86;
((struct instance_standard__NativeArray*)var1079)->values[86] = (val*) var87;
((struct instance_standard__NativeArray*)var1079)->values[87] = (val*) var88;
((struct instance_standard__NativeArray*)var1079)->values[88] = (val*) var89;
((struct instance_standard__NativeArray*)var1079)->values[89] = (val*) var90;
((struct instance_standard__NativeArray*)var1079)->values[90] = (val*) var91;
((struct instance_standard__NativeArray*)var1079)->values[91] = (val*) var92;
((struct instance_standard__NativeArray*)var1079)->values[92] = (val*) var93;
((struct instance_standard__NativeArray*)var1079)->values[93] = (val*) var94;
((struct instance_standard__NativeArray*)var1079)->values[94] = (val*) var95;
((struct instance_standard__NativeArray*)var1079)->values[95] = (val*) var96;
((struct instance_standard__NativeArray*)var1079)->values[96] = (val*) var97;
((struct instance_standard__NativeArray*)var1079)->values[97] = (val*) var98;
((struct instance_standard__NativeArray*)var1079)->values[98] = (val*) var99;
((struct instance_standard__NativeArray*)var1079)->values[99] = (val*) var100;
((struct instance_standard__NativeArray*)var1079)->values[100] = (val*) var101;
((struct instance_standard__NativeArray*)var1079)->values[101] = (val*) var102;
((struct instance_standard__NativeArray*)var1079)->values[102] = (val*) var103;
((struct instance_standard__NativeArray*)var1079)->values[103] = (val*) var104;
((struct instance_standard__NativeArray*)var1079)->values[104] = (val*) var105;
((struct instance_standard__NativeArray*)var1079)->values[105] = (val*) var106;
((struct instance_standard__NativeArray*)var1079)->values[106] = (val*) var107;
((struct instance_standard__NativeArray*)var1079)->values[107] = (val*) var108;
((struct instance_standard__NativeArray*)var1079)->values[108] = (val*) var109;
((struct instance_standard__NativeArray*)var1079)->values[109] = (val*) var110;
((struct instance_standard__NativeArray*)var1079)->values[110] = (val*) var111;
((struct instance_standard__NativeArray*)var1079)->values[111] = (val*) var112;
((struct instance_standard__NativeArray*)var1079)->values[112] = (val*) var113;
((struct instance_standard__NativeArray*)var1079)->values[113] = (val*) var114;
((struct instance_standard__NativeArray*)var1079)->values[114] = (val*) var115;
((struct instance_standard__NativeArray*)var1079)->values[115] = (val*) var116;
((struct instance_standard__NativeArray*)var1079)->values[116] = (val*) var117;
((struct instance_standard__NativeArray*)var1079)->values[117] = (val*) var118;
((struct instance_standard__NativeArray*)var1079)->values[118] = (val*) var119;
((struct instance_standard__NativeArray*)var1079)->values[119] = (val*) var120;
((struct instance_standard__NativeArray*)var1079)->values[120] = (val*) var121;
((struct instance_standard__NativeArray*)var1079)->values[121] = (val*) var122;
((struct instance_standard__NativeArray*)var1079)->values[122] = (val*) var123;
((struct instance_standard__NativeArray*)var1079)->values[123] = (val*) var124;
((struct instance_standard__NativeArray*)var1079)->values[124] = (val*) var125;
((struct instance_standard__NativeArray*)var1079)->values[125] = (val*) var126;
((struct instance_standard__NativeArray*)var1079)->values[126] = (val*) var127;
((struct instance_standard__NativeArray*)var1079)->values[127] = (val*) var128;
((struct instance_standard__NativeArray*)var1079)->values[128] = (val*) var129;
((struct instance_standard__NativeArray*)var1079)->values[129] = (val*) var130;
((struct instance_standard__NativeArray*)var1079)->values[130] = (val*) var131;
((struct instance_standard__NativeArray*)var1079)->values[131] = (val*) var132;
((struct instance_standard__NativeArray*)var1079)->values[132] = (val*) var133;
((struct instance_standard__NativeArray*)var1079)->values[133] = (val*) var134;
((struct instance_standard__NativeArray*)var1079)->values[134] = (val*) var135;
((struct instance_standard__NativeArray*)var1079)->values[135] = (val*) var136;
((struct instance_standard__NativeArray*)var1079)->values[136] = (val*) var137;
((struct instance_standard__NativeArray*)var1079)->values[137] = (val*) var138;
((struct instance_standard__NativeArray*)var1079)->values[138] = (val*) var139;
((struct instance_standard__NativeArray*)var1079)->values[139] = (val*) var140;
((struct instance_standard__NativeArray*)var1079)->values[140] = (val*) var141;
((struct instance_standard__NativeArray*)var1079)->values[141] = (val*) var142;
((struct instance_standard__NativeArray*)var1079)->values[142] = (val*) var143;
((struct instance_standard__NativeArray*)var1079)->values[143] = (val*) var144;
((struct instance_standard__NativeArray*)var1079)->values[144] = (val*) var145;
((struct instance_standard__NativeArray*)var1079)->values[145] = (val*) var146;
((struct instance_standard__NativeArray*)var1079)->values[146] = (val*) var147;
((struct instance_standard__NativeArray*)var1079)->values[147] = (val*) var148;
((struct instance_standard__NativeArray*)var1079)->values[148] = (val*) var149;
((struct instance_standard__NativeArray*)var1079)->values[149] = (val*) var150;
((struct instance_standard__NativeArray*)var1079)->values[150] = (val*) var151;
((struct instance_standard__NativeArray*)var1079)->values[151] = (val*) var152;
((struct instance_standard__NativeArray*)var1079)->values[152] = (val*) var153;
((struct instance_standard__NativeArray*)var1079)->values[153] = (val*) var154;
((struct instance_standard__NativeArray*)var1079)->values[154] = (val*) var155;
((struct instance_standard__NativeArray*)var1079)->values[155] = (val*) var156;
((struct instance_standard__NativeArray*)var1079)->values[156] = (val*) var157;
((struct instance_standard__NativeArray*)var1079)->values[157] = (val*) var158;
((struct instance_standard__NativeArray*)var1079)->values[158] = (val*) var159;
((struct instance_standard__NativeArray*)var1079)->values[159] = (val*) var160;
((struct instance_standard__NativeArray*)var1079)->values[160] = (val*) var161;
((struct instance_standard__NativeArray*)var1079)->values[161] = (val*) var162;
((struct instance_standard__NativeArray*)var1079)->values[162] = (val*) var163;
((struct instance_standard__NativeArray*)var1079)->values[163] = (val*) var164;
((struct instance_standard__NativeArray*)var1079)->values[164] = (val*) var165;
((struct instance_standard__NativeArray*)var1079)->values[165] = (val*) var166;
((struct instance_standard__NativeArray*)var1079)->values[166] = (val*) var167;
((struct instance_standard__NativeArray*)var1079)->values[167] = (val*) var168;
((struct instance_standard__NativeArray*)var1079)->values[168] = (val*) var169;
((struct instance_standard__NativeArray*)var1079)->values[169] = (val*) var170;
((struct instance_standard__NativeArray*)var1079)->values[170] = (val*) var171;
((struct instance_standard__NativeArray*)var1079)->values[171] = (val*) var172;
((struct instance_standard__NativeArray*)var1079)->values[172] = (val*) var173;
((struct instance_standard__NativeArray*)var1079)->values[173] = (val*) var174;
((struct instance_standard__NativeArray*)var1079)->values[174] = (val*) var175;
((struct instance_standard__NativeArray*)var1079)->values[175] = (val*) var176;
((struct instance_standard__NativeArray*)var1079)->values[176] = (val*) var177;
((struct instance_standard__NativeArray*)var1079)->values[177] = (val*) var178;
((struct instance_standard__NativeArray*)var1079)->values[178] = (val*) var179;
((struct instance_standard__NativeArray*)var1079)->values[179] = (val*) var180;
((struct instance_standard__NativeArray*)var1079)->values[180] = (val*) var181;
((struct instance_standard__NativeArray*)var1079)->values[181] = (val*) var182;
((struct instance_standard__NativeArray*)var1079)->values[182] = (val*) var183;
((struct instance_standard__NativeArray*)var1079)->values[183] = (val*) var184;
((struct instance_standard__NativeArray*)var1079)->values[184] = (val*) var185;
((struct instance_standard__NativeArray*)var1079)->values[185] = (val*) var186;
((struct instance_standard__NativeArray*)var1079)->values[186] = (val*) var187;
((struct instance_standard__NativeArray*)var1079)->values[187] = (val*) var188;
((struct instance_standard__NativeArray*)var1079)->values[188] = (val*) var189;
((struct instance_standard__NativeArray*)var1079)->values[189] = (val*) var190;
((struct instance_standard__NativeArray*)var1079)->values[190] = (val*) var191;
((struct instance_standard__NativeArray*)var1079)->values[191] = (val*) var192;
((struct instance_standard__NativeArray*)var1079)->values[192] = (val*) var193;
((struct instance_standard__NativeArray*)var1079)->values[193] = (val*) var194;
((struct instance_standard__NativeArray*)var1079)->values[194] = (val*) var195;
((struct instance_standard__NativeArray*)var1079)->values[195] = (val*) var196;
((struct instance_standard__NativeArray*)var1079)->values[196] = (val*) var197;
((struct instance_standard__NativeArray*)var1079)->values[197] = (val*) var198;
((struct instance_standard__NativeArray*)var1079)->values[198] = (val*) var199;
((struct instance_standard__NativeArray*)var1079)->values[199] = (val*) var200;
((struct instance_standard__NativeArray*)var1079)->values[200] = (val*) var201;
((struct instance_standard__NativeArray*)var1079)->values[201] = (val*) var202;
((struct instance_standard__NativeArray*)var1079)->values[202] = (val*) var203;
((struct instance_standard__NativeArray*)var1079)->values[203] = (val*) var204;
((struct instance_standard__NativeArray*)var1079)->values[204] = (val*) var205;
((struct instance_standard__NativeArray*)var1079)->values[205] = (val*) var206;
((struct instance_standard__NativeArray*)var1079)->values[206] = (val*) var207;
((struct instance_standard__NativeArray*)var1079)->values[207] = (val*) var208;
((struct instance_standard__NativeArray*)var1079)->values[208] = (val*) var209;
((struct instance_standard__NativeArray*)var1079)->values[209] = (val*) var210;
((struct instance_standard__NativeArray*)var1079)->values[210] = (val*) var211;
((struct instance_standard__NativeArray*)var1079)->values[211] = (val*) var212;
((struct instance_standard__NativeArray*)var1079)->values[212] = (val*) var213;
((struct instance_standard__NativeArray*)var1079)->values[213] = (val*) var214;
((struct instance_standard__NativeArray*)var1079)->values[214] = (val*) var215;
((struct instance_standard__NativeArray*)var1079)->values[215] = (val*) var216;
((struct instance_standard__NativeArray*)var1079)->values[216] = (val*) var217;
((struct instance_standard__NativeArray*)var1079)->values[217] = (val*) var218;
((struct instance_standard__NativeArray*)var1079)->values[218] = (val*) var219;
((struct instance_standard__NativeArray*)var1079)->values[219] = (val*) var220;
((struct instance_standard__NativeArray*)var1079)->values[220] = (val*) var221;
((struct instance_standard__NativeArray*)var1079)->values[221] = (val*) var222;
((struct instance_standard__NativeArray*)var1079)->values[222] = (val*) var223;
((struct instance_standard__NativeArray*)var1079)->values[223] = (val*) var224;
((struct instance_standard__NativeArray*)var1079)->values[224] = (val*) var225;
((struct instance_standard__NativeArray*)var1079)->values[225] = (val*) var226;
((struct instance_standard__NativeArray*)var1079)->values[226] = (val*) var227;
((struct instance_standard__NativeArray*)var1079)->values[227] = (val*) var228;
((struct instance_standard__NativeArray*)var1079)->values[228] = (val*) var229;
((struct instance_standard__NativeArray*)var1079)->values[229] = (val*) var230;
((struct instance_standard__NativeArray*)var1079)->values[230] = (val*) var231;
((struct instance_standard__NativeArray*)var1079)->values[231] = (val*) var232;
((struct instance_standard__NativeArray*)var1079)->values[232] = (val*) var233;
((struct instance_standard__NativeArray*)var1079)->values[233] = (val*) var234;
((struct instance_standard__NativeArray*)var1079)->values[234] = (val*) var235;
((struct instance_standard__NativeArray*)var1079)->values[235] = (val*) var236;
((struct instance_standard__NativeArray*)var1079)->values[236] = (val*) var237;
((struct instance_standard__NativeArray*)var1079)->values[237] = (val*) var238;
((struct instance_standard__NativeArray*)var1079)->values[238] = (val*) var239;
((struct instance_standard__NativeArray*)var1079)->values[239] = (val*) var240;
((struct instance_standard__NativeArray*)var1079)->values[240] = (val*) var241;
((struct instance_standard__NativeArray*)var1079)->values[241] = (val*) var242;
((struct instance_standard__NativeArray*)var1079)->values[242] = (val*) var243;
((struct instance_standard__NativeArray*)var1079)->values[243] = (val*) var244;
((struct instance_standard__NativeArray*)var1079)->values[244] = (val*) var245;
((struct instance_standard__NativeArray*)var1079)->values[245] = (val*) var246;
((struct instance_standard__NativeArray*)var1079)->values[246] = (val*) var247;
((struct instance_standard__NativeArray*)var1079)->values[247] = (val*) var248;
((struct instance_standard__NativeArray*)var1079)->values[248] = (val*) var249;
((struct instance_standard__NativeArray*)var1079)->values[249] = (val*) var250;
((struct instance_standard__NativeArray*)var1079)->values[250] = (val*) var251;
((struct instance_standard__NativeArray*)var1079)->values[251] = (val*) var252;
((struct instance_standard__NativeArray*)var1079)->values[252] = (val*) var253;
((struct instance_standard__NativeArray*)var1079)->values[253] = (val*) var254;
((struct instance_standard__NativeArray*)var1079)->values[254] = (val*) var255;
((struct instance_standard__NativeArray*)var1079)->values[255] = (val*) var256;
((struct instance_standard__NativeArray*)var1079)->values[256] = (val*) var257;
((struct instance_standard__NativeArray*)var1079)->values[257] = (val*) var258;
((struct instance_standard__NativeArray*)var1079)->values[258] = (val*) var259;
((struct instance_standard__NativeArray*)var1079)->values[259] = (val*) var260;
((struct instance_standard__NativeArray*)var1079)->values[260] = (val*) var261;
((struct instance_standard__NativeArray*)var1079)->values[261] = (val*) var262;
((struct instance_standard__NativeArray*)var1079)->values[262] = (val*) var263;
((struct instance_standard__NativeArray*)var1079)->values[263] = (val*) var264;
((struct instance_standard__NativeArray*)var1079)->values[264] = (val*) var265;
((struct instance_standard__NativeArray*)var1079)->values[265] = (val*) var266;
((struct instance_standard__NativeArray*)var1079)->values[266] = (val*) var267;
((struct instance_standard__NativeArray*)var1079)->values[267] = (val*) var268;
((struct instance_standard__NativeArray*)var1079)->values[268] = (val*) var269;
((struct instance_standard__NativeArray*)var1079)->values[269] = (val*) var270;
((struct instance_standard__NativeArray*)var1079)->values[270] = (val*) var271;
((struct instance_standard__NativeArray*)var1079)->values[271] = (val*) var272;
((struct instance_standard__NativeArray*)var1079)->values[272] = (val*) var273;
((struct instance_standard__NativeArray*)var1079)->values[273] = (val*) var274;
((struct instance_standard__NativeArray*)var1079)->values[274] = (val*) var275;
((struct instance_standard__NativeArray*)var1079)->values[275] = (val*) var276;
((struct instance_standard__NativeArray*)var1079)->values[276] = (val*) var277;
((struct instance_standard__NativeArray*)var1079)->values[277] = (val*) var278;
((struct instance_standard__NativeArray*)var1079)->values[278] = (val*) var279;
((struct instance_standard__NativeArray*)var1079)->values[279] = (val*) var280;
((struct instance_standard__NativeArray*)var1079)->values[280] = (val*) var281;
((struct instance_standard__NativeArray*)var1079)->values[281] = (val*) var282;
((struct instance_standard__NativeArray*)var1079)->values[282] = (val*) var283;
((struct instance_standard__NativeArray*)var1079)->values[283] = (val*) var284;
((struct instance_standard__NativeArray*)var1079)->values[284] = (val*) var285;
((struct instance_standard__NativeArray*)var1079)->values[285] = (val*) var286;
((struct instance_standard__NativeArray*)var1079)->values[286] = (val*) var287;
((struct instance_standard__NativeArray*)var1079)->values[287] = (val*) var288;
((struct instance_standard__NativeArray*)var1079)->values[288] = (val*) var289;
((struct instance_standard__NativeArray*)var1079)->values[289] = (val*) var290;
((struct instance_standard__NativeArray*)var1079)->values[290] = (val*) var291;
((struct instance_standard__NativeArray*)var1079)->values[291] = (val*) var292;
((struct instance_standard__NativeArray*)var1079)->values[292] = (val*) var293;
((struct instance_standard__NativeArray*)var1079)->values[293] = (val*) var294;
((struct instance_standard__NativeArray*)var1079)->values[294] = (val*) var295;
((struct instance_standard__NativeArray*)var1079)->values[295] = (val*) var296;
((struct instance_standard__NativeArray*)var1079)->values[296] = (val*) var297;
((struct instance_standard__NativeArray*)var1079)->values[297] = (val*) var298;
((struct instance_standard__NativeArray*)var1079)->values[298] = (val*) var299;
((struct instance_standard__NativeArray*)var1079)->values[299] = (val*) var300;
((struct instance_standard__NativeArray*)var1079)->values[300] = (val*) var301;
((struct instance_standard__NativeArray*)var1079)->values[301] = (val*) var302;
((struct instance_standard__NativeArray*)var1079)->values[302] = (val*) var303;
((struct instance_standard__NativeArray*)var1079)->values[303] = (val*) var304;
((struct instance_standard__NativeArray*)var1079)->values[304] = (val*) var305;
((struct instance_standard__NativeArray*)var1079)->values[305] = (val*) var306;
((struct instance_standard__NativeArray*)var1079)->values[306] = (val*) var307;
((struct instance_standard__NativeArray*)var1079)->values[307] = (val*) var308;
((struct instance_standard__NativeArray*)var1079)->values[308] = (val*) var309;
((struct instance_standard__NativeArray*)var1079)->values[309] = (val*) var310;
((struct instance_standard__NativeArray*)var1079)->values[310] = (val*) var311;
((struct instance_standard__NativeArray*)var1079)->values[311] = (val*) var312;
((struct instance_standard__NativeArray*)var1079)->values[312] = (val*) var313;
((struct instance_standard__NativeArray*)var1079)->values[313] = (val*) var314;
((struct instance_standard__NativeArray*)var1079)->values[314] = (val*) var315;
((struct instance_standard__NativeArray*)var1079)->values[315] = (val*) var316;
((struct instance_standard__NativeArray*)var1079)->values[316] = (val*) var317;
((struct instance_standard__NativeArray*)var1079)->values[317] = (val*) var318;
((struct instance_standard__NativeArray*)var1079)->values[318] = (val*) var319;
((struct instance_standard__NativeArray*)var1079)->values[319] = (val*) var320;
((struct instance_standard__NativeArray*)var1079)->values[320] = (val*) var321;
((struct instance_standard__NativeArray*)var1079)->values[321] = (val*) var322;
((struct instance_standard__NativeArray*)var1079)->values[322] = (val*) var323;
((struct instance_standard__NativeArray*)var1079)->values[323] = (val*) var324;
((struct instance_standard__NativeArray*)var1079)->values[324] = (val*) var325;
((struct instance_standard__NativeArray*)var1079)->values[325] = (val*) var326;
((struct instance_standard__NativeArray*)var1079)->values[326] = (val*) var327;
((struct instance_standard__NativeArray*)var1079)->values[327] = (val*) var328;
((struct instance_standard__NativeArray*)var1079)->values[328] = (val*) var329;
((struct instance_standard__NativeArray*)var1079)->values[329] = (val*) var330;
((struct instance_standard__NativeArray*)var1079)->values[330] = (val*) var331;
((struct instance_standard__NativeArray*)var1079)->values[331] = (val*) var332;
((struct instance_standard__NativeArray*)var1079)->values[332] = (val*) var333;
((struct instance_standard__NativeArray*)var1079)->values[333] = (val*) var334;
((struct instance_standard__NativeArray*)var1079)->values[334] = (val*) var335;
((struct instance_standard__NativeArray*)var1079)->values[335] = (val*) var336;
((struct instance_standard__NativeArray*)var1079)->values[336] = (val*) var337;
((struct instance_standard__NativeArray*)var1079)->values[337] = (val*) var338;
((struct instance_standard__NativeArray*)var1079)->values[338] = (val*) var339;
((struct instance_standard__NativeArray*)var1079)->values[339] = (val*) var340;
((struct instance_standard__NativeArray*)var1079)->values[340] = (val*) var341;
((struct instance_standard__NativeArray*)var1079)->values[341] = (val*) var342;
((struct instance_standard__NativeArray*)var1079)->values[342] = (val*) var343;
((struct instance_standard__NativeArray*)var1079)->values[343] = (val*) var344;
((struct instance_standard__NativeArray*)var1079)->values[344] = (val*) var345;
((struct instance_standard__NativeArray*)var1079)->values[345] = (val*) var346;
((struct instance_standard__NativeArray*)var1079)->values[346] = (val*) var347;
((struct instance_standard__NativeArray*)var1079)->values[347] = (val*) var348;
((struct instance_standard__NativeArray*)var1079)->values[348] = (val*) var349;
((struct instance_standard__NativeArray*)var1079)->values[349] = (val*) var350;
((struct instance_standard__NativeArray*)var1079)->values[350] = (val*) var351;
((struct instance_standard__NativeArray*)var1079)->values[351] = (val*) var352;
((struct instance_standard__NativeArray*)var1079)->values[352] = (val*) var353;
((struct instance_standard__NativeArray*)var1079)->values[353] = (val*) var354;
((struct instance_standard__NativeArray*)var1079)->values[354] = (val*) var355;
((struct instance_standard__NativeArray*)var1079)->values[355] = (val*) var356;
((struct instance_standard__NativeArray*)var1079)->values[356] = (val*) var357;
((struct instance_standard__NativeArray*)var1079)->values[357] = (val*) var358;
((struct instance_standard__NativeArray*)var1079)->values[358] = (val*) var359;
((struct instance_standard__NativeArray*)var1079)->values[359] = (val*) var360;
((struct instance_standard__NativeArray*)var1079)->values[360] = (val*) var361;
((struct instance_standard__NativeArray*)var1079)->values[361] = (val*) var362;
((struct instance_standard__NativeArray*)var1079)->values[362] = (val*) var363;
((struct instance_standard__NativeArray*)var1079)->values[363] = (val*) var364;
((struct instance_standard__NativeArray*)var1079)->values[364] = (val*) var365;
((struct instance_standard__NativeArray*)var1079)->values[365] = (val*) var366;
((struct instance_standard__NativeArray*)var1079)->values[366] = (val*) var367;
((struct instance_standard__NativeArray*)var1079)->values[367] = (val*) var368;
((struct instance_standard__NativeArray*)var1079)->values[368] = (val*) var369;
((struct instance_standard__NativeArray*)var1079)->values[369] = (val*) var370;
((struct instance_standard__NativeArray*)var1079)->values[370] = (val*) var371;
((struct instance_standard__NativeArray*)var1079)->values[371] = (val*) var372;
((struct instance_standard__NativeArray*)var1079)->values[372] = (val*) var373;
((struct instance_standard__NativeArray*)var1079)->values[373] = (val*) var374;
((struct instance_standard__NativeArray*)var1079)->values[374] = (val*) var375;
((struct instance_standard__NativeArray*)var1079)->values[375] = (val*) var376;
((struct instance_standard__NativeArray*)var1079)->values[376] = (val*) var377;
((struct instance_standard__NativeArray*)var1079)->values[377] = (val*) var378;
((struct instance_standard__NativeArray*)var1079)->values[378] = (val*) var379;
((struct instance_standard__NativeArray*)var1079)->values[379] = (val*) var380;
((struct instance_standard__NativeArray*)var1079)->values[380] = (val*) var381;
((struct instance_standard__NativeArray*)var1079)->values[381] = (val*) var382;
((struct instance_standard__NativeArray*)var1079)->values[382] = (val*) var383;
((struct instance_standard__NativeArray*)var1079)->values[383] = (val*) var384;
((struct instance_standard__NativeArray*)var1079)->values[384] = (val*) var385;
((struct instance_standard__NativeArray*)var1079)->values[385] = (val*) var386;
((struct instance_standard__NativeArray*)var1079)->values[386] = (val*) var387;
((struct instance_standard__NativeArray*)var1079)->values[387] = (val*) var388;
((struct instance_standard__NativeArray*)var1079)->values[388] = (val*) var389;
((struct instance_standard__NativeArray*)var1079)->values[389] = (val*) var390;
((struct instance_standard__NativeArray*)var1079)->values[390] = (val*) var391;
((struct instance_standard__NativeArray*)var1079)->values[391] = (val*) var392;
((struct instance_standard__NativeArray*)var1079)->values[392] = (val*) var393;
((struct instance_standard__NativeArray*)var1079)->values[393] = (val*) var394;
((struct instance_standard__NativeArray*)var1079)->values[394] = (val*) var395;
((struct instance_standard__NativeArray*)var1079)->values[395] = (val*) var396;
((struct instance_standard__NativeArray*)var1079)->values[396] = (val*) var397;
((struct instance_standard__NativeArray*)var1079)->values[397] = (val*) var398;
((struct instance_standard__NativeArray*)var1079)->values[398] = (val*) var399;
((struct instance_standard__NativeArray*)var1079)->values[399] = (val*) var400;
((struct instance_standard__NativeArray*)var1079)->values[400] = (val*) var401;
((struct instance_standard__NativeArray*)var1079)->values[401] = (val*) var402;
((struct instance_standard__NativeArray*)var1079)->values[402] = (val*) var403;
((struct instance_standard__NativeArray*)var1079)->values[403] = (val*) var404;
((struct instance_standard__NativeArray*)var1079)->values[404] = (val*) var405;
((struct instance_standard__NativeArray*)var1079)->values[405] = (val*) var406;
((struct instance_standard__NativeArray*)var1079)->values[406] = (val*) var407;
((struct instance_standard__NativeArray*)var1079)->values[407] = (val*) var408;
((struct instance_standard__NativeArray*)var1079)->values[408] = (val*) var409;
((struct instance_standard__NativeArray*)var1079)->values[409] = (val*) var410;
((struct instance_standard__NativeArray*)var1079)->values[410] = (val*) var411;
((struct instance_standard__NativeArray*)var1079)->values[411] = (val*) var412;
((struct instance_standard__NativeArray*)var1079)->values[412] = (val*) var413;
((struct instance_standard__NativeArray*)var1079)->values[413] = (val*) var414;
((struct instance_standard__NativeArray*)var1079)->values[414] = (val*) var415;
((struct instance_standard__NativeArray*)var1079)->values[415] = (val*) var416;
((struct instance_standard__NativeArray*)var1079)->values[416] = (val*) var417;
((struct instance_standard__NativeArray*)var1079)->values[417] = (val*) var418;
((struct instance_standard__NativeArray*)var1079)->values[418] = (val*) var419;
((struct instance_standard__NativeArray*)var1079)->values[419] = (val*) var420;
((struct instance_standard__NativeArray*)var1079)->values[420] = (val*) var421;
((struct instance_standard__NativeArray*)var1079)->values[421] = (val*) var422;
((struct instance_standard__NativeArray*)var1079)->values[422] = (val*) var423;
((struct instance_standard__NativeArray*)var1079)->values[423] = (val*) var424;
((struct instance_standard__NativeArray*)var1079)->values[424] = (val*) var425;
((struct instance_standard__NativeArray*)var1079)->values[425] = (val*) var426;
((struct instance_standard__NativeArray*)var1079)->values[426] = (val*) var427;
((struct instance_standard__NativeArray*)var1079)->values[427] = (val*) var428;
((struct instance_standard__NativeArray*)var1079)->values[428] = (val*) var429;
((struct instance_standard__NativeArray*)var1079)->values[429] = (val*) var430;
((struct instance_standard__NativeArray*)var1079)->values[430] = (val*) var431;
((struct instance_standard__NativeArray*)var1079)->values[431] = (val*) var432;
((struct instance_standard__NativeArray*)var1079)->values[432] = (val*) var433;
((struct instance_standard__NativeArray*)var1079)->values[433] = (val*) var434;
((struct instance_standard__NativeArray*)var1079)->values[434] = (val*) var435;
((struct instance_standard__NativeArray*)var1079)->values[435] = (val*) var436;
((struct instance_standard__NativeArray*)var1079)->values[436] = (val*) var437;
((struct instance_standard__NativeArray*)var1079)->values[437] = (val*) var438;
((struct instance_standard__NativeArray*)var1079)->values[438] = (val*) var439;
((struct instance_standard__NativeArray*)var1079)->values[439] = (val*) var440;
((struct instance_standard__NativeArray*)var1079)->values[440] = (val*) var441;
((struct instance_standard__NativeArray*)var1079)->values[441] = (val*) var442;
((struct instance_standard__NativeArray*)var1079)->values[442] = (val*) var443;
((struct instance_standard__NativeArray*)var1079)->values[443] = (val*) var444;
((struct instance_standard__NativeArray*)var1079)->values[444] = (val*) var445;
((struct instance_standard__NativeArray*)var1079)->values[445] = (val*) var446;
((struct instance_standard__NativeArray*)var1079)->values[446] = (val*) var447;
((struct instance_standard__NativeArray*)var1079)->values[447] = (val*) var448;
((struct instance_standard__NativeArray*)var1079)->values[448] = (val*) var449;
((struct instance_standard__NativeArray*)var1079)->values[449] = (val*) var450;
((struct instance_standard__NativeArray*)var1079)->values[450] = (val*) var451;
((struct instance_standard__NativeArray*)var1079)->values[451] = (val*) var452;
((struct instance_standard__NativeArray*)var1079)->values[452] = (val*) var453;
((struct instance_standard__NativeArray*)var1079)->values[453] = (val*) var454;
((struct instance_standard__NativeArray*)var1079)->values[454] = (val*) var455;
((struct instance_standard__NativeArray*)var1079)->values[455] = (val*) var456;
((struct instance_standard__NativeArray*)var1079)->values[456] = (val*) var457;
((struct instance_standard__NativeArray*)var1079)->values[457] = (val*) var458;
((struct instance_standard__NativeArray*)var1079)->values[458] = (val*) var459;
((struct instance_standard__NativeArray*)var1079)->values[459] = (val*) var460;
((struct instance_standard__NativeArray*)var1079)->values[460] = (val*) var461;
((struct instance_standard__NativeArray*)var1079)->values[461] = (val*) var462;
((struct instance_standard__NativeArray*)var1079)->values[462] = (val*) var463;
((struct instance_standard__NativeArray*)var1079)->values[463] = (val*) var464;
((struct instance_standard__NativeArray*)var1079)->values[464] = (val*) var465;
((struct instance_standard__NativeArray*)var1079)->values[465] = (val*) var466;
((struct instance_standard__NativeArray*)var1079)->values[466] = (val*) var467;
((struct instance_standard__NativeArray*)var1079)->values[467] = (val*) var468;
((struct instance_standard__NativeArray*)var1079)->values[468] = (val*) var469;
((struct instance_standard__NativeArray*)var1079)->values[469] = (val*) var470;
((struct instance_standard__NativeArray*)var1079)->values[470] = (val*) var471;
((struct instance_standard__NativeArray*)var1079)->values[471] = (val*) var472;
((struct instance_standard__NativeArray*)var1079)->values[472] = (val*) var473;
((struct instance_standard__NativeArray*)var1079)->values[473] = (val*) var474;
((struct instance_standard__NativeArray*)var1079)->values[474] = (val*) var475;
((struct instance_standard__NativeArray*)var1079)->values[475] = (val*) var476;
((struct instance_standard__NativeArray*)var1079)->values[476] = (val*) var477;
((struct instance_standard__NativeArray*)var1079)->values[477] = (val*) var478;
((struct instance_standard__NativeArray*)var1079)->values[478] = (val*) var479;
((struct instance_standard__NativeArray*)var1079)->values[479] = (val*) var480;
((struct instance_standard__NativeArray*)var1079)->values[480] = (val*) var481;
((struct instance_standard__NativeArray*)var1079)->values[481] = (val*) var482;
((struct instance_standard__NativeArray*)var1079)->values[482] = (val*) var483;
((struct instance_standard__NativeArray*)var1079)->values[483] = (val*) var484;
((struct instance_standard__NativeArray*)var1079)->values[484] = (val*) var485;
((struct instance_standard__NativeArray*)var1079)->values[485] = (val*) var486;
((struct instance_standard__NativeArray*)var1079)->values[486] = (val*) var487;
((struct instance_standard__NativeArray*)var1079)->values[487] = (val*) var488;
((struct instance_standard__NativeArray*)var1079)->values[488] = (val*) var489;
((struct instance_standard__NativeArray*)var1079)->values[489] = (val*) var490;
((struct instance_standard__NativeArray*)var1079)->values[490] = (val*) var491;
((struct instance_standard__NativeArray*)var1079)->values[491] = (val*) var492;
((struct instance_standard__NativeArray*)var1079)->values[492] = (val*) var493;
((struct instance_standard__NativeArray*)var1079)->values[493] = (val*) var494;
((struct instance_standard__NativeArray*)var1079)->values[494] = (val*) var495;
((struct instance_standard__NativeArray*)var1079)->values[495] = (val*) var496;
((struct instance_standard__NativeArray*)var1079)->values[496] = (val*) var497;
((struct instance_standard__NativeArray*)var1079)->values[497] = (val*) var498;
((struct instance_standard__NativeArray*)var1079)->values[498] = (val*) var499;
((struct instance_standard__NativeArray*)var1079)->values[499] = (val*) var500;
((struct instance_standard__NativeArray*)var1079)->values[500] = (val*) var501;
((struct instance_standard__NativeArray*)var1079)->values[501] = (val*) var502;
((struct instance_standard__NativeArray*)var1079)->values[502] = (val*) var503;
((struct instance_standard__NativeArray*)var1079)->values[503] = (val*) var504;
((struct instance_standard__NativeArray*)var1079)->values[504] = (val*) var505;
((struct instance_standard__NativeArray*)var1079)->values[505] = (val*) var506;
((struct instance_standard__NativeArray*)var1079)->values[506] = (val*) var507;
((struct instance_standard__NativeArray*)var1079)->values[507] = (val*) var508;
((struct instance_standard__NativeArray*)var1079)->values[508] = (val*) var509;
((struct instance_standard__NativeArray*)var1079)->values[509] = (val*) var510;
((struct instance_standard__NativeArray*)var1079)->values[510] = (val*) var511;
((struct instance_standard__NativeArray*)var1079)->values[511] = (val*) var512;
((struct instance_standard__NativeArray*)var1079)->values[512] = (val*) var513;
((struct instance_standard__NativeArray*)var1079)->values[513] = (val*) var514;
((struct instance_standard__NativeArray*)var1079)->values[514] = (val*) var515;
((struct instance_standard__NativeArray*)var1079)->values[515] = (val*) var516;
((struct instance_standard__NativeArray*)var1079)->values[516] = (val*) var517;
((struct instance_standard__NativeArray*)var1079)->values[517] = (val*) var518;
((struct instance_standard__NativeArray*)var1079)->values[518] = (val*) var519;
((struct instance_standard__NativeArray*)var1079)->values[519] = (val*) var520;
((struct instance_standard__NativeArray*)var1079)->values[520] = (val*) var521;
((struct instance_standard__NativeArray*)var1079)->values[521] = (val*) var522;
((struct instance_standard__NativeArray*)var1079)->values[522] = (val*) var523;
((struct instance_standard__NativeArray*)var1079)->values[523] = (val*) var524;
((struct instance_standard__NativeArray*)var1079)->values[524] = (val*) var525;
((struct instance_standard__NativeArray*)var1079)->values[525] = (val*) var526;
((struct instance_standard__NativeArray*)var1079)->values[526] = (val*) var527;
((struct instance_standard__NativeArray*)var1079)->values[527] = (val*) var528;
((struct instance_standard__NativeArray*)var1079)->values[528] = (val*) var529;
((struct instance_standard__NativeArray*)var1079)->values[529] = (val*) var530;
((struct instance_standard__NativeArray*)var1079)->values[530] = (val*) var531;
((struct instance_standard__NativeArray*)var1079)->values[531] = (val*) var532;
((struct instance_standard__NativeArray*)var1079)->values[532] = (val*) var533;
((struct instance_standard__NativeArray*)var1079)->values[533] = (val*) var534;
((struct instance_standard__NativeArray*)var1079)->values[534] = (val*) var535;
((struct instance_standard__NativeArray*)var1079)->values[535] = (val*) var536;
((struct instance_standard__NativeArray*)var1079)->values[536] = (val*) var537;
((struct instance_standard__NativeArray*)var1079)->values[537] = (val*) var538;
((struct instance_standard__NativeArray*)var1079)->values[538] = (val*) var539;
((struct instance_standard__NativeArray*)var1079)->values[539] = (val*) var540;
((struct instance_standard__NativeArray*)var1079)->values[540] = (val*) var541;
((struct instance_standard__NativeArray*)var1079)->values[541] = (val*) var542;
((struct instance_standard__NativeArray*)var1079)->values[542] = (val*) var543;
((struct instance_standard__NativeArray*)var1079)->values[543] = (val*) var544;
((struct instance_standard__NativeArray*)var1079)->values[544] = (val*) var545;
((struct instance_standard__NativeArray*)var1079)->values[545] = (val*) var546;
((struct instance_standard__NativeArray*)var1079)->values[546] = (val*) var547;
((struct instance_standard__NativeArray*)var1079)->values[547] = (val*) var548;
((struct instance_standard__NativeArray*)var1079)->values[548] = (val*) var549;
((struct instance_standard__NativeArray*)var1079)->values[549] = (val*) var550;
((struct instance_standard__NativeArray*)var1079)->values[550] = (val*) var551;
((struct instance_standard__NativeArray*)var1079)->values[551] = (val*) var552;
((struct instance_standard__NativeArray*)var1079)->values[552] = (val*) var553;
((struct instance_standard__NativeArray*)var1079)->values[553] = (val*) var554;
((struct instance_standard__NativeArray*)var1079)->values[554] = (val*) var555;
((struct instance_standard__NativeArray*)var1079)->values[555] = (val*) var556;
((struct instance_standard__NativeArray*)var1079)->values[556] = (val*) var557;
((struct instance_standard__NativeArray*)var1079)->values[557] = (val*) var558;
((struct instance_standard__NativeArray*)var1079)->values[558] = (val*) var559;
((struct instance_standard__NativeArray*)var1079)->values[559] = (val*) var560;
((struct instance_standard__NativeArray*)var1079)->values[560] = (val*) var561;
((struct instance_standard__NativeArray*)var1079)->values[561] = (val*) var562;
((struct instance_standard__NativeArray*)var1079)->values[562] = (val*) var563;
((struct instance_standard__NativeArray*)var1079)->values[563] = (val*) var564;
((struct instance_standard__NativeArray*)var1079)->values[564] = (val*) var565;
((struct instance_standard__NativeArray*)var1079)->values[565] = (val*) var566;
((struct instance_standard__NativeArray*)var1079)->values[566] = (val*) var567;
((struct instance_standard__NativeArray*)var1079)->values[567] = (val*) var568;
((struct instance_standard__NativeArray*)var1079)->values[568] = (val*) var569;
((struct instance_standard__NativeArray*)var1079)->values[569] = (val*) var570;
((struct instance_standard__NativeArray*)var1079)->values[570] = (val*) var571;
((struct instance_standard__NativeArray*)var1079)->values[571] = (val*) var572;
((struct instance_standard__NativeArray*)var1079)->values[572] = (val*) var573;
((struct instance_standard__NativeArray*)var1079)->values[573] = (val*) var574;
((struct instance_standard__NativeArray*)var1079)->values[574] = (val*) var575;
((struct instance_standard__NativeArray*)var1079)->values[575] = (val*) var576;
((struct instance_standard__NativeArray*)var1079)->values[576] = (val*) var577;
((struct instance_standard__NativeArray*)var1079)->values[577] = (val*) var578;
((struct instance_standard__NativeArray*)var1079)->values[578] = (val*) var579;
((struct instance_standard__NativeArray*)var1079)->values[579] = (val*) var580;
((struct instance_standard__NativeArray*)var1079)->values[580] = (val*) var581;
((struct instance_standard__NativeArray*)var1079)->values[581] = (val*) var582;
((struct instance_standard__NativeArray*)var1079)->values[582] = (val*) var583;
((struct instance_standard__NativeArray*)var1079)->values[583] = (val*) var584;
((struct instance_standard__NativeArray*)var1079)->values[584] = (val*) var585;
((struct instance_standard__NativeArray*)var1079)->values[585] = (val*) var586;
((struct instance_standard__NativeArray*)var1079)->values[586] = (val*) var587;
((struct instance_standard__NativeArray*)var1079)->values[587] = (val*) var588;
((struct instance_standard__NativeArray*)var1079)->values[588] = (val*) var589;
((struct instance_standard__NativeArray*)var1079)->values[589] = (val*) var590;
((struct instance_standard__NativeArray*)var1079)->values[590] = (val*) var591;
((struct instance_standard__NativeArray*)var1079)->values[591] = (val*) var592;
((struct instance_standard__NativeArray*)var1079)->values[592] = (val*) var593;
((struct instance_standard__NativeArray*)var1079)->values[593] = (val*) var594;
((struct instance_standard__NativeArray*)var1079)->values[594] = (val*) var595;
((struct instance_standard__NativeArray*)var1079)->values[595] = (val*) var596;
((struct instance_standard__NativeArray*)var1079)->values[596] = (val*) var597;
((struct instance_standard__NativeArray*)var1079)->values[597] = (val*) var598;
((struct instance_standard__NativeArray*)var1079)->values[598] = (val*) var599;
((struct instance_standard__NativeArray*)var1079)->values[599] = (val*) var600;
((struct instance_standard__NativeArray*)var1079)->values[600] = (val*) var601;
((struct instance_standard__NativeArray*)var1079)->values[601] = (val*) var602;
((struct instance_standard__NativeArray*)var1079)->values[602] = (val*) var603;
((struct instance_standard__NativeArray*)var1079)->values[603] = (val*) var604;
((struct instance_standard__NativeArray*)var1079)->values[604] = (val*) var605;
((struct instance_standard__NativeArray*)var1079)->values[605] = (val*) var606;
((struct instance_standard__NativeArray*)var1079)->values[606] = (val*) var607;
((struct instance_standard__NativeArray*)var1079)->values[607] = (val*) var608;
((struct instance_standard__NativeArray*)var1079)->values[608] = (val*) var609;
((struct instance_standard__NativeArray*)var1079)->values[609] = (val*) var610;
((struct instance_standard__NativeArray*)var1079)->values[610] = (val*) var611;
((struct instance_standard__NativeArray*)var1079)->values[611] = (val*) var612;
((struct instance_standard__NativeArray*)var1079)->values[612] = (val*) var613;
((struct instance_standard__NativeArray*)var1079)->values[613] = (val*) var614;
((struct instance_standard__NativeArray*)var1079)->values[614] = (val*) var615;
((struct instance_standard__NativeArray*)var1079)->values[615] = (val*) var616;
((struct instance_standard__NativeArray*)var1079)->values[616] = (val*) var617;
((struct instance_standard__NativeArray*)var1079)->values[617] = (val*) var618;
((struct instance_standard__NativeArray*)var1079)->values[618] = (val*) var619;
((struct instance_standard__NativeArray*)var1079)->values[619] = (val*) var620;
((struct instance_standard__NativeArray*)var1079)->values[620] = (val*) var621;
((struct instance_standard__NativeArray*)var1079)->values[621] = (val*) var622;
((struct instance_standard__NativeArray*)var1079)->values[622] = (val*) var623;
((struct instance_standard__NativeArray*)var1079)->values[623] = (val*) var624;
((struct instance_standard__NativeArray*)var1079)->values[624] = (val*) var625;
((struct instance_standard__NativeArray*)var1079)->values[625] = (val*) var626;
((struct instance_standard__NativeArray*)var1079)->values[626] = (val*) var627;
((struct instance_standard__NativeArray*)var1079)->values[627] = (val*) var628;
((struct instance_standard__NativeArray*)var1079)->values[628] = (val*) var629;
((struct instance_standard__NativeArray*)var1079)->values[629] = (val*) var630;
((struct instance_standard__NativeArray*)var1079)->values[630] = (val*) var631;
((struct instance_standard__NativeArray*)var1079)->values[631] = (val*) var632;
((struct instance_standard__NativeArray*)var1079)->values[632] = (val*) var633;
((struct instance_standard__NativeArray*)var1079)->values[633] = (val*) var634;
((struct instance_standard__NativeArray*)var1079)->values[634] = (val*) var635;
((struct instance_standard__NativeArray*)var1079)->values[635] = (val*) var636;
((struct instance_standard__NativeArray*)var1079)->values[636] = (val*) var637;
((struct instance_standard__NativeArray*)var1079)->values[637] = (val*) var638;
((struct instance_standard__NativeArray*)var1079)->values[638] = (val*) var639;
((struct instance_standard__NativeArray*)var1079)->values[639] = (val*) var640;
((struct instance_standard__NativeArray*)var1079)->values[640] = (val*) var641;
((struct instance_standard__NativeArray*)var1079)->values[641] = (val*) var642;
((struct instance_standard__NativeArray*)var1079)->values[642] = (val*) var643;
((struct instance_standard__NativeArray*)var1079)->values[643] = (val*) var644;
((struct instance_standard__NativeArray*)var1079)->values[644] = (val*) var645;
((struct instance_standard__NativeArray*)var1079)->values[645] = (val*) var646;
((struct instance_standard__NativeArray*)var1079)->values[646] = (val*) var647;
((struct instance_standard__NativeArray*)var1079)->values[647] = (val*) var648;
((struct instance_standard__NativeArray*)var1079)->values[648] = (val*) var649;
((struct instance_standard__NativeArray*)var1079)->values[649] = (val*) var650;
((struct instance_standard__NativeArray*)var1079)->values[650] = (val*) var651;
((struct instance_standard__NativeArray*)var1079)->values[651] = (val*) var652;
((struct instance_standard__NativeArray*)var1079)->values[652] = (val*) var653;
((struct instance_standard__NativeArray*)var1079)->values[653] = (val*) var654;
((struct instance_standard__NativeArray*)var1079)->values[654] = (val*) var655;
((struct instance_standard__NativeArray*)var1079)->values[655] = (val*) var656;
((struct instance_standard__NativeArray*)var1079)->values[656] = (val*) var657;
((struct instance_standard__NativeArray*)var1079)->values[657] = (val*) var658;
((struct instance_standard__NativeArray*)var1079)->values[658] = (val*) var659;
((struct instance_standard__NativeArray*)var1079)->values[659] = (val*) var660;
((struct instance_standard__NativeArray*)var1079)->values[660] = (val*) var661;
((struct instance_standard__NativeArray*)var1079)->values[661] = (val*) var662;
((struct instance_standard__NativeArray*)var1079)->values[662] = (val*) var663;
((struct instance_standard__NativeArray*)var1079)->values[663] = (val*) var664;
((struct instance_standard__NativeArray*)var1079)->values[664] = (val*) var665;
((struct instance_standard__NativeArray*)var1079)->values[665] = (val*) var666;
((struct instance_standard__NativeArray*)var1079)->values[666] = (val*) var667;
((struct instance_standard__NativeArray*)var1079)->values[667] = (val*) var668;
((struct instance_standard__NativeArray*)var1079)->values[668] = (val*) var669;
((struct instance_standard__NativeArray*)var1079)->values[669] = (val*) var670;
((struct instance_standard__NativeArray*)var1079)->values[670] = (val*) var671;
((struct instance_standard__NativeArray*)var1079)->values[671] = (val*) var672;
((struct instance_standard__NativeArray*)var1079)->values[672] = (val*) var673;
((struct instance_standard__NativeArray*)var1079)->values[673] = (val*) var674;
((struct instance_standard__NativeArray*)var1079)->values[674] = (val*) var675;
((struct instance_standard__NativeArray*)var1079)->values[675] = (val*) var676;
((struct instance_standard__NativeArray*)var1079)->values[676] = (val*) var677;
((struct instance_standard__NativeArray*)var1079)->values[677] = (val*) var678;
((struct instance_standard__NativeArray*)var1079)->values[678] = (val*) var679;
((struct instance_standard__NativeArray*)var1079)->values[679] = (val*) var680;
((struct instance_standard__NativeArray*)var1079)->values[680] = (val*) var681;
((struct instance_standard__NativeArray*)var1079)->values[681] = (val*) var682;
((struct instance_standard__NativeArray*)var1079)->values[682] = (val*) var683;
((struct instance_standard__NativeArray*)var1079)->values[683] = (val*) var684;
((struct instance_standard__NativeArray*)var1079)->values[684] = (val*) var685;
((struct instance_standard__NativeArray*)var1079)->values[685] = (val*) var686;
((struct instance_standard__NativeArray*)var1079)->values[686] = (val*) var687;
((struct instance_standard__NativeArray*)var1079)->values[687] = (val*) var688;
((struct instance_standard__NativeArray*)var1079)->values[688] = (val*) var689;
((struct instance_standard__NativeArray*)var1079)->values[689] = (val*) var690;
((struct instance_standard__NativeArray*)var1079)->values[690] = (val*) var691;
((struct instance_standard__NativeArray*)var1079)->values[691] = (val*) var692;
((struct instance_standard__NativeArray*)var1079)->values[692] = (val*) var693;
((struct instance_standard__NativeArray*)var1079)->values[693] = (val*) var694;
((struct instance_standard__NativeArray*)var1079)->values[694] = (val*) var695;
((struct instance_standard__NativeArray*)var1079)->values[695] = (val*) var696;
((struct instance_standard__NativeArray*)var1079)->values[696] = (val*) var697;
((struct instance_standard__NativeArray*)var1079)->values[697] = (val*) var698;
((struct instance_standard__NativeArray*)var1079)->values[698] = (val*) var699;
((struct instance_standard__NativeArray*)var1079)->values[699] = (val*) var700;
((struct instance_standard__NativeArray*)var1079)->values[700] = (val*) var701;
((struct instance_standard__NativeArray*)var1079)->values[701] = (val*) var702;
((struct instance_standard__NativeArray*)var1079)->values[702] = (val*) var703;
((struct instance_standard__NativeArray*)var1079)->values[703] = (val*) var704;
((struct instance_standard__NativeArray*)var1079)->values[704] = (val*) var705;
((struct instance_standard__NativeArray*)var1079)->values[705] = (val*) var706;
((struct instance_standard__NativeArray*)var1079)->values[706] = (val*) var707;
((struct instance_standard__NativeArray*)var1079)->values[707] = (val*) var708;
((struct instance_standard__NativeArray*)var1079)->values[708] = (val*) var709;
((struct instance_standard__NativeArray*)var1079)->values[709] = (val*) var710;
((struct instance_standard__NativeArray*)var1079)->values[710] = (val*) var711;
((struct instance_standard__NativeArray*)var1079)->values[711] = (val*) var712;
((struct instance_standard__NativeArray*)var1079)->values[712] = (val*) var713;
((struct instance_standard__NativeArray*)var1079)->values[713] = (val*) var714;
((struct instance_standard__NativeArray*)var1079)->values[714] = (val*) var715;
((struct instance_standard__NativeArray*)var1079)->values[715] = (val*) var716;
((struct instance_standard__NativeArray*)var1079)->values[716] = (val*) var717;
((struct instance_standard__NativeArray*)var1079)->values[717] = (val*) var718;
((struct instance_standard__NativeArray*)var1079)->values[718] = (val*) var719;
((struct instance_standard__NativeArray*)var1079)->values[719] = (val*) var720;
((struct instance_standard__NativeArray*)var1079)->values[720] = (val*) var721;
((struct instance_standard__NativeArray*)var1079)->values[721] = (val*) var722;
((struct instance_standard__NativeArray*)var1079)->values[722] = (val*) var723;
((struct instance_standard__NativeArray*)var1079)->values[723] = (val*) var724;
((struct instance_standard__NativeArray*)var1079)->values[724] = (val*) var725;
((struct instance_standard__NativeArray*)var1079)->values[725] = (val*) var726;
((struct instance_standard__NativeArray*)var1079)->values[726] = (val*) var727;
((struct instance_standard__NativeArray*)var1079)->values[727] = (val*) var728;
((struct instance_standard__NativeArray*)var1079)->values[728] = (val*) var729;
((struct instance_standard__NativeArray*)var1079)->values[729] = (val*) var730;
((struct instance_standard__NativeArray*)var1079)->values[730] = (val*) var731;
((struct instance_standard__NativeArray*)var1079)->values[731] = (val*) var732;
((struct instance_standard__NativeArray*)var1079)->values[732] = (val*) var733;
((struct instance_standard__NativeArray*)var1079)->values[733] = (val*) var734;
((struct instance_standard__NativeArray*)var1079)->values[734] = (val*) var735;
((struct instance_standard__NativeArray*)var1079)->values[735] = (val*) var736;
((struct instance_standard__NativeArray*)var1079)->values[736] = (val*) var737;
((struct instance_standard__NativeArray*)var1079)->values[737] = (val*) var738;
((struct instance_standard__NativeArray*)var1079)->values[738] = (val*) var739;
((struct instance_standard__NativeArray*)var1079)->values[739] = (val*) var740;
((struct instance_standard__NativeArray*)var1079)->values[740] = (val*) var741;
((struct instance_standard__NativeArray*)var1079)->values[741] = (val*) var742;
((struct instance_standard__NativeArray*)var1079)->values[742] = (val*) var743;
((struct instance_standard__NativeArray*)var1079)->values[743] = (val*) var744;
((struct instance_standard__NativeArray*)var1079)->values[744] = (val*) var745;
((struct instance_standard__NativeArray*)var1079)->values[745] = (val*) var746;
((struct instance_standard__NativeArray*)var1079)->values[746] = (val*) var747;
((struct instance_standard__NativeArray*)var1079)->values[747] = (val*) var748;
((struct instance_standard__NativeArray*)var1079)->values[748] = (val*) var749;
((struct instance_standard__NativeArray*)var1079)->values[749] = (val*) var750;
((struct instance_standard__NativeArray*)var1079)->values[750] = (val*) var751;
((struct instance_standard__NativeArray*)var1079)->values[751] = (val*) var752;
((struct instance_standard__NativeArray*)var1079)->values[752] = (val*) var753;
((struct instance_standard__NativeArray*)var1079)->values[753] = (val*) var754;
((struct instance_standard__NativeArray*)var1079)->values[754] = (val*) var755;
((struct instance_standard__NativeArray*)var1079)->values[755] = (val*) var756;
((struct instance_standard__NativeArray*)var1079)->values[756] = (val*) var757;
((struct instance_standard__NativeArray*)var1079)->values[757] = (val*) var758;
((struct instance_standard__NativeArray*)var1079)->values[758] = (val*) var759;
((struct instance_standard__NativeArray*)var1079)->values[759] = (val*) var760;
((struct instance_standard__NativeArray*)var1079)->values[760] = (val*) var761;
((struct instance_standard__NativeArray*)var1079)->values[761] = (val*) var762;
((struct instance_standard__NativeArray*)var1079)->values[762] = (val*) var763;
((struct instance_standard__NativeArray*)var1079)->values[763] = (val*) var764;
((struct instance_standard__NativeArray*)var1079)->values[764] = (val*) var765;
((struct instance_standard__NativeArray*)var1079)->values[765] = (val*) var766;
((struct instance_standard__NativeArray*)var1079)->values[766] = (val*) var767;
((struct instance_standard__NativeArray*)var1079)->values[767] = (val*) var768;
((struct instance_standard__NativeArray*)var1079)->values[768] = (val*) var769;
((struct instance_standard__NativeArray*)var1079)->values[769] = (val*) var770;
((struct instance_standard__NativeArray*)var1079)->values[770] = (val*) var771;
((struct instance_standard__NativeArray*)var1079)->values[771] = (val*) var772;
((struct instance_standard__NativeArray*)var1079)->values[772] = (val*) var773;
((struct instance_standard__NativeArray*)var1079)->values[773] = (val*) var774;
((struct instance_standard__NativeArray*)var1079)->values[774] = (val*) var775;
((struct instance_standard__NativeArray*)var1079)->values[775] = (val*) var776;
((struct instance_standard__NativeArray*)var1079)->values[776] = (val*) var777;
((struct instance_standard__NativeArray*)var1079)->values[777] = (val*) var778;
((struct instance_standard__NativeArray*)var1079)->values[778] = (val*) var779;
((struct instance_standard__NativeArray*)var1079)->values[779] = (val*) var780;
((struct instance_standard__NativeArray*)var1079)->values[780] = (val*) var781;
((struct instance_standard__NativeArray*)var1079)->values[781] = (val*) var782;
((struct instance_standard__NativeArray*)var1079)->values[782] = (val*) var783;
((struct instance_standard__NativeArray*)var1079)->values[783] = (val*) var784;
((struct instance_standard__NativeArray*)var1079)->values[784] = (val*) var785;
((struct instance_standard__NativeArray*)var1079)->values[785] = (val*) var786;
((struct instance_standard__NativeArray*)var1079)->values[786] = (val*) var787;
((struct instance_standard__NativeArray*)var1079)->values[787] = (val*) var788;
((struct instance_standard__NativeArray*)var1079)->values[788] = (val*) var789;
((struct instance_standard__NativeArray*)var1079)->values[789] = (val*) var790;
((struct instance_standard__NativeArray*)var1079)->values[790] = (val*) var791;
((struct instance_standard__NativeArray*)var1079)->values[791] = (val*) var792;
((struct instance_standard__NativeArray*)var1079)->values[792] = (val*) var793;
((struct instance_standard__NativeArray*)var1079)->values[793] = (val*) var794;
((struct instance_standard__NativeArray*)var1079)->values[794] = (val*) var795;
((struct instance_standard__NativeArray*)var1079)->values[795] = (val*) var796;
((struct instance_standard__NativeArray*)var1079)->values[796] = (val*) var797;
((struct instance_standard__NativeArray*)var1079)->values[797] = (val*) var798;
((struct instance_standard__NativeArray*)var1079)->values[798] = (val*) var799;
((struct instance_standard__NativeArray*)var1079)->values[799] = (val*) var800;
((struct instance_standard__NativeArray*)var1079)->values[800] = (val*) var801;
((struct instance_standard__NativeArray*)var1079)->values[801] = (val*) var802;
((struct instance_standard__NativeArray*)var1079)->values[802] = (val*) var803;
((struct instance_standard__NativeArray*)var1079)->values[803] = (val*) var804;
((struct instance_standard__NativeArray*)var1079)->values[804] = (val*) var805;
((struct instance_standard__NativeArray*)var1079)->values[805] = (val*) var806;
((struct instance_standard__NativeArray*)var1079)->values[806] = (val*) var807;
((struct instance_standard__NativeArray*)var1079)->values[807] = (val*) var808;
((struct instance_standard__NativeArray*)var1079)->values[808] = (val*) var809;
((struct instance_standard__NativeArray*)var1079)->values[809] = (val*) var810;
((struct instance_standard__NativeArray*)var1079)->values[810] = (val*) var811;
((struct instance_standard__NativeArray*)var1079)->values[811] = (val*) var812;
((struct instance_standard__NativeArray*)var1079)->values[812] = (val*) var813;
((struct instance_standard__NativeArray*)var1079)->values[813] = (val*) var814;
((struct instance_standard__NativeArray*)var1079)->values[814] = (val*) var815;
((struct instance_standard__NativeArray*)var1079)->values[815] = (val*) var816;
((struct instance_standard__NativeArray*)var1079)->values[816] = (val*) var817;
((struct instance_standard__NativeArray*)var1079)->values[817] = (val*) var818;
((struct instance_standard__NativeArray*)var1079)->values[818] = (val*) var819;
((struct instance_standard__NativeArray*)var1079)->values[819] = (val*) var820;
((struct instance_standard__NativeArray*)var1079)->values[820] = (val*) var821;
((struct instance_standard__NativeArray*)var1079)->values[821] = (val*) var822;
((struct instance_standard__NativeArray*)var1079)->values[822] = (val*) var823;
((struct instance_standard__NativeArray*)var1079)->values[823] = (val*) var824;
((struct instance_standard__NativeArray*)var1079)->values[824] = (val*) var825;
((struct instance_standard__NativeArray*)var1079)->values[825] = (val*) var826;
((struct instance_standard__NativeArray*)var1079)->values[826] = (val*) var827;
((struct instance_standard__NativeArray*)var1079)->values[827] = (val*) var828;
((struct instance_standard__NativeArray*)var1079)->values[828] = (val*) var829;
((struct instance_standard__NativeArray*)var1079)->values[829] = (val*) var830;
((struct instance_standard__NativeArray*)var1079)->values[830] = (val*) var831;
((struct instance_standard__NativeArray*)var1079)->values[831] = (val*) var832;
((struct instance_standard__NativeArray*)var1079)->values[832] = (val*) var833;
((struct instance_standard__NativeArray*)var1079)->values[833] = (val*) var834;
((struct instance_standard__NativeArray*)var1079)->values[834] = (val*) var835;
((struct instance_standard__NativeArray*)var1079)->values[835] = (val*) var836;
((struct instance_standard__NativeArray*)var1079)->values[836] = (val*) var837;
((struct instance_standard__NativeArray*)var1079)->values[837] = (val*) var838;
((struct instance_standard__NativeArray*)var1079)->values[838] = (val*) var839;
((struct instance_standard__NativeArray*)var1079)->values[839] = (val*) var840;
((struct instance_standard__NativeArray*)var1079)->values[840] = (val*) var841;
((struct instance_standard__NativeArray*)var1079)->values[841] = (val*) var842;
((struct instance_standard__NativeArray*)var1079)->values[842] = (val*) var843;
((struct instance_standard__NativeArray*)var1079)->values[843] = (val*) var844;
((struct instance_standard__NativeArray*)var1079)->values[844] = (val*) var845;
((struct instance_standard__NativeArray*)var1079)->values[845] = (val*) var846;
((struct instance_standard__NativeArray*)var1079)->values[846] = (val*) var847;
((struct instance_standard__NativeArray*)var1079)->values[847] = (val*) var848;
((struct instance_standard__NativeArray*)var1079)->values[848] = (val*) var849;
((struct instance_standard__NativeArray*)var1079)->values[849] = (val*) var850;
((struct instance_standard__NativeArray*)var1079)->values[850] = (val*) var851;
((struct instance_standard__NativeArray*)var1079)->values[851] = (val*) var852;
((struct instance_standard__NativeArray*)var1079)->values[852] = (val*) var853;
((struct instance_standard__NativeArray*)var1079)->values[853] = (val*) var854;
((struct instance_standard__NativeArray*)var1079)->values[854] = (val*) var855;
((struct instance_standard__NativeArray*)var1079)->values[855] = (val*) var856;
((struct instance_standard__NativeArray*)var1079)->values[856] = (val*) var857;
((struct instance_standard__NativeArray*)var1079)->values[857] = (val*) var858;
((struct instance_standard__NativeArray*)var1079)->values[858] = (val*) var859;
((struct instance_standard__NativeArray*)var1079)->values[859] = (val*) var860;
((struct instance_standard__NativeArray*)var1079)->values[860] = (val*) var861;
((struct instance_standard__NativeArray*)var1079)->values[861] = (val*) var862;
((struct instance_standard__NativeArray*)var1079)->values[862] = (val*) var863;
((struct instance_standard__NativeArray*)var1079)->values[863] = (val*) var864;
((struct instance_standard__NativeArray*)var1079)->values[864] = (val*) var865;
((struct instance_standard__NativeArray*)var1079)->values[865] = (val*) var866;
((struct instance_standard__NativeArray*)var1079)->values[866] = (val*) var867;
((struct instance_standard__NativeArray*)var1079)->values[867] = (val*) var868;
((struct instance_standard__NativeArray*)var1079)->values[868] = (val*) var869;
((struct instance_standard__NativeArray*)var1079)->values[869] = (val*) var870;
((struct instance_standard__NativeArray*)var1079)->values[870] = (val*) var871;
((struct instance_standard__NativeArray*)var1079)->values[871] = (val*) var872;
((struct instance_standard__NativeArray*)var1079)->values[872] = (val*) var873;
((struct instance_standard__NativeArray*)var1079)->values[873] = (val*) var874;
((struct instance_standard__NativeArray*)var1079)->values[874] = (val*) var875;
((struct instance_standard__NativeArray*)var1079)->values[875] = (val*) var876;
((struct instance_standard__NativeArray*)var1079)->values[876] = (val*) var877;
((struct instance_standard__NativeArray*)var1079)->values[877] = (val*) var878;
((struct instance_standard__NativeArray*)var1079)->values[878] = (val*) var879;
((struct instance_standard__NativeArray*)var1079)->values[879] = (val*) var880;
((struct instance_standard__NativeArray*)var1079)->values[880] = (val*) var881;
((struct instance_standard__NativeArray*)var1079)->values[881] = (val*) var882;
((struct instance_standard__NativeArray*)var1079)->values[882] = (val*) var883;
((struct instance_standard__NativeArray*)var1079)->values[883] = (val*) var884;
((struct instance_standard__NativeArray*)var1079)->values[884] = (val*) var885;
((struct instance_standard__NativeArray*)var1079)->values[885] = (val*) var886;
((struct instance_standard__NativeArray*)var1079)->values[886] = (val*) var887;
((struct instance_standard__NativeArray*)var1079)->values[887] = (val*) var888;
((struct instance_standard__NativeArray*)var1079)->values[888] = (val*) var889;
((struct instance_standard__NativeArray*)var1079)->values[889] = (val*) var890;
((struct instance_standard__NativeArray*)var1079)->values[890] = (val*) var891;
((struct instance_standard__NativeArray*)var1079)->values[891] = (val*) var892;
((struct instance_standard__NativeArray*)var1079)->values[892] = (val*) var893;
((struct instance_standard__NativeArray*)var1079)->values[893] = (val*) var894;
((struct instance_standard__NativeArray*)var1079)->values[894] = (val*) var895;
((struct instance_standard__NativeArray*)var1079)->values[895] = (val*) var896;
((struct instance_standard__NativeArray*)var1079)->values[896] = (val*) var897;
((struct instance_standard__NativeArray*)var1079)->values[897] = (val*) var898;
((struct instance_standard__NativeArray*)var1079)->values[898] = (val*) var899;
((struct instance_standard__NativeArray*)var1079)->values[899] = (val*) var900;
((struct instance_standard__NativeArray*)var1079)->values[900] = (val*) var901;
((struct instance_standard__NativeArray*)var1079)->values[901] = (val*) var902;
((struct instance_standard__NativeArray*)var1079)->values[902] = (val*) var903;
((struct instance_standard__NativeArray*)var1079)->values[903] = (val*) var904;
((struct instance_standard__NativeArray*)var1079)->values[904] = (val*) var905;
((struct instance_standard__NativeArray*)var1079)->values[905] = (val*) var906;
((struct instance_standard__NativeArray*)var1079)->values[906] = (val*) var907;
((struct instance_standard__NativeArray*)var1079)->values[907] = (val*) var908;
((struct instance_standard__NativeArray*)var1079)->values[908] = (val*) var909;
((struct instance_standard__NativeArray*)var1079)->values[909] = (val*) var910;
((struct instance_standard__NativeArray*)var1079)->values[910] = (val*) var911;
((struct instance_standard__NativeArray*)var1079)->values[911] = (val*) var912;
((struct instance_standard__NativeArray*)var1079)->values[912] = (val*) var913;
((struct instance_standard__NativeArray*)var1079)->values[913] = (val*) var914;
((struct instance_standard__NativeArray*)var1079)->values[914] = (val*) var915;
((struct instance_standard__NativeArray*)var1079)->values[915] = (val*) var916;
((struct instance_standard__NativeArray*)var1079)->values[916] = (val*) var917;
((struct instance_standard__NativeArray*)var1079)->values[917] = (val*) var918;
((struct instance_standard__NativeArray*)var1079)->values[918] = (val*) var919;
((struct instance_standard__NativeArray*)var1079)->values[919] = (val*) var920;
((struct instance_standard__NativeArray*)var1079)->values[920] = (val*) var921;
((struct instance_standard__NativeArray*)var1079)->values[921] = (val*) var922;
((struct instance_standard__NativeArray*)var1079)->values[922] = (val*) var923;
((struct instance_standard__NativeArray*)var1079)->values[923] = (val*) var924;
((struct instance_standard__NativeArray*)var1079)->values[924] = (val*) var925;
((struct instance_standard__NativeArray*)var1079)->values[925] = (val*) var926;
((struct instance_standard__NativeArray*)var1079)->values[926] = (val*) var927;
((struct instance_standard__NativeArray*)var1079)->values[927] = (val*) var928;
((struct instance_standard__NativeArray*)var1079)->values[928] = (val*) var929;
((struct instance_standard__NativeArray*)var1079)->values[929] = (val*) var930;
((struct instance_standard__NativeArray*)var1079)->values[930] = (val*) var931;
((struct instance_standard__NativeArray*)var1079)->values[931] = (val*) var932;
((struct instance_standard__NativeArray*)var1079)->values[932] = (val*) var933;
((struct instance_standard__NativeArray*)var1079)->values[933] = (val*) var934;
((struct instance_standard__NativeArray*)var1079)->values[934] = (val*) var935;
((struct instance_standard__NativeArray*)var1079)->values[935] = (val*) var936;
((struct instance_standard__NativeArray*)var1079)->values[936] = (val*) var937;
((struct instance_standard__NativeArray*)var1079)->values[937] = (val*) var938;
((struct instance_standard__NativeArray*)var1079)->values[938] = (val*) var939;
((struct instance_standard__NativeArray*)var1079)->values[939] = (val*) var940;
((struct instance_standard__NativeArray*)var1079)->values[940] = (val*) var941;
((struct instance_standard__NativeArray*)var1079)->values[941] = (val*) var942;
((struct instance_standard__NativeArray*)var1079)->values[942] = (val*) var943;
((struct instance_standard__NativeArray*)var1079)->values[943] = (val*) var944;
((struct instance_standard__NativeArray*)var1079)->values[944] = (val*) var945;
((struct instance_standard__NativeArray*)var1079)->values[945] = (val*) var946;
((struct instance_standard__NativeArray*)var1079)->values[946] = (val*) var947;
((struct instance_standard__NativeArray*)var1079)->values[947] = (val*) var948;
((struct instance_standard__NativeArray*)var1079)->values[948] = (val*) var949;
((struct instance_standard__NativeArray*)var1079)->values[949] = (val*) var950;
((struct instance_standard__NativeArray*)var1079)->values[950] = (val*) var951;
((struct instance_standard__NativeArray*)var1079)->values[951] = (val*) var952;
((struct instance_standard__NativeArray*)var1079)->values[952] = (val*) var953;
((struct instance_standard__NativeArray*)var1079)->values[953] = (val*) var954;
((struct instance_standard__NativeArray*)var1079)->values[954] = (val*) var955;
((struct instance_standard__NativeArray*)var1079)->values[955] = (val*) var956;
((struct instance_standard__NativeArray*)var1079)->values[956] = (val*) var957;
((struct instance_standard__NativeArray*)var1079)->values[957] = (val*) var958;
((struct instance_standard__NativeArray*)var1079)->values[958] = (val*) var959;
((struct instance_standard__NativeArray*)var1079)->values[959] = (val*) var960;
((struct instance_standard__NativeArray*)var1079)->values[960] = (val*) var961;
((struct instance_standard__NativeArray*)var1079)->values[961] = (val*) var962;
((struct instance_standard__NativeArray*)var1079)->values[962] = (val*) var963;
((struct instance_standard__NativeArray*)var1079)->values[963] = (val*) var964;
((struct instance_standard__NativeArray*)var1079)->values[964] = (val*) var965;
((struct instance_standard__NativeArray*)var1079)->values[965] = (val*) var966;
((struct instance_standard__NativeArray*)var1079)->values[966] = (val*) var967;
((struct instance_standard__NativeArray*)var1079)->values[967] = (val*) var968;
((struct instance_standard__NativeArray*)var1079)->values[968] = (val*) var969;
((struct instance_standard__NativeArray*)var1079)->values[969] = (val*) var970;
((struct instance_standard__NativeArray*)var1079)->values[970] = (val*) var971;
((struct instance_standard__NativeArray*)var1079)->values[971] = (val*) var972;
((struct instance_standard__NativeArray*)var1079)->values[972] = (val*) var973;
((struct instance_standard__NativeArray*)var1079)->values[973] = (val*) var974;
((struct instance_standard__NativeArray*)var1079)->values[974] = (val*) var975;
((struct instance_standard__NativeArray*)var1079)->values[975] = (val*) var976;
((struct instance_standard__NativeArray*)var1079)->values[976] = (val*) var977;
((struct instance_standard__NativeArray*)var1079)->values[977] = (val*) var978;
((struct instance_standard__NativeArray*)var1079)->values[978] = (val*) var979;
((struct instance_standard__NativeArray*)var1079)->values[979] = (val*) var980;
((struct instance_standard__NativeArray*)var1079)->values[980] = (val*) var981;
((struct instance_standard__NativeArray*)var1079)->values[981] = (val*) var982;
((struct instance_standard__NativeArray*)var1079)->values[982] = (val*) var983;
((struct instance_standard__NativeArray*)var1079)->values[983] = (val*) var984;
((struct instance_standard__NativeArray*)var1079)->values[984] = (val*) var985;
((struct instance_standard__NativeArray*)var1079)->values[985] = (val*) var986;
((struct instance_standard__NativeArray*)var1079)->values[986] = (val*) var987;
((struct instance_standard__NativeArray*)var1079)->values[987] = (val*) var988;
((struct instance_standard__NativeArray*)var1079)->values[988] = (val*) var989;
((struct instance_standard__NativeArray*)var1079)->values[989] = (val*) var990;
((struct instance_standard__NativeArray*)var1079)->values[990] = (val*) var991;
((struct instance_standard__NativeArray*)var1079)->values[991] = (val*) var992;
((struct instance_standard__NativeArray*)var1079)->values[992] = (val*) var993;
((struct instance_standard__NativeArray*)var1079)->values[993] = (val*) var994;
((struct instance_standard__NativeArray*)var1079)->values[994] = (val*) var995;
((struct instance_standard__NativeArray*)var1079)->values[995] = (val*) var996;
((struct instance_standard__NativeArray*)var1079)->values[996] = (val*) var997;
((struct instance_standard__NativeArray*)var1079)->values[997] = (val*) var998;
((struct instance_standard__NativeArray*)var1079)->values[998] = (val*) var999;
((struct instance_standard__NativeArray*)var1079)->values[999] = (val*) var1000;
((struct instance_standard__NativeArray*)var1079)->values[1000] = (val*) var1001;
((struct instance_standard__NativeArray*)var1079)->values[1001] = (val*) var1002;
((struct instance_standard__NativeArray*)var1079)->values[1002] = (val*) var1003;
((struct instance_standard__NativeArray*)var1079)->values[1003] = (val*) var1004;
((struct instance_standard__NativeArray*)var1079)->values[1004] = (val*) var1005;
((struct instance_standard__NativeArray*)var1079)->values[1005] = (val*) var1006;
((struct instance_standard__NativeArray*)var1079)->values[1006] = (val*) var1007;
((struct instance_standard__NativeArray*)var1079)->values[1007] = (val*) var1008;
((struct instance_standard__NativeArray*)var1079)->values[1008] = (val*) var1009;
((struct instance_standard__NativeArray*)var1079)->values[1009] = (val*) var1010;
((struct instance_standard__NativeArray*)var1079)->values[1010] = (val*) var1011;
((struct instance_standard__NativeArray*)var1079)->values[1011] = (val*) var1012;
((struct instance_standard__NativeArray*)var1079)->values[1012] = (val*) var1013;
((struct instance_standard__NativeArray*)var1079)->values[1013] = (val*) var1014;
((struct instance_standard__NativeArray*)var1079)->values[1014] = (val*) var1015;
((struct instance_standard__NativeArray*)var1079)->values[1015] = (val*) var1016;
((struct instance_standard__NativeArray*)var1079)->values[1016] = (val*) var1017;
((struct instance_standard__NativeArray*)var1079)->values[1017] = (val*) var1018;
((struct instance_standard__NativeArray*)var1079)->values[1018] = (val*) var1019;
((struct instance_standard__NativeArray*)var1079)->values[1019] = (val*) var1020;
((struct instance_standard__NativeArray*)var1079)->values[1020] = (val*) var1021;
((struct instance_standard__NativeArray*)var1079)->values[1021] = (val*) var1022;
((struct instance_standard__NativeArray*)var1079)->values[1022] = (val*) var1023;
((struct instance_standard__NativeArray*)var1079)->values[1023] = (val*) var1024;
((struct instance_standard__NativeArray*)var1079)->values[1024] = (val*) var1025;
((struct instance_standard__NativeArray*)var1079)->values[1025] = (val*) var1026;
((struct instance_standard__NativeArray*)var1079)->values[1026] = (val*) var1027;
((struct instance_standard__NativeArray*)var1079)->values[1027] = (val*) var1028;
((struct instance_standard__NativeArray*)var1079)->values[1028] = (val*) var1029;
((struct instance_standard__NativeArray*)var1079)->values[1029] = (val*) var1030;
((struct instance_standard__NativeArray*)var1079)->values[1030] = (val*) var1031;
((struct instance_standard__NativeArray*)var1079)->values[1031] = (val*) var1032;
((struct instance_standard__NativeArray*)var1079)->values[1032] = (val*) var1033;
((struct instance_standard__NativeArray*)var1079)->values[1033] = (val*) var1034;
((struct instance_standard__NativeArray*)var1079)->values[1034] = (val*) var1035;
((struct instance_standard__NativeArray*)var1079)->values[1035] = (val*) var1036;
((struct instance_standard__NativeArray*)var1079)->values[1036] = (val*) var1037;
((struct instance_standard__NativeArray*)var1079)->values[1037] = (val*) var1038;
((struct instance_standard__NativeArray*)var1079)->values[1038] = (val*) var1039;
((struct instance_standard__NativeArray*)var1079)->values[1039] = (val*) var1040;
((struct instance_standard__NativeArray*)var1079)->values[1040] = (val*) var1041;
((struct instance_standard__NativeArray*)var1079)->values[1041] = (val*) var1042;
((struct instance_standard__NativeArray*)var1079)->values[1042] = (val*) var1043;
((struct instance_standard__NativeArray*)var1079)->values[1043] = (val*) var1044;
((struct instance_standard__NativeArray*)var1079)->values[1044] = (val*) var1045;
((struct instance_standard__NativeArray*)var1079)->values[1045] = (val*) var1046;
((struct instance_standard__NativeArray*)var1079)->values[1046] = (val*) var1047;
((struct instance_standard__NativeArray*)var1079)->values[1047] = (val*) var1048;
((struct instance_standard__NativeArray*)var1079)->values[1048] = (val*) var1049;
((struct instance_standard__NativeArray*)var1079)->values[1049] = (val*) var1050;
((struct instance_standard__NativeArray*)var1079)->values[1050] = (val*) var1051;
((struct instance_standard__NativeArray*)var1079)->values[1051] = (val*) var1052;
((struct instance_standard__NativeArray*)var1079)->values[1052] = (val*) var1053;
((struct instance_standard__NativeArray*)var1079)->values[1053] = (val*) var1054;
((struct instance_standard__NativeArray*)var1079)->values[1054] = (val*) var1055;
((struct instance_standard__NativeArray*)var1079)->values[1055] = (val*) var1056;
((struct instance_standard__NativeArray*)var1079)->values[1056] = (val*) var1057;
((struct instance_standard__NativeArray*)var1079)->values[1057] = (val*) var1058;
((struct instance_standard__NativeArray*)var1079)->values[1058] = (val*) var1059;
((struct instance_standard__NativeArray*)var1079)->values[1059] = (val*) var1060;
((struct instance_standard__NativeArray*)var1079)->values[1060] = (val*) var1061;
((struct instance_standard__NativeArray*)var1079)->values[1061] = (val*) var1062;
((struct instance_standard__NativeArray*)var1079)->values[1062] = (val*) var1063;
((struct instance_standard__NativeArray*)var1079)->values[1063] = (val*) var1064;
((struct instance_standard__NativeArray*)var1079)->values[1064] = (val*) var1065;
((struct instance_standard__NativeArray*)var1079)->values[1065] = (val*) var1066;
((struct instance_standard__NativeArray*)var1079)->values[1066] = (val*) var1067;
((struct instance_standard__NativeArray*)var1079)->values[1067] = (val*) var1068;
((struct instance_standard__NativeArray*)var1079)->values[1068] = (val*) var1069;
((struct instance_standard__NativeArray*)var1079)->values[1069] = (val*) var1070;
((struct instance_standard__NativeArray*)var1079)->values[1070] = (val*) var1071;
((struct instance_standard__NativeArray*)var1079)->values[1071] = (val*) var1072;
((struct instance_standard__NativeArray*)var1079)->values[1072] = (val*) var1073;
((struct instance_standard__NativeArray*)var1079)->values[1073] = (val*) var1074;
((struct instance_standard__NativeArray*)var1079)->values[1074] = (val*) var1075;
((struct instance_standard__NativeArray*)var1079)->values[1075] = (val*) var1076;
((struct instance_standard__NativeArray*)var1079)->values[1076] = (val*) var1077;
{
((void(*)(val* self, val* p0, long p1))(var1078->class->vft[COLOR_standard__array__Array__with_native]))(var1078, var1079, 1077l); /* with_native on <var1078:Array[nullable Object]>*/
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__array__Array__with_items]))(var, var1078); /* with_items on <var:Array[ReduceAction]>*/
}
self->attrs[COLOR_nit__parser_work__Parser___reduce_table].val = var; /* _reduce_table on <self:Parser> */
RET_LABEL:;
}
/* method parser#ReduceAction0#action for (self: ReduceAction0, Parser) */
void nit__parser___nit__parser__ReduceAction0___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Object]>*/
}
var_listnode4 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode6 = var3;
var_pclassdefnode5 = var_nodearraylist1;
/* <var_pclassdefnode5:nullable Object> isa nullable AClassdef */
cltype = type_nullable__nit__AClassdef.color;
idtype = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode5 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_pclassdefnode5&3)?type_info[((long)var_pclassdefnode5&3)]:var_pclassdefnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pclassdefnode5&3)?type_info[((long)var_pclassdefnode5&3)]:var_pclassdefnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1104);
fatal_exit(1);
}
if (var_pclassdefnode5 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_pclassdefnode5->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode5, ((val*)NULL)); /* != on <var_pclassdefnode5:nullable Object(nullable AClassdef)>*/
var5 = var6;
}
if (var5){
{
((void(*)(val* self, val* p0))(var_listnode6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode6, var_pclassdefnode5); /* add on <var_listnode6:Array[Object]>*/
}
} else {
}
var7 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var7->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var7, ((val*)NULL), var_listnode3, var_listnode4, var_listnode6); /* init_amodule on <var7:AModule>*/
}
var_pmodulenode1 = var7;
var_node_list = var_pmodulenode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction0> */
{
var9 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var8); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var9, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1#action for (self: ReduceAction1, Parser) */
void nit__parser___nit__parser__ReduceAction1___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist2 = var;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nit__parser_work__Parser__pop]))(var_p); /* pop on <var_p:Parser>*/
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1129);
fatal_exit(1);
}
var_pclassdefnode5 = var_nodearraylist2;
/* <var_pclassdefnode5:nullable Object> isa nullable AClassdef */
cltype7 = type_nullable__nit__AClassdef.color;
idtype8 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode5 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pclassdefnode5&3)?type_info[((long)var_pclassdefnode5&3)]:var_pclassdefnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pclassdefnode5&3)?type_info[((long)var_pclassdefnode5&3)]:var_pclassdefnode5->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1131);
fatal_exit(1);
}
if (var_pclassdefnode5 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))(var_pclassdefnode5->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode5, ((val*)NULL)); /* != on <var_pclassdefnode5:nullable Object(nullable AClassdef)>*/
var9 = var10;
}
if (var9){
{
((void(*)(val* self, val* p0))(var_listnode6->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var_listnode6, var_pclassdefnode5); /* add on <var_listnode6:Array[Object]>*/
}
} else {
}
var11 = NEW_nit__AModule(&type_nit__AModule);
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var11->class->vft[COLOR_nit__parser_prod__AModule__init_amodule]))(var11, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode6); /* init_amodule on <var11:AModule>*/
}
var_pmodulenode1 = var11;
var_node_list = var_pmodulenode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1> */
{
var13 = ((long(*)(val* self, long p0))(var_p->class->vft[COLOR_nit__parser_work__Parser__go_to]))(var_p, var12); /* go_to on <var_p:Parser>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_p->class->vft[COLOR_nit__parser_work__Parser__push]))(var_p, var13, var_node_list); /* push on <var_p:Parser>*/
}
RET_LABEL:;
}
