#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RandomMapMainProc__11CAutoMapGenFv
// Address: 0x1d89c0 - 0x1d8de8
void RandomMapMainProc__11CAutoMapGenFv_0x1d89c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RandomMapMainProc__11CAutoMapGenFv_0x1d89c0");
#endif

    switch (ctx->pc) {
        case 0x1d89fcu: goto label_1d89fc;
        case 0x1d8a1cu: goto label_1d8a1c;
        case 0x1d8a28u: goto label_1d8a28;
        case 0x1d8a54u: goto label_1d8a54;
        case 0x1d8ac0u: goto label_1d8ac0;
        case 0x1d8ad8u: goto label_1d8ad8;
        case 0x1d8aecu: goto label_1d8aec;
        case 0x1d8afcu: goto label_1d8afc;
        case 0x1d8b14u: goto label_1d8b14;
        case 0x1d8b20u: goto label_1d8b20;
        case 0x1d8b2cu: goto label_1d8b2c;
        case 0x1d8b3cu: goto label_1d8b3c;
        case 0x1d8b54u: goto label_1d8b54;
        case 0x1d8b68u: goto label_1d8b68;
        case 0x1d8b74u: goto label_1d8b74;
        case 0x1d8b84u: goto label_1d8b84;
        case 0x1d8b88u: goto label_1d8b88;
        case 0x1d8b94u: goto label_1d8b94;
        case 0x1d8ba4u: goto label_1d8ba4;
        case 0x1d8bbcu: goto label_1d8bbc;
        case 0x1d8bc8u: goto label_1d8bc8;
        case 0x1d8bfcu: goto label_1d8bfc;
        case 0x1d8c3cu: goto label_1d8c3c;
        case 0x1d8c4cu: goto label_1d8c4c;
        case 0x1d8c54u: goto label_1d8c54;
        case 0x1d8c60u: goto label_1d8c60;
        case 0x1d8c94u: goto label_1d8c94;
        case 0x1d8cb0u: goto label_1d8cb0;
        case 0x1d8cc0u: goto label_1d8cc0;
        case 0x1d8cccu: goto label_1d8ccc;
        case 0x1d8ce8u: goto label_1d8ce8;
        case 0x1d8cf0u: goto label_1d8cf0;
        case 0x1d8cf8u: goto label_1d8cf8;
        case 0x1d8d00u: goto label_1d8d00;
        case 0x1d8d1cu: goto label_1d8d1c;
        case 0x1d8d28u: goto label_1d8d28;
        case 0x1d8d40u: goto label_1d8d40;
        case 0x1d8d4cu: goto label_1d8d4c;
        case 0x1d8d68u: goto label_1d8d68;
        case 0x1d8d80u: goto label_1d8d80;
        case 0x1d8d98u: goto label_1d8d98;
        case 0x1d8db0u: goto label_1d8db0;
        case 0x1d8dbcu: goto label_1d8dbc;
        default: break;
    }

    ctx->pc = 0x1d89c0u;

    // 0x1d89c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d89c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d89c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d89c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1d89cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d89ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d89d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d89d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d89d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d89d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d89d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d89d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d89dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d89dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d89e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d89e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d89e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d89e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d89e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d89e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d89ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d89ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89f0: 0xa4820038  sh          $v0, 0x38($a0)
    ctx->pc = 0x1d89f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d89f4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D89F4u;
    SET_GPR_U32(ctx, 31, 0x1D89FCu);
    ctx->pc = 0x1D89F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89F4u;
            // 0x1d89f8: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89FCu; }
        if (ctx->pc != 0x1D89FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89FCu; }
        if (ctx->pc != 0x1D89FCu) { return; }
    }
    ctx->pc = 0x1D89FCu;
label_1d89fc:
    // 0x1d89fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d89fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a00: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1d8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x1d8a04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8A04u;
    {
        const bool branch_taken_0x1d8a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A04u;
            // 0x1d8a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a04) {
            ctx->pc = 0x1D8A20u;
            goto label_1d8a20;
        }
    }
    ctx->pc = 0x1D8A0Cu;
    // 0x1d8a0c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1d8a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a14: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1D8A14u;
    SET_GPR_U32(ctx, 31, 0x1D8A1Cu);
    ctx->pc = 0x1D8A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A14u;
            // 0x1d8a18: 0x24847e58  addiu       $a0, $a0, 0x7E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A1Cu; }
        if (ctx->pc != 0x1D8A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A1Cu; }
        if (ctx->pc != 0x1D8A1Cu) { return; }
    }
    ctx->pc = 0x1D8A1Cu;
