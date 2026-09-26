#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadEventViewData__FP1P9mgCMemory
// Address: 0x2d3c10 - 0x2d3e20
void LoadEventViewData__FP1P9mgCMemory_0x2d3c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadEventViewData__FP1P9mgCMemory_0x2d3c10");
#endif

    switch (ctx->pc) {
        case 0x2d3c4cu: goto label_2d3c4c;
        case 0x2d3c5cu: goto label_2d3c5c;
        case 0x2d3c68u: goto label_2d3c68;
        case 0x2d3c74u: goto label_2d3c74;
        case 0x2d3c88u: goto label_2d3c88;
        case 0x2d3cacu: goto label_2d3cac;
        case 0x2d3d28u: goto label_2d3d28;
        case 0x2d3d38u: goto label_2d3d38;
        case 0x2d3d48u: goto label_2d3d48;
        case 0x2d3d54u: goto label_2d3d54;
        case 0x2d3d74u: goto label_2d3d74;
        case 0x2d3d80u: goto label_2d3d80;
        case 0x2d3d9cu: goto label_2d3d9c;
        case 0x2d3dacu: goto label_2d3dac;
        case 0x2d3dbcu: goto label_2d3dbc;
        case 0x2d3ddcu: goto label_2d3ddc;
        default: break;
    }

    ctx->pc = 0x2d3c10u;

    // 0x2d3c10: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x2d3c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
    // 0x2d3c14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d3c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d3c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d3c1c: 0x27a608ac  addiu       $a2, $sp, 0x8AC
    ctx->pc = 0x2d3c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2220));
    // 0x2d3c20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d3c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d3c24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d3c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d3c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d3c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d3c2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d3c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3c34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d3c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d3c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d3c3c: 0x24840690  addiu       $a0, $a0, 0x690
    ctx->pc = 0x2d3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1680));
    // 0x2d3c40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d3c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c44: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2D3C44u;
    SET_GPR_U32(ctx, 31, 0x2D3C4Cu);
    ctx->pc = 0x2D3C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3C44u;
            // 0x2d3c48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C4Cu; }
        if (ctx->pc != 0x2D3C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C4Cu; }
        if (ctx->pc != 0x2D3C4Cu) { return; }
    }
    ctx->pc = 0x2D3C4Cu;
label_2d3c4c:
    // 0x2d3c4c: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2D3C4Cu;
    {
        const bool branch_taken_0x2d3c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3C4Cu;
            // 0x2d3c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c4c) {
            ctx->pc = 0x2D3E00u;
            goto label_2d3e00;
        }
    }
    ctx->pc = 0x2D3C54u;
    // 0x2d3c54: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2D3C54u;
    SET_GPR_U32(ctx, 31, 0x2D3C5Cu);
    ctx->pc = 0x2D3C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3C54u;
            // 0x2d3c58: 0x24050382  addiu       $a1, $zero, 0x382 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 898));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C5Cu; }
        if (ctx->pc != 0x2D3C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C5Cu; }
        if (ctx->pc != 0x2D3C5Cu) { return; }
    }
    ctx->pc = 0x2D3C5Cu;
label_2d3c5c:
    // 0x2d3c5c: 0x24043800  addiu       $a0, $zero, 0x3800
    ctx->pc = 0x2d3c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
    // 0x2d3c60: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2D3C60u;
    SET_GPR_U32(ctx, 31, 0x2D3C68u);
    ctx->pc = 0x2D3C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3C60u;
            // 0x2d3c64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C68u; }
        if (ctx->pc != 0x2D3C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C68u; }
        if (ctx->pc != 0x2D3C68u) { return; }
    }
    ctx->pc = 0x2D3C68u;
label_2d3c68:
    // 0x2d3c68: 0xaf829df4  sw          $v0, -0x620C($gp)
    ctx->pc = 0x2d3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942196), GPR_U32(ctx, 2));
    // 0x2d3c6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d3c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d3c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3c74:
    // 0x2d3c74: 0x8f829df4  lw          $v0, -0x620C($gp)
    ctx->pc = 0x2d3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942196)));
    // 0x2d3c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c7c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2d3c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2d3c80: 0xc049c86  jal         func_127218
    ctx->pc = 0x2D3C80u;
    SET_GPR_U32(ctx, 31, 0x2D3C88u);
    ctx->pc = 0x2D3C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3C80u;
            // 0x2d3c84: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C88u; }
        if (ctx->pc != 0x2D3C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C88u; }
        if (ctx->pc != 0x2D3C88u) { return; }
    }
    ctx->pc = 0x2D3C88u;
