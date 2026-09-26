#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NeedMesWinWH__6ClsMesFPc
// Address: 0x1579e0 - 0x1589fc
void NeedMesWinWH__6ClsMesFPc_0x1579e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NeedMesWinWH__6ClsMesFPc_0x1579e0");
#endif

    switch (ctx->pc) {
        case 0x157a14u: goto label_157a14;
        case 0x157a2cu: goto label_157a2c;
        case 0x157a40u: goto label_157a40;
        case 0x157a58u: goto label_157a58;
        case 0x157a68u: goto label_157a68;
        case 0x157a9cu: goto label_157a9c;
        case 0x157ac8u: goto label_157ac8;
        case 0x157af4u: goto label_157af4;
        case 0x157b1cu: goto label_157b1c;
        case 0x157b44u: goto label_157b44;
        case 0x157b6cu: goto label_157b6c;
        case 0x157b94u: goto label_157b94;
        case 0x157bbcu: goto label_157bbc;
        case 0x157be4u: goto label_157be4;
        case 0x157c0cu: goto label_157c0c;
        case 0x157c34u: goto label_157c34;
        case 0x157c98u: goto label_157c98;
        case 0x157cbcu: goto label_157cbc;
        case 0x157cc8u: goto label_157cc8;
        case 0x157cfcu: goto label_157cfc;
        case 0x157d1cu: goto label_157d1c;
        case 0x157d40u: goto label_157d40;
        case 0x157d6cu: goto label_157d6c;
        case 0x157d94u: goto label_157d94;
        case 0x157dbcu: goto label_157dbc;
        case 0x157de4u: goto label_157de4;
        case 0x157e0cu: goto label_157e0c;
        case 0x157e34u: goto label_157e34;
        case 0x157e5cu: goto label_157e5c;
        case 0x157e84u: goto label_157e84;
        case 0x157eacu: goto label_157eac;
        case 0x157ed4u: goto label_157ed4;
        case 0x157f38u: goto label_157f38;
        case 0x157f5cu: goto label_157f5c;
        case 0x157f68u: goto label_157f68;
        case 0x157f9cu: goto label_157f9c;
        case 0x157fbcu: goto label_157fbc;
        case 0x157fe0u: goto label_157fe0;
        case 0x15800cu: goto label_15800c;
        case 0x158034u: goto label_158034;
        case 0x15805cu: goto label_15805c;
        case 0x158084u: goto label_158084;
        case 0x1580acu: goto label_1580ac;
        case 0x1580d4u: goto label_1580d4;
        case 0x1580fcu: goto label_1580fc;
        case 0x158124u: goto label_158124;
        case 0x15814cu: goto label_15814c;
        case 0x158174u: goto label_158174;
        case 0x15819cu: goto label_15819c;
        case 0x1581c4u: goto label_1581c4;
        case 0x1581ecu: goto label_1581ec;
        case 0x158214u: goto label_158214;
        case 0x15823cu: goto label_15823c;
        case 0x158264u: goto label_158264;
        case 0x15828cu: goto label_15828c;
        case 0x1582d0u: goto label_1582d0;
        case 0x1582e8u: goto label_1582e8;
        case 0x158308u: goto label_158308;
        case 0x158330u: goto label_158330;
        case 0x158358u: goto label_158358;
        case 0x158380u: goto label_158380;
        case 0x1583a8u: goto label_1583a8;
        case 0x1583d0u: goto label_1583d0;
        case 0x1583f8u: goto label_1583f8;
        case 0x158420u: goto label_158420;
        case 0x158448u: goto label_158448;
        case 0x158470u: goto label_158470;
        case 0x158498u: goto label_158498;
        case 0x1584c0u: goto label_1584c0;
        case 0x1584e8u: goto label_1584e8;
        case 0x158510u: goto label_158510;
        case 0x158538u: goto label_158538;
        case 0x158560u: goto label_158560;
        case 0x158588u: goto label_158588;
        case 0x1585b4u: goto label_1585b4;
        case 0x1585c4u: goto label_1585c4;
        case 0x1585e4u: goto label_1585e4;
        case 0x1585fcu: goto label_1585fc;
        case 0x158610u: goto label_158610;
        case 0x15861cu: goto label_15861c;
        case 0x15864cu: goto label_15864c;
        case 0x158684u: goto label_158684;
        case 0x158698u: goto label_158698;
        case 0x1586acu: goto label_1586ac;
        case 0x1586ccu: goto label_1586cc;
        case 0x1586dcu: goto label_1586dc;
        case 0x1586ecu: goto label_1586ec;
        case 0x158714u: goto label_158714;
        case 0x158734u: goto label_158734;
        case 0x158744u: goto label_158744;
        case 0x158758u: goto label_158758;
        case 0x15876cu: goto label_15876c;
        case 0x158784u: goto label_158784;
        case 0x158798u: goto label_158798;
        case 0x1587a4u: goto label_1587a4;
        case 0x1587bcu: goto label_1587bc;
        case 0x1587d8u: goto label_1587d8;
        case 0x1587f0u: goto label_1587f0;
        case 0x158818u: goto label_158818;
        case 0x158834u: goto label_158834;
        case 0x158870u: goto label_158870;
        case 0x158990u: goto label_158990;
        default: break;
    }

    ctx->pc = 0x1579e0u;

    // 0x1579e0: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x1579e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x1579e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1579e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1579e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1579e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1579ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1579ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1579f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1579f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1579f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1579f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1579f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1579f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1579fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1579fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a0c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x157A0Cu;
    SET_GPR_U32(ctx, 31, 0x157A14u);
    ctx->pc = 0x157A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A0Cu;
            // 0x157a10: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A14u; }
        if (ctx->pc != 0x157A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A14u; }
        if (ctx->pc != 0x157A14u) { return; }
    }
    ctx->pc = 0x157A14u;
label_157a14:
    // 0x157a14: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x157a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x157a18: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x157a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x157a1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x157a1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x157a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a24: 0xc04a422  jal         func_129088
    ctx->pc = 0x157A24u;
    SET_GPR_U32(ctx, 31, 0x157A2Cu);
    ctx->pc = 0x157A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A24u;
            // 0x157a28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A2Cu; }
        if (ctx->pc != 0x157A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A2Cu; }
        if (ctx->pc != 0x157A2Cu) { return; }
    }
    ctx->pc = 0x157A2Cu;
label_157a2c:
    // 0x157a2c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x157a2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a30: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x157a30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x157a34: 0x10200373  beqz        $at, . + 4 + (0x373 << 2)
    ctx->pc = 0x157A34u;
    {
        const bool branch_taken_0x157a34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A34u;
            // 0x157a38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a34) {
            ctx->pc = 0x158804u;
            goto label_158804;
        }
    }
    ctx->pc = 0x157A3Cu;
    // 0x157a3c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x157a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_157a40:
    // 0x157a40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157a44: 0x24540090  addiu       $s4, $v0, 0x90
    ctx->pc = 0x157a44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x157a48: 0x24a529c8  addiu       $a1, $a1, 0x29C8
    ctx->pc = 0x157a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10696));
    // 0x157a4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x157a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157a50: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157A50u;
    SET_GPR_U32(ctx, 31, 0x157A58u);
    ctx->pc = 0x157A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A50u;
            // 0x157a54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A58u; }
        if (ctx->pc != 0x157A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A58u; }
        if (ctx->pc != 0x157A58u) { return; }
    }
    ctx->pc = 0x157A58u;
label_157a58:
    // 0x157a58: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157A58u;
    {
        const bool branch_taken_0x157a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157a58) {
            ctx->pc = 0x157A88u;
            goto label_157a88;
        }
    }
    ctx->pc = 0x157A60u;
    // 0x157a60: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157a64: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x157a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_157a68:
    // 0x157a68: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x157a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x157a6c: 0x80630090  lb          $v1, 0x90($v1)
    ctx->pc = 0x157a6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x157a70: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157A70u;
    {
        const bool branch_taken_0x157a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x157a70) {
            ctx->pc = 0x157A80u;
            goto label_157a80;
        }
    }
    ctx->pc = 0x157A78u;
    // 0x157a78: 0x1000035e  b           . + 4 + (0x35E << 2)
    ctx->pc = 0x157A78u;
    {
        const bool branch_taken_0x157a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A78u;
            // 0x157a7c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a78) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x157A80u;
label_157a80:
    // 0x157a80: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x157A80u;
    {
        const bool branch_taken_0x157a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A80u;
            // 0x157a84: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a80) {
            ctx->pc = 0x157A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157a68;
        }
    }
    ctx->pc = 0x157A88u;
label_157a88:
    // 0x157a88: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157a8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x157a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a90: 0x24a529d0  addiu       $a1, $a1, 0x29D0
    ctx->pc = 0x157a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10704));
    // 0x157a94: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157A94u;
    SET_GPR_U32(ctx, 31, 0x157A9Cu);
    ctx->pc = 0x157A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A94u;
            // 0x157a98: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A9Cu; }
        if (ctx->pc != 0x157A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A9Cu; }
        if (ctx->pc != 0x157A9Cu) { return; }
    }
    ctx->pc = 0x157A9Cu;
label_157a9c:
    // 0x157a9c: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x157A9Cu;
    {
        const bool branch_taken_0x157a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157a9c) {
            ctx->pc = 0x157D24u;
            goto label_157d24;
        }
    }
    ctx->pc = 0x157AA4u;
    // 0x157aa4: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x157aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x157aa8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157aac: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x157ab0: 0x24a529d8  addiu       $a1, $a1, 0x29D8
    ctx->pc = 0x157ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10712));
    // 0x157ab4: 0x24550090  addiu       $s5, $v0, 0x90
    ctx->pc = 0x157ab4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x157ab8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x157ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157abc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ac0: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157AC0u;
    SET_GPR_U32(ctx, 31, 0x157AC8u);
    ctx->pc = 0x157AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157AC0u;
            // 0x157ac4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157AC8u; }
        if (ctx->pc != 0x157AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157AC8u; }
        if (ctx->pc != 0x157AC8u) { return; }
    }
    ctx->pc = 0x157AC8u;
label_157ac8:
    // 0x157ac8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157AC8u;
    {
        const bool branch_taken_0x157ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157ac8) {
            ctx->pc = 0x157ADCu;
            goto label_157adc;
        }
    }
    ctx->pc = 0x157AD0u;
    // 0x157ad0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157ad4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x157AD4u;
    {
        const bool branch_taken_0x157ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AD4u;
            // 0x157ad8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ad4) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157ADCu;
label_157adc:
    // 0x157adc: 0x0  nop
    ctx->pc = 0x157adcu;
    // NOP
    // 0x157ae0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157ae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ae8: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x157ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x157aec: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157AECu;
    SET_GPR_U32(ctx, 31, 0x157AF4u);
    ctx->pc = 0x157AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157AECu;
            // 0x157af0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157AF4u; }
        if (ctx->pc != 0x157AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157AF4u; }
        if (ctx->pc != 0x157AF4u) { return; }
    }
    ctx->pc = 0x157AF4u;
label_157af4:
    // 0x157af4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157AF4u;
    {
        const bool branch_taken_0x157af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157af4) {
            ctx->pc = 0x157B08u;
            goto label_157b08;
        }
    }
    ctx->pc = 0x157AFCu;
    // 0x157afc: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157b00: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x157B00u;
    {
        const bool branch_taken_0x157b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B00u;
            // 0x157b04: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b00) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157B08u;
label_157b08:
    // 0x157b08: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157b0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b10: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x157b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
    // 0x157b14: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157B14u;
    SET_GPR_U32(ctx, 31, 0x157B1Cu);
    ctx->pc = 0x157B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157B14u;
            // 0x157b18: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B1Cu; }
        if (ctx->pc != 0x157B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B1Cu; }
        if (ctx->pc != 0x157B1Cu) { return; }
    }
    ctx->pc = 0x157B1Cu;
label_157b1c:
    // 0x157b1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157B1Cu;
    {
        const bool branch_taken_0x157b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b1c) {
            ctx->pc = 0x157B30u;
            goto label_157b30;
        }
    }
    ctx->pc = 0x157B24u;
    // 0x157b24: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157b28: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x157B28u;
    {
        const bool branch_taken_0x157b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B28u;
            // 0x157b2c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b28) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157B30u;
label_157b30:
    // 0x157b30: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157b34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b38: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x157b3c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157B3Cu;
    SET_GPR_U32(ctx, 31, 0x157B44u);
    ctx->pc = 0x157B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157B3Cu;
            // 0x157b40: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B44u; }
        if (ctx->pc != 0x157B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B44u; }
        if (ctx->pc != 0x157B44u) { return; }
    }
    ctx->pc = 0x157B44u;