label_1d8a1c:
    // 0x1d8a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8a20:
    // 0x1d8a20: 0xc04a0e6  jal         func_128398
    ctx->pc = 0x1D8A20u;
    SET_GPR_U32(ctx, 31, 0x1D8A28u);
    ctx->pc = 0x128398u;
    if (runtime->hasFunction(0x128398u)) {
        auto targetFn = runtime->lookupFunction(0x128398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A28u; }
        if (ctx->pc != 0x1D8A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        srand_0x128398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A28u; }
        if (ctx->pc != 0x1D8A28u) { return; }
    }
    ctx->pc = 0x1D8A28u;
label_1d8a28:
    // 0x1d8a28: 0x8f878da8  lw          $a3, -0x7258($gp)
    ctx->pc = 0x1d8a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x1d8a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a30: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1d8a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a38: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1d8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d8a3c: 0x24500014  addiu       $s0, $v0, 0x14
    ctx->pc = 0x1d8a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1d8a40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8a44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d8a48: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x1d8a48u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d8a4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D8A4Cu;
    {
        const bool branch_taken_0x1d8a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A4Cu;
            // 0x1d8a50: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a4c) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D8A54u;
label_1d8a54:
    // 0x1d8a54: 0x8e2201cc  lw          $v0, 0x1CC($s1)
    ctx->pc = 0x1d8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x1d8a58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d8a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d8a5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8a60: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x1d8a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d8a64: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x1d8a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x1d8a68: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x1d8a68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d8a6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d8a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d8a70: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x1d8a70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d8a74: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1d8a74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d8a78: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x1d8a78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d8a7c: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x1d8a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d8a80: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x1d8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x1d8a84: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1d8a88:
    // 0x1d8a88: 0x862301b8  lh          $v1, 0x1B8($s1)
    ctx->pc = 0x1d8a88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1d8a8c: 0x862201ba  lh          $v0, 0x1BA($s1)
    ctx->pc = 0x1d8a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 442)));
    // 0x1d8a90: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1d8a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d8a94: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d8a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d8a98: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D8A98u;
    {
        const bool branch_taken_0x1d8a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a98) {
            ctx->pc = 0x1D8A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8a54;
        }
    }
    ctx->pc = 0x1D8AA0u;
    // 0x1d8aa0: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x1d8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
    // 0x1d8aa4: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x1d8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
    // 0x1d8aa8: 0xae2001fc  sw          $zero, 0x1FC($s1)
    ctx->pc = 0x1d8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 508), GPR_U32(ctx, 0));
    // 0x1d8aac: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x1d8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
    // 0x1d8ab0: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x1d8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
    // 0x1d8ab4: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x1d8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x1d8ab8: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x1d8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x1d8abc: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1d8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
label_1d8ac0:
    // 0x1d8ac0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1d8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1d8ac4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d8ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d8ac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8AC8u;
    {
        const bool branch_taken_0x1d8ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AC8u;
            // 0x1d8acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ac8) {
            ctx->pc = 0x1D8AE0u;
            goto label_1d8ae0;
        }
    }
    ctx->pc = 0x1D8AD0u;
    // 0x1d8ad0: 0xc0761f0  jal         func_1D87C0
    ctx->pc = 0x1D8AD0u;
    SET_GPR_U32(ctx, 31, 0x1D8AD8u);
    ctx->pc = 0x1D8AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AD0u;
            // 0x1d8ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D87C0u;
    if (runtime->hasFunction(0x1D87C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D87C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AD8u; }
        if (ctx->pc != 0x1D8AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatFixedMap__11CAutoMapGenFi_0x1d87c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AD8u; }
        if (ctx->pc != 0x1D8AD8u) { return; }
    }
    ctx->pc = 0x1D8AD8u;
label_1d8ad8:
    // 0x1d8ad8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D8AD8u;
    {
        const bool branch_taken_0x1d8ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AD8u;
            // 0x1d8adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ad8) {
            ctx->pc = 0x1D8B14u;
            goto label_1d8b14;
        }
    }
    ctx->pc = 0x1D8AE0u;
label_1d8ae0:
    // 0x1d8ae0: 0x862201b8  lh          $v0, 0x1B8($s1)
    ctx->pc = 0x1d8ae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1d8ae4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8AE4u;
    SET_GPR_U32(ctx, 31, 0x1D8AECu);
    ctx->pc = 0x1D8AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AE4u;
            // 0x1d8ae8: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AECu; }
        if (ctx->pc != 0x1D8AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AECu; }
        if (ctx->pc != 0x1D8AECu) { return; }
    }
    ctx->pc = 0x1D8AECu;
