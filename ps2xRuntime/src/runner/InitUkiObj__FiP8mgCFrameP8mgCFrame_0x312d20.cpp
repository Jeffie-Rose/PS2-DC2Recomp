#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitUkiObj__FiP8mgCFrameP8mgCFrame
// Address: 0x312d20 - 0x3130b0
void InitUkiObj__FiP8mgCFrameP8mgCFrame_0x312d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitUkiObj__FiP8mgCFrameP8mgCFrame_0x312d20");
#endif

    switch (ctx->pc) {
        case 0x312d60u: goto label_312d60;
        case 0x312d6cu: goto label_312d6c;
        case 0x312d74u: goto label_312d74;
        case 0x312d7cu: goto label_312d7c;
        case 0x312e08u: goto label_312e08;
        case 0x312e14u: goto label_312e14;
        case 0x312e20u: goto label_312e20;
        case 0x312e48u: goto label_312e48;
        case 0x312e6cu: goto label_312e6c;
        case 0x312e90u: goto label_312e90;
        case 0x312eb4u: goto label_312eb4;
        case 0x312ed4u: goto label_312ed4;
        case 0x312ef4u: goto label_312ef4;
        case 0x312f70u: goto label_312f70;
        case 0x312f7cu: goto label_312f7c;
        case 0x312f84u: goto label_312f84;
        case 0x312f8cu: goto label_312f8c;
        case 0x312ff0u: goto label_312ff0;
        case 0x312ffcu: goto label_312ffc;
        case 0x313030u: goto label_313030;
        case 0x313054u: goto label_313054;
        case 0x313078u: goto label_313078;
        default: break;
    }

    ctx->pc = 0x312d20u;

    // 0x312d20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x312d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x312d24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x312d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x312d28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x312d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x312d2c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x312d30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x312d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x312d34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x312d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x312d38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x312d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x312d3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x312d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x312d40: 0x3c1301f6  lui         $s3, 0x1F6
    ctx->pc = 0x312d40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)502 << 16));
    // 0x312d44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x312d48: 0x2673f190  addiu       $s3, $s3, -0xE70
    ctx->pc = 0x312d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963600));
    // 0x312d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x312d50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x312d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x312d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x312D58u;
    {
        const bool branch_taken_0x312d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312D58u;
            // 0x312d5c: 0xac22f190  sw          $v0, -0xE70($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d58) {
            ctx->pc = 0x312D84u;
            goto label_312d84;
        }
    }
    ctx->pc = 0x312D60u;
label_312d60:
    // 0x312d60: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x312d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x312d64: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x312D64u;
    SET_GPR_U32(ctx, 31, 0x312D6Cu);
    ctx->pc = 0x312D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312D64u;
            // 0x312d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D6Cu; }
        if (ctx->pc != 0x312D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D6Cu; }
        if (ctx->pc != 0x312D6Cu) { return; }
    }
    ctx->pc = 0x312D6Cu;
label_312d6c:
    // 0x312d6c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x312D6Cu;
    SET_GPR_U32(ctx, 31, 0x312D74u);
    ctx->pc = 0x312D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312D6Cu;
            // 0x312d70: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D74u; }
        if (ctx->pc != 0x312D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D74u; }
        if (ctx->pc != 0x312D74u) { return; }
    }
    ctx->pc = 0x312D74u;
label_312d74:
    // 0x312d74: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x312D74u;
    SET_GPR_U32(ctx, 31, 0x312D7Cu);
    ctx->pc = 0x312D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312D74u;
            // 0x312d78: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D7Cu; }
        if (ctx->pc != 0x312D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D7Cu; }
        if (ctx->pc != 0x312D7Cu) { return; }
    }
    ctx->pc = 0x312D7Cu;