label_157b44:
    // 0x157b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157B44u;
    {
        const bool branch_taken_0x157b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b44) {
            ctx->pc = 0x157B58u;
            goto label_157b58;
        }
    }
    ctx->pc = 0x157B4Cu;
    // 0x157b4c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157b50: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x157B50u;
    {
        const bool branch_taken_0x157b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B50u;
            // 0x157b54: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b50) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157B58u;
label_157b58:
    // 0x157b58: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157b5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b60: 0x24a529f8  addiu       $a1, $a1, 0x29F8
    ctx->pc = 0x157b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    // 0x157b64: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157B64u;
    SET_GPR_U32(ctx, 31, 0x157B6Cu);
    ctx->pc = 0x157B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157B64u;
            // 0x157b68: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B6Cu; }
        if (ctx->pc != 0x157B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B6Cu; }
        if (ctx->pc != 0x157B6Cu) { return; }
    }
    ctx->pc = 0x157B6Cu;
label_157b6c:
    // 0x157b6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157B6Cu;
    {
        const bool branch_taken_0x157b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b6c) {
            ctx->pc = 0x157B80u;
            goto label_157b80;
        }
    }
    ctx->pc = 0x157B74u;
    // 0x157b74: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157b78: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x157B78u;
    {
        const bool branch_taken_0x157b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B78u;
            // 0x157b7c: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b78) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157B80u;
label_157b80:
    // 0x157b80: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157b84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b88: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x157b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x157b8c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157B8Cu;
    SET_GPR_U32(ctx, 31, 0x157B94u);
    ctx->pc = 0x157B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157B8Cu;
            // 0x157b90: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B94u; }
        if (ctx->pc != 0x157B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B94u; }
        if (ctx->pc != 0x157B94u) { return; }
    }
    ctx->pc = 0x157B94u;
label_157b94:
    // 0x157b94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157B94u;
    {
        const bool branch_taken_0x157b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b94) {
            ctx->pc = 0x157BA8u;
            goto label_157ba8;
        }
    }
    ctx->pc = 0x157B9Cu;
    // 0x157b9c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157ba0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x157BA0u;
    {
        const bool branch_taken_0x157ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BA0u;
            // 0x157ba4: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ba0) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157BA8u;
label_157ba8:
    // 0x157ba8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157bac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157bb0: 0x24a52a08  addiu       $a1, $a1, 0x2A08
    ctx->pc = 0x157bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10760));
    // 0x157bb4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157BB4u;
    SET_GPR_U32(ctx, 31, 0x157BBCu);
    ctx->pc = 0x157BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157BB4u;
            // 0x157bb8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BBCu; }
        if (ctx->pc != 0x157BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BBCu; }
        if (ctx->pc != 0x157BBCu) { return; }
    }
    ctx->pc = 0x157BBCu;
label_157bbc:
    // 0x157bbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157BBCu;
    {
        const bool branch_taken_0x157bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157bbc) {
            ctx->pc = 0x157BD0u;
            goto label_157bd0;
        }
    }
    ctx->pc = 0x157BC4u;
    // 0x157bc4: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157bc8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x157BC8u;
    {
        const bool branch_taken_0x157bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BC8u;
            // 0x157bcc: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bc8) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157BD0u;
label_157bd0:
    // 0x157bd0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157bd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157bd8: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x157bdc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157BDCu;
    SET_GPR_U32(ctx, 31, 0x157BE4u);
    ctx->pc = 0x157BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157BDCu;
            // 0x157be0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BE4u; }
        if (ctx->pc != 0x157BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BE4u; }
        if (ctx->pc != 0x157BE4u) { return; }
    }
    ctx->pc = 0x157BE4u;
label_157be4:
    // 0x157be4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157BE4u;
    {
        const bool branch_taken_0x157be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157be4) {
            ctx->pc = 0x157BF8u;
            goto label_157bf8;
        }
    }
    ctx->pc = 0x157BECu;
    // 0x157bec: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157bf0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x157BF0u;
    {
        const bool branch_taken_0x157bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BF0u;
            // 0x157bf4: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bf0) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157BF8u;
label_157bf8:
    // 0x157bf8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157bfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c00: 0x24a52a18  addiu       $a1, $a1, 0x2A18
    ctx->pc = 0x157c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10776));
    // 0x157c04: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157C04u;
    SET_GPR_U32(ctx, 31, 0x157C0Cu);
    ctx->pc = 0x157C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C04u;
            // 0x157c08: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C0Cu; }
        if (ctx->pc != 0x157C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C0Cu; }
        if (ctx->pc != 0x157C0Cu) { return; }
    }
    ctx->pc = 0x157C0Cu;
label_157c0c:
    // 0x157c0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157C0Cu;
    {
        const bool branch_taken_0x157c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c0c) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157C14u;
    // 0x157c14: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157c18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x157C18u;
    {
        const bool branch_taken_0x157c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C18u;
            // 0x157c1c: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c18) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157C20u;
label_157c20:
    // 0x157c20: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157c24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c28: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x157c2c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157C2Cu;
    SET_GPR_U32(ctx, 31, 0x157C34u);
    ctx->pc = 0x157C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C2Cu;
            // 0x157c30: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C34u; }
        if (ctx->pc != 0x157C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C34u; }
        if (ctx->pc != 0x157C34u) { return; }
    }
    ctx->pc = 0x157C34u;
label_157c34:
    // 0x157c34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157C34u;
    {
        const bool branch_taken_0x157c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c34) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157C3Cu;
    // 0x157c3c: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x157c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x157c40: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x157c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_157c44:
    // 0x157c44: 0x0  nop
    ctx->pc = 0x157c44u;
    // NOP
    // 0x157c48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157c4c: 0x12820035  beq         $s4, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x157C4Cu;
    {
        const bool branch_taken_0x157c4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x157c4c) {
            ctx->pc = 0x157D24u;
            goto label_157d24;
        }
    }
    ctx->pc = 0x157C54u;
    // 0x157c54: 0x8e021acc  lw          $v0, 0x1ACC($s0)
    ctx->pc = 0x157c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6860)));
    // 0x157c58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157C58u;
    {
        const bool branch_taken_0x157c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C58u;
            // 0x157c5c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c58) {
            ctx->pc = 0x157C70u;
            goto label_157c70;
        }
    }
    ctx->pc = 0x157C60u;
    // 0x157c60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157c64: 0x8c421a44  lw          $v0, 0x1A44($v0)
    ctx->pc = 0x157c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157c68: 0x104002e2  beqz        $v0, . + 4 + (0x2E2 << 2)
    ctx->pc = 0x157C68u;
    {
        const bool branch_taken_0x157c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c68) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x157C70u;
label_157c70:
    // 0x157c70: 0x8e021ac8  lw          $v0, 0x1AC8($s0)
    ctx->pc = 0x157c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6856)));
    // 0x157c74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x157C74u;
    {
        const bool branch_taken_0x157c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C74u;
            // 0x157c78: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c74) {
            ctx->pc = 0x157CA0u;
            goto label_157ca0;
        }
    }
    ctx->pc = 0x157C7Cu;
    // 0x157c7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157c80: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x157c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157c84: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x157C84u;
    {
        const bool branch_taken_0x157c84 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x157C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C84u;
            // 0x157c88: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c84) {
            ctx->pc = 0x157CA0u;
            goto label_157ca0;
        }
    }
    ctx->pc = 0x157C8Cu;
    // 0x157c8c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x157c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x157c90: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x157C90u;
    SET_GPR_U32(ctx, 31, 0x157C98u);
    ctx->pc = 0x157C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C90u;
            // 0x157c94: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C98u; }
        if (ctx->pc != 0x157C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C98u; }
        if (ctx->pc != 0x157C98u) { return; }
    }
    ctx->pc = 0x157C98u;
label_157c98:
    // 0x157c98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157C98u;
    {
        const bool branch_taken_0x157c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c98) {
            ctx->pc = 0x157CBCu;
            goto label_157cbc;
        }
    }
    ctx->pc = 0x157CA0u;
label_157ca0:
    // 0x157ca0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x157ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x157ca4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157ca8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157cac: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x157cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157cb0: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x157cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x157cb4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x157CB4u;
    SET_GPR_U32(ctx, 31, 0x157CBCu);
    ctx->pc = 0x157CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157CB4u;
            // 0x157cb8: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157CBCu; }
        if (ctx->pc != 0x157CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157CBCu; }
        if (ctx->pc != 0x157CBCu) { return; }
    }
    ctx->pc = 0x157CBCu;
label_157cbc:
    // 0x157cbc: 0x0  nop
    ctx->pc = 0x157cbcu;
    // NOP
    // 0x157cc0: 0xc04a422  jal         func_129088
    ctx->pc = 0x157CC0u;
    SET_GPR_U32(ctx, 31, 0x157CC8u);
    ctx->pc = 0x157CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157CC0u;
            // 0x157cc4: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157CC8u; }
        if (ctx->pc != 0x157CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157CC8u; }
        if (ctx->pc != 0x157CC8u) { return; }
    }
    ctx->pc = 0x157CC8u;
label_157cc8:
    // 0x157cc8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x157cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x157ccc: 0x8e021ad0  lw          $v0, 0x1AD0($s0)
    ctx->pc = 0x157cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6864)));
    // 0x157cd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x157CD0u;
    {
        const bool branch_taken_0x157cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157cd0) {
            ctx->pc = 0x157D04u;
            goto label_157d04;
        }
    }
    ctx->pc = 0x157CD8u;
    // 0x157cd8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x157cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x157cdc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x157cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x157ce0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157CE0u;
    {
        const bool branch_taken_0x157ce0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x157CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157CE0u;
            // 0x157ce4: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ce0) {
            ctx->pc = 0x157CF0u;
            goto label_157cf0;
        }
    }
    ctx->pc = 0x157CE8u;
    // 0x157ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157cec: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x157cecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_157cf0:
    // 0x157cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157cf4: 0xc055b80  jal         func_156E00
    ctx->pc = 0x157CF4u;
    SET_GPR_U32(ctx, 31, 0x157CFCu);
    ctx->pc = 0x157CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157CF4u;
            // 0x157cf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157CFCu; }
        if (ctx->pc != 0x157CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157CFCu; }
        if (ctx->pc != 0x157CFCu) { return; }
    }
    ctx->pc = 0x157CFCu;
label_157cfc:
    // 0x157cfc: 0x100002bd  b           . + 4 + (0x2BD << 2)
    ctx->pc = 0x157CFCu;
    {
        const bool branch_taken_0x157cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157cfc) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x157D04u;
label_157d04:
    // 0x157d04: 0x0  nop
    ctx->pc = 0x157d04u;
    // NOP
    // 0x157d08: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x157d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x157d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d14: 0xc055b80  jal         func_156E00
    ctx->pc = 0x157D14u;
    SET_GPR_U32(ctx, 31, 0x157D1Cu);
    ctx->pc = 0x157D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D14u;
            // 0x157d18: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D1Cu; }
        if (ctx->pc != 0x157D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D1Cu; }
        if (ctx->pc != 0x157D1Cu) { return; }
    }
    ctx->pc = 0x157D1Cu;
label_157d1c:
    // 0x157d1c: 0x100002b5  b           . + 4 + (0x2B5 << 2)
    ctx->pc = 0x157D1Cu;
    {
        const bool branch_taken_0x157d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d1c) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x157D24u;
label_157d24:
    // 0x157d24: 0x0  nop
    ctx->pc = 0x157d24u;
    // NOP
    // 0x157d28: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x157d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x157d2c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157d30: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x157d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x157d34: 0x24a52a28  addiu       $a1, $a1, 0x2A28
    ctx->pc = 0x157d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10792));
    // 0x157d38: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157D38u;
    SET_GPR_U32(ctx, 31, 0x157D40u);
    ctx->pc = 0x157D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D38u;
            // 0x157d3c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D40u; }
        if (ctx->pc != 0x157D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D40u; }
        if (ctx->pc != 0x157D40u) { return; }
    }
    ctx->pc = 0x157D40u;
label_157d40:
    // 0x157d40: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x157D40u;
    {
        const bool branch_taken_0x157d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157d40) {
            ctx->pc = 0x157FC4u;
            goto label_157fc4;
        }
    }
    ctx->pc = 0x157D48u;
    // 0x157d48: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x157d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x157d4c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157d50: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x157d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x157d54: 0x24a52a30  addiu       $a1, $a1, 0x2A30
    ctx->pc = 0x157d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10800));
    // 0x157d58: 0x24550090  addiu       $s5, $v0, 0x90
    ctx->pc = 0x157d58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x157d5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x157d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157d60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d64: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157D64u;
    SET_GPR_U32(ctx, 31, 0x157D6Cu);
    ctx->pc = 0x157D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D64u;
            // 0x157d68: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D6Cu; }
        if (ctx->pc != 0x157D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D6Cu; }
        if (ctx->pc != 0x157D6Cu) { return; }
    }
    ctx->pc = 0x157D6Cu;
