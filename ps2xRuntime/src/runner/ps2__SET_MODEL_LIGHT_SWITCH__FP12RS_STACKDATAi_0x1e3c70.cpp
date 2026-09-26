#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MODEL_LIGHT_SWITCH__FP12RS_STACKDATAi
// Address: 0x1e3c70 - 0x1e3d4c
void ps2__SET_MODEL_LIGHT_SWITCH__FP12RS_STACKDATAi_0x1e3c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MODEL_LIGHT_SWITCH__FP12RS_STACKDATAi_0x1e3c70");
#endif

    switch (ctx->pc) {
        case 0x1e3ca8u: goto label_1e3ca8;
        case 0x1e3cc0u: goto label_1e3cc0;
        case 0x1e3cd4u: goto label_1e3cd4;
        case 0x1e3d00u: goto label_1e3d00;
        case 0x1e3d30u: goto label_1e3d30;
        default: break;
    }

    ctx->pc = 0x1e3c70u;

    // 0x1e3c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e3c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e3c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e3c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e3c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e3c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3c80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e3c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c84: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3C84u;
    {
        const bool branch_taken_0x1e3c84 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1E3C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C84u;
            // 0x1e3c88: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c84) {
            ctx->pc = 0x1E3C98u;
            goto label_1e3c98;
        }
    }
    ctx->pc = 0x1E3C8Cu;
    // 0x1e3c8c: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1e3c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e3c90: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3C90u;
    {
        const bool branch_taken_0x1e3c90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C90u;
            // 0x1e3c94: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c90) {
            ctx->pc = 0x1E3CA0u;
            goto label_1e3ca0;
        }
    }
    ctx->pc = 0x1E3C98u;
label_1e3c98:
    // 0x1e3c98: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E3C98u;
    {
        const bool branch_taken_0x1e3c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C98u;
            // 0x1e3c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c98) {
            ctx->pc = 0x1E3D34u;
            goto label_1e3d34;
        }
    }
    ctx->pc = 0x1E3CA0u;
label_1e3ca0:
    // 0x1e3ca0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E3CA0u;
    SET_GPR_U32(ctx, 31, 0x1E3CA8u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CA8u; }
        if (ctx->pc != 0x1E3CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CA8u; }
        if (ctx->pc != 0x1E3CA8u) { return; }
    }
    ctx->pc = 0x1E3CA8u;
label_1e3ca8:
    // 0x1e3ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3cac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3cb0: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3CB0u;
    {
        const bool branch_taken_0x1e3cb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E3CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CB0u;
            // 0x1e3cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cb0) {
            ctx->pc = 0x1E3CC0u;
            goto label_1e3cc0;
        }
    }
    ctx->pc = 0x1E3CB8u;
    // 0x1e3cb8: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E3CB8u;
    SET_GPR_U32(ctx, 31, 0x1E3CC0u);
    ctx->pc = 0x1E3CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CB8u;
            // 0x1e3cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CC0u; }
        if (ctx->pc != 0x1E3CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CC0u; }
        if (ctx->pc != 0x1E3CC0u) { return; }
    }
    ctx->pc = 0x1E3CC0u;
label_1e3cc0:
    // 0x1e3cc0: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3CC4u;
    {
        const bool branch_taken_0x1e3cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CC4u;
            // 0x1e3cc8: 0x8c640070  lw          $a0, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cc4) {
            ctx->pc = 0x1E3CD8u;
            goto label_1e3cd8;
        }
    }
    ctx->pc = 0x1E3CCCu;
    // 0x1e3ccc: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x1E3CCCu;
    SET_GPR_U32(ctx, 31, 0x1E3CD4u);
    ctx->pc = 0x1E3CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CCCu;
            // 0x1e3cd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CD4u; }
        if (ctx->pc != 0x1E3CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CD4u; }
        if (ctx->pc != 0x1E3CD4u) { return; }
    }
    ctx->pc = 0x1E3CD4u;
label_1e3cd4:
    // 0x1e3cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3cd8:
    // 0x1e3cd8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3CD8u;
    {
        const bool branch_taken_0x1e3cd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CD8u;
            // 0x1e3cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cd8) {
            ctx->pc = 0x1E3CE8u;
            goto label_1e3ce8;
        }
    }
    ctx->pc = 0x1E3CE0u;
    // 0x1e3ce0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E3CE0u;
    {
        const bool branch_taken_0x1e3ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CE0u;
            // 0x1e3ce4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ce0) {
            ctx->pc = 0x1E3D38u;
            goto label_1e3d38;
        }
    }
    ctx->pc = 0x1E3CE8u;
label_1e3ce8:
    // 0x1e3ce8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3CE8u;
    {
        const bool branch_taken_0x1e3ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CE8u;
            // 0x1e3cec: 0x8c8500f4  lw          $a1, 0xF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ce8) {
            ctx->pc = 0x1E3D08u;
            goto label_1e3d08;
        }
    }
    ctx->pc = 0x1E3CF0u;
    // 0x1e3cf0: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x1e3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
    // 0x1e3cf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3cf8: 0xc04de54  jal         func_137950
    ctx->pc = 0x1E3CF8u;
    SET_GPR_U32(ctx, 31, 0x1E3D00u);
    ctx->pc = 0x1E3CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CF8u;
            // 0x1e3cfc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D00u; }
        if (ctx->pc != 0x1E3D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D00u; }
        if (ctx->pc != 0x1E3D00u) { return; }
    }
    ctx->pc = 0x1E3D00u;
label_1e3d00:
    // 0x1e3d00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E3D00u;
    {
        const bool branch_taken_0x1e3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D00u;
            // 0x1e3d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d00) {
            ctx->pc = 0x1E3D34u;
            goto label_1e3d34;
        }
    }
    ctx->pc = 0x1E3D08u;
label_1e3d08:
    // 0x1e3d08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3d0c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e3d10: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1e3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1e3d14: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x1e3d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
    // 0x1e3d18: 0xaca30070  sw          $v1, 0x70($a1)
    ctx->pc = 0x1e3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
    // 0x1e3d1c: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x1e3d1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e3d20: 0xaca30074  sw          $v1, 0x74($a1)
    ctx->pc = 0x1e3d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 3));
    // 0x1e3d24: 0xaca30078  sw          $v1, 0x78($a1)
    ctx->pc = 0x1e3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 3));
    // 0x1e3d28: 0xc04de54  jal         func_137950
    ctx->pc = 0x1E3D28u;
    SET_GPR_U32(ctx, 31, 0x1E3D30u);
    ctx->pc = 0x1E3D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D28u;
            // 0x1e3d2c: 0xaca3007c  sw          $v1, 0x7C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D30u; }
        if (ctx->pc != 0x1E3D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D30u; }
        if (ctx->pc != 0x1E3D30u) { return; }
    }
    ctx->pc = 0x1E3D30u;
label_1e3d30:
    // 0x1e3d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3d34:
    // 0x1e3d34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e3d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3d38:
    // 0x1e3d38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D44u;
            // 0x1e3d48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3D4Cu;
}