label_1d8aec:
    // 0x1d8aec: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1d8aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8af0: 0x862201ba  lh          $v0, 0x1BA($s1)
    ctx->pc = 0x1d8af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 442)));
    // 0x1d8af4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8AF4u;
    SET_GPR_U32(ctx, 31, 0x1D8AFCu);
    ctx->pc = 0x1D8AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AF4u;
            // 0x1d8af8: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AFCu; }
        if (ctx->pc != 0x1D8AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AFCu; }
        if (ctx->pc != 0x1D8AFCu) { return; }
    }
    ctx->pc = 0x1D8AFCu;
label_1d8afc:
    // 0x1d8afc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b00: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1d8b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b0c: 0xc0756b0  jal         func_1D5AC0
    ctx->pc = 0x1D8B0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B14u);
    ctx->pc = 0x1D8B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B0Cu;
            // 0x1d8b10: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AC0u;
    if (runtime->hasFunction(0x1D5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B14u; }
        if (ctx->pc != 0x1D8B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatRoom__11CAutoMapGenFiiii_0x1d5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B14u; }
        if (ctx->pc != 0x1D8B14u) { return; }
    }
    ctx->pc = 0x1D8B14u;
label_1d8b14:
    // 0x1d8b14: 0x0  nop
    ctx->pc = 0x1d8b14u;
    // NOP
    // 0x1d8b18: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D8B18u;
    {
        const bool branch_taken_0x1d8b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b18) {
            ctx->pc = 0x1D8AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8ac0;
        }
    }
    ctx->pc = 0x1D8B20u;
label_1d8b20:
    // 0x1d8b20: 0x862201b8  lh          $v0, 0x1B8($s1)
    ctx->pc = 0x1d8b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1d8b24: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8B24u;
    SET_GPR_U32(ctx, 31, 0x1D8B2Cu);
    ctx->pc = 0x1D8B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B24u;
            // 0x1d8b28: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B2Cu; }
        if (ctx->pc != 0x1D8B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B2Cu; }
        if (ctx->pc != 0x1D8B2Cu) { return; }
    }
    ctx->pc = 0x1D8B2Cu;
label_1d8b2c:
    // 0x1d8b2c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1d8b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8b30: 0x862201ba  lh          $v0, 0x1BA($s1)
    ctx->pc = 0x1d8b30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 442)));
    // 0x1d8b34: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8B34u;
    SET_GPR_U32(ctx, 31, 0x1D8B3Cu);
    ctx->pc = 0x1D8B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B34u;
            // 0x1d8b38: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B3Cu; }
        if (ctx->pc != 0x1D8B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B3Cu; }
        if (ctx->pc != 0x1D8B3Cu) { return; }
    }
    ctx->pc = 0x1D8B3Cu;
label_1d8b3c:
    // 0x1d8b3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b40: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8b4c: 0xc0756b0  jal         func_1D5AC0
    ctx->pc = 0x1D8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B54u);
    ctx->pc = 0x1D8B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B4Cu;
            // 0x1d8b50: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AC0u;
    if (runtime->hasFunction(0x1D5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B54u; }
        if (ctx->pc != 0x1D8B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatRoom__11CAutoMapGenFiiii_0x1d5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B54u; }
        if (ctx->pc != 0x1D8B54u) { return; }
    }
    ctx->pc = 0x1D8B54u;
label_1d8b54:
    // 0x1d8b54: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D8B54u;
    {
        const bool branch_taken_0x1d8b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B54u;
            // 0x1d8b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b54) {
            ctx->pc = 0x1D8B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8b20;
        }
    }
    ctx->pc = 0x1D8B5Cu;
    // 0x1d8b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b60: 0xc075864  jal         func_1D6190
    ctx->pc = 0x1D8B60u;
    SET_GPR_U32(ctx, 31, 0x1D8B68u);
    ctx->pc = 0x1D8B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B60u;
            // 0x1d8b64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6190u;
    if (runtime->hasFunction(0x1D6190u)) {
        auto targetFn = runtime->lookupFunction(0x1D6190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B68u; }
        if (ctx->pc != 0x1D8B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RoomLink__11CAutoMapGenFii_0x1d6190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B68u; }
        if (ctx->pc != 0x1D8B68u) { return; }
    }
    ctx->pc = 0x1D8B68u;
label_1d8b68:
    // 0x1d8b68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8b6c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B74u);
    ctx->pc = 0x1D8B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B6Cu;
            // 0x1d8b70: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B74u; }
        if (ctx->pc != 0x1D8B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B74u; }
        if (ctx->pc != 0x1D8B74u) { return; }
    }
    ctx->pc = 0x1D8B74u;