label_312d7c:
    // 0x312d7c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x312d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x312d80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x312d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_312d84:
    // 0x312d84: 0x0  nop
    ctx->pc = 0x312d84u;
    // NOP
    // 0x312d88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x312d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x312d8c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x312d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x312d90: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x312D90u;
    {
        const bool branch_taken_0x312d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312D90u;
            // 0x312d94: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d90) {
            ctx->pc = 0x312D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_312d60;
        }
    }
    ctx->pc = 0x312D98u;
    // 0x312d98: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x312d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x312d9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x312d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x312da0: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x312da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x312da4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x312da4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x312da8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x312da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x312dac: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x312dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
    // 0x312db0: 0xae67001c  sw          $a3, 0x1C($s3)
    ctx->pc = 0x312db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 7));
    // 0x312db4: 0x344345a2  ori         $v1, $v0, 0x45A2
    ctx->pc = 0x312db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17826);
    // 0x312db8: 0x3c06bfc0  lui         $a2, 0xBFC0
    ctx->pc = 0x312db8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49088 << 16));
    // 0x312dbc: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x312dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x312dc0: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x312dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x312dc4: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x312dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
    // 0x312dc8: 0xae640048  sw          $a0, 0x48($s3)
    ctx->pc = 0x312dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 4));
    // 0x312dcc: 0x3c02c026  lui         $v0, 0xC026
    ctx->pc = 0x312dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49190 << 16));
    // 0x312dd0: 0xae67004c  sw          $a3, 0x4C($s3)
    ctx->pc = 0x312dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 7));
    // 0x312dd4: 0x344245a2  ori         $v0, $v0, 0x45A2
    ctx->pc = 0x312dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17826);
    // 0x312dd8: 0xae630070  sw          $v1, 0x70($s3)
    ctx->pc = 0x312dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
    // 0x312ddc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x312de0: 0xae660074  sw          $a2, 0x74($s3)
    ctx->pc = 0x312de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 6));
    // 0x312de4: 0xae660078  sw          $a2, 0x78($s3)
    ctx->pc = 0x312de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 6));
    // 0x312de8: 0xae67007c  sw          $a3, 0x7C($s3)
    ctx->pc = 0x312de8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 7));
    // 0x312dec: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x312decu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
    // 0x312df0: 0xae6600a4  sw          $a2, 0xA4($s3)
    ctx->pc = 0x312df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 6));
    // 0x312df4: 0xae6600a8  sw          $a2, 0xA8($s3)
    ctx->pc = 0x312df4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 6));
    // 0x312df8: 0xae6700ac  sw          $a3, 0xAC($s3)
    ctx->pc = 0x312df8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 7));
    // 0x312dfc: 0x8c24e07c  lw          $a0, -0x1F84($at)
    ctx->pc = 0x312dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959228)));
    // 0x312e00: 0xc04de0c  jal         func_137830
    ctx->pc = 0x312E00u;
    SET_GPR_U32(ctx, 31, 0x312E08u);
    ctx->pc = 0x312E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312E00u;
            // 0x312e04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E08u; }
        if (ctx->pc != 0x312E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E08u; }
        if (ctx->pc != 0x312E08u) { return; }
    }
    ctx->pc = 0x312E08u;
label_312e08:
    // 0x312e08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x312e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x312E0Cu;
    {
        const bool branch_taken_0x312e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312E0Cu;
            // 0x312e10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e0c) {
            ctx->pc = 0x312E28u;
            goto label_312e28;
        }
    }
    ctx->pc = 0x312E14u;
label_312e14:
    // 0x312e14: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x312e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x312e18: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x312E18u;
    SET_GPR_U32(ctx, 31, 0x312E20u);
    ctx->pc = 0x312E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312E18u;
            // 0x312e1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E20u; }
        if (ctx->pc != 0x312E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E20u; }
        if (ctx->pc != 0x312E20u) { return; }
    }
    ctx->pc = 0x312E20u;
label_312e20:
    // 0x312e20: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x312e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x312e24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x312e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_312e28:
    // 0x312e28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x312e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x312e2c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x312e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x312e30: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x312E30u;
    {
        const bool branch_taken_0x312e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312E30u;
            // 0x312e34: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e30) {
            ctx->pc = 0x312E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_312e14;
        }
    }
    ctx->pc = 0x312E38u;
    // 0x312e38: 0x26720040  addiu       $s2, $s3, 0x40
    ctx->pc = 0x312e38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x312e3c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x312e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x312e40: 0xc04c018  jal         func_130060
    ctx->pc = 0x312E40u;
    SET_GPR_U32(ctx, 31, 0x312E48u);
    ctx->pc = 0x312E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312E40u;
            // 0x312e44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E48u; }
        if (ctx->pc != 0x312E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E48u; }
        if (ctx->pc != 0x312E48u) { return; }
    }
    ctx->pc = 0x312E48u;
