#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__18CMapEffectsManegerFP9mgCCamera
// Address: 0x1c4c70 - 0x1c4de4
void Draw__18CMapEffectsManegerFP9mgCCamera_0x1c4c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__18CMapEffectsManegerFP9mgCCamera_0x1c4c70");
#endif

    switch (ctx->pc) {
        case 0x1c4c98u: goto label_1c4c98;
        case 0x1c4cc8u: goto label_1c4cc8;
        case 0x1c4cd0u: goto label_1c4cd0;
        case 0x1c4ce8u: goto label_1c4ce8;
        case 0x1c4d00u: goto label_1c4d00;
        case 0x1c4d0cu: goto label_1c4d0c;
        case 0x1c4d28u: goto label_1c4d28;
        case 0x1c4d34u: goto label_1c4d34;
        case 0x1c4d40u: goto label_1c4d40;
        case 0x1c4d4cu: goto label_1c4d4c;
        case 0x1c4d58u: goto label_1c4d58;
        case 0x1c4d64u: goto label_1c4d64;
        case 0x1c4d70u: goto label_1c4d70;
        case 0x1c4d7cu: goto label_1c4d7c;
        case 0x1c4d88u: goto label_1c4d88;
        case 0x1c4da8u: goto label_1c4da8;
        case 0x1c4dc8u: goto label_1c4dc8;
        default: break;
    }

    ctx->pc = 0x1c4c70u;

    // 0x1c4c70: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1c4c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1c4c74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c4c78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c4c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c4c7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c4c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4c84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c4c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c4c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4c90: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C4C90u;
    SET_GPR_U32(ctx, 31, 0x1C4C98u);
    ctx->pc = 0x1C4C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C90u;
            // 0x1c4c94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C98u; }
        if (ctx->pc != 0x1C4C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C98u; }
        if (ctx->pc != 0x1C4C98u) { return; }
    }
    ctx->pc = 0x1C4C98u;
label_1c4c98:
    // 0x1c4c98: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1c4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c4c9c: 0x460004a  bltz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C4C9Cu;
    {
        const bool branch_taken_0x1c4c9c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1c4c9c) {
            ctx->pc = 0x1C4DC8u;
            goto label_1c4dc8;
        }
    }
    ctx->pc = 0x1C4CA4u;
    // 0x1c4ca4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1c4ca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c4ca8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4CA8u;
    {
        const bool branch_taken_0x1c4ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CA8u;
            // 0x1c4cac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ca8) {
            ctx->pc = 0x1C4CBCu;
            goto label_1c4cbc;
        }
    }
    ctx->pc = 0x1C4CB0u;
    // 0x1c4cb0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1C4CB0u;
    {
        const bool branch_taken_0x1c4cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CB0u;
            // 0x1c4cb4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cb0) {
            ctx->pc = 0x1C4DCCu;
            goto label_1c4dcc;
        }
    }
    ctx->pc = 0x1C4CB8u;
    // 0x1c4cb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c4cbc:
    // 0x1c4cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cc0: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C4CC0u;
    SET_GPR_U32(ctx, 31, 0x1C4CC8u);
    ctx->pc = 0x1C4CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CC0u;
            // 0x1c4cc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CC8u; }
        if (ctx->pc != 0x1C4CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CC8u; }
        if (ctx->pc != 0x1C4CC8u) { return; }
    }
    ctx->pc = 0x1C4CC8u;
label_1c4cc8:
    // 0x1c4cc8: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C4CC8u;
    SET_GPR_U32(ctx, 31, 0x1C4CD0u);
    ctx->pc = 0x1C4CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CC8u;
            // 0x1c4ccc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CD0u; }
        if (ctx->pc != 0x1C4CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CD0u; }
        if (ctx->pc != 0x1C4CD0u) { return; }
    }
    ctx->pc = 0x1C4CD0u;