label_1d8b74:
    // 0x1d8b74: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x1d8b74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d8b78: 0x2a810003  slti        $at, $s4, 0x3
    ctx->pc = 0x1d8b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d8b7c: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D8B7Cu;
    {
        const bool branch_taken_0x1d8b7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B7Cu;
            // 0x1d8b80: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b7c) {
            ctx->pc = 0x1D8C2Cu;
            goto label_1d8c2c;
        }
    }
    ctx->pc = 0x1D8B84u;
label_1d8b84:
    // 0x1d8b84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d8b84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8b88:
    // 0x1d8b88: 0x862201b8  lh          $v0, 0x1B8($s1)
    ctx->pc = 0x1d8b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1d8b8c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8B8Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B94u);
    ctx->pc = 0x1D8B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B8Cu;
            // 0x1d8b90: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B94u; }
        if (ctx->pc != 0x1D8B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B94u; }
        if (ctx->pc != 0x1D8B94u) { return; }
    }
    ctx->pc = 0x1D8B94u;
label_1d8b94:
    // 0x1d8b94: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1d8b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8b98: 0x862201ba  lh          $v0, 0x1BA($s1)
    ctx->pc = 0x1d8b98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 442)));
    // 0x1d8b9c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D8BA4u);
    ctx->pc = 0x1D8BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B9Cu;
            // 0x1d8ba0: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BA4u; }
        if (ctx->pc != 0x1D8BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BA4u; }
        if (ctx->pc != 0x1D8BA4u) { return; }
    }
    ctx->pc = 0x1D8BA4u;
label_1d8ba4:
    // 0x1d8ba4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ba8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1d8ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bb0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d8bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bb4: 0xc0756b0  jal         func_1D5AC0
    ctx->pc = 0x1D8BB4u;
    SET_GPR_U32(ctx, 31, 0x1D8BBCu);
    ctx->pc = 0x1D8BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BB4u;
            // 0x1d8bb8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AC0u;
    if (runtime->hasFunction(0x1D5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BBCu; }
        if (ctx->pc != 0x1D8BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatRoom__11CAutoMapGenFiiii_0x1d5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BBCu; }
        if (ctx->pc != 0x1D8BBCu) { return; }
    }
    ctx->pc = 0x1D8BBCu;
label_1d8bbc:
    // 0x1d8bbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d8bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bc0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8BC0u;
    SET_GPR_U32(ctx, 31, 0x1D8BC8u);
    ctx->pc = 0x1D8BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BC0u;
            // 0x1d8bc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BC8u; }
        if (ctx->pc != 0x1D8BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BC8u; }
        if (ctx->pc != 0x1D8BC8u) { return; }
    }
    ctx->pc = 0x1D8BC8u;
label_1d8bc8:
    // 0x1d8bc8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1d8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1d8bcc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d8bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d8bd0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BD0u;
    {
        const bool branch_taken_0x1d8bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bd0) {
            ctx->pc = 0x1D8BE4u;
            goto label_1d8be4;
        }
    }
    ctx->pc = 0x1D8BD8u;
    // 0x1d8bd8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8BD8u;
    {
        const bool branch_taken_0x1d8bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bd8) {
            ctx->pc = 0x1D8BE4u;
            goto label_1d8be4;
        }
    }
    ctx->pc = 0x1D8BE0u;
    // 0x1d8be0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8be4:
    // 0x1d8be4: 0x0  nop
    ctx->pc = 0x1d8be4u;
    // NOP
    // 0x1d8be8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8BE8u;
    {
        const bool branch_taken_0x1d8be8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BE8u;
            // 0x1d8bec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8be8) {
            ctx->pc = 0x1D8C08u;
            goto label_1d8c08;
        }
    }
    ctx->pc = 0x1D8BF0u;
    // 0x1d8bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bf4: 0xc075864  jal         func_1D6190
    ctx->pc = 0x1D8BF4u;
    SET_GPR_U32(ctx, 31, 0x1D8BFCu);
    ctx->pc = 0x1D8BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BF4u;
            // 0x1d8bf8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6190u;
    if (runtime->hasFunction(0x1D6190u)) {
        auto targetFn = runtime->lookupFunction(0x1D6190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BFCu; }
        if (ctx->pc != 0x1D8BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RoomLink__11CAutoMapGenFii_0x1d6190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BFCu; }
        if (ctx->pc != 0x1D8BFCu) { return; }
    }
    ctx->pc = 0x1D8BFCu;
label_1d8bfc:
    // 0x1d8bfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d8bfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d8c00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8C00u;
    {
        const bool branch_taken_0x1d8c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C00u;
            // 0x1d8c04: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c00) {
            ctx->pc = 0x1D8C18u;
            goto label_1d8c18;
        }
    }
    ctx->pc = 0x1D8C08u;