label_157d6c:
    // 0x157d6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157D6Cu;
    {
        const bool branch_taken_0x157d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157d6c) {
            ctx->pc = 0x157D80u;
            goto label_157d80;
        }
    }
    ctx->pc = 0x157D74u;
    // 0x157d74: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157d74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157d78: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x157D78u;
    {
        const bool branch_taken_0x157d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D78u;
            // 0x157d7c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d78) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157D80u;
label_157d80:
    // 0x157d80: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157d84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d88: 0x24a52a38  addiu       $a1, $a1, 0x2A38
    ctx->pc = 0x157d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10808));
    // 0x157d8c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157D8Cu;
    SET_GPR_U32(ctx, 31, 0x157D94u);
    ctx->pc = 0x157D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D8Cu;
            // 0x157d90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D94u; }
        if (ctx->pc != 0x157D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D94u; }
        if (ctx->pc != 0x157D94u) { return; }
    }
    ctx->pc = 0x157D94u;
label_157d94:
    // 0x157d94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157D94u;
    {
        const bool branch_taken_0x157d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157d94) {
            ctx->pc = 0x157DA8u;
            goto label_157da8;
        }
    }
    ctx->pc = 0x157D9Cu;
    // 0x157d9c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157da0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x157DA0u;
    {
        const bool branch_taken_0x157da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157DA0u;
            // 0x157da4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157da0) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157DA8u;
label_157da8:
    // 0x157da8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157dac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157db0: 0x24a52a40  addiu       $a1, $a1, 0x2A40
    ctx->pc = 0x157db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
    // 0x157db4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157DB4u;
    SET_GPR_U32(ctx, 31, 0x157DBCu);
    ctx->pc = 0x157DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157DB4u;
            // 0x157db8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DBCu; }
        if (ctx->pc != 0x157DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DBCu; }
        if (ctx->pc != 0x157DBCu) { return; }
    }
    ctx->pc = 0x157DBCu;
label_157dbc:
    // 0x157dbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157DBCu;
    {
        const bool branch_taken_0x157dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157dbc) {
            ctx->pc = 0x157DD0u;
            goto label_157dd0;
        }
    }
    ctx->pc = 0x157DC4u;
    // 0x157dc4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157dc8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x157DC8u;
    {
        const bool branch_taken_0x157dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157DC8u;
            // 0x157dcc: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157dc8) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157DD0u;
label_157dd0:
    // 0x157dd0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157dd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157dd8: 0x24a52a48  addiu       $a1, $a1, 0x2A48
    ctx->pc = 0x157dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10824));
    // 0x157ddc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157DDCu;
    SET_GPR_U32(ctx, 31, 0x157DE4u);
    ctx->pc = 0x157DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157DDCu;
            // 0x157de0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DE4u; }
        if (ctx->pc != 0x157DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DE4u; }
        if (ctx->pc != 0x157DE4u) { return; }
    }
    ctx->pc = 0x157DE4u;
label_157de4:
    // 0x157de4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157DE4u;
    {
        const bool branch_taken_0x157de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157de4) {
            ctx->pc = 0x157DF8u;
            goto label_157df8;
        }
    }
    ctx->pc = 0x157DECu;
    // 0x157dec: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157df0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x157DF0u;
    {
        const bool branch_taken_0x157df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157DF0u;
            // 0x157df4: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157df0) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157DF8u;
label_157df8:
    // 0x157df8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157dfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e00: 0x24a52a50  addiu       $a1, $a1, 0x2A50
    ctx->pc = 0x157e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10832));
    // 0x157e04: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157E04u;
    SET_GPR_U32(ctx, 31, 0x157E0Cu);
    ctx->pc = 0x157E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157E04u;
            // 0x157e08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E0Cu; }
        if (ctx->pc != 0x157E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E0Cu; }
        if (ctx->pc != 0x157E0Cu) { return; }
    }
    ctx->pc = 0x157E0Cu;
label_157e0c:
    // 0x157e0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157E0Cu;
    {
        const bool branch_taken_0x157e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157e0c) {
            ctx->pc = 0x157E20u;
            goto label_157e20;
        }
    }
    ctx->pc = 0x157E14u;
    // 0x157e14: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157e18: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x157E18u;
    {
        const bool branch_taken_0x157e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E18u;
            // 0x157e1c: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e18) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157E20u;
label_157e20:
    // 0x157e20: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157e24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e28: 0x24a52a58  addiu       $a1, $a1, 0x2A58
    ctx->pc = 0x157e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10840));
    // 0x157e2c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157E2Cu;
    SET_GPR_U32(ctx, 31, 0x157E34u);
    ctx->pc = 0x157E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157E2Cu;
            // 0x157e30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E34u; }
        if (ctx->pc != 0x157E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E34u; }
        if (ctx->pc != 0x157E34u) { return; }
    }
    ctx->pc = 0x157E34u;
label_157e34:
    // 0x157e34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157E34u;
    {
        const bool branch_taken_0x157e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157e34) {
            ctx->pc = 0x157E48u;
            goto label_157e48;
        }
    }
    ctx->pc = 0x157E3Cu;
    // 0x157e3c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157e40: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x157E40u;
    {
        const bool branch_taken_0x157e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E40u;
            // 0x157e44: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e40) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157E48u;
label_157e48:
    // 0x157e48: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157e4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e50: 0x24a52a60  addiu       $a1, $a1, 0x2A60
    ctx->pc = 0x157e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10848));
    // 0x157e54: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157E54u;
    SET_GPR_U32(ctx, 31, 0x157E5Cu);
    ctx->pc = 0x157E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157E54u;
            // 0x157e58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E5Cu; }
        if (ctx->pc != 0x157E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E5Cu; }
        if (ctx->pc != 0x157E5Cu) { return; }
    }
    ctx->pc = 0x157E5Cu;
label_157e5c:
    // 0x157e5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157E5Cu;
    {
        const bool branch_taken_0x157e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157e5c) {
            ctx->pc = 0x157E70u;
            goto label_157e70;
        }
    }
    ctx->pc = 0x157E64u;
    // 0x157e64: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157e68: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x157E68u;
    {
        const bool branch_taken_0x157e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E68u;
            // 0x157e6c: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e68) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157E70u;
label_157e70:
    // 0x157e70: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157e74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e78: 0x24a52a68  addiu       $a1, $a1, 0x2A68
    ctx->pc = 0x157e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10856));
    // 0x157e7c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157E7Cu;
    SET_GPR_U32(ctx, 31, 0x157E84u);
    ctx->pc = 0x157E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157E7Cu;
            // 0x157e80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E84u; }
        if (ctx->pc != 0x157E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E84u; }
        if (ctx->pc != 0x157E84u) { return; }
    }
    ctx->pc = 0x157E84u;
label_157e84:
    // 0x157e84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157E84u;
    {
        const bool branch_taken_0x157e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157e84) {
            ctx->pc = 0x157E98u;
            goto label_157e98;
        }
    }
    ctx->pc = 0x157E8Cu;
    // 0x157e8c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157e90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x157E90u;
    {
        const bool branch_taken_0x157e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E90u;
            // 0x157e94: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e90) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157E98u;
label_157e98:
    // 0x157e98: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157e9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ea0: 0x24a52a70  addiu       $a1, $a1, 0x2A70
    ctx->pc = 0x157ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10864));
    // 0x157ea4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157EA4u;
    SET_GPR_U32(ctx, 31, 0x157EACu);
    ctx->pc = 0x157EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157EA4u;
            // 0x157ea8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157EACu; }
        if (ctx->pc != 0x157EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157EACu; }
        if (ctx->pc != 0x157EACu) { return; }
    }
    ctx->pc = 0x157EACu;
label_157eac:
    // 0x157eac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157EACu;
    {
        const bool branch_taken_0x157eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157eac) {
            ctx->pc = 0x157EC0u;
            goto label_157ec0;
        }
    }
    ctx->pc = 0x157EB4u;
    // 0x157eb4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x157eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x157eb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x157EB8u;
    {
        const bool branch_taken_0x157eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EB8u;
            // 0x157ebc: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eb8) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157EC0u;
label_157ec0:
    // 0x157ec0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157ec4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ec8: 0x24a52a78  addiu       $a1, $a1, 0x2A78
    ctx->pc = 0x157ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10872));
    // 0x157ecc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157ECCu;
    SET_GPR_U32(ctx, 31, 0x157ED4u);
    ctx->pc = 0x157ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157ECCu;
            // 0x157ed0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157ED4u; }
        if (ctx->pc != 0x157ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157ED4u; }
        if (ctx->pc != 0x157ED4u) { return; }
    }
    ctx->pc = 0x157ED4u;
label_157ed4:
    // 0x157ed4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157ED4u;
    {
        const bool branch_taken_0x157ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157ed4) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157EDCu;
    // 0x157edc: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x157edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x157ee0: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_157ee4:
    // 0x157ee4: 0x0  nop
    ctx->pc = 0x157ee4u;
    // NOP
    // 0x157ee8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157eec: 0x12820035  beq         $s4, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x157EECu;
    {
        const bool branch_taken_0x157eec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x157eec) {
            ctx->pc = 0x157FC4u;
            goto label_157fc4;
        }
    }
    ctx->pc = 0x157EF4u;
    // 0x157ef4: 0x8e021acc  lw          $v0, 0x1ACC($s0)
    ctx->pc = 0x157ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6860)));
    // 0x157ef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157EF8u;
    {
        const bool branch_taken_0x157ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EF8u;
            // 0x157efc: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ef8) {
            ctx->pc = 0x157F10u;
            goto label_157f10;
        }
    }
    ctx->pc = 0x157F00u;
    // 0x157f00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157f04: 0x8c421a44  lw          $v0, 0x1A44($v0)
    ctx->pc = 0x157f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157f08: 0x1040023a  beqz        $v0, . + 4 + (0x23A << 2)
    ctx->pc = 0x157F08u;
    {
        const bool branch_taken_0x157f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f08) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x157F10u;
label_157f10:
    // 0x157f10: 0x8e021ac8  lw          $v0, 0x1AC8($s0)
    ctx->pc = 0x157f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6856)));
    // 0x157f14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x157F14u;
    {
        const bool branch_taken_0x157f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F14u;
            // 0x157f18: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f14) {
            ctx->pc = 0x157F40u;
            goto label_157f40;
        }
    }
    ctx->pc = 0x157F1Cu;
    // 0x157f1c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157f20: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157f24: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x157F24u;
    {
        const bool branch_taken_0x157f24 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x157F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F24u;
            // 0x157f28: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f24) {
            ctx->pc = 0x157F40u;
            goto label_157f40;
        }
    }
    ctx->pc = 0x157F2Cu;
    // 0x157f2c: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x157f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x157f30: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x157F30u;
    SET_GPR_U32(ctx, 31, 0x157F38u);
    ctx->pc = 0x157F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F30u;
            // 0x157f34: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F38u; }
        if (ctx->pc != 0x157F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F38u; }
        if (ctx->pc != 0x157F38u) { return; }
    }
    ctx->pc = 0x157F38u;
label_157f38:
    // 0x157f38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157F38u;
    {
        const bool branch_taken_0x157f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f38) {
            ctx->pc = 0x157F5Cu;
            goto label_157f5c;
        }
    }
    ctx->pc = 0x157F40u;
label_157f40:
    // 0x157f40: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x157f44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157f48: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157f4c: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x157f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x157f50: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x157f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x157f54: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x157F54u;
    SET_GPR_U32(ctx, 31, 0x157F5Cu);
    ctx->pc = 0x157F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F54u;
            // 0x157f58: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F5Cu; }
        if (ctx->pc != 0x157F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F5Cu; }
        if (ctx->pc != 0x157F5Cu) { return; }
    }
    ctx->pc = 0x157F5Cu;
label_157f5c:
    // 0x157f5c: 0x0  nop
    ctx->pc = 0x157f5cu;
    // NOP
    // 0x157f60: 0xc04a422  jal         func_129088
    ctx->pc = 0x157F60u;
    SET_GPR_U32(ctx, 31, 0x157F68u);
    ctx->pc = 0x157F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F60u;
            // 0x157f64: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F68u; }
        if (ctx->pc != 0x157F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F68u; }
        if (ctx->pc != 0x157F68u) { return; }
    }
    ctx->pc = 0x157F68u;
