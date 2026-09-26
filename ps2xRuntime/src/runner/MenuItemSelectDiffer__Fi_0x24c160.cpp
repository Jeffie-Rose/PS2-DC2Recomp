#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemSelectDiffer__Fi
// Address: 0x24c160 - 0x24c3c8
void MenuItemSelectDiffer__Fi_0x24c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemSelectDiffer__Fi_0x24c160");
#endif

    switch (ctx->pc) {
        case 0x24c160u: goto label_24c160;
        case 0x24c164u: goto label_24c164;
        case 0x24c168u: goto label_24c168;
        case 0x24c16cu: goto label_24c16c;
        case 0x24c170u: goto label_24c170;
        case 0x24c174u: goto label_24c174;
        case 0x24c178u: goto label_24c178;
        case 0x24c17cu: goto label_24c17c;
        case 0x24c180u: goto label_24c180;
        case 0x24c184u: goto label_24c184;
        case 0x24c188u: goto label_24c188;
        case 0x24c18cu: goto label_24c18c;
        case 0x24c190u: goto label_24c190;
        case 0x24c194u: goto label_24c194;
        case 0x24c198u: goto label_24c198;
        case 0x24c19cu: goto label_24c19c;
        case 0x24c1a0u: goto label_24c1a0;
        case 0x24c1a4u: goto label_24c1a4;
        case 0x24c1a8u: goto label_24c1a8;
        case 0x24c1acu: goto label_24c1ac;
        case 0x24c1b0u: goto label_24c1b0;
        case 0x24c1b4u: goto label_24c1b4;
        case 0x24c1b8u: goto label_24c1b8;
        case 0x24c1bcu: goto label_24c1bc;
        case 0x24c1c0u: goto label_24c1c0;
        case 0x24c1c4u: goto label_24c1c4;
        case 0x24c1c8u: goto label_24c1c8;
        case 0x24c1ccu: goto label_24c1cc;
        case 0x24c1d0u: goto label_24c1d0;
        case 0x24c1d4u: goto label_24c1d4;
        case 0x24c1d8u: goto label_24c1d8;
        case 0x24c1dcu: goto label_24c1dc;
        case 0x24c1e0u: goto label_24c1e0;
        case 0x24c1e4u: goto label_24c1e4;
        case 0x24c1e8u: goto label_24c1e8;
        case 0x24c1ecu: goto label_24c1ec;
        case 0x24c1f0u: goto label_24c1f0;
        case 0x24c1f4u: goto label_24c1f4;
        case 0x24c1f8u: goto label_24c1f8;
        case 0x24c1fcu: goto label_24c1fc;
        case 0x24c200u: goto label_24c200;
        case 0x24c204u: goto label_24c204;
        case 0x24c208u: goto label_24c208;
        case 0x24c20cu: goto label_24c20c;
        case 0x24c210u: goto label_24c210;
        case 0x24c214u: goto label_24c214;
        case 0x24c218u: goto label_24c218;
        case 0x24c21cu: goto label_24c21c;
        case 0x24c220u: goto label_24c220;
        case 0x24c224u: goto label_24c224;
        case 0x24c228u: goto label_24c228;
        case 0x24c22cu: goto label_24c22c;
        case 0x24c230u: goto label_24c230;
        case 0x24c234u: goto label_24c234;
        case 0x24c238u: goto label_24c238;
        case 0x24c23cu: goto label_24c23c;
        case 0x24c240u: goto label_24c240;
        case 0x24c244u: goto label_24c244;
        case 0x24c248u: goto label_24c248;
        case 0x24c24cu: goto label_24c24c;
        case 0x24c250u: goto label_24c250;
        case 0x24c254u: goto label_24c254;
        case 0x24c258u: goto label_24c258;
        case 0x24c25cu: goto label_24c25c;
        case 0x24c260u: goto label_24c260;
        case 0x24c264u: goto label_24c264;
        case 0x24c268u: goto label_24c268;
        case 0x24c26cu: goto label_24c26c;
        case 0x24c270u: goto label_24c270;
        case 0x24c274u: goto label_24c274;
        case 0x24c278u: goto label_24c278;
        case 0x24c27cu: goto label_24c27c;
        case 0x24c280u: goto label_24c280;
        case 0x24c284u: goto label_24c284;
        case 0x24c288u: goto label_24c288;
        case 0x24c28cu: goto label_24c28c;
        case 0x24c290u: goto label_24c290;
        case 0x24c294u: goto label_24c294;
        case 0x24c298u: goto label_24c298;
        case 0x24c29cu: goto label_24c29c;
        case 0x24c2a0u: goto label_24c2a0;
        case 0x24c2a4u: goto label_24c2a4;
        case 0x24c2a8u: goto label_24c2a8;
        case 0x24c2acu: goto label_24c2ac;
        case 0x24c2b0u: goto label_24c2b0;
        case 0x24c2b4u: goto label_24c2b4;
        case 0x24c2b8u: goto label_24c2b8;
        case 0x24c2bcu: goto label_24c2bc;
        case 0x24c2c0u: goto label_24c2c0;
        case 0x24c2c4u: goto label_24c2c4;
        case 0x24c2c8u: goto label_24c2c8;
        case 0x24c2ccu: goto label_24c2cc;
        case 0x24c2d0u: goto label_24c2d0;
        case 0x24c2d4u: goto label_24c2d4;
        case 0x24c2d8u: goto label_24c2d8;
        case 0x24c2dcu: goto label_24c2dc;
        case 0x24c2e0u: goto label_24c2e0;
        case 0x24c2e4u: goto label_24c2e4;
        case 0x24c2e8u: goto label_24c2e8;
        case 0x24c2ecu: goto label_24c2ec;
        case 0x24c2f0u: goto label_24c2f0;
        case 0x24c2f4u: goto label_24c2f4;
        case 0x24c2f8u: goto label_24c2f8;
        case 0x24c2fcu: goto label_24c2fc;
        case 0x24c300u: goto label_24c300;
        case 0x24c304u: goto label_24c304;
        case 0x24c308u: goto label_24c308;
        case 0x24c30cu: goto label_24c30c;
        case 0x24c310u: goto label_24c310;
        case 0x24c314u: goto label_24c314;
        case 0x24c318u: goto label_24c318;
        case 0x24c31cu: goto label_24c31c;
        case 0x24c320u: goto label_24c320;
        case 0x24c324u: goto label_24c324;
        case 0x24c328u: goto label_24c328;
        case 0x24c32cu: goto label_24c32c;
        case 0x24c330u: goto label_24c330;
        case 0x24c334u: goto label_24c334;
        case 0x24c338u: goto label_24c338;
        case 0x24c33cu: goto label_24c33c;
        case 0x24c340u: goto label_24c340;
        case 0x24c344u: goto label_24c344;
        case 0x24c348u: goto label_24c348;
        case 0x24c34cu: goto label_24c34c;
        case 0x24c350u: goto label_24c350;
        case 0x24c354u: goto label_24c354;
        case 0x24c358u: goto label_24c358;
        case 0x24c35cu: goto label_24c35c;
        case 0x24c360u: goto label_24c360;
        case 0x24c364u: goto label_24c364;
        case 0x24c368u: goto label_24c368;
        case 0x24c36cu: goto label_24c36c;
        case 0x24c370u: goto label_24c370;
        case 0x24c374u: goto label_24c374;
        case 0x24c378u: goto label_24c378;
        case 0x24c37cu: goto label_24c37c;
        case 0x24c380u: goto label_24c380;
        case 0x24c384u: goto label_24c384;
        case 0x24c388u: goto label_24c388;
        case 0x24c38cu: goto label_24c38c;
        case 0x24c390u: goto label_24c390;
        case 0x24c394u: goto label_24c394;
        case 0x24c398u: goto label_24c398;
        case 0x24c39cu: goto label_24c39c;
        case 0x24c3a0u: goto label_24c3a0;
        case 0x24c3a4u: goto label_24c3a4;
        case 0x24c3a8u: goto label_24c3a8;
        case 0x24c3acu: goto label_24c3ac;
        case 0x24c3b0u: goto label_24c3b0;
        case 0x24c3b4u: goto label_24c3b4;
        case 0x24c3b8u: goto label_24c3b8;
        case 0x24c3bcu: goto label_24c3bc;
        case 0x24c3c0u: goto label_24c3c0;
        case 0x24c3c4u: goto label_24c3c4;
        default: break;
    }

    ctx->pc = 0x24c160u;