label_1d8c08:
    // 0x1d8c08: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d8c08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d8c0c: 0x2ac20080  slti        $v0, $s6, 0x80
    ctx->pc = 0x1d8c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d8c10: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1D8C10u;
    {
        const bool branch_taken_0x1d8c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c10) {
            ctx->pc = 0x1D8B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8b88;
        }
    }
    ctx->pc = 0x1D8C18u;
label_1d8c18:
    // 0x1d8c18: 0x2aa10081  slti        $at, $s5, 0x81
    ctx->pc = 0x1d8c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1d8c1c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8C1Cu;
    {
        const bool branch_taken_0x1d8c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C1Cu;
            // 0x1d8c20: 0x274102a  slt         $v0, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c1c) {
            ctx->pc = 0x1D8C2Cu;
            goto label_1d8c2c;
        }
    }
    ctx->pc = 0x1D8C24u;
    // 0x1d8c24: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1D8C24u;
    {
        const bool branch_taken_0x1d8c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C24u;
            // 0x1d8c28: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c24) {
            ctx->pc = 0x1D8B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8b84;
        }
    }
    ctx->pc = 0x1D8C2Cu;
label_1d8c2c:
    // 0x1d8c2c: 0x0  nop
    ctx->pc = 0x1d8c2cu;
    // NOP
    // 0x1d8c30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d8c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8c34: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8C34u;
    SET_GPR_U32(ctx, 31, 0x1D8C3Cu);
    ctx->pc = 0x1D8C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C34u;
            // 0x1d8c38: 0xae330274  sw          $s3, 0x274($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C3Cu; }
        if (ctx->pc != 0x1D8C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C3Cu; }
        if (ctx->pc != 0x1D8C3Cu) { return; }
    }
    ctx->pc = 0x1D8C3Cu;
label_1d8c3c:
    // 0x1d8c3c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1d8c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8c40: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1d8c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d8c44: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D8C44u;
    {
        const bool branch_taken_0x1d8c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C44u;
            // 0x1d8c48: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c44) {
            ctx->pc = 0x1D8CA4u;
            goto label_1d8ca4;
        }
    }
    ctx->pc = 0x1D8C4Cu;
label_1d8c4c:
    // 0x1d8c4c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C54u);
    ctx->pc = 0x1D8C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C4Cu;
            // 0x1d8c50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C54u; }
        if (ctx->pc != 0x1D8C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C54u; }
        if (ctx->pc != 0x1D8C54u) { return; }
    }
    ctx->pc = 0x1D8C54u;
label_1d8c54:
    // 0x1d8c54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d8c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c58: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8C58u;
    SET_GPR_U32(ctx, 31, 0x1D8C60u);
    ctx->pc = 0x1D8C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C58u;
            // 0x1d8c5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C60u; }
        if (ctx->pc != 0x1D8C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C60u; }
        if (ctx->pc != 0x1D8C60u) { return; }
    }
    ctx->pc = 0x1D8C60u;
label_1d8c60:
    // 0x1d8c60: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1d8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1d8c64: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d8c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d8c68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8C68u;
    {
        const bool branch_taken_0x1d8c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c68) {
            ctx->pc = 0x1D8C80u;
            goto label_1d8c80;
        }
    }
    ctx->pc = 0x1D8C70u;
    // 0x1d8c70: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8C70u;
    {
        const bool branch_taken_0x1d8c70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c70) {
            ctx->pc = 0x1D8C98u;
            goto label_1d8c98;
        }
    }
    ctx->pc = 0x1D8C78u;
    // 0x1d8c78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8C78u;
    {
        const bool branch_taken_0x1d8c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c78) {
            ctx->pc = 0x1D8C98u;
            goto label_1d8c98;
        }
    }
    ctx->pc = 0x1D8C80u;
label_1d8c80:
    // 0x1d8c80: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8C80u;
    {
        const bool branch_taken_0x1d8c80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C80u;
            // 0x1d8c84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c80) {
            ctx->pc = 0x1D8C98u;
            goto label_1d8c98;
        }
    }
    ctx->pc = 0x1D8C88u;
    // 0x1d8c88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d8c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c8c: 0xc075864  jal         func_1D6190
    ctx->pc = 0x1D8C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C94u);
    ctx->pc = 0x1D8C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C8Cu;
            // 0x1d8c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6190u;
    if (runtime->hasFunction(0x1D6190u)) {
        auto targetFn = runtime->lookupFunction(0x1D6190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C94u; }
        if (ctx->pc != 0x1D8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RoomLink__11CAutoMapGenFii_0x1d6190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C94u; }
        if (ctx->pc != 0x1D8C94u) { return; }
    }
    ctx->pc = 0x1D8C94u;