label_157f68:
    // 0x157f68: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x157f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x157f6c: 0x8e021ad0  lw          $v0, 0x1AD0($s0)
    ctx->pc = 0x157f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6864)));
    // 0x157f70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x157F70u;
    {
        const bool branch_taken_0x157f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f70) {
            ctx->pc = 0x157FA4u;
            goto label_157fa4;
        }
    }
    ctx->pc = 0x157F78u;
    // 0x157f78: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x157f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x157f7c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x157f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x157f80: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157F80u;
    {
        const bool branch_taken_0x157f80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x157F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F80u;
            // 0x157f84: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f80) {
            ctx->pc = 0x157F90u;
            goto label_157f90;
        }
    }
    ctx->pc = 0x157F88u;
    // 0x157f88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157f8c: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_157f90:
    // 0x157f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f94: 0xc055b80  jal         func_156E00
    ctx->pc = 0x157F94u;
    SET_GPR_U32(ctx, 31, 0x157F9Cu);
    ctx->pc = 0x157F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F94u;
            // 0x157f98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F9Cu; }
        if (ctx->pc != 0x157F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F9Cu; }
        if (ctx->pc != 0x157F9Cu) { return; }
    }
    ctx->pc = 0x157F9Cu;
label_157f9c:
    // 0x157f9c: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x157F9Cu;
    {
        const bool branch_taken_0x157f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f9c) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x157FA4u;
label_157fa4:
    // 0x157fa4: 0x0  nop
    ctx->pc = 0x157fa4u;
    // NOP
    // 0x157fa8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x157fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x157fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fb4: 0xc055b80  jal         func_156E00
    ctx->pc = 0x157FB4u;
    SET_GPR_U32(ctx, 31, 0x157FBCu);
    ctx->pc = 0x157FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157FB4u;
            // 0x157fb8: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FBCu; }
        if (ctx->pc != 0x157FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FBCu; }
        if (ctx->pc != 0x157FBCu) { return; }
    }
    ctx->pc = 0x157FBCu;
label_157fbc:
    // 0x157fbc: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x157FBCu;
    {
        const bool branch_taken_0x157fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fbc) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x157FC4u;
label_157fc4:
    // 0x157fc4: 0x0  nop
    ctx->pc = 0x157fc4u;
    // NOP
    // 0x157fc8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x157fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x157fcc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157fd0: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x157fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x157fd4: 0x24a52a80  addiu       $a1, $a1, 0x2A80
    ctx->pc = 0x157fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10880));
    // 0x157fd8: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x157FD8u;
    SET_GPR_U32(ctx, 31, 0x157FE0u);
    ctx->pc = 0x157FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157FD8u;
            // 0x157fdc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FE0u; }
        if (ctx->pc != 0x157FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FE0u; }
        if (ctx->pc != 0x157FE0u) { return; }
    }
    ctx->pc = 0x157FE0u;
label_157fe0:
    // 0x157fe0: 0x144000c3  bnez        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x157FE0u;
    {
        const bool branch_taken_0x157fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157fe0) {
            ctx->pc = 0x1582F0u;
            goto label_1582f0;
        }
    }
    ctx->pc = 0x157FE8u;
    // 0x157fe8: 0x26730009  addiu       $s3, $s3, 0x9
    ctx->pc = 0x157fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
    // 0x157fec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x157fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x157ff0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x157ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x157ff4: 0x24a529d8  addiu       $a1, $a1, 0x29D8
    ctx->pc = 0x157ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10712));
    // 0x157ff8: 0x24550090  addiu       $s5, $v0, 0x90
    ctx->pc = 0x157ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x157ffc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158000: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158004: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158004u;
    SET_GPR_U32(ctx, 31, 0x15800Cu);
    ctx->pc = 0x158008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158004u;
            // 0x158008: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15800Cu; }
        if (ctx->pc != 0x15800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15800Cu; }
        if (ctx->pc != 0x15800Cu) { return; }
    }
    ctx->pc = 0x15800Cu;
label_15800c:
    // 0x15800c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15800Cu;
    {
        const bool branch_taken_0x15800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15800c) {
            ctx->pc = 0x158020u;
            goto label_158020;
        }
    }
    ctx->pc = 0x158014u;
    // 0x158014: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x158014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x158018: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x158018u;
    {
        const bool branch_taken_0x158018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158018u;
            // 0x15801c: 0x3414fbfe  ori         $s4, $zero, 0xFBFE (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64510);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158018) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158020u;
label_158020:
    // 0x158020: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158024: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158028: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x158028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x15802c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15802Cu;
    SET_GPR_U32(ctx, 31, 0x158034u);
    ctx->pc = 0x158030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15802Cu;
            // 0x158030: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158034u; }
        if (ctx->pc != 0x158034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158034u; }
        if (ctx->pc != 0x158034u) { return; }
    }
    ctx->pc = 0x158034u;
label_158034:
    // 0x158034: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158034u;
    {
        const bool branch_taken_0x158034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158034) {
            ctx->pc = 0x158048u;
            goto label_158048;
        }
    }
    ctx->pc = 0x15803Cu;
    // 0x15803c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x15803cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x158040: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x158040u;
    {
        const bool branch_taken_0x158040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158040u;
            // 0x158044: 0x3414fbfd  ori         $s4, $zero, 0xFBFD (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64509);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158040) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158048u;
label_158048:
    // 0x158048: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15804c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158050: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x158050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
    // 0x158054: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158054u;
    SET_GPR_U32(ctx, 31, 0x15805Cu);
    ctx->pc = 0x158058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158054u;
            // 0x158058: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15805Cu; }
        if (ctx->pc != 0x15805Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15805Cu; }
        if (ctx->pc != 0x15805Cu) { return; }
    }
    ctx->pc = 0x15805Cu;
label_15805c:
    // 0x15805c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15805Cu;
    {
        const bool branch_taken_0x15805c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15805c) {
            ctx->pc = 0x158070u;
            goto label_158070;
        }
    }
    ctx->pc = 0x158064u;
    // 0x158064: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x158064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x158068: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x158068u;
    {
        const bool branch_taken_0x158068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158068u;
            // 0x15806c: 0x3414fbfc  ori         $s4, $zero, 0xFBFC (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64508);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158068) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158070u;
label_158070:
    // 0x158070: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158074: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158078: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x158078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x15807c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15807Cu;
    SET_GPR_U32(ctx, 31, 0x158084u);
    ctx->pc = 0x158080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15807Cu;
            // 0x158080: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158084u; }
        if (ctx->pc != 0x158084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158084u; }
        if (ctx->pc != 0x158084u) { return; }
    }
    ctx->pc = 0x158084u;
label_158084:
    // 0x158084: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158084u;
    {
        const bool branch_taken_0x158084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158084) {
            ctx->pc = 0x158098u;
            goto label_158098;
        }
    }
    ctx->pc = 0x15808Cu;
    // 0x15808c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x15808cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x158090: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x158090u;
    {
        const bool branch_taken_0x158090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158090u;
            // 0x158094: 0x3414fbfb  ori         $s4, $zero, 0xFBFB (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64507);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158090) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158098u;
label_158098:
    // 0x158098: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15809c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580a0: 0x24a529f8  addiu       $a1, $a1, 0x29F8
    ctx->pc = 0x1580a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    // 0x1580a4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1580A4u;
    SET_GPR_U32(ctx, 31, 0x1580ACu);
    ctx->pc = 0x1580A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580A4u;
            // 0x1580a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580ACu; }
        if (ctx->pc != 0x1580ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580ACu; }
        if (ctx->pc != 0x1580ACu) { return; }
    }
    ctx->pc = 0x1580ACu;
label_1580ac:
    // 0x1580ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1580ACu;
    {
        const bool branch_taken_0x1580ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1580ac) {
            ctx->pc = 0x1580C0u;
            goto label_1580c0;
        }
    }
    ctx->pc = 0x1580B4u;
    // 0x1580b4: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1580b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x1580b8: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1580B8u;
    {
        const bool branch_taken_0x1580b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1580BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1580B8u;
            // 0x1580bc: 0x3414fbf2  ori         $s4, $zero, 0xFBF2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64498);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580b8) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x1580C0u;
label_1580c0:
    // 0x1580c0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1580c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1580c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580c8: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x1580c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x1580cc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1580CCu;
    SET_GPR_U32(ctx, 31, 0x1580D4u);
    ctx->pc = 0x1580D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580CCu;
            // 0x1580d0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580D4u; }
        if (ctx->pc != 0x1580D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580D4u; }
        if (ctx->pc != 0x1580D4u) { return; }
    }
    ctx->pc = 0x1580D4u;
label_1580d4:
    // 0x1580d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1580D4u;
    {
        const bool branch_taken_0x1580d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1580d4) {
            ctx->pc = 0x1580E8u;
            goto label_1580e8;
        }
    }
    ctx->pc = 0x1580DCu;
    // 0x1580dc: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1580dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x1580e0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1580E0u;
    {
        const bool branch_taken_0x1580e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1580E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1580E0u;
            // 0x1580e4: 0x3414fbf1  ori         $s4, $zero, 0xFBF1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64497);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580e0) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x1580E8u;
label_1580e8:
    // 0x1580e8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1580e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1580ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1580ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580f0: 0x24a52a08  addiu       $a1, $a1, 0x2A08
    ctx->pc = 0x1580f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10760));
    // 0x1580f4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1580F4u;
    SET_GPR_U32(ctx, 31, 0x1580FCu);
    ctx->pc = 0x1580F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580F4u;
            // 0x1580f8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580FCu; }
        if (ctx->pc != 0x1580FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580FCu; }
        if (ctx->pc != 0x1580FCu) { return; }
    }
    ctx->pc = 0x1580FCu;
label_1580fc:
    // 0x1580fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1580FCu;
    {
        const bool branch_taken_0x1580fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1580fc) {
            ctx->pc = 0x158110u;
            goto label_158110;
        }
    }
    ctx->pc = 0x158104u;
    // 0x158104: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x158104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x158108: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x158108u;
    {
        const bool branch_taken_0x158108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15810Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158108u;
            // 0x15810c: 0x3414fbf0  ori         $s4, $zero, 0xFBF0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64496);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158108) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158110u;
label_158110:
    // 0x158110: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158114: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158118: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x158118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x15811c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15811Cu;
    SET_GPR_U32(ctx, 31, 0x158124u);
    ctx->pc = 0x158120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15811Cu;
            // 0x158120: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158124u; }
        if (ctx->pc != 0x158124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158124u; }
        if (ctx->pc != 0x158124u) { return; }
    }
    ctx->pc = 0x158124u;
label_158124:
    // 0x158124: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158124u;
    {
        const bool branch_taken_0x158124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158124) {
            ctx->pc = 0x158138u;
            goto label_158138;
        }
    }
    ctx->pc = 0x15812Cu;
    // 0x15812c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x15812cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x158130: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x158130u;
    {
        const bool branch_taken_0x158130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158130u;
            // 0x158134: 0x3414fbef  ori         $s4, $zero, 0xFBEF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64495);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158130) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158138u;
label_158138:
    // 0x158138: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15813c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15813cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158140: 0x24a52a18  addiu       $a1, $a1, 0x2A18
    ctx->pc = 0x158140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10776));
    // 0x158144: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158144u;
    SET_GPR_U32(ctx, 31, 0x15814Cu);
    ctx->pc = 0x158148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158144u;
            // 0x158148: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15814Cu; }
        if (ctx->pc != 0x15814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15814Cu; }
        if (ctx->pc != 0x15814Cu) { return; }
    }
    ctx->pc = 0x15814Cu;
label_15814c:
    // 0x15814c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15814Cu;
    {
        const bool branch_taken_0x15814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15814c) {
            ctx->pc = 0x158160u;
            goto label_158160;
        }
    }
    ctx->pc = 0x158154u;
    // 0x158154: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x158154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x158158: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x158158u;
    {
        const bool branch_taken_0x158158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158158u;
            // 0x15815c: 0x3414fbee  ori         $s4, $zero, 0xFBEE (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64494);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158158) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158160u;
label_158160:
    // 0x158160: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158164: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158168: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x158168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x15816c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15816Cu;
    SET_GPR_U32(ctx, 31, 0x158174u);
    ctx->pc = 0x158170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15816Cu;
            // 0x158170: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158174u; }
        if (ctx->pc != 0x158174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158174u; }
        if (ctx->pc != 0x158174u) { return; }
    }
    ctx->pc = 0x158174u;
label_158174:
    // 0x158174: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158174u;
    {
        const bool branch_taken_0x158174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158174) {
            ctx->pc = 0x158188u;
            goto label_158188;
        }
    }
    ctx->pc = 0x15817Cu;
    // 0x15817c: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x158180: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x158180u;
    {
        const bool branch_taken_0x158180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158180u;
            // 0x158184: 0x3414fbed  ori         $s4, $zero, 0xFBED (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64493);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158180) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158188u;
label_158188:
    // 0x158188: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15818c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158190: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x158190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x158194: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158194u;
    SET_GPR_U32(ctx, 31, 0x15819Cu);
    ctx->pc = 0x158198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158194u;
            // 0x158198: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15819Cu; }
        if (ctx->pc != 0x15819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15819Cu; }
        if (ctx->pc != 0x15819Cu) { return; }
    }
    ctx->pc = 0x15819Cu;