label_312e48:
    // 0x312e48: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x312e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x312e4c: 0x26700070  addiu       $s0, $s3, 0x70
    ctx->pc = 0x312e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x312e50: 0xae640194  sw          $a0, 0x194($s3)
    ctx->pc = 0x312e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 4));
    // 0x312e54: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x312e58: 0xae720198  sw          $s2, 0x198($s3)
    ctx->pc = 0x312e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 408), GPR_U32(ctx, 18));
    // 0x312e5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e60: 0xe66001a0  swc1        $f0, 0x1A0($s3)
    ctx->pc = 0x312e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 416), bits); }
    // 0x312e64: 0xc04c018  jal         func_130060
    ctx->pc = 0x312E64u;
    SET_GPR_U32(ctx, 31, 0x312E6Cu);
    ctx->pc = 0x312E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312E64u;
            // 0x312e68: 0xae62019c  sw          $v0, 0x19C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E6Cu; }
        if (ctx->pc != 0x312E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E6Cu; }
        if (ctx->pc != 0x312E6Cu) { return; }
    }
    ctx->pc = 0x312E6Cu;
label_312e6c:
    // 0x312e6c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x312e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x312e70: 0x267100a0  addiu       $s1, $s3, 0xA0
    ctx->pc = 0x312e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x312e74: 0xae6401a4  sw          $a0, 0x1A4($s3)
    ctx->pc = 0x312e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 420), GPR_U32(ctx, 4));
    // 0x312e78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x312e7c: 0xae7001a8  sw          $s0, 0x1A8($s3)
    ctx->pc = 0x312e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 424), GPR_U32(ctx, 16));
    // 0x312e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e84: 0xe66001b0  swc1        $f0, 0x1B0($s3)
    ctx->pc = 0x312e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 432), bits); }
    // 0x312e88: 0xc04c018  jal         func_130060
    ctx->pc = 0x312E88u;
    SET_GPR_U32(ctx, 31, 0x312E90u);
    ctx->pc = 0x312E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312E88u;
            // 0x312e8c: 0xae6201ac  sw          $v0, 0x1AC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E90u; }
        if (ctx->pc != 0x312E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E90u; }
        if (ctx->pc != 0x312E90u) { return; }
    }
    ctx->pc = 0x312E90u;
label_312e90:
    // 0x312e90: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x312e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x312e94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x312e98: 0xae6301b4  sw          $v1, 0x1B4($s3)
    ctx->pc = 0x312e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 436), GPR_U32(ctx, 3));
    // 0x312e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x312e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ea0: 0xae7101b8  sw          $s1, 0x1B8($s3)
    ctx->pc = 0x312ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 17));
    // 0x312ea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ea8: 0xe66001c0  swc1        $f0, 0x1C0($s3)
    ctx->pc = 0x312ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 448), bits); }
    // 0x312eac: 0xc04c018  jal         func_130060
    ctx->pc = 0x312EACu;
    SET_GPR_U32(ctx, 31, 0x312EB4u);
    ctx->pc = 0x312EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312EACu;
            // 0x312eb0: 0xae6201bc  sw          $v0, 0x1BC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312EB4u; }
        if (ctx->pc != 0x312EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312EB4u; }
        if (ctx->pc != 0x312EB4u) { return; }
    }
    ctx->pc = 0x312EB4u;