label_2d3c88:
    // 0x2d3c88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d3c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d3c8c: 0x2a220200  slti        $v0, $s1, 0x200
    ctx->pc = 0x2d3c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2d3c90: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D3C90u;
    {
        const bool branch_taken_0x2d3c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3C90u;
            // 0x2d3c94: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c90) {
            ctx->pc = 0x2D3C74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3c74;
        }
    }
    ctx->pc = 0x2D3C98u;
    // 0x2d3c98: 0x8fa208ac  lw          $v0, 0x8AC($sp)
    ctx->pc = 0x2d3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2220)));
    // 0x2d3c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d3c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d3ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ca8: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x2d3ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2d3cac:
    // 0x2d3cac: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x2d3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2d3cb0: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x2d3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2d3cb4: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2d3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2d3cb8: 0x24460860  addiu       $a2, $v0, 0x860
    ctx->pc = 0x2d3cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2144));
    // 0x2d3cbc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d3cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d3cc0: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2d3cc4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2d3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2d3cc8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2d3cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2d3ccc: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2d3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2d3cd0: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x2d3cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x2d3cd4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2d3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2d3cd8: 0x24620180  addiu       $v0, $v1, 0x180
    ctx->pc = 0x2d3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2d3cdc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2d3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2d3ce0: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2d3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2d3ce4: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x2d3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x2d3ce8: 0x24620280  addiu       $v0, $v1, 0x280
    ctx->pc = 0x2d3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x2d3cec: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2d3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x2d3cf0: 0x24620300  addiu       $v0, $v1, 0x300
    ctx->pc = 0x2d3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x2d3cf4: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x2d3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x2d3cf8: 0x24620380  addiu       $v0, $v1, 0x380
    ctx->pc = 0x2d3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x2d3cfc: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x2d3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x2d3d00: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x2d3d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d3d04: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D3D04u;
    {
        const bool branch_taken_0x2d3d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D04u;
            // 0x2d3d08: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d04) {
            ctx->pc = 0x2D3CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3cac;
        }
    }
    ctx->pc = 0x2D3D0Cu;
    // 0x2d3d0c: 0x8f929df4  lw          $s2, -0x620C($gp)
    ctx->pc = 0x2d3d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942196)));
    // 0x2d3d10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d3d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d14: 0x27a40860  addiu       $a0, $sp, 0x860
    ctx->pc = 0x2d3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    // 0x2d3d18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d3d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d1c: 0xaf809df8  sw          $zero, -0x6208($gp)
    ctx->pc = 0x2d3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942200), GPR_U32(ctx, 0));
    // 0x2d3d20: 0xc0b4f88  jal         func_2D3E20
    ctx->pc = 0x2D3D20u;
    SET_GPR_U32(ctx, 31, 0x2D3D28u);
    ctx->pc = 0x2D3D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D20u;
            // 0x2d3d24: 0xaf809dfc  sw          $zero, -0x6204($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E20u;
    if (runtime->hasFunction(0x2D3E20u)) {
        auto targetFn = runtime->lookupFunction(0x2D3E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D28u; }
        if (ctx->pc != 0x2D3D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__FPPcPcPc_0x2d3e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D28u; }
        if (ctx->pc != 0x2D3D28u) { return; }
    }
    ctx->pc = 0x2D3D28u;
label_2d3d28:
    // 0x2d3d28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d3d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d2c: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x2d3d2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d3d30: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D3D30u;
    {
        const bool branch_taken_0x2d3d30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d30) {
            ctx->pc = 0x2D3DFCu;
            goto label_2d3dfc;
        }
    }
    ctx->pc = 0x2D3D38u;
label_2d3d38:
    // 0x2d3d38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d3d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d3c: 0x27a40860  addiu       $a0, $sp, 0x860
    ctx->pc = 0x2d3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    // 0x2d3d40: 0xc0b4f88  jal         func_2D3E20
    ctx->pc = 0x2D3D40u;
    SET_GPR_U32(ctx, 31, 0x2D3D48u);
    ctx->pc = 0x2D3D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D40u;
            // 0x2d3d44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E20u;
    if (runtime->hasFunction(0x2D3E20u)) {
        auto targetFn = runtime->lookupFunction(0x2D3E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D48u; }
        if (ctx->pc != 0x2D3D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__FPPcPcPc_0x2d3e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D48u; }
        if (ctx->pc != 0x2D3D48u) { return; }
    }
    ctx->pc = 0x2D3D48u;
label_2d3d48:
    // 0x2d3d48: 0x8fa40860  lw          $a0, 0x860($sp)
    ctx->pc = 0x2d3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x2d3d4c: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2D3D4Cu;
    SET_GPR_U32(ctx, 31, 0x2D3D54u);
    ctx->pc = 0x2D3D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D4Cu;
            // 0x2d3d50: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D54u; }
        if (ctx->pc != 0x2D3D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D54u; }
        if (ctx->pc != 0x2D3D54u) { return; }
    }
    ctx->pc = 0x2D3D54u;
label_2d3d54:
    // 0x2d3d54: 0x8fa40864  lw          $a0, 0x864($sp)
    ctx->pc = 0x2d3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2148)));
    // 0x2d3d58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d3d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d60: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2d3d60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3d64: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3D64u;
    {
        const bool branch_taken_0x2d3d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D64u;
            // 0x2d3d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d64) {
            ctx->pc = 0x2D3D84u;
            goto label_2d3d84;
        }
    }
    ctx->pc = 0x2D3D6Cu;
    // 0x2d3d6c: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2D3D6Cu;
    SET_GPR_U32(ctx, 31, 0x2D3D74u);
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D74u; }
        if (ctx->pc != 0x2D3D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D74u; }
        if (ctx->pc != 0x2D3D74u) { return; }
    }
    ctx->pc = 0x2D3D74u;