label_24c160:
    // 0x24c160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24c164:
    // 0x24c164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_24c168:
    // 0x24c168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24c16c:
    // 0x24c16c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24c170:
    // 0x24c170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24c170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24c174:
    // 0x24c174: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24c178:
    // 0x24c178: 0x90420160  lbu         $v0, 0x160($v0)
    ctx->pc = 0x24c178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 352)));
label_24c17c:
    // 0x24c17c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24c180:
    if (ctx->pc == 0x24C180u) {
        ctx->pc = 0x24C180u;
            // 0x24c180: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C184u;
        goto label_24c184;
    }
    ctx->pc = 0x24C17Cu;
    {
        const bool branch_taken_0x24c17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C17Cu;
            // 0x24c180: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c17c) {
            ctx->pc = 0x24C18Cu;
            goto label_24c18c;
        }
    }
    ctx->pc = 0x24C184u;
label_24c184:
    // 0x24c184: 0x1000008a  b           . + 4 + (0x8A << 2)
label_24c188:
    if (ctx->pc == 0x24C188u) {
        ctx->pc = 0x24C188u;
            // 0x24c188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C18Cu;
        goto label_24c18c;
    }
    ctx->pc = 0x24C184u;
    {
        const bool branch_taken_0x24c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C184u;
            // 0x24c188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c184) {
            ctx->pc = 0x24C3B0u;
            goto label_24c3b0;
        }
    }
    ctx->pc = 0x24C18Cu;