label_312eb4:
    // 0x312eb4: 0xae7201c4  sw          $s2, 0x1C4($s3)
    ctx->pc = 0x312eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 18));
    // 0x312eb8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x312ebc: 0xae7001c8  sw          $s0, 0x1C8($s3)
    ctx->pc = 0x312ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 456), GPR_U32(ctx, 16));
    // 0x312ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ec4: 0xe66001d0  swc1        $f0, 0x1D0($s3)
    ctx->pc = 0x312ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 464), bits); }
    // 0x312ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ecc: 0xc04c018  jal         func_130060
    ctx->pc = 0x312ECCu;
    SET_GPR_U32(ctx, 31, 0x312ED4u);
    ctx->pc = 0x312ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312ECCu;
            // 0x312ed0: 0xae6201cc  sw          $v0, 0x1CC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312ED4u; }
        if (ctx->pc != 0x312ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312ED4u; }
        if (ctx->pc != 0x312ED4u) { return; }
    }
    ctx->pc = 0x312ED4u;
label_312ed4:
    // 0x312ed4: 0xae7001d4  sw          $s0, 0x1D4($s3)
    ctx->pc = 0x312ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 16));
    // 0x312ed8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x312edc: 0xae7101d8  sw          $s1, 0x1D8($s3)
    ctx->pc = 0x312edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 472), GPR_U32(ctx, 17));
    // 0x312ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ee4: 0xe66001e0  swc1        $f0, 0x1E0($s3)
    ctx->pc = 0x312ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
    // 0x312ee8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x312ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312eec: 0xc04c018  jal         func_130060
    ctx->pc = 0x312EECu;
    SET_GPR_U32(ctx, 31, 0x312EF4u);
    ctx->pc = 0x312EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312EECu;
            // 0x312ef0: 0xae6201dc  sw          $v0, 0x1DC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312EF4u; }
        if (ctx->pc != 0x312EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312EF4u; }
        if (ctx->pc != 0x312EF4u) { return; }
    }
    ctx->pc = 0x312EF4u;
label_312ef4:
    // 0x312ef4: 0xae7101e4  sw          $s1, 0x1E4($s3)
    ctx->pc = 0x312ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 484), GPR_U32(ctx, 17));
    // 0x312ef8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x312ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x312efc: 0xae7201e8  sw          $s2, 0x1E8($s3)
    ctx->pc = 0x312efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 488), GPR_U32(ctx, 18));
    // 0x312f00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x312f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x312f04: 0xe66001f0  swc1        $f0, 0x1F0($s3)
    ctx->pc = 0x312f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 496), bits); }
    // 0x312f08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x312f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x312f0c: 0xae6301ec  sw          $v1, 0x1EC($s3)
    ctx->pc = 0x312f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 3));
    // 0x312f10: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x312f14: 0xae620190  sw          $v0, 0x190($s3)
    ctx->pc = 0x312f14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 2));
    // 0x312f18: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x312f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x312f1c: 0xae6402c0  sw          $a0, 0x2C0($s3)
    ctx->pc = 0x312f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 4));
    // 0x312f20: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x312f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x312f24: 0xae7202c4  sw          $s2, 0x2C4($s3)
    ctx->pc = 0x312f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 18));
    // 0x312f28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312f2c: 0xae6302c8  sw          $v1, 0x2C8($s3)
    ctx->pc = 0x312f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 3));
    // 0x312f30: 0x3c1201f6  lui         $s2, 0x1F6
    ctx->pc = 0x312f30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)502 << 16));
    // 0x312f34: 0xae6202d0  sw          $v0, 0x2D0($s3)
    ctx->pc = 0x312f34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 720), GPR_U32(ctx, 2));
    // 0x312f38: 0x2652f560  addiu       $s2, $s2, -0xAA0
    ctx->pc = 0x312f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964576));
    // 0x312f3c: 0xae6002cc  sw          $zero, 0x2CC($s3)
    ctx->pc = 0x312f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 716), GPR_U32(ctx, 0));
    // 0x312f40: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x312f40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f44: 0xae7002d4  sw          $s0, 0x2D4($s3)
    ctx->pc = 0x312f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 724), GPR_U32(ctx, 16));
    // 0x312f48: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x312f48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f4c: 0xae6302d8  sw          $v1, 0x2D8($s3)
    ctx->pc = 0x312f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 728), GPR_U32(ctx, 3));
    // 0x312f50: 0xae6202e0  sw          $v0, 0x2E0($s3)
    ctx->pc = 0x312f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 2));
    // 0x312f54: 0xae6002dc  sw          $zero, 0x2DC($s3)
    ctx->pc = 0x312f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 0));
    // 0x312f58: 0xae7102e4  sw          $s1, 0x2E4($s3)
    ctx->pc = 0x312f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 740), GPR_U32(ctx, 17));
    // 0x312f5c: 0xae6302e8  sw          $v1, 0x2E8($s3)
    ctx->pc = 0x312f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 744), GPR_U32(ctx, 3));
    // 0x312f60: 0xae6202f0  sw          $v0, 0x2F0($s3)
    ctx->pc = 0x312f60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 2));
    // 0x312f64: 0xae6002ec  sw          $zero, 0x2EC($s3)
    ctx->pc = 0x312f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 748), GPR_U32(ctx, 0));
    // 0x312f68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x312F68u;
    {
        const bool branch_taken_0x312f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312F68u;
            // 0x312f6c: 0xac24f560  sw          $a0, -0xAA0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964576), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f68) {
            ctx->pc = 0x312F94u;
            goto label_312f94;
        }
    }
    ctx->pc = 0x312F70u;