label_15819c:
    // 0x15819c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15819Cu;
    {
        const bool branch_taken_0x15819c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15819c) {
            ctx->pc = 0x1581B0u;
            goto label_1581b0;
        }
    }
    ctx->pc = 0x1581A4u;
    // 0x1581a4: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1581a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x1581a8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1581A8u;
    {
        const bool branch_taken_0x1581a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1581A8u;
            // 0x1581ac: 0x3414fbec  ori         $s4, $zero, 0xFBEC (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64492);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581a8) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x1581B0u;
label_1581b0:
    // 0x1581b0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1581b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1581b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1581b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581b8: 0x24a52a98  addiu       $a1, $a1, 0x2A98
    ctx->pc = 0x1581b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10904));
    // 0x1581bc: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1581BCu;
    SET_GPR_U32(ctx, 31, 0x1581C4u);
    ctx->pc = 0x1581C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1581BCu;
            // 0x1581c0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581C4u; }
        if (ctx->pc != 0x1581C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581C4u; }
        if (ctx->pc != 0x1581C4u) { return; }
    }
    ctx->pc = 0x1581C4u;
label_1581c4:
    // 0x1581c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1581C4u;
    {
        const bool branch_taken_0x1581c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1581c4) {
            ctx->pc = 0x1581D8u;
            goto label_1581d8;
        }
    }
    ctx->pc = 0x1581CCu;
    // 0x1581cc: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1581ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x1581d0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1581D0u;
    {
        const bool branch_taken_0x1581d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1581D0u;
            // 0x1581d4: 0x3414fbeb  ori         $s4, $zero, 0xFBEB (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581d0) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x1581D8u;
label_1581d8:
    // 0x1581d8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1581d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1581dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1581dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581e0: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
    // 0x1581e4: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1581E4u;
    SET_GPR_U32(ctx, 31, 0x1581ECu);
    ctx->pc = 0x1581E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1581E4u;
            // 0x1581e8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581ECu; }
        if (ctx->pc != 0x1581ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581ECu; }
        if (ctx->pc != 0x1581ECu) { return; }
    }
    ctx->pc = 0x1581ECu;
label_1581ec:
    // 0x1581ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1581ECu;
    {
        const bool branch_taken_0x1581ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1581ec) {
            ctx->pc = 0x158200u;
            goto label_158200;
        }
    }
    ctx->pc = 0x1581F4u;
    // 0x1581f4: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1581f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x1581f8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1581F8u;
    {
        const bool branch_taken_0x1581f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1581F8u;
            // 0x1581fc: 0x3414fbea  ori         $s4, $zero, 0xFBEA (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64490);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581f8) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158200u;
label_158200:
    // 0x158200: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158208: 0x24a52aa8  addiu       $a1, $a1, 0x2AA8
    ctx->pc = 0x158208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10920));
    // 0x15820c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15820Cu;
    SET_GPR_U32(ctx, 31, 0x158214u);
    ctx->pc = 0x158210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15820Cu;
            // 0x158210: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158214u; }
        if (ctx->pc != 0x158214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158214u; }
        if (ctx->pc != 0x158214u) { return; }
    }
    ctx->pc = 0x158214u;
label_158214:
    // 0x158214: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158214u;
    {
        const bool branch_taken_0x158214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158214) {
            ctx->pc = 0x158228u;
            goto label_158228;
        }
    }
    ctx->pc = 0x15821Cu;
    // 0x15821c: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x15821cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x158220: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x158220u;
    {
        const bool branch_taken_0x158220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158220u;
            // 0x158224: 0x3414fbe9  ori         $s4, $zero, 0xFBE9 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64489);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158220) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158228u;
label_158228:
    // 0x158228: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15822c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158230: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0
    ctx->pc = 0x158230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
    // 0x158234: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158234u;
    SET_GPR_U32(ctx, 31, 0x15823Cu);
    ctx->pc = 0x158238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158234u;
            // 0x158238: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15823Cu; }
        if (ctx->pc != 0x15823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15823Cu; }
        if (ctx->pc != 0x15823Cu) { return; }
    }
    ctx->pc = 0x15823Cu;
label_15823c:
    // 0x15823c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15823Cu;
    {
        const bool branch_taken_0x15823c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15823c) {
            ctx->pc = 0x158250u;
            goto label_158250;
        }
    }
    ctx->pc = 0x158244u;
    // 0x158244: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x158244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x158248: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x158248u;
    {
        const bool branch_taken_0x158248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158248u;
            // 0x15824c: 0x3414fbe8  ori         $s4, $zero, 0xFBE8 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158248) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x158250u;
label_158250:
    // 0x158250: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158258: 0x24a52ab8  addiu       $a1, $a1, 0x2AB8
    ctx->pc = 0x158258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10936));
    // 0x15825c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15825Cu;
    SET_GPR_U32(ctx, 31, 0x158264u);
    ctx->pc = 0x158260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15825Cu;
            // 0x158260: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158264u; }
        if (ctx->pc != 0x158264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158264u; }
        if (ctx->pc != 0x158264u) { return; }
    }
    ctx->pc = 0x158264u;
label_158264:
    // 0x158264: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158264u;
    {
        const bool branch_taken_0x158264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158264) {
            ctx->pc = 0x158274u;
            goto label_158274;
        }
    }
    ctx->pc = 0x15826Cu;
    // 0x15826c: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x15826cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x158270: 0x3414fbe7  ori         $s4, $zero, 0xFBE7
    ctx->pc = 0x158270u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64487);
label_158274:
    // 0x158274: 0x0  nop
    ctx->pc = 0x158274u;
    // NOP
    // 0x158278: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x158278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15827c: 0x1282001c  beq         $s4, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15827Cu;
    {
        const bool branch_taken_0x15827c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x158280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15827Cu;
            // 0x158280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15827c) {
            ctx->pc = 0x1582F0u;
            goto label_1582f0;
        }
    }
    ctx->pc = 0x158284u;
    // 0x158284: 0xc055b2c  jal         func_156CB0
    ctx->pc = 0x158284u;
    SET_GPR_U32(ctx, 31, 0x15828Cu);
    ctx->pc = 0x156CB0u;
    if (runtime->hasFunction(0x156CB0u)) {
        auto targetFn = runtime->lookupFunction(0x156CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15828Cu; }
        if (ctx->pc != 0x15828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemNoFromFontNo__Fi_0x156cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15828Cu; }
        if (ctx->pc != 0x15828Cu) { return; }
    }
    ctx->pc = 0x15828Cu;
label_15828c:
    // 0x15828c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15828Cu;
    {
        const bool branch_taken_0x15828c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x158290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15828Cu;
            // 0x158290: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15828c) {
            ctx->pc = 0x15829Cu;
            goto label_15829c;
        }
    }
    ctx->pc = 0x158294u;
    // 0x158294: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x158294u;
    {
        const bool branch_taken_0x158294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158294) {
            ctx->pc = 0x1582C8u;
            goto label_1582c8;
        }
    }
    ctx->pc = 0x15829Cu;
label_15829c:
    // 0x15829c: 0x0  nop
    ctx->pc = 0x15829cu;
    // NOP
    // 0x1582a0: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1582a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1582a4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1582A4u;
    {
        const bool branch_taken_0x1582a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1582A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1582A4u;
            // 0x1582a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582a4) {
            ctx->pc = 0x1582B4u;
            goto label_1582b4;
        }
    }
    ctx->pc = 0x1582ACu;
    // 0x1582ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1582ACu;
    {
        const bool branch_taken_0x1582ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582ac) {
            ctx->pc = 0x1582C8u;
            goto label_1582c8;
        }
    }
    ctx->pc = 0x1582B4u;
label_1582b4:
    // 0x1582b4: 0x0  nop
    ctx->pc = 0x1582b4u;
    // NOP
    // 0x1582b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1582b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1582bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1582bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1582c0: 0x8c451a00  lw          $a1, 0x1A00($v0)
    ctx->pc = 0x1582c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6656)));
    // 0x1582c4: 0x0  nop
    ctx->pc = 0x1582c4u;
    // NOP
label_1582c8:
    // 0x1582c8: 0xc05571c  jal         func_155C70
    ctx->pc = 0x1582C8u;
    SET_GPR_U32(ctx, 31, 0x1582D0u);
    ctx->pc = 0x1582CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1582C8u;
            // 0x1582cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155C70u;
    if (runtime->hasFunction(0x155C70u)) {
        auto targetFn = runtime->lookupFunction(0x155C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582D0u; }
        if (ctx->pc != 0x1582D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesWidth_system__6ClsMesFi_0x155c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582D0u; }
        if (ctx->pc != 0x1582D0u) { return; }
    }
    ctx->pc = 0x1582D0u;
label_1582d0:
    // 0x1582d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1582d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1582d4: 0x10430147  beq         $v0, $v1, . + 4 + (0x147 << 2)
    ctx->pc = 0x1582D4u;
    {
        const bool branch_taken_0x1582d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1582D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1582D4u;
            // 0x1582d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582d4) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x1582DCu;
    // 0x1582dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1582dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582e0: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1582E0u;
    SET_GPR_U32(ctx, 31, 0x1582E8u);
    ctx->pc = 0x1582E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1582E0u;
            // 0x1582e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582E8u; }
        if (ctx->pc != 0x1582E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582E8u; }
        if (ctx->pc != 0x1582E8u) { return; }
    }
    ctx->pc = 0x1582E8u;
label_1582e8:
    // 0x1582e8: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x1582E8u;
    {
        const bool branch_taken_0x1582e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582e8) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x1582F0u;
label_1582f0:
    // 0x1582f0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1582f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1582f4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1582f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1582f8: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1582f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1582fc: 0x24a52ac0  addiu       $a1, $a1, 0x2AC0
    ctx->pc = 0x1582fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10944));
    // 0x158300: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158300u;
    SET_GPR_U32(ctx, 31, 0x158308u);
    ctx->pc = 0x158304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158300u;
            // 0x158304: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158308u; }
        if (ctx->pc != 0x158308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158308u; }
        if (ctx->pc != 0x158308u) { return; }
    }
    ctx->pc = 0x158308u;
label_158308:
    // 0x158308: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x158308u;
    {
        const bool branch_taken_0x158308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158308) {
            ctx->pc = 0x1585CCu;
            goto label_1585cc;
        }
    }
    ctx->pc = 0x158310u;
    // 0x158310: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x158310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x158314: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158318: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x15831c: 0x24a529d8  addiu       $a1, $a1, 0x29D8
    ctx->pc = 0x15831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10712));
    // 0x158320: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x158324: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x158324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158328: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158328u;
    SET_GPR_U32(ctx, 31, 0x158330u);
    ctx->pc = 0x15832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158328u;
            // 0x15832c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158330u; }
        if (ctx->pc != 0x158330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158330u; }
        if (ctx->pc != 0x158330u) { return; }
    }
    ctx->pc = 0x158330u;
label_158330:
    // 0x158330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158330u;
    {
        const bool branch_taken_0x158330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158330) {
            ctx->pc = 0x158340u;
            goto label_158340;
        }
    }
    ctx->pc = 0x158338u;
    // 0x158338: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x158338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15833c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x15833cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_158340:
    // 0x158340: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x158344: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158348: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x15834c: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x15834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x158350: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158350u;
    SET_GPR_U32(ctx, 31, 0x158358u);
    ctx->pc = 0x158354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158350u;
            // 0x158354: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158358u; }
        if (ctx->pc != 0x158358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158358u; }
        if (ctx->pc != 0x158358u) { return; }
    }
    ctx->pc = 0x158358u;
label_158358:
    // 0x158358: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158358u;
    {
        const bool branch_taken_0x158358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158358) {
            ctx->pc = 0x158368u;
            goto label_158368;
        }
    }
    ctx->pc = 0x158360u;
    // 0x158360: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x158360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158364: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x158364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_158368:
    // 0x158368: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x15836c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15836cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158370: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x158374: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x158374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
    // 0x158378: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158378u;
    SET_GPR_U32(ctx, 31, 0x158380u);
    ctx->pc = 0x15837Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158378u;
            // 0x15837c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158380u; }
        if (ctx->pc != 0x158380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158380u; }
        if (ctx->pc != 0x158380u) { return; }
    }
    ctx->pc = 0x158380u;
label_158380:
    // 0x158380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158380u;
    {
        const bool branch_taken_0x158380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158380) {
            ctx->pc = 0x158390u;
            goto label_158390;
        }
    }
    ctx->pc = 0x158388u;
    // 0x158388: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x158388u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15838c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x15838cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_158390:
    // 0x158390: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x158394: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158398: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x15839c: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x15839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x1583a0: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1583A0u;
    SET_GPR_U32(ctx, 31, 0x1583A8u);
    ctx->pc = 0x1583A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1583A0u;
            // 0x1583a4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583A8u; }
        if (ctx->pc != 0x1583A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583A8u; }
        if (ctx->pc != 0x1583A8u) { return; }
    }
    ctx->pc = 0x1583A8u;