label_24c18c:
    // 0x24c18c: 0x8f9094f8  lw          $s0, -0x6B08($gp)
    ctx->pc = 0x24c18cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24c190:
    // 0x24c190: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x24c190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_24c194:
    // 0x24c194: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x24c194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_24c198:
    // 0x24c198: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24c19c:
    // 0x24c19c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_24c1a0:
    // 0x24c1a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24c1a4:
    // 0x24c1a4: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x24c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
label_24c1a8:
    // 0x24c1a8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x24c1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c1ac:
    // 0x24c1ac: 0xae110134  sw          $s1, 0x134($s0)
    ctx->pc = 0x24c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 17));
label_24c1b0:
    // 0x24c1b0: 0x8f8695c0  lw          $a2, -0x6A40($gp)
    ctx->pc = 0x24c1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24c1b4:
    // 0x24c1b4: 0x84c50014  lh          $a1, 0x14($a2)
    ctx->pc = 0x24c1b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
label_24c1b8:
    // 0x24c1b8: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_24c1bc:
    if (ctx->pc == 0x24C1BCu) {
        ctx->pc = 0x24C1BCu;
            // 0x24c1bc: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x24C1C0u;
        goto label_24c1c0;
    }
    ctx->pc = 0x24C1B8u;
    {
        const bool branch_taken_0x24c1b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x24C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1B8u;
            // 0x24c1bc: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1b8) {
            ctx->pc = 0x24C1C8u;
            goto label_24c1c8;
        }
    }
    ctx->pc = 0x24C1C0u;
label_24c1c0:
    // 0x24c1c0: 0x10000028  b           . + 4 + (0x28 << 2)
label_24c1c4:
    if (ctx->pc == 0x24C1C4u) {
        ctx->pc = 0x24C1C4u;
            // 0x24c1c4: 0x2e41000c  sltiu       $at, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->pc = 0x24C1C8u;
        goto label_24c1c8;
    }
    ctx->pc = 0x24C1C0u;
    {
        const bool branch_taken_0x24c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1C0u;
            // 0x24c1c4: 0x2e41000c  sltiu       $at, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1c0) {
            ctx->pc = 0x24C264u;
            goto label_24c264;
        }
    }
    ctx->pc = 0x24C1C8u;