label_312f70:
    // 0x312f70: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x312f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x312f74: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x312F74u;
    SET_GPR_U32(ctx, 31, 0x312F7Cu);
    ctx->pc = 0x312F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312F74u;
            // 0x312f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F7Cu; }
        if (ctx->pc != 0x312F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F7Cu; }
        if (ctx->pc != 0x312F7Cu) { return; }
    }
    ctx->pc = 0x312F7Cu;
label_312f7c:
    // 0x312f7c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x312F7Cu;
    SET_GPR_U32(ctx, 31, 0x312F84u);
    ctx->pc = 0x312F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312F7Cu;
            // 0x312f80: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F84u; }
        if (ctx->pc != 0x312F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F84u; }
        if (ctx->pc != 0x312F84u) { return; }
    }
    ctx->pc = 0x312F84u;
label_312f84:
    // 0x312f84: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x312F84u;
    SET_GPR_U32(ctx, 31, 0x312F8Cu);
    ctx->pc = 0x312F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312F84u;
            // 0x312f88: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F8Cu; }
        if (ctx->pc != 0x312F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F8Cu; }
        if (ctx->pc != 0x312F8Cu) { return; }
    }
    ctx->pc = 0x312F8Cu;
label_312f8c:
    // 0x312f8c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x312f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x312f90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x312f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_312f94:
    // 0x312f94: 0x0  nop
    ctx->pc = 0x312f94u;
    // NOP
    // 0x312f98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x312f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x312f9c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x312f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x312fa0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x312FA0u;
    {
        const bool branch_taken_0x312fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312FA0u;
            // 0x312fa4: 0x2551021  addu        $v0, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fa0) {
            ctx->pc = 0x312F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_312f70;
        }
    }
    ctx->pc = 0x312FA8u;
    // 0x312fa8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x312fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x312fac: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x312facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x312fb0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x312fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x312fb4: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x312fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
    // 0x312fb8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x312fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x312fbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x312fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x312fc0: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x312fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x312fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x312fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fc8: 0xae440040  sw          $a0, 0x40($s2)
    ctx->pc = 0x312fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 4));
    // 0x312fcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x312fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fd0: 0xae430044  sw          $v1, 0x44($s2)
    ctx->pc = 0x312fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
    // 0x312fd4: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x312fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x312fd8: 0xae44004c  sw          $a0, 0x4C($s2)
    ctx->pc = 0x312fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 4));
    // 0x312fdc: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x312fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x312fe0: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x312fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x312fe4: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x312fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x312fe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x312FE8u;
    {
        const bool branch_taken_0x312fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312FE8u;
            // 0x312fec: 0xae44007c  sw          $a0, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fe8) {
            ctx->pc = 0x313004u;
            goto label_313004;
        }
    }
    ctx->pc = 0x312FF0u;