label_1583a8:
    // 0x1583a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1583A8u;
    {
        const bool branch_taken_0x1583a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583a8) {
            ctx->pc = 0x1583B8u;
            goto label_1583b8;
        }
    }
    ctx->pc = 0x1583B0u;
    // 0x1583b0: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1583b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1583b4: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1583b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1583b8:
    // 0x1583b8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1583b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1583bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1583bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1583c0: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1583c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1583c4: 0x24a529f8  addiu       $a1, $a1, 0x29F8
    ctx->pc = 0x1583c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    // 0x1583c8: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1583C8u;
    SET_GPR_U32(ctx, 31, 0x1583D0u);
    ctx->pc = 0x1583CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1583C8u;
            // 0x1583cc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583D0u; }
        if (ctx->pc != 0x1583D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583D0u; }
        if (ctx->pc != 0x1583D0u) { return; }
    }
    ctx->pc = 0x1583D0u;
label_1583d0:
    // 0x1583d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1583D0u;
    {
        const bool branch_taken_0x1583d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583d0) {
            ctx->pc = 0x1583E0u;
            goto label_1583e0;
        }
    }
    ctx->pc = 0x1583D8u;
    // 0x1583d8: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x1583d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1583dc: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1583dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1583e0:
    // 0x1583e0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1583e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1583e4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1583e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1583e8: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1583e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1583ec: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x1583ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x1583f0: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1583F0u;
    SET_GPR_U32(ctx, 31, 0x1583F8u);
    ctx->pc = 0x1583F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1583F0u;
            // 0x1583f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583F8u; }
        if (ctx->pc != 0x1583F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1583F8u; }
        if (ctx->pc != 0x1583F8u) { return; }
    }
    ctx->pc = 0x1583F8u;
label_1583f8:
    // 0x1583f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1583F8u;
    {
        const bool branch_taken_0x1583f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583f8) {
            ctx->pc = 0x158408u;
            goto label_158408;
        }
    }
    ctx->pc = 0x158400u;
    // 0x158400: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x158400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x158404: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x158404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_158408:
    // 0x158408: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x15840c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15840cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158410: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x158414: 0x24a52a08  addiu       $a1, $a1, 0x2A08
    ctx->pc = 0x158414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10760));
    // 0x158418: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158418u;
    SET_GPR_U32(ctx, 31, 0x158420u);
    ctx->pc = 0x15841Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158418u;
            // 0x15841c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158420u; }
        if (ctx->pc != 0x158420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158420u; }
        if (ctx->pc != 0x158420u) { return; }
    }
    ctx->pc = 0x158420u;
label_158420:
    // 0x158420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158420u;
    {
        const bool branch_taken_0x158420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158420) {
            ctx->pc = 0x158430u;
            goto label_158430;
        }
    }
    ctx->pc = 0x158428u;
    // 0x158428: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x158428u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15842c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x15842cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_158430:
    // 0x158430: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x158434: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158438: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x15843c: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x15843cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x158440: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158440u;
    SET_GPR_U32(ctx, 31, 0x158448u);
    ctx->pc = 0x158444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158440u;
            // 0x158444: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158448u; }
        if (ctx->pc != 0x158448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158448u; }
        if (ctx->pc != 0x158448u) { return; }
    }
    ctx->pc = 0x158448u;
label_158448:
    // 0x158448: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158448u;
    {
        const bool branch_taken_0x158448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158448) {
            ctx->pc = 0x158458u;
            goto label_158458;
        }
    }
    ctx->pc = 0x158450u;
    // 0x158450: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x158450u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x158454: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x158454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_158458:
    // 0x158458: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x15845c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15845cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158460: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x158464: 0x24a52a18  addiu       $a1, $a1, 0x2A18
    ctx->pc = 0x158464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10776));
    // 0x158468: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158468u;
    SET_GPR_U32(ctx, 31, 0x158470u);
    ctx->pc = 0x15846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158468u;
            // 0x15846c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158470u; }
        if (ctx->pc != 0x158470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158470u; }
        if (ctx->pc != 0x158470u) { return; }
    }
    ctx->pc = 0x158470u;
label_158470:
    // 0x158470: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158470u;
    {
        const bool branch_taken_0x158470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158470) {
            ctx->pc = 0x158480u;
            goto label_158480;
        }
    }
    ctx->pc = 0x158478u;
    // 0x158478: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x158478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15847c: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x15847cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_158480:
    // 0x158480: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x158484: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158488: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x15848c: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x15848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x158490: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158490u;
    SET_GPR_U32(ctx, 31, 0x158498u);
    ctx->pc = 0x158494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158490u;
            // 0x158494: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158498u; }
        if (ctx->pc != 0x158498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158498u; }
        if (ctx->pc != 0x158498u) { return; }
    }
    ctx->pc = 0x158498u;
label_158498:
    // 0x158498: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158498u;
    {
        const bool branch_taken_0x158498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158498) {
            ctx->pc = 0x1584A8u;
            goto label_1584a8;
        }
    }
    ctx->pc = 0x1584A0u;
    // 0x1584a0: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x1584a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1584a4: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1584a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1584a8:
    // 0x1584a8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1584a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1584ac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1584acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1584b0: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1584b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1584b4: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x1584b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x1584b8: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1584B8u;
    SET_GPR_U32(ctx, 31, 0x1584C0u);
    ctx->pc = 0x1584BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1584B8u;
            // 0x1584bc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584C0u; }
        if (ctx->pc != 0x1584C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584C0u; }
        if (ctx->pc != 0x1584C0u) { return; }
    }
    ctx->pc = 0x1584C0u;
label_1584c0:
    // 0x1584c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1584C0u;
    {
        const bool branch_taken_0x1584c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1584c0) {
            ctx->pc = 0x1584D0u;
            goto label_1584d0;
        }
    }
    ctx->pc = 0x1584C8u;
    // 0x1584c8: 0x2414000b  addiu       $s4, $zero, 0xB
    ctx->pc = 0x1584c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1584cc: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1584ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1584d0:
    // 0x1584d0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1584d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1584d4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1584d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1584d8: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1584d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1584dc: 0x24a52a98  addiu       $a1, $a1, 0x2A98
    ctx->pc = 0x1584dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10904));
    // 0x1584e0: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x1584E0u;
    SET_GPR_U32(ctx, 31, 0x1584E8u);
    ctx->pc = 0x1584E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1584E0u;
            // 0x1584e4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584E8u; }
        if (ctx->pc != 0x1584E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584E8u; }
        if (ctx->pc != 0x1584E8u) { return; }
    }
    ctx->pc = 0x1584E8u;
label_1584e8:
    // 0x1584e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1584E8u;
    {
        const bool branch_taken_0x1584e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1584e8) {
            ctx->pc = 0x1584F8u;
            goto label_1584f8;
        }
    }
    ctx->pc = 0x1584F0u;
    // 0x1584f0: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x1584f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1584f4: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1584f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1584f8:
    // 0x1584f8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1584f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1584fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1584fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158500: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x158504: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
    // 0x158508: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158508u;
    SET_GPR_U32(ctx, 31, 0x158510u);
    ctx->pc = 0x15850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158508u;
            // 0x15850c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158510u; }
        if (ctx->pc != 0x158510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158510u; }
        if (ctx->pc != 0x158510u) { return; }
    }
    ctx->pc = 0x158510u;
label_158510:
    // 0x158510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158510u;
    {
        const bool branch_taken_0x158510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158510) {
            ctx->pc = 0x158520u;
            goto label_158520;
        }
    }
    ctx->pc = 0x158518u;
    // 0x158518: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x158518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15851c: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x15851cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_158520:
    // 0x158520: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x158524: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158528: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x15852c: 0x24a52aa8  addiu       $a1, $a1, 0x2AA8
    ctx->pc = 0x15852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10920));
    // 0x158530: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158530u;
    SET_GPR_U32(ctx, 31, 0x158538u);
    ctx->pc = 0x158534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158530u;
            // 0x158534: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158538u; }
        if (ctx->pc != 0x158538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158538u; }
        if (ctx->pc != 0x158538u) { return; }
    }
    ctx->pc = 0x158538u;
label_158538:
    // 0x158538: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158538u;
    {
        const bool branch_taken_0x158538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158538) {
            ctx->pc = 0x158548u;
            goto label_158548;
        }
    }
    ctx->pc = 0x158540u;
    // 0x158540: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x158540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x158544: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x158544u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_158548:
    // 0x158548: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x15854c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158550: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x158554: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0
    ctx->pc = 0x158554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
    // 0x158558: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158558u;
    SET_GPR_U32(ctx, 31, 0x158560u);
    ctx->pc = 0x15855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158558u;
            // 0x15855c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158560u; }
        if (ctx->pc != 0x158560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158560u; }
        if (ctx->pc != 0x158560u) { return; }
    }
    ctx->pc = 0x158560u;
label_158560:
    // 0x158560: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158560u;
    {
        const bool branch_taken_0x158560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158560) {
            ctx->pc = 0x158570u;
            goto label_158570;
        }
    }
    ctx->pc = 0x158568u;
    // 0x158568: 0x2414000f  addiu       $s4, $zero, 0xF
    ctx->pc = 0x158568u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15856c: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x15856cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_158570:
    // 0x158570: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x158570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x158574: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158578: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x158578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x15857c: 0x24a52ab8  addiu       $a1, $a1, 0x2AB8
    ctx->pc = 0x15857cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10936));
    // 0x158580: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x158580u;
    SET_GPR_U32(ctx, 31, 0x158588u);
    ctx->pc = 0x158584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158580u;
            // 0x158584: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158588u; }
        if (ctx->pc != 0x158588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158588u; }
        if (ctx->pc != 0x158588u) { return; }
    }
    ctx->pc = 0x158588u;
label_158588:
    // 0x158588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158588u;
    {
        const bool branch_taken_0x158588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158588) {
            ctx->pc = 0x158598u;
            goto label_158598;
        }
    }
    ctx->pc = 0x158590u;
    // 0x158590: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x158590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x158594: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x158594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_158598:
    // 0x158598: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x158598u;
    {
        const bool branch_taken_0x158598 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158598u;
            // 0x15859c: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158598) {
            ctx->pc = 0x1585CCu;
            goto label_1585cc;
        }
    }
    ctx->pc = 0x1585A0u;
    // 0x1585a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1585a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1585a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1585a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1585a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1585a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1585ac: 0xc05484c  jal         func_152130
    ctx->pc = 0x1585ACu;
    SET_GPR_U32(ctx, 31, 0x1585B4u);
    ctx->pc = 0x1585B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1585ACu;
            // 0x1585b0: 0x24451801  addiu       $a1, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152130u;
    if (runtime->hasFunction(0x152130u)) {
        auto targetFn = runtime->lookupFunction(0x152130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585B4u; }
        if (ctx->pc != 0x1585B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFPc_0x152130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585B4u; }
        if (ctx->pc != 0x1585B4u) { return; }
    }
    ctx->pc = 0x1585B4u;
label_1585b4:
    // 0x1585b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1585b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1585b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1585b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1585bc: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1585BCu;
    SET_GPR_U32(ctx, 31, 0x1585C4u);
    ctx->pc = 0x1585C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1585BCu;
            // 0x1585c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585C4u; }
        if (ctx->pc != 0x1585C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585C4u; }
        if (ctx->pc != 0x1585C4u) { return; }
    }
    ctx->pc = 0x1585C4u;
label_1585c4:
    // 0x1585c4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1585C4u;
    {
        const bool branch_taken_0x1585c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1585c4) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x1585CCu;
label_1585cc:
    // 0x1585cc: 0x0  nop
    ctx->pc = 0x1585ccu;
    // NOP
    // 0x1585d0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1585d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1585d4: 0x24550090  addiu       $s5, $v0, 0x90
    ctx->pc = 0x1585d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1585d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1585d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1585dc: 0xc0b519c  jal         func_2D4670
    ctx->pc = 0x1585DCu;
    SET_GPR_U32(ctx, 31, 0x1585E4u);
    ctx->pc = 0x1585E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1585DCu;
            // 0x1585e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4670u;
    if (runtime->hasFunction(0x2D4670u)) {
        auto targetFn = runtime->lookupFunction(0x2D4670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585E4u; }
        if (ctx->pc != 0x1585E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiFontNo__5CFontFPc_0x2d4670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585E4u; }
        if (ctx->pc != 0x1585E4u) { return; }
    }
    ctx->pc = 0x1585E4u;