label_24c1c8:
    // 0x24c1c8: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x24c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_24c1cc:
    // 0x24c1cc: 0x90220d59  lbu         $v0, 0xD59($at)
    ctx->pc = 0x24c1ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3417)));
label_24c1d0:
    // 0x24c1d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_24c1d4:
    if (ctx->pc == 0x24C1D4u) {
        ctx->pc = 0x24C1D4u;
            // 0x24c1d4: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->pc = 0x24C1D8u;
        goto label_24c1d8;
    }
    ctx->pc = 0x24C1D0u;
    {
        const bool branch_taken_0x24c1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C1D0u;
            // 0x24c1d4: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1d0) {
            ctx->pc = 0x24C1DCu;
            goto label_24c1dc;
        }
    }
    ctx->pc = 0x24C1D8u;
label_24c1d8:
    // 0x24c1d8: 0x1cd  break       0, 7
    ctx->pc = 0x24c1d8u;
    runtime->handleBreak(rdram, ctx);
label_24c1dc:
    // 0x24c1dc: 0x84c60110  lh          $a2, 0x110($a2)
    ctx->pc = 0x24c1dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 272)));
label_24c1e0:
    // 0x24c1e0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_24c1e4:
    // 0x24c1e4: 0x8e070074  lw          $a3, 0x74($s0)
    ctx->pc = 0x24c1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_24c1e8:
    // 0x24c1e8: 0x4012  mflo        $t0
    ctx->pc = 0x24c1e8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_24c1ec:
    // 0x24c1ec: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_24c1f0:
    // 0x24c1f0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_24c1f4:
    // 0x24c1f4: 0x248412a0  addiu       $a0, $a0, 0x12A0
    ctx->pc = 0x24c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4768));
label_24c1f8:
    // 0x24c1f8: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x24c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
label_24c1fc:
    // 0x24c1fc: 0x244212d0  addiu       $v0, $v0, 0x12D0
    ctx->pc = 0x24c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4816));
label_24c200:
    // 0x24c200: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x24c200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_24c204:
    // 0x24c204: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24c204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24c208:
    // 0x24c208: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x24c208u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_24c20c:
    // 0x24c20c: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x24c20cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
label_24c210:
    // 0x24c210: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x24c210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_24c214:
    // 0x24c214: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x24c214u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_24c218:
    // 0x24c218: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24c21c:
    // 0x24c21c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x24c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_24c220:
    // 0x24c220: 0x80920000  lb          $s2, 0x0($a0)
    ctx->pc = 0x24c220u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_24c224:
    // 0x24c224: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x24c224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_24c228:
    // 0x24c228: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x24c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_24c22c:
    // 0x24c22c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24c230:
    // 0x24c230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24c234:
    // 0x24c234: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x24c234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
label_24c238:
    // 0x24c238: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x24c238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_24c23c:
    // 0x24c23c: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24c240:
    // 0x24c240: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x24c240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_24c244:
    // 0x24c244: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x24c244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_24c248:
    // 0x24c248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24c248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24c24c:
    // 0x24c24c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24c250:
    // 0x24c250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c254:
    // 0x24c254: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x24c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24c258:
    // 0x24c258: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x24c258u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_24c25c:
    // 0x24c25c: 0x10000051  b           . + 4 + (0x51 << 2)
label_24c260:
    if (ctx->pc == 0x24C260u) {
        ctx->pc = 0x24C260u;
            // 0x24c260: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x24C264u;
        goto label_24c264;
    }
    ctx->pc = 0x24C25Cu;
    {
        const bool branch_taken_0x24c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C25Cu;
            // 0x24c260: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c25c) {
            ctx->pc = 0x24C3A4u;
            goto label_24c3a4;
        }
    }
    ctx->pc = 0x24C264u;
label_24c264:
    // 0x24c264: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_24c268:
    if (ctx->pc == 0x24C268u) {
        ctx->pc = 0x24C268u;
            // 0x24c268: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x24C26Cu;
        goto label_24c26c;
    }
    ctx->pc = 0x24C264u;
    {
        const bool branch_taken_0x24c264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C264u;
            // 0x24c268: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c264) {
            ctx->pc = 0x24C370u;
            goto label_24c370;
        }
    }
    ctx->pc = 0x24C26Cu;