label_2d3d74:
    // 0x2d3d74: 0x8fa40868  lw          $a0, 0x868($sp)
    ctx->pc = 0x2d3d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2152)));
    // 0x2d3d78: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2D3D78u;
    SET_GPR_U32(ctx, 31, 0x2D3D80u);
    ctx->pc = 0x2D3D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D78u;
            // 0x2d3d7c: 0x2453ffff  addiu       $s3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D80u; }
        if (ctx->pc != 0x2D3D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D80u; }
        if (ctx->pc != 0x2D3D80u) { return; }
    }
    ctx->pc = 0x2D3D80u;
label_2d3d80:
    // 0x2d3d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d3d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3d84:
    // 0x2d3d84: 0x0  nop
    ctx->pc = 0x2d3d84u;
    // NOP
    // 0x2d3d88: 0xae530010  sw          $s3, 0x10($s2)
    ctx->pc = 0x2d3d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
    // 0x2d3d8c: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2d3d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x2d3d90: 0xae450018  sw          $a1, 0x18($s2)
    ctx->pc = 0x2d3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
    // 0x2d3d94: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x2D3D94u;
    SET_GPR_U32(ctx, 31, 0x2D3D9Cu);
    ctx->pc = 0x2D3D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3D94u;
            // 0x2d3d98: 0x8fa4086c  lw          $a0, 0x86C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D9Cu; }
        if (ctx->pc != 0x2D3D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D9Cu; }
        if (ctx->pc != 0x2D3D9Cu) { return; }
    }
    ctx->pc = 0x2D3D9Cu;
label_2d3d9c:
    // 0x2d3d9c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2d3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2d3da0: 0x8fa40878  lw          $a0, 0x878($sp)
    ctx->pc = 0x2d3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2168)));
    // 0x2d3da4: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2D3DA4u;
    SET_GPR_U32(ctx, 31, 0x2D3DACu);
    ctx->pc = 0x2D3DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DA4u;
            // 0x2d3da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DACu; }
        if (ctx->pc != 0x2D3DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DACu; }
        if (ctx->pc != 0x2D3DACu) { return; }
    }
    ctx->pc = 0x2D3DACu;
label_2d3dac:
    // 0x2d3dac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2d3db0: 0x8fa4087c  lw          $a0, 0x87C($sp)
    ctx->pc = 0x2d3db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2172)));
    // 0x2d3db4: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2D3DB4u;
    SET_GPR_U32(ctx, 31, 0x2D3DBCu);
    ctx->pc = 0x2D3DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DB4u;
            // 0x2d3db8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DBCu; }
        if (ctx->pc != 0x2D3DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DBCu; }
        if (ctx->pc != 0x2D3DBCu) { return; }
    }
    ctx->pc = 0x2D3DBCu;
label_2d3dbc:
    // 0x2d3dbc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2d3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2d3dc0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d3dc4: 0x8f829df8  lw          $v0, -0x6208($gp)
    ctx->pc = 0x2d3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942200)));
    // 0x2d3dc8: 0x24a506a0  addiu       $a1, $a1, 0x6A0
    ctx->pc = 0x2d3dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1696));
    // 0x2d3dcc: 0x8fa40880  lw          $a0, 0x880($sp)
    ctx->pc = 0x2d3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2176)));
    // 0x2d3dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3dd4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2D3DD4u;
    SET_GPR_U32(ctx, 31, 0x2D3DDCu);
    ctx->pc = 0x2D3DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DD4u;
            // 0x2d3dd8: 0xaf829df8  sw          $v0, -0x6208($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DDCu; }
        if (ctx->pc != 0x2D3DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DDCu; }
        if (ctx->pc != 0x2D3DDCu) { return; }
    }
    ctx->pc = 0x2D3DDCu;
label_2d3ddc:
    // 0x2d3ddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3DDCu;
    {
        const bool branch_taken_0x2d3ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ddc) {
            ctx->pc = 0x2D3DF0u;
            goto label_2d3df0;
        }
    }
    ctx->pc = 0x2D3DE4u;
    // 0x2d3de4: 0x8f839dfc  lw          $v1, -0x6204($gp)
    ctx->pc = 0x2d3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942204)));
    // 0x2d3de8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3dec: 0xaf839dfc  sw          $v1, -0x6204($gp)
    ctx->pc = 0x2d3decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942204), GPR_U32(ctx, 3));
label_2d3df0:
    // 0x2d3df0: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x2d3df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d3df4: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D3DF4u;
    {
        const bool branch_taken_0x2d3df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3DF4u;
            // 0x2d3df8: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3df4) {
            ctx->pc = 0x2D3D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3d38;
        }
    }
    ctx->pc = 0x2D3DFCu;
label_2d3dfc:
    // 0x2d3dfc: 0x0  nop
    ctx->pc = 0x2d3dfcu;
    // NOP
label_2d3e00:
    // 0x2d3e00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d3e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3e04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d3e04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3e08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d3e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3e0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d3e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3e18: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E18u;
            // 0x2d3e1c: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3E20u;
}