label_1585e4:
    // 0x1585e4: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x1585e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1585e8: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1585e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1585ec: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1585ECu;
    {
        const bool branch_taken_0x1585ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1585ECu;
            // 0x1585f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585ec) {
            ctx->pc = 0x158624u;
            goto label_158624;
        }
    }
    ctx->pc = 0x1585F4u;
    // 0x1585f4: 0xc054834  jal         func_1520D0
    ctx->pc = 0x1585F4u;
    SET_GPR_U32(ctx, 31, 0x1585FCu);
    ctx->pc = 0x1585F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1585F4u;
            // 0x1585f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1520D0u;
    if (runtime->hasFunction(0x1520D0u)) {
        auto targetFn = runtime->lookupFunction(0x1520D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585FCu; }
        if (ctx->pc != 0x1585FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__6ClsMesFi_0x1520d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585FCu; }
        if (ctx->pc != 0x1585FCu) { return; }
    }
    ctx->pc = 0x1585FCu;
label_1585fc:
    // 0x1585fc: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1585fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x158600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158604: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x158604u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x158608: 0xc055b80  jal         func_156E00
    ctx->pc = 0x158608u;
    SET_GPR_U32(ctx, 31, 0x158610u);
    ctx->pc = 0x15860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158608u;
            // 0x15860c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158610u; }
        if (ctx->pc != 0x158610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158610u; }
        if (ctx->pc != 0x158610u) { return; }
    }
    ctx->pc = 0x158610u;
label_158610:
    // 0x158610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x158610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158614: 0xc0b51b0  jal         func_2D46C0
    ctx->pc = 0x158614u;
    SET_GPR_U32(ctx, 31, 0x15861Cu);
    ctx->pc = 0x158618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158614u;
            // 0x158618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D46C0u;
    if (runtime->hasFunction(0x2D46C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D46C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15861Cu; }
        if (ctx->pc != 0x15861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiLen__5CFontFi_0x2d46c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15861Cu; }
        if (ctx->pc != 0x15861Cu) { return; }
    }
    ctx->pc = 0x15861Cu;
label_15861c:
    // 0x15861c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x15861Cu;
    {
        const bool branch_taken_0x15861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15861Cu;
            // 0x158620: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15861c) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x158624u;
label_158624:
    // 0x158624: 0x0  nop
    ctx->pc = 0x158624u;
    // NOP
    // 0x158628: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x158628u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15862c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158630: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x158630u;
    {
        const bool branch_taken_0x158630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x158630) {
            ctx->pc = 0x158670u;
            goto label_158670;
        }
    }
    ctx->pc = 0x158638u;
    // 0x158638: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15863c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158644: 0xc055b88  jal         func_156E20
    ctx->pc = 0x158644u;
    SET_GPR_U32(ctx, 31, 0x15864Cu);
    ctx->pc = 0x158648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158644u;
            // 0x158648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E20u;
    if (runtime->hasFunction(0x156E20u)) {
        auto targetFn = runtime->lookupFunction(0x156E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15864Cu; }
        if (ctx->pc != 0x15864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetYokoHaba__6ClsMesFii_0x156e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15864Cu; }
        if (ctx->pc != 0x15864Cu) { return; }
    }
    ctx->pc = 0x15864Cu;
label_15864c:
    // 0x15864c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x15864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x158650: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x158650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x158654: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x158654u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x158658: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x158658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15865c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15865Cu;
    {
        const bool branch_taken_0x15865c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15865c) {
            ctx->pc = 0x158668u;
            goto label_158668;
        }
    }
    ctx->pc = 0x158664u;
    // 0x158664: 0xae1600dc  sw          $s6, 0xDC($s0)
    ctx->pc = 0x158664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 22));
label_158668:
    // 0x158668: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x158668u;
    {
        const bool branch_taken_0x158668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158668u;
            // 0x15866c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158668) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x158670u;
label_158670:
    // 0x158670: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x158670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x158674: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x158674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158678: 0x24a52ac8  addiu       $a1, $a1, 0x2AC8
    ctx->pc = 0x158678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10952));
    // 0x15867c: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x15867Cu;
    SET_GPR_U32(ctx, 31, 0x158684u);
    ctx->pc = 0x158680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15867Cu;
            // 0x158680: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158684u; }
        if (ctx->pc != 0x158684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158684u; }
        if (ctx->pc != 0x158684u) { return; }
    }
    ctx->pc = 0x158684u;
label_158684:
    // 0x158684: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x158684u;
    {
        const bool branch_taken_0x158684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158684u;
            // 0x158688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158684) {
            ctx->pc = 0x1586BCu;
            goto label_1586bc;
        }
    }
    ctx->pc = 0x15868Cu;
    // 0x15868c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15868cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158690: 0xc055b90  jal         func_156E40
    ctx->pc = 0x158690u;
    SET_GPR_U32(ctx, 31, 0x158698u);
    ctx->pc = 0x158694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158690u;
            // 0x158694: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E40u;
    if (runtime->hasFunction(0x156E40u)) {
        auto targetFn = runtime->lookupFunction(0x156E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158698u; }
        if (ctx->pc != 0x158698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPage__6ClsMesFii_0x156e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158698u; }
        if (ctx->pc != 0x158698u) { return; }
    }
    ctx->pc = 0x158698u;
label_158698:
    // 0x158698: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15869c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1586a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586a4: 0xc055b88  jal         func_156E20
    ctx->pc = 0x1586A4u;
    SET_GPR_U32(ctx, 31, 0x1586ACu);
    ctx->pc = 0x1586A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1586A4u;
            // 0x1586a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E20u;
    if (runtime->hasFunction(0x156E20u)) {
        auto targetFn = runtime->lookupFunction(0x156E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586ACu; }
        if (ctx->pc != 0x1586ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetYokoHaba__6ClsMesFii_0x156e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586ACu; }
        if (ctx->pc != 0x1586ACu) { return; }
    }
    ctx->pc = 0x1586ACu;
label_1586ac:
    // 0x1586ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1586acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586b0: 0x26730006  addiu       $s3, $s3, 0x6
    ctx->pc = 0x1586b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x1586b4: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1586B4u;
    {
        const bool branch_taken_0x1586b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1586B4u;
            // 0x1586b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586b4) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x1586BCu;
label_1586bc:
    // 0x1586bc: 0x0  nop
    ctx->pc = 0x1586bcu;
    // NOP
    // 0x1586c0: 0x82a50000  lb          $a1, 0x0($s5)
    ctx->pc = 0x1586c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1586c4: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x1586C4u;
    SET_GPR_U32(ctx, 31, 0x1586CCu);
    ctx->pc = 0x1586C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1586C4u;
            // 0x1586c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586CCu; }
        if (ctx->pc != 0x1586CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586CCu; }
        if (ctx->pc != 0x1586CCu) { return; }
    }
    ctx->pc = 0x1586CCu;
label_1586cc:
    // 0x1586cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1586ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1586d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586d4: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x1586D4u;
    SET_GPR_U32(ctx, 31, 0x1586DCu);
    ctx->pc = 0x1586D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1586D4u;
            // 0x1586d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586DCu; }
        if (ctx->pc != 0x1586DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586DCu; }
        if (ctx->pc != 0x1586DCu) { return; }
    }
    ctx->pc = 0x1586DCu;
label_1586dc:
    // 0x1586dc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1586DCu;
    {
        const bool branch_taken_0x1586dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1586DCu;
            // 0x1586e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586dc) {
            ctx->pc = 0x158750u;
            goto label_158750;
        }
    }
    ctx->pc = 0x1586E4u;
    // 0x1586e4: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x1586E4u;
    SET_GPR_U32(ctx, 31, 0x1586ECu);
    ctx->pc = 0x1586E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1586E4u;
            // 0x1586e8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586ECu; }
        if (ctx->pc != 0x1586ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1586ECu; }
        if (ctx->pc != 0x1586ECu) { return; }
    }
    ctx->pc = 0x1586ECu;
label_1586ec:
    // 0x1586ec: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1586ECu;
    {
        const bool branch_taken_0x1586ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1586ec) {
            ctx->pc = 0x15871Cu;
            goto label_15871c;
        }
    }
    ctx->pc = 0x1586F4u;
    // 0x1586f4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1586f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1586f8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1586F8u;
    {
        const bool branch_taken_0x1586f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1586FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1586F8u;
            // 0x1586fc: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586f8) {
            ctx->pc = 0x158708u;
            goto label_158708;
        }
    }
    ctx->pc = 0x158700u;
    // 0x158700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158704: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x158704u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_158708:
    // 0x158708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15870c: 0xc055b80  jal         func_156E00
    ctx->pc = 0x15870Cu;
    SET_GPR_U32(ctx, 31, 0x158714u);
    ctx->pc = 0x158710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15870Cu;
            // 0x158710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158714u; }
        if (ctx->pc != 0x158714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158714u; }
        if (ctx->pc != 0x158714u) { return; }
    }
    ctx->pc = 0x158714u;
label_158714:
    // 0x158714: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x158714u;
    {
        const bool branch_taken_0x158714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158714) {
            ctx->pc = 0x158744u;
            goto label_158744;
        }
    }
    ctx->pc = 0x15871Cu;
label_15871c:
    // 0x15871c: 0x0  nop
    ctx->pc = 0x15871cu;
    // NOP
    // 0x158720: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x158720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158724: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x158724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158728: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15872c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15872Cu;
    SET_GPR_U32(ctx, 31, 0x158734u);
    ctx->pc = 0x158730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15872Cu;
            // 0x158730: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158734u; }
        if (ctx->pc != 0x158734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158734u; }
        if (ctx->pc != 0x158734u) { return; }
    }
    ctx->pc = 0x158734u;
label_158734:
    // 0x158734: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x158734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15873c: 0xc055b80  jal         func_156E00
    ctx->pc = 0x15873Cu;
    SET_GPR_U32(ctx, 31, 0x158744u);
    ctx->pc = 0x158740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15873Cu;
            // 0x158740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158744u; }
        if (ctx->pc != 0x158744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158744u; }
        if (ctx->pc != 0x158744u) { return; }
    }
    ctx->pc = 0x158744u;
label_158744:
    // 0x158744: 0x0  nop
    ctx->pc = 0x158744u;
    // NOP
    // 0x158748: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x158748u;
    {
        const bool branch_taken_0x158748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158748u;
            // 0x15874c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158748) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x158750u;
label_158750:
    // 0x158750: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x158750u;
    SET_GPR_U32(ctx, 31, 0x158758u);
    ctx->pc = 0x158754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158750u;
            // 0x158754: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158758u; }
        if (ctx->pc != 0x158758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158758u; }
        if (ctx->pc != 0x158758u) { return; }
    }
    ctx->pc = 0x158758u;
label_158758:
    // 0x158758: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x158758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x15875c: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x15875Cu;
    {
        const bool branch_taken_0x15875c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x158760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15875Cu;
            // 0x158760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15875c) {
            ctx->pc = 0x1587E0u;
            goto label_1587e0;
        }
    }
    ctx->pc = 0x158764u;
    // 0x158764: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x158764u;
    SET_GPR_U32(ctx, 31, 0x15876Cu);
    ctx->pc = 0x158768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158764u;
            // 0x158768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15876Cu; }
        if (ctx->pc != 0x15876Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15876Cu; }
        if (ctx->pc != 0x15876Cu) { return; }
    }
    ctx->pc = 0x15876Cu;
label_15876c:
    // 0x15876c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15876Cu;
    {
        const bool branch_taken_0x15876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15876c) {
            ctx->pc = 0x15878Cu;
            goto label_15878c;
        }
    }
    ctx->pc = 0x158774u;
    // 0x158774: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x158774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x158778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15877c: 0xc055b80  jal         func_156E00
    ctx->pc = 0x15877Cu;
    SET_GPR_U32(ctx, 31, 0x158784u);
    ctx->pc = 0x158780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15877Cu;
            // 0x158780: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158784u; }
        if (ctx->pc != 0x158784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158784u; }
        if (ctx->pc != 0x158784u) { return; }
    }
    ctx->pc = 0x158784u;
label_158784:
    // 0x158784: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x158784u;
    {
        const bool branch_taken_0x158784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158784) {
            ctx->pc = 0x1587D8u;
            goto label_1587d8;
        }
    }
    ctx->pc = 0x15878Cu;
label_15878c:
    // 0x15878c: 0x0  nop
    ctx->pc = 0x15878cu;
    // NOP
    // 0x158790: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x158790u;
    SET_GPR_U32(ctx, 31, 0x158798u);
    ctx->pc = 0x158794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158790u;
            // 0x158794: 0x26a40002  addiu       $a0, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158798u; }
        if (ctx->pc != 0x158798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158798u; }
        if (ctx->pc != 0x158798u) { return; }
    }
    ctx->pc = 0x158798u;
label_158798:
    // 0x158798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15879c: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x15879Cu;
    SET_GPR_U32(ctx, 31, 0x1587A4u);
    ctx->pc = 0x1587A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15879Cu;
            // 0x1587a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587A4u; }
        if (ctx->pc != 0x1587A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587A4u; }
        if (ctx->pc != 0x1587A4u) { return; }
    }
    ctx->pc = 0x1587A4u;