label_24c26c:
    // 0x24c26c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x24c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_24c270:
    // 0x24c270: 0x2463ba20  addiu       $v1, $v1, -0x45E0
    ctx->pc = 0x24c270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949408));
label_24c274:
    // 0x24c274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c278:
    // 0x24c278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c27c:
    // 0x24c27c: 0x400008  jr          $v0
label_24c280:
    if (ctx->pc == 0x24C280u) {
        ctx->pc = 0x24C284u;
        goto label_24c284;
    }
    ctx->pc = 0x24C27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24C284u;
label_24c284:
    // 0x24c284: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24c284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_24c288:
    // 0x24c288: 0x87829588  lh          $v0, -0x6A78($gp)
    ctx->pc = 0x24c288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_24c28c:
    // 0x24c28c: 0x246312f8  addiu       $v1, $v1, 0x12F8
    ctx->pc = 0x24c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4856));
label_24c290:
    // 0x24c290: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24c290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24c294:
    // 0x24c294: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x24c294u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24c298:
    // 0x24c298: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x24c298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_24c29c:
    // 0x24c29c: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x24c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_24c2a0:
    // 0x24c2a0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x24c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_24c2a4:
    // 0x24c2a4: 0x90630011  lbu         $v1, 0x11($v1)
    ctx->pc = 0x24c2a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
label_24c2a8:
    // 0x24c2a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24c2ac:
    // 0x24c2ac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x24c2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24c2b0:
    // 0x24c2b0: 0x10000030  b           . + 4 + (0x30 << 2)
label_24c2b4:
    if (ctx->pc == 0x24C2B4u) {
        ctx->pc = 0x24C2B4u;
            // 0x24c2b4: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x24C2B8u;
        goto label_24c2b8;
    }
    ctx->pc = 0x24C2B0u;
    {
        const bool branch_taken_0x24c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2B0u;
            // 0x24c2b4: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2b0) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C2B8u;
label_24c2b8:
    // 0x24c2b8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x24c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_24c2bc:
    // 0x24c2bc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x24c2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_24c2c0:
    // 0x24c2c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_24c2c4:
    if (ctx->pc == 0x24C2C4u) {
        ctx->pc = 0x24C2C8u;
        goto label_24c2c8;
    }
    ctx->pc = 0x24C2C0u;
    {
        const bool branch_taken_0x24c2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c2c0) {
            ctx->pc = 0x24C2CCu;
            goto label_24c2cc;
        }
    }
    ctx->pc = 0x24C2C8u;
label_24c2c8:
    // 0x24c2c8: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x24c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_24c2cc:
    // 0x24c2cc: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24c2d0:
    // 0x24c2d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24c2d4:
    // 0x24c2d4: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x24c2d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_24c2d8:
    // 0x24c2d8: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_24c2dc:
    if (ctx->pc == 0x24C2DCu) {
        ctx->pc = 0x24C2E0u;
        goto label_24c2e0;
    }
    ctx->pc = 0x24C2D8u;
    {
        const bool branch_taken_0x24c2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c2d8) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C2E0u;
label_24c2e0:
    // 0x24c2e0: 0x10000024  b           . + 4 + (0x24 << 2)