label_1d8c94:
    // 0x1d8c94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d8c94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1d8c98:
    // 0x1d8c98: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x1d8c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d8c9c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D8C9Cu;
    {
        const bool branch_taken_0x1d8c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c9c) {
            ctx->pc = 0x1D8C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8c4c;
        }
    }
    ctx->pc = 0x1D8CA4u;
label_1d8ca4:
    // 0x1d8ca4: 0x0  nop
    ctx->pc = 0x1d8ca4u;
    // NOP
    // 0x1d8ca8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8CA8u;
    SET_GPR_U32(ctx, 31, 0x1D8CB0u);
    ctx->pc = 0x1D8CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CA8u;
            // 0x1d8cac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CB0u; }
        if (ctx->pc != 0x1D8CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CB0u; }
        if (ctx->pc != 0x1D8CB0u) { return; }
    }
    ctx->pc = 0x1D8CB0u;
label_1d8cb0:
    // 0x1d8cb0: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1d8cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8cb4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1d8cb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d8cb8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8CB8u;
    {
        const bool branch_taken_0x1d8cb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CB8u;
            // 0x1d8cbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8cb8) {
            ctx->pc = 0x1D8CE0u;
            goto label_1d8ce0;
        }
    }
    ctx->pc = 0x1D8CC0u;
label_1d8cc0:
    // 0x1d8cc0: 0x26650032  addiu       $a1, $s3, 0x32
    ctx->pc = 0x1d8cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 50));
    // 0x1d8cc4: 0xc075aac  jal         func_1D6AB0
    ctx->pc = 0x1D8CC4u;
    SET_GPR_U32(ctx, 31, 0x1D8CCCu);
    ctx->pc = 0x1D8CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CC4u;
            // 0x1d8cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6AB0u;
    if (runtime->hasFunction(0x1D6AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CCCu; }
        if (ctx->pc != 0x1D8CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatDummyRoot__11CAutoMapGenFi_0x1d6ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CCCu; }
        if (ctx->pc != 0x1D8CCCu) { return; }
    }
    ctx->pc = 0x1D8CCCu;
label_1d8ccc:
    // 0x1d8ccc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d8cd0: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1d8cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d8cd4: 0x0  nop
    ctx->pc = 0x1d8cd4u;
    // NOP
    // 0x1d8cd8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D8CD8u;
    {
        const bool branch_taken_0x1d8cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cd8) {
            ctx->pc = 0x1D8CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8cc0;
        }
    }
    ctx->pc = 0x1D8CE0u;
label_1d8ce0:
    // 0x1d8ce0: 0xc075c0c  jal         func_1D7030
    ctx->pc = 0x1D8CE0u;
    SET_GPR_U32(ctx, 31, 0x1D8CE8u);
    ctx->pc = 0x1D8CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CE0u;
            // 0x1d8ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7030u;
    if (runtime->hasFunction(0x1D7030u)) {
        auto targetFn = runtime->lookupFunction(0x1D7030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CE8u; }
        if (ctx->pc != 0x1D8CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatTermParts__11CAutoMapGenFv_0x1d7030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CE8u; }
        if (ctx->pc != 0x1D8CE8u) { return; }
    }
    ctx->pc = 0x1D8CE8u;
label_1d8ce8:
    // 0x1d8ce8: 0xc075c0c  jal         func_1D7030
    ctx->pc = 0x1D8CE8u;
    SET_GPR_U32(ctx, 31, 0x1D8CF0u);
    ctx->pc = 0x1D8CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CE8u;
            // 0x1d8cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7030u;
    if (runtime->hasFunction(0x1D7030u)) {
        auto targetFn = runtime->lookupFunction(0x1D7030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CF0u; }
        if (ctx->pc != 0x1D8CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatTermParts__11CAutoMapGenFv_0x1d7030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CF0u; }
        if (ctx->pc != 0x1D8CF0u) { return; }
    }
    ctx->pc = 0x1D8CF0u;
label_1d8cf0:
    // 0x1d8cf0: 0xc075c0c  jal         func_1D7030
    ctx->pc = 0x1D8CF0u;
    SET_GPR_U32(ctx, 31, 0x1D8CF8u);
    ctx->pc = 0x1D8CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CF0u;
            // 0x1d8cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7030u;
    if (runtime->hasFunction(0x1D7030u)) {
        auto targetFn = runtime->lookupFunction(0x1D7030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CF8u; }
        if (ctx->pc != 0x1D8CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatTermParts__11CAutoMapGenFv_0x1d7030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CF8u; }
        if (ctx->pc != 0x1D8CF8u) { return; }
    }
    ctx->pc = 0x1D8CF8u;