label_1c4cd0:
    // 0x1c4cd0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1c4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c4cd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4CD4u;
    {
        const bool branch_taken_0x1c4cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4cd4) {
            ctx->pc = 0x1C4CE8u;
            goto label_1c4ce8;
        }
    }
    ctx->pc = 0x1C4CDCu;
    // 0x1c4cdc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4ce0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C4CE0u;
    SET_GPR_U32(ctx, 31, 0x1C4CE8u);
    ctx->pc = 0x1C4CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CE0u;
            // 0x1c4ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CE8u; }
        if (ctx->pc != 0x1C4CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CE8u; }
        if (ctx->pc != 0x1C4CE8u) { return; }
    }
    ctx->pc = 0x1C4CE8u;
label_1c4ce8:
    // 0x1c4ce8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1c4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c4cec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c4cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4cf0: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4CF0u;
    {
        const bool branch_taken_0x1c4cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c4cf0) {
            ctx->pc = 0x1C4D0Cu;
            goto label_1c4d0c;
        }
    }
    ctx->pc = 0x1C4CF8u;
    // 0x1c4cf8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C4CF8u;
    SET_GPR_U32(ctx, 31, 0x1C4D00u);
    ctx->pc = 0x1C4CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CF8u;
            // 0x1c4cfc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D00u; }
        if (ctx->pc != 0x1C4D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D00u; }
        if (ctx->pc != 0x1C4D00u) { return; }
    }
    ctx->pc = 0x1C4D00u;
label_1c4d00:
    // 0x1c4d00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4d04: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C4D04u;
    SET_GPR_U32(ctx, 31, 0x1C4D0Cu);
    ctx->pc = 0x1C4D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D04u;
            // 0x1c4d08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D0Cu; }
        if (ctx->pc != 0x1C4D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D0Cu; }
        if (ctx->pc != 0x1C4D0Cu) { return; }
    }
    ctx->pc = 0x1C4D0Cu;
label_1c4d0c:
    // 0x1c4d0c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1c4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c4d10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4d14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4D14u;
    {
        const bool branch_taken_0x1c4d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D14u;
            // 0x1c4d18: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d14) {
            ctx->pc = 0x1C4D38u;
            goto label_1c4d38;
        }
    }
    ctx->pc = 0x1C4D1Cu;
    // 0x1c4d1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4d20: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C4D20u;
    SET_GPR_U32(ctx, 31, 0x1C4D28u);
    ctx->pc = 0x1C4D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D20u;
            // 0x1c4d24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D28u; }
        if (ctx->pc != 0x1C4D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D28u; }
        if (ctx->pc != 0x1C4D28u) { return; }
    }
    ctx->pc = 0x1C4D28u;
label_1c4d28:
    // 0x1c4d28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4d2c: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D34u);
    ctx->pc = 0x1C4D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D2Cu;
            // 0x1c4d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D34u; }
        if (ctx->pc != 0x1C4D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D34u; }
        if (ctx->pc != 0x1C4D34u) { return; }
    }
    ctx->pc = 0x1C4D34u;
label_1c4d34:
    // 0x1c4d34: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c4d38:
    // 0x1c4d38: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C4D38u;
    SET_GPR_U32(ctx, 31, 0x1C4D40u);
    ctx->pc = 0x1C4D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D38u;
            // 0x1c4d3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D40u; }
        if (ctx->pc != 0x1C4D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D40u; }
        if (ctx->pc != 0x1C4D40u) { return; }
    }
    ctx->pc = 0x1C4D40u;
label_1c4d40:
    // 0x1c4d40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4d44: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C4D44u;
    SET_GPR_U32(ctx, 31, 0x1C4D4Cu);
    ctx->pc = 0x1C4D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D44u;
            // 0x1c4d48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D4Cu; }
        if (ctx->pc != 0x1C4D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D4Cu; }
        if (ctx->pc != 0x1C4D4Cu) { return; }
    }
    ctx->pc = 0x1C4D4Cu;