label_24c2e4:
    if (ctx->pc == 0x24C2E4u) {
        ctx->pc = 0x24C2E4u;
            // 0x24c2e4: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x24C2E8u;
        goto label_24c2e8;
    }
    ctx->pc = 0x24C2E0u;
    {
        const bool branch_taken_0x24c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2E0u;
            // 0x24c2e4: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2e0) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C2E8u;
label_24c2e8:
    // 0x24c2e8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x24c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_24c2ec:
    // 0x24c2ec: 0x10000021  b           . + 4 + (0x21 << 2)
label_24c2f0:
    if (ctx->pc == 0x24C2F0u) {
        ctx->pc = 0x24C2F0u;
            // 0x24c2f0: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x24C2F4u;
        goto label_24c2f4;
    }
    ctx->pc = 0x24C2ECu;
    {
        const bool branch_taken_0x24c2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2ECu;
            // 0x24c2f0: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2ec) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C2F4u;
label_24c2f4:
    // 0x24c2f4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x24c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_24c2f8:
    // 0x24c2f8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x24c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_24c2fc:
    // 0x24c2fc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x24c2fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_24c300:
    // 0x24c300: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_24c304:
    if (ctx->pc == 0x24C304u) {
        ctx->pc = 0x24C304u;
            // 0x24c304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24C308u;
        goto label_24c308;
    }
    ctx->pc = 0x24C300u;
    {
        const bool branch_taken_0x24c300 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C300u;
            // 0x24c304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c300) {
            ctx->pc = 0x24C30Cu;
            goto label_24c30c;
        }
    }
    ctx->pc = 0x24C308u;
label_24c308:
    // 0x24c308: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x24c308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_24c30c:
    // 0x24c30c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x24c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_24c310:
    // 0x24c310: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
label_24c314:
    if (ctx->pc == 0x24C314u) {
        ctx->pc = 0x24C318u;
        goto label_24c318;
    }
    ctx->pc = 0x24C310u;
    {
        const bool branch_taken_0x24c310 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24c310) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C318u;
label_24c318:
    // 0x24c318: 0x10000016  b           . + 4 + (0x16 << 2)
label_24c31c:
    if (ctx->pc == 0x24C31Cu) {
        ctx->pc = 0x24C31Cu;
            // 0x24c31c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x24C320u;
        goto label_24c320;
    }
    ctx->pc = 0x24C318u;
    {
        const bool branch_taken_0x24c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C318u;
            // 0x24c31c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c318) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C320u;
label_24c320:
    // 0x24c320: 0xc065af8  jal         func_196BE0
label_24c324:
    if (ctx->pc == 0x24C324u) {
        ctx->pc = 0x24C328u;
        goto label_24c328;
    }
    ctx->pc = 0x24C320u;
    SET_GPR_U32(ctx, 31, 0x24C328u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C328u; }
        if (ctx->pc != 0x24C328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C328u; }
        if (ctx->pc != 0x24C328u) { return; }
    }
    ctx->pc = 0x24C328u;
label_24c328:
    // 0x24c328: 0xc0673b8  jal         func_19CEE0
label_24c32c:
    if (ctx->pc == 0x24C32Cu) {
        ctx->pc = 0x24C32Cu;
            // 0x24c32c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C330u;
        goto label_24c330;
    }
    ctx->pc = 0x24C328u;
    SET_GPR_U32(ctx, 31, 0x24C330u);
    ctx->pc = 0x24C32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C328u;
            // 0x24c32c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C330u; }
        if (ctx->pc != 0x24C330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C330u; }
        if (ctx->pc != 0x24C330u) { return; }
    }
    ctx->pc = 0x24C330u;
label_24c330:
    // 0x24c330: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24c334:
    if (ctx->pc == 0x24C334u) {
        ctx->pc = 0x24C338u;
        goto label_24c338;
    }
    ctx->pc = 0x24C330u;
    {
        const bool branch_taken_0x24c330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c330) {
            ctx->pc = 0x24C354u;
            goto label_24c354;
        }
    }
    ctx->pc = 0x24C338u;
label_24c338:
    // 0x24c338: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24c33c:
    // 0x24c33c: 0x84620110  lh          $v0, 0x110($v1)
    ctx->pc = 0x24c33cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_24c340:
    // 0x24c340: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_24c344:
    if (ctx->pc == 0x24C344u) {
        ctx->pc = 0x24C348u;
        goto label_24c348;
    }
    ctx->pc = 0x24C340u;
    {
        const bool branch_taken_0x24c340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c340) {
            ctx->pc = 0x24C354u;
            goto label_24c354;
        }
    }
    ctx->pc = 0x24C348u;
label_24c348:
    // 0x24c348: 0x84620114  lh          $v0, 0x114($v1)
    ctx->pc = 0x24c348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 276)));