label_1d8cf8:
    // 0x1d8cf8: 0xc075e60  jal         func_1D7980
    ctx->pc = 0x1D8CF8u;
    SET_GPR_U32(ctx, 31, 0x1D8D00u);
    ctx->pc = 0x1D8CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CF8u;
            // 0x1d8cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7980u;
    if (runtime->hasFunction(0x1D7980u)) {
        auto targetFn = runtime->lookupFunction(0x1D7980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D00u; }
        if (ctx->pc != 0x1D8D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartsIndex__11CAutoMapGenFv_0x1d7980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D00u; }
        if (ctx->pc != 0x1D8D00u) { return; }
    }
    ctx->pc = 0x1D8D00u;
label_1d8d00:
    // 0x1d8d00: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1d8d04: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d8d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d8d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D08u;
    {
        const bool branch_taken_0x1d8d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D08u;
            // 0x1d8d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d08) {
            ctx->pc = 0x1D8D20u;
            goto label_1d8d20;
        }
    }
    ctx->pc = 0x1D8D10u;
    // 0x1d8d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d14: 0xc07615c  jal         func_1D8570
    ctx->pc = 0x1D8D14u;
    SET_GPR_U32(ctx, 31, 0x1D8D1Cu);
    ctx->pc = 0x1D8D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D14u;
            // 0x1d8d18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8570u;
    if (runtime->hasFunction(0x1D8570u)) {
        auto targetFn = runtime->lookupFunction(0x1D8570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D1Cu; }
        if (ctx->pc != 0x1D8D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInOutPartsIndex__11CAutoMapGenFi_0x1d8570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D1Cu; }
        if (ctx->pc != 0x1D8D1Cu) { return; }
    }
    ctx->pc = 0x1D8D1Cu;
label_1d8d1c:
    // 0x1d8d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d20:
    // 0x1d8d20: 0xc075d80  jal         func_1D7600
    ctx->pc = 0x1D8D20u;
    SET_GPR_U32(ctx, 31, 0x1D8D28u);
    ctx->pc = 0x1D7600u;
    if (runtime->hasFunction(0x1D7600u)) {
        auto targetFn = runtime->lookupFunction(0x1D7600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D28u; }
        if (ctx->pc != 0x1D8D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatDoorRoom__11CAutoMapGenFv_0x1d7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D28u; }
        if (ctx->pc != 0x1D8D28u) { return; }
    }
    ctx->pc = 0x1D8D28u;
label_1d8d28:
    // 0x1d8d28: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1d8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1d8d2c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d8d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d8d30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8D30u;
    {
        const bool branch_taken_0x1d8d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D30u;
            // 0x1d8d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d30) {
            ctx->pc = 0x1D8D44u;
            goto label_1d8d44;
        }
    }
    ctx->pc = 0x1D8D38u;
    // 0x1d8d38: 0xc0761a4  jal         func_1D8690
    ctx->pc = 0x1D8D38u;
    SET_GPR_U32(ctx, 31, 0x1D8D40u);
    ctx->pc = 0x1D8D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D38u;
            // 0x1d8d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8690u;
    if (runtime->hasFunction(0x1D8690u)) {
        auto targetFn = runtime->lookupFunction(0x1D8690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D40u; }
        if (ctx->pc != 0x1D8D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHealingPointIndex__11CAutoMapGenFv_0x1d8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D40u; }
        if (ctx->pc != 0x1D8D40u) { return; }
    }
    ctx->pc = 0x1D8D40u;
label_1d8d40:
    // 0x1d8d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d44:
    // 0x1d8d44: 0xc0be9c4  jal         func_2FA710
    ctx->pc = 0x1D8D44u;
    SET_GPR_U32(ctx, 31, 0x1D8D4Cu);
    ctx->pc = 0x1D8D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D44u;
            // 0x1d8d48: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA710u;
    if (runtime->hasFunction(0x2FA710u)) {
        auto targetFn = runtime->lookupFunction(0x2FA710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D4Cu; }
        if (ctx->pc != 0x1D8D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNextRoot__16CDngFloorManagerFi_0x2fa710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D4Cu; }
        if (ctx->pc != 0x1D8D4Cu) { return; }
    }
    ctx->pc = 0x1D8D4Cu;
label_1d8d4c:
    // 0x1d8d4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d8d54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D54u;
    {
        const bool branch_taken_0x1d8d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D54u;
            // 0x1d8d58: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d54) {
            ctx->pc = 0x1D8D6Cu;
            goto label_1d8d6c;
        }
    }
    ctx->pc = 0x1D8D5Cu;
    // 0x1d8d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d60: 0xc07615c  jal         func_1D8570
    ctx->pc = 0x1D8D60u;
    SET_GPR_U32(ctx, 31, 0x1D8D68u);
    ctx->pc = 0x1D8D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D60u;
            // 0x1d8d64: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8570u;
    if (runtime->hasFunction(0x1D8570u)) {
        auto targetFn = runtime->lookupFunction(0x1D8570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D68u; }
        if (ctx->pc != 0x1D8D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInOutPartsIndex__11CAutoMapGenFi_0x1d8570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D68u; }
        if (ctx->pc != 0x1D8D68u) { return; }
    }
    ctx->pc = 0x1D8D68u;