label_312ff0:
    // 0x312ff0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x312ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x312ff4: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x312FF4u;
    SET_GPR_U32(ctx, 31, 0x312FFCu);
    ctx->pc = 0x312FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312FF4u;
            // 0x312ff8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312FFCu; }
        if (ctx->pc != 0x312FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312FFCu; }
        if (ctx->pc != 0x312FFCu) { return; }
    }
    ctx->pc = 0x312FFCu;
label_312ffc:
    // 0x312ffc: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x312ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x313000: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x313000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_313004:
    // 0x313004: 0x0  nop
    ctx->pc = 0x313004u;
    // NOP
    // 0x313008: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x313008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31300c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31300cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x313010: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x313010u;
    {
        const bool branch_taken_0x313010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313010u;
            // 0x313014: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313010) {
            ctx->pc = 0x312FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_312ff0;
        }
    }
    ctx->pc = 0x313018u;
    // 0x313018: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31301c: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x31301cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x313020: 0xae420190  sw          $v0, 0x190($s2)
    ctx->pc = 0x313020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
    // 0x313024: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x313024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x313028: 0xc04c018  jal         func_130060
    ctx->pc = 0x313028u;
    SET_GPR_U32(ctx, 31, 0x313030u);
    ctx->pc = 0x31302Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313028u;
            // 0x31302c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313030u; }
        if (ctx->pc != 0x313030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313030u; }
        if (ctx->pc != 0x313030u) { return; }
    }
    ctx->pc = 0x313030u;
label_313030:
    // 0x313030: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x313030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x313034: 0x26510070  addiu       $s1, $s2, 0x70
    ctx->pc = 0x313034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x313038: 0xae440194  sw          $a0, 0x194($s2)
    ctx->pc = 0x313038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 4));
    // 0x31303c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31303cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x313040: 0xae500198  sw          $s0, 0x198($s2)
    ctx->pc = 0x313040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 16));
    // 0x313044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x313044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313048: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x313048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x31304c: 0xc04c018  jal         func_130060
    ctx->pc = 0x31304Cu;
    SET_GPR_U32(ctx, 31, 0x313054u);
    ctx->pc = 0x313050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31304Cu;
            // 0x313050: 0xae42019c  sw          $v0, 0x19C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313054u; }
        if (ctx->pc != 0x313054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313054u; }
        if (ctx->pc != 0x313054u) { return; }
    }
    ctx->pc = 0x313054u;
label_313054:
    // 0x313054: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x313054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x313058: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x313058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31305c: 0xae4301a4  sw          $v1, 0x1A4($s2)
    ctx->pc = 0x31305cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 3));
    // 0x313060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313064: 0xae5101a8  sw          $s1, 0x1A8($s2)
    ctx->pc = 0x313064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 17));
    // 0x313068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x313068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31306c: 0xe64001b0  swc1        $f0, 0x1B0($s2)
    ctx->pc = 0x31306cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 432), bits); }
    // 0x313070: 0xc04c018  jal         func_130060
    ctx->pc = 0x313070u;
    SET_GPR_U32(ctx, 31, 0x313078u);
    ctx->pc = 0x313074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313070u;
            // 0x313074: 0xae4201ac  sw          $v0, 0x1AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313078u; }
        if (ctx->pc != 0x313078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313078u; }
        if (ctx->pc != 0x313078u) { return; }
    }
    ctx->pc = 0x313078u;
label_313078:
    // 0x313078: 0xae5001b4  sw          $s0, 0x1B4($s2)
    ctx->pc = 0x313078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 16));
    // 0x31307c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x31307cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x313080: 0xae5101b8  sw          $s1, 0x1B8($s2)
    ctx->pc = 0x313080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 17));
    // 0x313084: 0xe64001c0  swc1        $f0, 0x1C0($s2)
    ctx->pc = 0x313084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 448), bits); }
    // 0x313088: 0xae4301bc  sw          $v1, 0x1BC($s2)
    ctx->pc = 0x313088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 3));
    // 0x31308c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313090: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x313090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x313094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x313094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x313098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31309c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31309cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3130a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3130a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3130a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3130a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3130a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3130A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3130ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3130A8u;
            // 0x3130ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3130B0u;
}