label_24c34c:
    // 0x24c34c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24c350:
    if (ctx->pc == 0x24C350u) {
        ctx->pc = 0x24C354u;
        goto label_24c354;
    }
    ctx->pc = 0x24C34Cu;
    {
        const bool branch_taken_0x24c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c34c) {
            ctx->pc = 0x24C368u;
            goto label_24c368;
        }
    }
    ctx->pc = 0x24C354u;
label_24c354:
    // 0x24c354: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_24c358:
    // 0x24c358: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24c358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c35c:
    // 0x24c35c: 0x24420d24  addiu       $v0, $v0, 0xD24
    ctx->pc = 0x24c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3364));
label_24c360:
    // 0x24c360: 0x10000004  b           . + 4 + (0x4 << 2)
label_24c364:
    if (ctx->pc == 0x24C364u) {
        ctx->pc = 0x24C364u;
            // 0x24c364: 0xae020134  sw          $v0, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
        ctx->pc = 0x24C368u;
        goto label_24c368;
    }
    ctx->pc = 0x24C360u;
    {
        const bool branch_taken_0x24c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C360u;
            // 0x24c364: 0xae020134  sw          $v0, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c360) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C368u;
label_24c368:
    // 0x24c368: 0x10000002  b           . + 4 + (0x2 << 2)
label_24c36c:
    if (ctx->pc == 0x24C36Cu) {
        ctx->pc = 0x24C36Cu;
            // 0x24c36c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x24C370u;
        goto label_24c370;
    }
    ctx->pc = 0x24C368u;
    {
        const bool branch_taken_0x24c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C368u;
            // 0x24c36c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c368) {
            ctx->pc = 0x24C374u;
            goto label_24c374;
        }
    }
    ctx->pc = 0x24C370u;
label_24c370:
    // 0x24c370: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x24c370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_24c374:
    // 0x24c374: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x24c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_24c378:
    // 0x24c378: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x24c378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_24c37c:
    // 0x24c37c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24c37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24c380:
    // 0x24c380: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_24c384:
    if (ctx->pc == 0x24C384u) {
        ctx->pc = 0x24C384u;
            // 0x24c384: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x24C388u;
        goto label_24c388;
    }
    ctx->pc = 0x24C380u;
    {
        const bool branch_taken_0x24c380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C380u;
            // 0x24c384: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c380) {
            ctx->pc = 0x24C38Cu;
            goto label_24c38c;
        }
    }
    ctx->pc = 0x24C388u;
label_24c388:
    // 0x24c388: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x24c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_24c38c:
    // 0x24c38c: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x24c38cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_24c390:
    // 0x24c390: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x24c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_24c394:
    // 0x24c394: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x24c394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24c398:
    // 0x24c398: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_24c39c:
    if (ctx->pc == 0x24C39Cu) {
        ctx->pc = 0x24C3A0u;
        goto label_24c3a0;
    }
    ctx->pc = 0x24C398u;
    {
        const bool branch_taken_0x24c398 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c398) {
            ctx->pc = 0x24C3A4u;
            goto label_24c3a4;
        }
    }
    ctx->pc = 0x24C3A0u;
label_24c3a0:
    // 0x24c3a0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x24c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_24c3a4:
    // 0x24c3a4: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24c3a8:
    // 0x24c3a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c3ac:
    // 0x24c3ac: 0xa4720014  sh          $s2, 0x14($v1)
    ctx->pc = 0x24c3acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 18));
label_24c3b0:
    // 0x24c3b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24c3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24c3b4:
    // 0x24c3b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24c3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c3b8:
    // 0x24c3b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24c3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c3bc:
    // 0x24c3bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24c3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24c3c0:
    // 0x24c3c0: 0x3e00008  jr          $ra
label_24c3c4:
    if (ctx->pc == 0x24C3C4u) {
        ctx->pc = 0x24C3C4u;
            // 0x24c3c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x24C3C8u;
        goto label_fallthrough_0x24c3c0;
    }
    ctx->pc = 0x24C3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3C0u;
            // 0x24c3c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24c3c0:
    ctx->pc = 0x24C3C8u;
}