label_1c4d4c:
    // 0x1c4d4c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4d50: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C4D50u;
    SET_GPR_U32(ctx, 31, 0x1C4D58u);
    ctx->pc = 0x1C4D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D50u;
            // 0x1c4d54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D58u; }
        if (ctx->pc != 0x1C4D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D58u; }
        if (ctx->pc != 0x1C4D58u) { return; }
    }
    ctx->pc = 0x1C4D58u;
label_1c4d58:
    // 0x1c4d58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4d5c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1C4D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D64u);
    ctx->pc = 0x1C4D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D5Cu;
            // 0x1c4d60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D64u; }
        if (ctx->pc != 0x1C4D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D64u; }
        if (ctx->pc != 0x1C4D64u) { return; }
    }
    ctx->pc = 0x1C4D64u;
label_1c4d64:
    // 0x1c4d64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4d68: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C4D68u;
    SET_GPR_U32(ctx, 31, 0x1C4D70u);
    ctx->pc = 0x1C4D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D68u;
            // 0x1c4d6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D70u; }
        if (ctx->pc != 0x1C4D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D70u; }
        if (ctx->pc != 0x1C4D70u) { return; }
    }
    ctx->pc = 0x1C4D70u;
label_1c4d70:
    // 0x1c4d70: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1c4d74: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C4D74u;
    SET_GPR_U32(ctx, 31, 0x1C4D7Cu);
    ctx->pc = 0x1C4D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D74u;
            // 0x1c4d78: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D7Cu; }
        if (ctx->pc != 0x1C4D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D7Cu; }
        if (ctx->pc != 0x1C4D7Cu) { return; }
    }
    ctx->pc = 0x1C4D7Cu;
label_1c4d7c:
    // 0x1c4d7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c4d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C4D80u;
    {
        const bool branch_taken_0x1c4d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D80u;
            // 0x1c4d84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d80) {
            ctx->pc = 0x1C4DB0u;
            goto label_1c4db0;
        }
    }
    ctx->pc = 0x1C4D88u;
label_1c4d88:
    // 0x1c4d88: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1c4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c4d8c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c4d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4d90: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1c4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c4d94: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4D94u;
    {
        const bool branch_taken_0x1c4d94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c4d94) {
            ctx->pc = 0x1C4DA8u;
            goto label_1c4da8;
        }
    }
    ctx->pc = 0x1C4D9Cu;
    // 0x1c4d9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c4d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4da0: 0xc071110  jal         func_1C4440
    ctx->pc = 0x1C4DA0u;
    SET_GPR_U32(ctx, 31, 0x1C4DA8u);
    ctx->pc = 0x1C4DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DA0u;
            // 0x1c4da4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4440u;
    if (runtime->hasFunction(0x1C4440u)) {
        auto targetFn = runtime->lookupFunction(0x1C4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DA8u; }
        if (ctx->pc != 0x1C4DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__17CMapEffect_SpriteFP9mgCCameraP10CPreSprite_0x1c4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DA8u; }
        if (ctx->pc != 0x1C4DA8u) { return; }
    }
    ctx->pc = 0x1C4DA8u;
label_1c4da8:
    // 0x1c4da8: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1c4da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c4dac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c4dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c4db0:
    // 0x1c4db0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c4db4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1c4db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c4db8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C4DB8u;
    {
        const bool branch_taken_0x1c4db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4db8) {
            ctx->pc = 0x1C4D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4d88;
        }
    }
    ctx->pc = 0x1C4DC0u;
    // 0x1c4dc0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C4DC0u;
    SET_GPR_U32(ctx, 31, 0x1C4DC8u);
    ctx->pc = 0x1C4DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DC0u;
            // 0x1c4dc4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DC8u; }
        if (ctx->pc != 0x1C4DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DC8u; }
        if (ctx->pc != 0x1C4DC8u) { return; }
    }
    ctx->pc = 0x1C4DC8u;
label_1c4dc8:
    // 0x1c4dc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c4dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c4dcc:
    // 0x1c4dcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c4dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DDCu;
            // 0x1c4de0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4DE4u;
}