label_1587a4:
    // 0x1587a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1587A4u;
    {
        const bool branch_taken_0x1587a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587a4) {
            ctx->pc = 0x1587C4u;
            goto label_1587c4;
        }
    }
    ctx->pc = 0x1587ACu;
    // 0x1587ac: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x1587acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1587b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1587b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1587b4: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1587B4u;
    SET_GPR_U32(ctx, 31, 0x1587BCu);
    ctx->pc = 0x1587B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1587B4u;
            // 0x1587b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587BCu; }
        if (ctx->pc != 0x1587BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587BCu; }
        if (ctx->pc != 0x1587BCu) { return; }
    }
    ctx->pc = 0x1587BCu;
label_1587bc:
    // 0x1587bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1587BCu;
    {
        const bool branch_taken_0x1587bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587bc) {
            ctx->pc = 0x1587D8u;
            goto label_1587d8;
        }
    }
    ctx->pc = 0x1587C4u;
label_1587c4:
    // 0x1587c4: 0x0  nop
    ctx->pc = 0x1587c4u;
    // NOP
    // 0x1587c8: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x1587c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1587cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1587ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1587d0: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1587D0u;
    SET_GPR_U32(ctx, 31, 0x1587D8u);
    ctx->pc = 0x1587D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1587D0u;
            // 0x1587d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587D8u; }
        if (ctx->pc != 0x1587D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587D8u; }
        if (ctx->pc != 0x1587D8u) { return; }
    }
    ctx->pc = 0x1587D8u;
label_1587d8:
    // 0x1587d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1587D8u;
    {
        const bool branch_taken_0x1587d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587D8u;
            // 0x1587dc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587d8) {
            ctx->pc = 0x1587F4u;
            goto label_1587f4;
        }
    }
    ctx->pc = 0x1587E0u;
label_1587e0:
    // 0x1587e0: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x1587e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1587e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1587e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1587e8: 0xc055b80  jal         func_156E00
    ctx->pc = 0x1587E8u;
    SET_GPR_U32(ctx, 31, 0x1587F0u);
    ctx->pc = 0x1587ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1587E8u;
            // 0x1587ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E00u;
    if (runtime->hasFunction(0x156E00u)) {
        auto targetFn = runtime->lookupFunction(0x156E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587F0u; }
        if (ctx->pc != 0x1587F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYokoHaba__6ClsMesFii_0x156e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1587F0u; }
        if (ctx->pc != 0x1587F0u) { return; }
    }
    ctx->pc = 0x1587F0u;
label_1587f0:
    // 0x1587f0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1587f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1587f4:
    // 0x1587f4: 0x0  nop
    ctx->pc = 0x1587f4u;
    // NOP
    // 0x1587f8: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x1587f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1587fc: 0x1440fc90  bnez        $v0, . + 4 + (-0x370 << 2)
    ctx->pc = 0x1587FCu;
    {
        const bool branch_taken_0x1587fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587FCu;
            // 0x158800: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587fc) {
            ctx->pc = 0x157A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157a40;
        }
    }
    ctx->pc = 0x158804u;
label_158804:
    // 0x158804: 0x0  nop
    ctx->pc = 0x158804u;
    // NOP
    // 0x158808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15880c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158810: 0xc055b90  jal         func_156E40
    ctx->pc = 0x158810u;
    SET_GPR_U32(ctx, 31, 0x158818u);
    ctx->pc = 0x158814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158810u;
            // 0x158814: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156E40u;
    if (runtime->hasFunction(0x156E40u)) {
        auto targetFn = runtime->lookupFunction(0x156E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158818u; }
        if (ctx->pc != 0x158818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPage__6ClsMesFii_0x156e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158818u; }
        if (ctx->pc != 0x158818u) { return; }
    }
    ctx->pc = 0x158818u;
label_158818:
    // 0x158818: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x158818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x15881c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15881cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158820: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x158820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x158824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158828: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x158828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15882c: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x15882cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x158830: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x158830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_158834:
    // 0x158834: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x158834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x158838: 0x8c641e14  lw          $a0, 0x1E14($v1)
    ctx->pc = 0x158838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7700)));
    // 0x15883c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15883Cu;
    {
        const bool branch_taken_0x15883c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x15883c) {
            ctx->pc = 0x158858u;
            goto label_158858;
        }
    }
    ctx->pc = 0x158844u;
    // 0x158844: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x158844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158848: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x158848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15884c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15884Cu;
    {
        const bool branch_taken_0x15884c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15884c) {
            ctx->pc = 0x158858u;
            goto label_158858;
        }
    }
    ctx->pc = 0x158854u;
    // 0x158854: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x158854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
label_158858:
    // 0x158858: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x158858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15885c: 0x28a30014  slti        $v1, $a1, 0x14
    ctx->pc = 0x15885cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x158860: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x158860u;
    {
        const bool branch_taken_0x158860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158860u;
            // 0x158864: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158860) {
            ctx->pc = 0x158834u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158834;
        }
    }
    ctx->pc = 0x158868u;
    // 0x158868: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x158868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15886c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158870:
    // 0x158870: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x158870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x158874: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x158874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158878: 0x8ca61e14  lw          $a2, 0x1E14($a1)
    ctx->pc = 0x158878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7700)));
    // 0x15887c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15887cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x158880: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x158880u;
    {
        const bool branch_taken_0x158880 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x158884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158880u;
            // 0x158884: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158880) {
            ctx->pc = 0x158890u;
            goto label_158890;
        }
    }
    ctx->pc = 0x158888u;
    // 0x158888: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x158888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15888c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15888cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_158890:
    // 0x158890: 0xaca61b44  sw          $a2, 0x1B44($a1)
    ctx->pc = 0x158890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6980), GPR_U32(ctx, 6));
    // 0x158894: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x158894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158898: 0x8ca61e18  lw          $a2, 0x1E18($a1)
    ctx->pc = 0x158898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7704)));
    // 0x15889c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15889cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1588a0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1588A0u;
    {
        const bool branch_taken_0x1588a0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1588A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588A0u;
            // 0x1588a4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588a0) {
            ctx->pc = 0x1588B0u;
            goto label_1588b0;
        }
    }
    ctx->pc = 0x1588A8u;
    // 0x1588a8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1588a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1588ac: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1588acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1588b0:
    // 0x1588b0: 0xaca61b48  sw          $a2, 0x1B48($a1)
    ctx->pc = 0x1588b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6984), GPR_U32(ctx, 6));
    // 0x1588b4: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x1588b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1588b8: 0x8ca61e1c  lw          $a2, 0x1E1C($a1)
    ctx->pc = 0x1588b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7708)));
    // 0x1588bc: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x1588bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1588c0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1588C0u;
    {
        const bool branch_taken_0x1588c0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1588C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588C0u;
            // 0x1588c4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588c0) {
            ctx->pc = 0x1588D0u;
            goto label_1588d0;
        }
    }
    ctx->pc = 0x1588C8u;
    // 0x1588c8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1588c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1588cc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1588ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1588d0:
    // 0x1588d0: 0xaca61b4c  sw          $a2, 0x1B4C($a1)
    ctx->pc = 0x1588d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6988), GPR_U32(ctx, 6));
    // 0x1588d4: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x1588d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1588d8: 0x8ca61e20  lw          $a2, 0x1E20($a1)
    ctx->pc = 0x1588d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7712)));
    // 0x1588dc: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x1588dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1588e0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1588E0u;
    {
        const bool branch_taken_0x1588e0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1588E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588E0u;
            // 0x1588e4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588e0) {
            ctx->pc = 0x1588F0u;
            goto label_1588f0;
        }
    }
    ctx->pc = 0x1588E8u;
    // 0x1588e8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1588e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1588ec: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1588ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1588f0:
    // 0x1588f0: 0xaca61b50  sw          $a2, 0x1B50($a1)
    ctx->pc = 0x1588f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6992), GPR_U32(ctx, 6));
    // 0x1588f4: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x1588f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1588f8: 0x8ca61e24  lw          $a2, 0x1E24($a1)
    ctx->pc = 0x1588f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7716)));
    // 0x1588fc: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x1588fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x158900: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x158900u;
    {
        const bool branch_taken_0x158900 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x158904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158900u;
            // 0x158904: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158900) {
            ctx->pc = 0x158910u;
            goto label_158910;
        }
    }
    ctx->pc = 0x158908u;
    // 0x158908: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x158908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15890c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15890cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_158910:
    // 0x158910: 0xaca61b54  sw          $a2, 0x1B54($a1)
    ctx->pc = 0x158910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6996), GPR_U32(ctx, 6));
    // 0x158914: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x158914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158918: 0x8ca61e28  lw          $a2, 0x1E28($a1)
    ctx->pc = 0x158918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7720)));
    // 0x15891c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15891cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x158920: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x158920u;
    {
        const bool branch_taken_0x158920 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x158924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158920u;
            // 0x158924: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158920) {
            ctx->pc = 0x158930u;
            goto label_158930;
        }
    }
    ctx->pc = 0x158928u;
    // 0x158928: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x158928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15892c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15892cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_158930:
    // 0x158930: 0xaca61b58  sw          $a2, 0x1B58($a1)
    ctx->pc = 0x158930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7000), GPR_U32(ctx, 6));
    // 0x158934: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x158934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158938: 0x8ca61e2c  lw          $a2, 0x1E2C($a1)
    ctx->pc = 0x158938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7724)));
    // 0x15893c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15893cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x158940: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x158940u;
    {
        const bool branch_taken_0x158940 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x158944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158940u;
            // 0x158944: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158940) {
            ctx->pc = 0x158950u;
            goto label_158950;
        }
    }
    ctx->pc = 0x158948u;
    // 0x158948: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x158948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15894c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15894cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_158950:
    // 0x158950: 0xaca61b5c  sw          $a2, 0x1B5C($a1)
    ctx->pc = 0x158950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7004), GPR_U32(ctx, 6));
    // 0x158954: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x158954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158958: 0x8ca61e30  lw          $a2, 0x1E30($a1)
    ctx->pc = 0x158958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7728)));
    // 0x15895c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x15895cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x158960: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x158960u;
    {
        const bool branch_taken_0x158960 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x158964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158960u;
            // 0x158964: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158960) {
            ctx->pc = 0x158970u;
            goto label_158970;
        }
    }
    ctx->pc = 0x158968u;
    // 0x158968: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15896c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x15896cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_158970:
    // 0x158970: 0xaca61b60  sw          $a2, 0x1B60($a1)
    ctx->pc = 0x158970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 6));
    // 0x158974: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x158974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x158978: 0x2865000c  slti        $a1, $v1, 0xC
    ctx->pc = 0x158978u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x15897c: 0x14a0ffbc  bnez        $a1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x15897Cu;
    {
        const bool branch_taken_0x15897c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x158980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15897Cu;
            // 0x158980: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15897c) {
            ctx->pc = 0x158870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158870;
        }
    }
    ctx->pc = 0x158984u;
    // 0x158984: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x158984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x158988: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x158988u;
    {
        const bool branch_taken_0x158988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158988u;
            // 0x15898c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158988) {
            ctx->pc = 0x1589C4u;
            goto label_1589c4;
        }
    }
    ctx->pc = 0x158990u;
label_158990:
    // 0x158990: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x158990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x158994: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x158994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158998: 0x8ce41e14  lw          $a0, 0x1E14($a3)
    ctx->pc = 0x158998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7700)));
    // 0x15899c: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x15899cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1589a0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1589A0u;
    {
        const bool branch_taken_0x1589a0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1589A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589A0u;
            // 0x1589a4: 0x52043  sra         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589a0) {
            ctx->pc = 0x1589B0u;
            goto label_1589b0;
        }
    }
    ctx->pc = 0x1589A8u;
    // 0x1589a8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1589a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1589ac: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1589acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_1589b0:
    // 0x1589b0: 0xace41b44  sw          $a0, 0x1B44($a3)
    ctx->pc = 0x1589b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 4));
    // 0x1589b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1589b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1589b8: 0x28640014  slti        $a0, $v1, 0x14
    ctx->pc = 0x1589b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1589bc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1589BCu;
    {
        const bool branch_taken_0x1589bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1589C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589BCu;
            // 0x1589c0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589bc) {
            ctx->pc = 0x158990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158990;
        }
    }
    ctx->pc = 0x1589C4u;
label_1589c4:
    // 0x1589c4: 0x0  nop
    ctx->pc = 0x1589c4u;
    // NOP
    // 0x1589c8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1589c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1589cc: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1589ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1589d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1589d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1589d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1589d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1589d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1589d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1589dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1589dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1589e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1589e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1589e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1589e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1589e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1589e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1589ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1589ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1589f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1589f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1589f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1589F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1589F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589F4u;
            // 0x1589f8: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1589FCu;
}