label_1d8d68:
    // 0x1d8d68: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x1d8d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_1d8d6c:
    // 0x1d8d6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D6Cu;
    {
        const bool branch_taken_0x1d8d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D6Cu;
            // 0x1d8d70: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d6c) {
            ctx->pc = 0x1D8D84u;
            goto label_1d8d84;
        }
    }
    ctx->pc = 0x1D8D74u;
    // 0x1d8d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d78: 0xc07615c  jal         func_1D8570
    ctx->pc = 0x1D8D78u;
    SET_GPR_U32(ctx, 31, 0x1D8D80u);
    ctx->pc = 0x1D8D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D78u;
            // 0x1d8d7c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8570u;
    if (runtime->hasFunction(0x1D8570u)) {
        auto targetFn = runtime->lookupFunction(0x1D8570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D80u; }
        if (ctx->pc != 0x1D8D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInOutPartsIndex__11CAutoMapGenFi_0x1d8570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D80u; }
        if (ctx->pc != 0x1D8D80u) { return; }
    }
    ctx->pc = 0x1D8D80u;
label_1d8d80:
    // 0x1d8d80: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x1d8d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_1d8d84:
    // 0x1d8d84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D84u;
    {
        const bool branch_taken_0x1d8d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D84u;
            // 0x1d8d88: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d84) {
            ctx->pc = 0x1D8D9Cu;
            goto label_1d8d9c;
        }
    }
    ctx->pc = 0x1D8D8Cu;
    // 0x1d8d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d90: 0xc07615c  jal         func_1D8570
    ctx->pc = 0x1D8D90u;
    SET_GPR_U32(ctx, 31, 0x1D8D98u);
    ctx->pc = 0x1D8D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D90u;
            // 0x1d8d94: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8570u;
    if (runtime->hasFunction(0x1D8570u)) {
        auto targetFn = runtime->lookupFunction(0x1D8570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D98u; }
        if (ctx->pc != 0x1D8D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInOutPartsIndex__11CAutoMapGenFi_0x1d8570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D98u; }
        if (ctx->pc != 0x1D8D98u) { return; }
    }
    ctx->pc = 0x1D8D98u;
label_1d8d98:
    // 0x1d8d98: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x1d8d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_1d8d9c:
    // 0x1d8d9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D9Cu;
    {
        const bool branch_taken_0x1d8d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D9Cu;
            // 0x1d8da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d9c) {
            ctx->pc = 0x1D8DB4u;
            goto label_1d8db4;
        }
    }
    ctx->pc = 0x1D8DA4u;
    // 0x1d8da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8da8: 0xc07615c  jal         func_1D8570
    ctx->pc = 0x1D8DA8u;
    SET_GPR_U32(ctx, 31, 0x1D8DB0u);
    ctx->pc = 0x1D8DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DA8u;
            // 0x1d8dac: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8570u;
    if (runtime->hasFunction(0x1D8570u)) {
        auto targetFn = runtime->lookupFunction(0x1D8570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DB0u; }
        if (ctx->pc != 0x1D8DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInOutPartsIndex__11CAutoMapGenFi_0x1d8570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DB0u; }
        if (ctx->pc != 0x1D8DB0u) { return; }
    }
    ctx->pc = 0x1D8DB0u;
label_1d8db0:
    // 0x1d8db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8db4:
    // 0x1d8db4: 0xc07608c  jal         func_1D8230
    ctx->pc = 0x1D8DB4u;
    SET_GPR_U32(ctx, 31, 0x1D8DBCu);
    ctx->pc = 0x1D8230u;
    if (runtime->hasFunction(0x1D8230u)) {
        auto targetFn = runtime->lookupFunction(0x1D8230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DBCu; }
        if (ctx->pc != 0x1D8DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IndexToPartsPlace__11CAutoMapGenFv_0x1d8230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DBCu; }
        if (ctx->pc != 0x1D8DBCu) { return; }
    }
    ctx->pc = 0x1D8DBCu;
label_1d8dbc:
    // 0x1d8dbc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d8dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d8dc0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d8dc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8dc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d8dc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8dc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d8dc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8dcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8dccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8dd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d8dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8dd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DE0u;
            // 0x1d8de4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8DE8u;
}
